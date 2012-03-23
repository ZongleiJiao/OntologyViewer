#include "overview.h"
#include <overviewclassshape.h>
#include <stack>
#include "plugins/fileio/ontology/overview/keyconceptclass.h"
using namespace std;
Overview::Overview()
{
    this->numOfClasses = 300;
}

void Overview::getOverviewClasses(QList<OwlClass *> allclasses)
{
    KeyConceptClass *kc=new KeyConceptClass(allclasses);
    classes = convertOverviewShapes(kc->getKeyClasses(this->numOfClasses));
}

QList<OwlClass *> Overview::convertOverviewShapes(QList<OwlClass *> classes)
{
    QList<OwlClass *> result;
    //dup owlclass
    for(int i=0; i<classes.size(); i++)
    {
        OwlClass * newclass = new OwlClass();
        OwlClass * oriclass = classes[i];
        newclass->disjointclasses.append(oriclass->disjointclasses);
        newclass->equivalentclass = oriclass->equivalentclass;
        newclass->individuals.append(oriclass->individuals);
        newclass->propertydomains.append(oriclass->propertydomains);
        newclass->propertyranges.append(oriclass->propertyranges);
        newclass->URI = oriclass->URI;
        newclass->shortname = oriclass->shortname;

        //overview shape
        newclass->overviewshape = new OverviewClassShape();
        newclass->overviewshape->setIdString("Overview::"+newclass->shortname);
        newclass->overviewshape->setToolTip(newclass->shortname);
        newclass->overviewshape->setStatus(OverviewClassShape::STATUS_OutDetailview);

        //sub/sup, connectors?

        result.append(newclass);
    }
    //deal with subclass
    for(int i=0;i<classes.size();i++)
    {
        OwlClass * nc = result[i];
        OwlClass * oc = classes[i];
        stack<OwlClass *> stk;
        //push all original subclasses to stack
        for(int j=0;j<oc->subclasses.size();j++)
        {
            stk.push(oc->subclasses[j]);
        }
        //check if they are in overview
        while(!stk.empty())
        {
            OwlClass * tmpc = stk.top();
            stk.pop();
            int idx=getIndexByShortname(result,tmpc->shortname);
            //it is in the overview,add to subclass list
            if(idx!=-1){
                nc->subclasses.append(result[idx]);
            }
            //not in overview, search its children
            else{
                for(int j=0;j<tmpc->subclasses.size();j++)
                    stk.push(tmpc->subclasses[j]);
            }
        }
    }
    //use sub to generate sup
    for(int i=0;i<result.size();i++)
    {
        for(int j=0;j<result[i]->subclasses.size();j++)
        {
            result[i]->subclasses[j]->superclasses.append(result[i]);
        }
    }
    return result;
}

int Overview::getIndexByShortname(QList<OwlClass *> lst, QString shortname)
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

void Overview::drawOverview(Canvas *canvas)
{
    int x = 0;
    int y = -20;
    //draw shape
    for(int i=0;i<classes.size();i++){
        canvas->addItem(classes[i]->overviewshape);
        if(i%10==0){
            x=0;
            y+=20;
        }
        classes[i]->overviewshape->setPosAndSize(QPointF(x,y),QSizeF(5,5));
        x+=20;
    }
    //draw connector
    for(int i=0;i<classes.size();i++){
        for(int j=0;j<classes[i]->subclasses.size();j++)
        {
            Connector * conn=new Connector();
            conn->initWithConnection(classes[i]->subclasses[j]->overviewshape,classes[i]->overviewshape);
            conn->setDirected(true);
            canvas->addItem(conn);
        }
    }
}
