#include "keyconceptclass.h"
#include <stack>

using namespace std;

KeyConceptClass::KeyConceptClass(QList<OwlClass *> classes)
{
    this->originclasses = classes;
    this->classnum = originclasses.size();
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
    for(int i=0;i<classnum;i++)
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
        for(int j=0;j<classnum;j++)
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
    for(int i=0;i<classnum;i++)
    {
        int p = computeNumberOfPath(originclasses[i]);
        this->paths.append(p);
        if(p>maxpath)maxpath=p;
    }
    for(int i=0;i<classnum;i++)
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

//    cout<<"Leaves of <"<<node->shortname.toStdString()<<">:"<<nleaves<<endl;

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

//    cout<<"Roots of <"<<node->shortname.toStdString()<<">:"<<nroots<<endl;
//    cout<<"Paths of <"<<node->shortname.toStdString()<<">:"<<nroots*nleaves<<endl;
    return nleaves*nroots;
}

void KeyConceptClass::computeNCValues()
{
    this->computeNameSimplicities();
    this->computeBasicLevels();
    // NCValue(c) = wBL*BL(C) + wNS*NS(C)
    for(int i=0;i<classnum;i++)
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
    for(int i=0;i<classnum;i++)
    {
        double num=0;
        num+=globaldensity_wS * originclasses[i]->subclasses.size();
        num+=globaldensity_wI * originclasses[i]->individuals.size();
        num+=globaldensity_wP * originclasses[i]->propertydomains.size();
        num+=globaldensity_wP * originclasses[i]->propertyranges.size();

        aGlobalDensities.append(num);
        if(maxdensity<num)maxdensity=num;
    }
    for(int i=0;i<classnum;i++)
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

    for(int i=0;i<classnum;i++)
    {
        double maxWeightedGD = 0.0;
        //search k level/distance classes
        for(int j=1;j<=localdensity_k;j++){
            QList<OwlClass *> cls;
//            cout<<"KD:"<<originclasses[i]->shortname.toStdString()
//               <<" k = "<<j<<" ...";
//            cls = getKDistanceClasses(originclasses[i],j,0);
//            cout<<" OK!"<<endl;

//            cout<<"KD:"<<originclasses[i]->shortname.toStdString()<<endl;
            /** modify for speed up!!! only calculate k=1 without call KDistance**/
            cls.append(originclasses[i]->subclasses);
            cls.append(originclasses[i]->subclasses);
            //calculate weightedGD
            for(int k=0;k<cls.size();k++){
                int idx = getIndexOfClasses(cls[k]->shortname);
                double wgd=0.0;
                if(idx!=-1) wgd = (1-localdensity_ratioD*j)*globaldensities[idx];
                if(wgd>maxWeightedGD){
                    maxWeightedGD=wgd;
//                    cout<<"maxWeightedGD change to : "<<maxWeightedGD<<endl;
                }
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
    cout<<"Computing densities--GlobalDensities..."<<endl;
    computeGlobalDensities();
    cout<<"Computing densities--LocalDensities..."<<endl;
    computeLocalDensities();
    for(int i=0;i<classnum;i++)
    {
        double density = density_wLD * localdensities[i]
                + density_wGD * globaldensities[i];
        densities.append(density);
    }
}

void KeyConceptClass::computeGlobalPopularities()
{
    //compute hits
    /*
      In the paper, it uses seach engine to find the hits.
      Here, we replace the number with the times occur in classes shortnames.
      */
    int maxhit=0;
    for(int i=0;i<classnum;i++)
    {
        int hit=0;
        QString cname = originclasses[i]->shortname.toLower();
        for(int j=0;j<classnum;j++)
        {
            QString tname = originclasses[j]->shortname.toLower();
            if(tname.contains(cname))hit++;
        }
        if(hit>maxhit)maxhit=hit;
        hits.append(hit);
    }

    //compute GP = hit(c)/maxhit
    for(int i=0;i<classnum;i++)
    {
        double gp = 0.0;
        if(maxhit!=0)gp=double(hits[i])/double(maxhit);
        globalpopularities.append(gp);
    }
}

void KeyConceptClass::computeLocalPopularities()
{
    /**
      LP(C) = GP(C) /maxweightedGP(C) + wGPL*GP(C)
      **/

    for(int i=0;i<classnum;i++)
    {
        double maxWeightedGP = 0.0;
        //search k level/distance classes
        for(int j=1;j<=localpopularity_k;j++){
            QList<OwlClass *> cls;
//            cls = getKDistanceClasses(originclasses[i],j,0);
            /** direct use level 1 classes(sub & sup) to speed up **/
            cls.append(originclasses[i]->subclasses);
            cls.append(originclasses[i]->superclasses);
            //calculate weightedGP
            for(int k=0;k<cls.size();k++){
                int idx = getIndexOfClasses(cls[k]->shortname);
                double wgp=0.0;
                if(idx!=-1) wgp = (1-localpopularity_ratioP*j)*globalpopularities[idx];
                if(wgp>maxWeightedGP)maxWeightedGP=wgp;
            }
        }
        double lp = localpopularity_wGPL * globalpopularities[i];
        if(maxWeightedGP!=0)lp+= globalpopularities[i]/maxWeightedGP;
        localpopularities.append(lp);
    }
}

void KeyConceptClass::computePopularities()
{
    /** P=wLP*LP + wGP*GP **/
    cout<<"Computing GlobalPopularities..."<<endl;
    computeGlobalPopularities();
    cout<<"Computing LocalPopularities..."<<endl;
    computeLocalPopularities();
    for(int i=0;i<classnum;i++)
    {
        double pop = popularity_wLP * localpopularities[i]
                + popularity_wGP * globalpopularities[i];
        popularities.append(pop);
    }
}

void KeyConceptClass::computeScore()
{
    /** score = NCValue + D + P **/
    cout<<"Computing NCValues..."<<endl;
    computeNCValues();
    cout<<"Computing Densities..."<<endl;
    computeDensities();
    cout<<"Computing Popularities..."<<endl;
    computePopularities();
    for(int i=0;i<classnum;i++)
    {
        double sc = ncvalues[i] + densities[i] + popularities[i];
        scores.append(sc);
    }
}

int KeyConceptClass::contribution(OwlClass *node, QList<OwlClass *> ontoset)
{
    int result=0;
    //get the list which coverd by node
    QList<OwlClass *> nodecovered;
    nodecovered.append(node);
    for(int i=0;i<node->subclasses.size();i++)
        nodecovered.append(node->subclasses[i]);
    for(int i=0;i<node->superclasses.size();i++)
        nodecovered.append(node->superclasses[i]);
    //remove the classes covered by others
    for(int i=0;i<ontoset.size();i++){
        if(node!=ontoset[i]){
            nodecovered.removeOne(ontoset[i]);
            for(int j=0;j<ontoset[i]->subclasses.size();j++)
                nodecovered.removeOne(ontoset[i]->subclasses[j]);
            for(int j=0;j<ontoset[i]->superclasses.size();j++)
                nodecovered.removeOne(ontoset[i]->superclasses[j]);
        }
    }
    return nodecovered.size();
}

QList<OwlClass *> KeyConceptClass::getKeyClasses(int n)
{
    /**
      0. if n>=classnum return ontology(O)
      1. compute scores
      --2. select k(k<=n,default k=15) top score classes in ontology(O) -> S
      --3. select n-k top score classes in O-S -> T
      --4. if(T=NULL) return S; (k=n???)

      replace 2.3.4.: select top n classes in O ->S

      5. c = avg(contribution(Ci,(S and T)),
            contribution means the number of classes only coverd by Ci in (S and T).
            Coverd means itself & sub & super
         a = avg(overallscore(ci, (S and T)),
            overallscore(ci,(S and T)) =
             wCO * contribution(Ci,(S and T)/maxcontribution(Ci,(S and T)
            +wCR * score(ci)
      6. classW = worseOverallscore of (S and T)
        foreach classB in (O-S-T){
            if(avg a' of S+T-classW+classB > a
            and avg c' of S+T-classW+classB >=c)
            {
                swap(classW,classB in S&T) goback to step 5.
            }
        }
       7. return (S&T)

    **/


    QList<OwlClass *> result;

    //total class num less than the require number,return all classes
    cout<<"Class NUM:::"<<classnum<<endl;
    if(n>=classnum)return originclasses;

    //compute scores
    computeScore();

    //n must>=1
    if(n<1) return result;

    //get n Top score classes, and other classes
    QList<int> orderedIndexOfScore;
    for(int i=0;i<classnum;i++){
        int position = 0;
        for(position=0;position<orderedIndexOfScore.size();position++){
            if(scores[i]>scores[orderedIndexOfScore[position]]){
                break;
            }
        }
        orderedIndexOfScore.insert(position,i);
    }

    QList<OwlClass *> ontosetS; //top n
    QList<OwlClass *> ontosetR; //others
    for(int i=0;i<classnum;i++){
        if(i<n){
            ontosetS<<originclasses[orderedIndexOfScore[i]];
//            cout<<"[S]"<<i;
        }
        else{
            ontosetR<<originclasses[orderedIndexOfScore[i]];
//            cout<<"[R]"<<i;
        }

        cout<<">>>>>>>>-----"
            <<originclasses[orderedIndexOfScore[i]]->shortname.toStdString()
            <<" index:" << orderedIndexOfScore[i]
            <<" score:" << scores[orderedIndexOfScore[i]]
            <<endl;
    }

//    for(int i=0;i<ontosetS.size();i++){
//        cout<<"Contribution of "<<ontosetS[i]->shortname.toStdString()
//           <<" in S:"<<contribution(ontosetS[i],ontosetS)<<endl;
//    }

    /** this part almost make no sense, but highly affect performance.
      So, delete it!!! ***/
    /**
    //step 5:
    bool foundbetter = false;
    do{
        foundbetter = false;
        //compute c= avg contribution of ontosetS
        int totalcontribution=0;
        int maxcontribution=0;
        QList<int> contributions;
        for(int i=0;i<ontosetS.size();i++){
            int ci = contribution(ontosetS[i],ontosetS);
            if(ci>maxcontribution)maxcontribution=ci;
            totalcontribution +=ci;
            contributions.append(ci);
        }
        double avgContribution = 0.0;
        if(ontosetS.size()!=0)
            avgContribution = double(totalcontribution)/double(ontosetS.size());
        cout << "AVG C: "<<avgContribution<<endl;

        //compute a= avg overallscore
        QList<double> overallscores;
        double totaloverallscore=0.0;
        double worseoverallscore=9999;
        int idxworseoverallscore=-1;
        for(int i=0;i<ontosetS.size();i++){
            int globalidx = getIndexOfClasses(ontosetS[i]->shortname);
            double os = overallscore_wCO * (contributions[i]/maxcontribution)
                    + overallscore_wCR * scores[globalidx];
            totaloverallscore+=os;
            overallscores<<os;
            if(worseoverallscore>os){
                worseoverallscore=os;
                idxworseoverallscore=i;
            }
        }
        double avgOverallscore = 0.0;
        if(ontosetS.size()!=0)
            avgOverallscore = double(totaloverallscore)/double(ontosetS.size());
        cout << "AVG A: "<<avgOverallscore<<endl;


        //step 6
        for(int i=0;i<ontosetR.size();i++){
            QList<OwlClass *> stmp;
            stmp.append(ontosetS);
            stmp.removeAt(idxworseoverallscore);
            stmp.append(ontosetR[i]);
            //compute c'= avg contribution of ontosetS'
            int totalc=0;
            int maxc=0;
            QList<int> cons;
            for(int j=0;j<stmp.size();j++){
                int cj = contribution(stmp[j],stmp);
                if(cj>maxc)maxc=cj;
                totalc +=cj;
                cons.append(cj);
            }
            double avgc = 0.0;
            if(stmp.size()!=0)
                avgc = double(totalc)/double(stmp.size());

            cout<<"avg c["<<i<<"] = "<<avgc<<endl;

            //compute a'= avg overallscore of ontosetS'
            QList<double> ovscores;
            double totalovscore=0.0;
            for(int j=0;j<stmp.size();j++){
                int globalidx = getIndexOfClasses(stmp[j]->shortname);
                double os = overallscore_wCO * (cons[j]/maxc)
                        + overallscore_wCR * scores[globalidx];
                totalovscore+=os;
                ovscores<<os;
            }
            double avgovscore = 0.0;
            if(stmp.size()!=0)
                avgovscore = double(totalovscore)/double(stmp.size());
            cout<<"avg a["<<i<<"] = "<<avgovscore<<endl;
            //compare a a',c c'
            if(avgc>=avgContribution&&avgovscore>avgOverallscore){
                foundbetter=true;

                OwlClass * w = ontosetS[idxworseoverallscore];
                OwlClass * r = ontosetR[i];
                ontosetS.removeOne(w);
                ontosetS.append(r);
                ontosetR.removeOne(r);
                ontosetR.append(w);

                cout<<"Found better class : "<<r->shortname.toStdString()
                   <<" c="<<avgContribution << " c1="<<avgc
                  <<" a="<<avgOverallscore<<" a1="<<avgovscore<<endl;
                break;
            }
        }
    }while(foundbetter);
**/
    result.append(ontosetS);
    return result;
}
