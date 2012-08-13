#include "detailedview.h"
#include <stack>
#include <extensionshape.h>
using namespace std;

DetailedView::DetailedView(Canvas *canvas, OwlOntology *ontology, QObject *parent) :
    QObject(parent)
{
    m_canvas = canvas;
    m_ontology = ontology;
    this->setViewLimit(30,30);
}
void DetailedView::setViewLimit(int entityNum, int relationNum)
{
    this->limitEntityNum = entityNum;
    this->limitRelationNum = relationNum;
}
int DetailedView::getIndexByShortname(QList<OwlClass *> lst, QString shortname)
{
    int rs=-1;
    for(int i=0;i<lst.size();i++)
    {
        if(lst[i]->shortname.toLower()==shortname.toLower())
        {
            rs=i;
            break;
        }
    }
    return rs;
}
QList<OwlClass *> DetailedView::drawClassView(OwlClass *centerNode, QList<OwlClass *> overviewClasses)
{
    this->CNode = centerNode;
    this->Cclasses = overviewClasses;


    for(int i=0;i<dclasses.size();i++)m_canvas->removeItem(dclasses[i]->shape);
    for(int i=0;i<dedges.size();i++){
        m_canvas->removeItem(dedges[i]);
        dedges[i]->~Connector();
    }
    dclasses.clear();
    dedges.clear();

    int n = limitEntityNum;

    dclasses.append(centerNode);
    m_entitynum=1;
    int totalclassnum = m_ontology->classes.size();
    if(n>totalclassnum)n=totalclassnum;
    //cout<<"Classes in detailed view:"<<n<<endl;

    while(dclasses.size()<n){
        QList<OwlClass *> nextClasses = getNextLevelClasses(dclasses);
        dclasses.append(nextClasses);
    }

    for(int i=0;i<dclasses.size();i++)
    {
//        dclasses[i]->shape->setCentrePos(QPointF(0,i));
        int idx = getIndexByShortname(overviewClasses,dclasses[i]->shortname);
        if(idx!=-1){
            QPointF p = overviewClasses[idx]->overviewshape->pos();
            dclasses[i]->shape->setCentrePos(p);
        }
        m_canvas->addItem(dclasses[i]->shape);

        bool needext = false;
        for(int j=0;j<dclasses[i]->subclasses.size();j++){
            if(!dclasses.contains(dclasses[i]->subclasses[j])){
                needext = true;
                break;
            }
        }
        if(!needext)
            for(int j=0;j<dclasses[i]->superclasses.size();j++){
                if(!dclasses.contains(dclasses[i]->superclasses[j])){
                    needext = true;
                    break;
                }
            }

        if(needext){

            ExtensionShape * es = new ExtensionShape();
            es->setFillColour("yellow");
            es->setLabel("+");
            es->setSize(QSizeF(20,20));
            es->linkedClass=dclasses[i];
            m_canvas->addItem(es);
            connect(es,SIGNAL(myclick(ExtensionShape*)),this,SLOT(extshape_Clicked(ExtensionShape*)));

            Connector * conn = new Connector();
            conn->initWithConnection(dclasses[i]->shape,es);
            conn->setColour(QColor("darkgreen"));
            conn->setDirected(false);
            conn->setDotted(true);
            m_canvas->addItem(conn);
            es->edge = conn;

            //add click to ES??? REMOVE???
        }
    }

    for(int i=0;i<dedges.size();i++)
    {
        m_canvas->addItem(dedges[i]);
    }
    this->m_ontology->dClasses = dclasses;
    return dclasses;
}

