#include "detailedview.h"
#include <stack>

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

QList<OwlClass *> DetailedView::drawClassView(OwlClass *centerNode)
{
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
    cout<<"Classes in detailed view:"<<n<<endl;

    while(dclasses.size()<n){
        QList<OwlClass *> nextClasses = getNextLevelClasses(dclasses);
        dclasses.append(nextClasses);
    }

    for(int i=0;i<dclasses.size();i++)
    {
        dclasses[i]->shape->setCentrePos(QPointF(0,i));
        m_canvas->addItem(dclasses[i]->shape);
    }

    for(int i=0;i<dedges.size();i++)
    {
        m_canvas->addItem(dedges[i]);
    }
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


