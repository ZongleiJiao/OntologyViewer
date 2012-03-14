#include "keyconcept.h"
#include <ontoclass.h>
#include <stack>

using namespace std;

KeyConcept::KeyConcept(QList<OwlClass *> classes)
{
    this->originClasses = classes;
    this->maxpath=-1;
}

//measure -- density
double KeyConcept::globalDensity(OwlClass *node)
{

}

double KeyConcept::localDensity(OwlClass *node)
{

}

double KeyConcept::overallDensity(OwlClass *node)
{

}

//measure -- popularity
double KeyConcept::globalPopularity(OwlClass *node)
{

}

double KeyConcept::localPopularity(OwlClass *node)
{

}

double KeyConcept::overallPopularity(OwlClass *node)
{

}

//measure -- Natural Category Value
double KeyConcept::naturalCategoryValue(OwlClass *node)
{

}

int KeyConcept::getPath(OwlClass *node)
{
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

double KeyConcept::basicLevel(OwlClass *node)
{
    /** Compute the basicLevel which is the normalised path number. **/

    // Warn: Must caculate all the paths to get the maxpath first!
    if(maxpath==-1||maxpath==0) return 0.0;
}

double KeyConcept::nameSimplicity(OwlClass *node)
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
    for(int i=0;i<originClasses.size();i++)
    {
        if(node->shortname!=originClasses[i]->shortname
           &&node->shortname.contains(originClasses[i]->shortname))
        {
            ns = ns-nameSimplicity_c;
        }
    }
    //ensure ns>=0
    if(ns<0)ns=0;
    return ns;
}

//coverage contribution
double KeyConcept::contribution()
{

}

//score
double KeyConcept::score(OwlClass *node)
{

}

double KeyConcept::overallScore()
{

}

//get n key classes in the set
QList<OwlClass *> KeyConcept::getKeyClasses(int n)
{

}