QList<OwlClass *> DetailedView::getNextLevelClasses(QList<OwlClass *> cls)
{
    QList<OwlClass *> lists;
    for(int i=0;i<cls.size();i++)
    {
        OwlClass * node = cls[i];
        for(int j=0;j<node->subclasses.size();j++)
        {
            if(!dclasses.contains(node->subclasses[j])){
                lists.append(node->subclasses[j]);

                Connector * conn= new Connector();
                conn->initWithConnection(node->subclasses[j]->shape,node->shape);
                conn->setDirected(true);
                this->dedges.append(conn);

//                node->classesconnectors<<conn;
                node->subclasses[j]->classesconnectors<<conn;


                m_entitynum++;
                if(m_entitynum >=limitEntityNum||m_entitynum>=m_ontology->classes.size())
                    return lists;
            }
        }
    }

    for(int i=0;i<cls.size();i++)
    {
        OwlClass * node = cls[i];
        for(int j=0;j<node->superclasses.size();j++)
        {
            if(!dclasses.contains(node->superclasses[j])){
                lists.append(node->superclasses[j]);

                Connector * conn= new Connector();
                conn->initWithConnection(node->shape,node->superclasses[j]->shape);
                conn->setDirected(true);
                this->dedges.append(conn);

                m_entitynum++;
                if(m_entitynum >=limitEntityNum||m_entitynum>=m_ontology->classes.size())
                    return lists;
            }
        }
    }
    return lists;
}


void DetailedView::removeClassView(){
    for(int i=0;i<dedges.size();i++){
        dedges[i]->setVisible(false);
    }
    for(int i=0;i<dclasses.size();i++){
        dclasses[i]->shape->setVisible(false);
    }
}
void DetailedView::extshape_Clicked(ExtensionShape *cs)
{
    m_canvas->removeItem(cs->edge);
    m_canvas->removeItem(cs);

    for(int i=0;i<cs->linkedClass->subclasses.size();i++){
        OwlClass * tmp = cs->linkedClass->subclasses[i];
        if(!dclasses.contains(tmp)){
            m_canvas->addItem(tmp->shape);

            Connector * c = new Connector();
            c->initWithConnection(tmp->shape,cs->linkedClass->shape);
            c->setDirected(true);
            c->setRoutingType(Connector::orthogonal);
            m_canvas->addItem(c);

            dclasses.append(tmp);
            dedges.append(c);


        }
    }

    for(int i=0;i<cs->linkedClass->superclasses.size();i++){
        OwlClass * tmp = cs->linkedClass->superclasses[i];
        if(!dclasses.contains(tmp)){
            m_canvas->addItem(tmp->shape);

            Connector * c = new Connector();
            c->initWithConnection(cs->linkedClass->shape,tmp->shape);
            c->setDirected(true);
            c->setRoutingType(Connector::orthogonal);
            m_canvas->addItem(c);

            dclasses.append(tmp);
            dedges.append(c);
        }
    }

    cs->edge->~Connector();
    cs->~ShapeObj();

    this->m_canvas->fully_restart_graph_layout();

}

void DetailedView::extshape_DoubleClicked(ExtensionShape *cs){

}


void DetailedView::reDrawClassView(){
    for(int i=0;i<dedges.size();i++){
        dedges[i]->setVisible(true);
    }
    for(int j=0;j<dclasses.size();j++){
        dclasses[j]->shape->setVisible(true);
    }
}

void DetailedView::drawIndividuals(){

    if(this->dIndividuals.isEmpty() || dIndividuals.size() == 0){
        for(int i=0;i<dclasses.size();i++){
            for(int j=0;j<dclasses[i]->individuals.size();j++){
                this->m_canvas->addItem(dclasses[i]->individuals[j]->shape);
                dIndividuals.append(dclasses[i]->individuals[j]);
            }
            for(int k=0;k<dclasses[i]->individualconnectors.size();k++){
                this->m_canvas->addItem(dclasses[i]->individualconnectors[k]);
            }
        }
    }else{
        for(int i=0;i<dclasses.size();i++){
            for(int j=0;j<dclasses[i]->individuals.size();j++){
                dclasses[i]->individuals[j]->shape->setVisible(true);
            }
            for(int k=0;k<dclasses[i]->individualconnectors.size();k++){
                dclasses[i]->individualconnectors[k]->setVisible(true);
            }
        }
    }
}


void DetailedView::removeIndividuals(){
    if(!dIndividuals.isEmpty() && dIndividuals.size() > 0){
        for(int i=0;i<dclasses.size();i++){
            for(int j=0;j<dclasses[i]->individuals.size();j++){
                dclasses[i]->individuals[j]->shape->setVisible(false);
            }
            for(int k=0;k<dclasses[i]->individualconnectors.size();k++){
                dclasses[i]->individualconnectors[k]->setVisible(false);
            }
        }
    }else{
        return;
    }

}
