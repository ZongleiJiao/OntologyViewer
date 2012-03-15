#include "keyconceptclass.h"
#include <stack>

using namespace std;

KeyConceptClass::KeyConceptClass(QList<OwlClass *> classes)
{
    this->originclasses = classes;
}

void KeyConceptClass::computeNameSimplicities()
{
    for(int i=0;i<originclasses.size();i++)
    {
        /**
            NS(C) = 1 - c(nc-1), 0<=NS(C)<=1
            nc being the number of compounds in the label
            c is a constant — use c = 0.3.
        **/
        /**
            How to check whether it is a word?
            space? capital letter? or string length?
            Here, I use the method: check whether its shortname contains other shortnames.
            then, each time we found, NS(C)-c.
            Limitation: PizzaTopping -- VegetableTopping -- XXXTopping cannot be recognized
        **/
        double ns=1.00;
        for(int j=0;j<originclasses.size();j++)
        {
            if(originclasses[i]->shortname!=originclasses[j]->shortname
               &&originclasses[i]->shortname.contains(originclasses[j]->shortname))
            {
                ns = ns-nameSimplicity_c;
            }
        }
        //ensure ns>=0
        if(ns<0)ns=0;
        this->namesimplicities.append(ns);
    }
}

void KeyConceptClass::computeBasicLevels()
{
    int maxpath=0;
    for(int i=0;i<originclasses.size();i++)
    {
        int p = computeNumberOfPath(originclasses[i]);
        this->paths.append(p);
        if(p>maxpath)maxpath=p;
    }
    for(int i=0;i<originclasses.size();i++)
    {
        double bl=0.0;
        if(maxpath!=0)bl=((double)paths[i])/double(maxpath);
        basiclevels.append(bl);
    }
}

int KeyConceptClass::computeNumberOfPath(OwlClass *node)
{
    //need to dealwith circles!
    /** found how many times is this node in the middle of path.
        use superclasses number(to the Thing) multiple the leaves.
     **/
    //find leaves
    int nleaves=0;

    stack<OwlClass *> nodestack;
    for(int i=0;i<node->subclasses.size();i++)
    {
        nodestack.push(node->subclasses[i]);
    }
    while(!nodestack.empty())
    {
        OwlClass * tmpclass = nodestack.top();
        nodestack.pop();
        if(tmpclass->subclasses.size()==0)
        {
            nleaves++;
        }
        else
        {
            for(int i=0;i<tmpclass->subclasses.size();i++)
            {
                nodestack.push(tmpclass->subclasses[i]);
            }
        }
    }

    cout<<"Leaves of <"<<node->shortname.toStdString()<<">:"
        <<nleaves<<endl;

    //find roots
    int nroots=0;
    for(int i=0;i<node->superclasses.size();i++)
    {
        nodestack.push(node->superclasses[i]);
    }
    while(!nodestack.empty())
    {
        OwlClass * tmpclass = nodestack.top();
        nodestack.pop();
        if(tmpclass->superclasses.size()==0)
        {
            nroots++;
        }
        else
        {
            for(int i=0;i<tmpclass->superclasses.size();i++)
            {
                nodestack.push(tmpclass->superclasses[i]);
            }
        }
    }

    cout<<"Roots of <"<<node->shortname.toStdString()<<">:"
        <<nroots<<endl;
    cout<<"Paths of <"<<node->shortname.toStdString()<<">:"
        <<nroots*nleaves<<endl;
    return nleaves*nroots;
}

void KeyConceptClass::computeNCValues()
{
    this->computeNameSimplicities();
    this->computeBasicLevels();
    // NCValue(c) = wBL*BL(C) + wNS*NS(C)
    for(int i=0;i<originclasses.size();i++)
    {
        double ncvalue=ncvalue_wBL*basiclevels[i] + ncvalue_wNS*namesimplicities[i];
        ncvalues.append(ncvalue);
    }
}

void KeyConceptClass::computeGlobalDensities()
{
    /**
      globaldensity(c) =
        total number of (direct sub-concepts, properties and instances of C)
        /max(global density)
      **/
    QList<int> aGlobalDensities; //total numbers
    int maxdensity;
    for(int i=0;i<originclasses.size();i++)
    {
        int num=0;
        num+=originclasses[i]->subclasses.size();
        num+=originclasses[i]->individuals.size();
        num+=originclasses[i]->propertydomains.size();
        num+=originclasses[i]->propertyranges.size();
    }
}
