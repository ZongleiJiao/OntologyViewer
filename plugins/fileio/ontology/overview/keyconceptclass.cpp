#include "keyconceptclass.h"
#include <stack>

using namespace std;

KeyConceptClass::KeyConceptClass(QList<OwlClass *> classes)
{
    this->originclasses = classes;
}

//get index of classes by its shortname
int KeyConceptClass::getIndexOfClasses(QString shortname)
{
    for(int i=0;i<originclasses.length();i++)
    {
        if(originclasses[i]->shortname.toLower() == shortname.toLower()) return i;
    }
    return -1;
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
        if(maxpath!=0)bl=double(paths[i])/double(maxpath);
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
      globaldensity(c) = n*subclass*wS + n*properties*wP + n*individuals*wI
        /max(global density)
      wS = 0.8, wP = 0.1, wI = 0.1.
      **/
    double maxdensity=0.0;
    for(int i=0;i<originclasses.size();i++)
    {
        double num=0;
        num+=globaldensity_wS * originclasses[i]->subclasses.size();
        num+=globaldensity_wI * originclasses[i]->individuals.size();
        num+=globaldensity_wP * originclasses[i]->propertydomains.size();
        num+=globaldensity_wP * originclasses[i]->propertyranges.size();

        aGlobalDensities.append(num);
        if(maxdensity<num)maxdensity=num;
    }
    for(int i=0;i<originclasses.size();i++)
    {
        double gd=0.0;
        if(maxdensity!=0)gd = aGlobalDensities[i]/maxdensity;
        this->globaldensities.append(gd);
    }
}

void KeyConceptClass::computeLocalDensities()
{
    /**
      localdensity(C) = globaldensity(C) /maxweightedGD(C) + wGDL*GD(C)
      **/

    for(int i=0;i<originclasses.size();i++)
    {
        double maxWeightedGD = 0.0;
        //search k level/distance classes
        for(int j=1;j<=localdensity_k;j++){
            QList<OwlClass *> cls;
            cls = getKDistanceClasses(originclasses[i],j,0);
            //calculate weightedGD
            for(int k=0;k<cls.size();k++){
                int idx = getIndexOfClasses(cls[k]->shortname);
                double wgd=0.0;
                if(idx!=-1) wgd = (1-localdensity_ratioD*j)*globaldensities[idx];
                if(wgd>maxWeightedGD)maxWeightedGD=wgd;
            }
        }
        double ld = localdensity_wGDL * globaldensities[i];
        if(maxWeightedGD!=0)ld+= globaldensities[i]/maxWeightedGD;
        localdensities.append(ld);
    }
}

QList<OwlClass *> KeyConceptClass::getKDistanceClasses(OwlClass *node, int k, int currentdistance)
{
    /** Warn: Circle remove first! **/
    QList<OwlClass *> lists;

    if(currentdistance>k){
        return lists;
    }
    else if(currentdistance==k){
        lists.append(node->subclasses);
        lists.append(node->superclasses);
    }
    else{
        for(int i=0;i<node->subclasses.size();i++){
            QList<OwlClass *> sublists;
            sublists = getKDistanceClasses(node->subclasses[i],k,currentdistance+1);
            lists.append(sublists);
        }
        for(int i=0;i<node->superclasses.size();i++){
            QList<OwlClass *> suplists;
            suplists = getKDistanceClasses(node->superclasses[i],k,currentdistance+1);
            lists.append(suplists);
        }
    }
}

void KeyConceptClass::computeDensities()
{
    /**
        D=wLD*localdensity + wGD*globaldensity
    **/
    computeGlobalDensities();
    computeLocalDensities();
    for(int i=0;i<originclasses.size();i++)
    {
        double density = density_wLD * localdensities[i]
                + density_wGD * globaldensities[i];
        densities.append(density);
    }
}
