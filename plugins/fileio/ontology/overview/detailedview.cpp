#include "detailedview.h"
#include <stack>
#include <extensionshape.h>
using namespace std;

DetailedView::DetailedView(Canvas *canvas, OwlOntology *ontology, QObject *parent) :
    QObject(parent)
{
    m_canvas = canvas;
    m_ontology = ontology;
    this->setViewLimit(40,40);
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

void DetailedView::addShapeWithExt(OwlClass *cls)
{
    //set symbol for + - at right
    if(cls->subclasses.size()==0){
        cls->shape->hasChild = false;
        cls->shape->updateShape();
    }
    else{
        cls->shape->hasChild = true;
        cls->shape->isShowingChild = false;
        for(int j=0;j<cls->subclasses.size();j++){
            if(dclasses.contains(cls->subclasses[j])){
                cls->shape->isShowingChild = true;
                break;
            }
        }
        cls->shape->updateShape();
    }
    //add shape and connect signal for click class shape at right
    m_canvas->addItem(cls->shape);
    cls->shape->setVisible(true);

    connect(cls->shape,SIGNAL(myclickright(OntologyClassShape*)),this,SLOT(shapeRight_Clicked(OntologyClassShape*)));

    bool needsubext = false;
    bool needsuperext = false;
    for(int j=0;j<cls->subclasses.size();j++){
        int idx = getIndexByShortname(dclasses,cls->subclasses[j]->shortname);
        if(idx==-1){
            needsubext = true;
            break;
        }
    }
    for(int j=0;j<cls->superclasses.size();j++){
        int idx = getIndexByShortname(dclasses,cls->superclasses[j]->shortname);
        if(idx==-1){
                needsuperext = true;
                break;
        }
    }

    if(needsubext){

        ExtensionShape * es = new ExtensionShape();
        es->setFillColour("yellow");
        es->setLabel("C");
        es->setSize(QSizeF(20,20));
        es->linkedClass=cls;
        es->node_type = 2;
        m_canvas->addItem(es);
//            es->setPos(dclasses[i]->shape->pos());
        connect(es,SIGNAL(myclick(ExtensionShape*)),this,SLOT(extshape_Clicked(ExtensionShape*)));

        Connector * conn = new Connector();
        conn->initWithConnection(es,cls->shape);
        conn->setColour(QColor("darkgreen"));
        conn->setDirected(true);
        conn->setDotted(true);
        conn->setRoutingType(Connector::orthogonal);
        m_canvas->addItem(conn);
        es->edge = conn;

        subexts.append(es);
        dedges.append(conn);
        cls->classesconnectors<<conn;

    }

    if(needsuperext){

        ExtensionShape * es = new ExtensionShape();
        es->setFillColour("yellow");
        es->setLabel("P");
        es->setSize(QSizeF(20,20));
        es->linkedClass=cls;
        es->node_type = 1;
        m_canvas->addItem(es);
//            es->setPos(dclasses[i]->shape->pos());
        connect(es,SIGNAL(myclick(ExtensionShape*)),this,SLOT(extshape_Clicked(ExtensionShape*)));

        Connector * conn = new Connector();
        conn->initWithConnection(cls->shape,es);
        conn->setColour(QColor("darkgreen"));
        conn->setDirected(true);
        conn->setDotted(true);
        conn->setRoutingType(Connector::orthogonal);

        m_canvas->addItem(conn);
        es->edge = conn;
        cls->classesconnectors<<conn;

        superexts.append(es);
        dedges.append(conn);
    }
}

QList<OwlClass *> DetailedView::drawClassView(OwlClass *centerNode, QList<OwlClass *> overviewClasses)
{
    cout<<"Draw detailview by centre class : "<<centerNode->shortname.toStdString()<<endl;
    this->CNode = centerNode;
    this->Cclasses = overviewClasses;

    for(int i=0;i<dclasses.size();i++){
        m_canvas->removeItem(dclasses[i]->shape);
        dclasses[i]->classesconnectors.clear();
    }
    for(int i=0;i<dedges.size();i++){
        m_canvas->removeItem(dedges[i]);
        delete dedges[i];
    }
    for(int i=0;i<subexts.size();i++){
        m_canvas->removeItem(subexts[i]);
        delete subexts[i];
    }
    for(int i=0;i<superexts.size();i++){
        m_canvas->removeItem(superexts[i]);
        delete superexts[i];
    }

    disconnect(this,SLOT(shapeRight_Clicked(OntologyClassShape*)));
    dclasses.clear();
    dedges.clear();
    subexts.clear();
    superexts.clear();



    int n = limitEntityNum;
    dclasses.append(centerNode);
    m_entitynum=1;
    int totalclassnum = m_ontology->classes.size();
    if(n>totalclassnum)n=totalclassnum;

    while(dclasses.size()<n){
        QList<OwlClass *> nextClasses = getNextLevelClasses(dclasses);
        dclasses.append(nextClasses);
    }

    for(int i=0;i<dclasses.size();i++)
    {
        int idx = getIndexByShortname(overviewClasses,dclasses[i]->shortname);
        if(idx!=-1){
            QPointF p = overviewClasses[idx]->overviewshape->pos();
            dclasses[i]->shape->setCentrePos(p);
        }

        this->addShapeWithExt(dclasses[i]);
    }

    for(int i=0;i<dedges.size();i++)
    {
        m_canvas->addItem(dedges[i]);
    }
    this->m_ontology->dClasses = dclasses;
    cout<<"ddd ok"<<endl;
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
                conn->setRoutingType(Connector::orthogonal);
                this->dedges.append(conn);

                node->subclasses[j]->classesconnectors.append(conn);
                node->classesconnectors.append(conn);

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
                conn->setRoutingType(Connector::orthogonal);
                this->dedges.append(conn);

                node->superclasses[j]->classesconnectors.append(conn);
                node->classesconnectors.append(conn);

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
    if(cs->node_type == 2){
        for(int i=0;i<cs->linkedClass->subclasses.size();i++){
            OwlClass * tmp = cs->linkedClass->subclasses[i];
            if(!dclasses.contains(tmp)){
                this->addShapeWithExt(tmp);

                Connector * c = new Connector();
                c->initWithConnection(tmp->shape,cs->linkedClass->shape);
                c->setDirected(true);
                c->setRoutingType(Connector::orthogonal);
                m_canvas->addItem(c);

                dclasses.append(tmp);
                dedges.append(c);

                tmp->classesconnectors<<c;
                cs->linkedClass->classesconnectors<<c;

                subexts.removeAll(cs);
            }
        }
    }

    if(cs->node_type ==1){
        for(int i=0;i<cs->linkedClass->superclasses.size();i++){
            OwlClass * tmp = cs->linkedClass->superclasses[i];
            if(!dclasses.contains(tmp)){
                this->addShapeWithExt(tmp);

                Connector * c = new Connector();
                c->initWithConnection(cs->linkedClass->shape,tmp->shape);
                c->setDirected(true);
                c->setRoutingType(Connector::orthogonal);
                m_canvas->addItem(c);

                dclasses.append(tmp);
                dedges.append(c);

                tmp->classesconnectors<<c;
                cs->linkedClass->classesconnectors<<c;

                superexts.removeAll(cs);
            }
        }
      }


    m_canvas->removeItem(cs->edge);
    m_canvas->removeItem(cs);
    dedges.removeAll(cs->edge);
    cs->linkedClass->classesconnectors.removeAll(cs->edge);

    delete cs->edge;
    delete cs;

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

void DetailedView::shapeRight_Clicked(OntologyClassShape *shape)
{
//    QMessageBox * m = new QMessageBox();
//    m->setText("Unfinished function!!");
//    m->show();
//    return;

    if(shape->hasChild){
//        cout<<shape->idString().toStdString()<<" has child : "<<shape->isShowingChild<<endl;
        int idx = getIndexByShortname(dclasses,shape->idString());

        if(shape->isShowingChild){
//            cout<<"hide all children!"<<endl;
            shape->isShowingChild = false;
            shape->updateShape();
            //remove all sub trees
            if(idx!=-1){
                for(int i=0;i<dclasses[idx]->subclasses.size();i++){
                    this->removeClass(dclasses[idx]->subclasses[i]);
                }
            }

        }
        else{
//            cout<<"show all children!"<<endl;

            shape->isShowingChild = true;
            shape->updateShape();
            //add all sub classes
            if(idx!=-1){
                for(int i=0;i<dclasses[idx]->subclasses.size();i++){

                    OwlClass * tmp = dclasses[idx]->subclasses[i];
                    if(!dclasses.contains(tmp)){
                        this->addShapeWithExt(tmp);
                        Connector * c = new Connector();
                        c->initWithConnection(tmp->shape,dclasses[idx]->shape);
                        c->setDirected(true);
                        c->setRoutingType(Connector::orthogonal);
                        m_canvas->addItem(c);

                        dclasses.append(tmp);
                        dedges.append(c);

                        tmp->classesconnectors.append(c);
                        dclasses[idx]->classesconnectors.append(c);

                    }
                    else{
                        tmp->shape->setVisible(true);
                    }
                }

                for(int i=0;i<subexts.size();i++)
                {
                    if(subexts[i]->linkedClass == dclasses[idx]){
                        dclasses[idx]->classesconnectors.removeAll(subexts[i]->edge);
                        dedges.removeAll(subexts[i]->edge);
                        delete subexts[i]->edge;
                        delete subexts[i];
                        subexts.removeAt(i);
                    }
                }

                for(int i=0;i<dclasses[idx]->classesconnectors.size();i++){
                    dclasses[idx]->classesconnectors[i]->setVisible(true);
                }
            }
        }

        this->m_canvas->fully_restart_graph_layout();
    }
}

void DetailedView::removeClass(OwlClass *c)
{
    c->shape->setVisible(false);

    for(int i=0;i<c->classesconnectors.size();i++){
        c->classesconnectors[i]->setVisible(false);
    }
    for(int i=0;i<subexts.size();i++)
        if(subexts[i]->linkedClass == c){
            ExtensionShape *cs = subexts[i];
            m_canvas->removeItem(cs->edge);
            m_canvas->removeItem(cs);
            dedges.removeAll(cs->edge);
            cs->linkedClass->classesconnectors.removeAll(cs->edge);

            delete cs->edge;
            delete cs;

            subexts.removeAt(i);
            break;
        }

    for(int i=0;i<superexts.size();i++)
        if(superexts[i]->linkedClass == c){
            ExtensionShape *cs = superexts[i];
            m_canvas->removeItem(cs->edge);
            m_canvas->removeItem(cs);
            dedges.removeAll(cs->edge);
            cs->linkedClass->classesconnectors.removeAll(cs->edge);

            delete cs->edge;
            delete cs;
            superexts.removeAt(i);
            break;
        }

    for(int i=0;i<c->subclasses.size();i++){
        this->removeClass(c->subclasses[i]);
    }
}
