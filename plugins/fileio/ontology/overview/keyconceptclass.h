#ifndef KEYCONCEPTCLASS_H
#define KEYCONCEPTCLASS_H
#include <owlclass.h>

class KeyConceptClass
{
public:
    //init with all classes
    KeyConceptClass(QList<OwlClass *> classes);

    int getIndexOfClasses(QString shortname);

    int classnum;
    QList<OwlClass *> originclasses;
    QList<double> scores;
    QList<double> densities;
    QList<double> popularities;
    QList<double> ncvalues;
    //for ncvalues
    QList<double> namesimplicities;
    QList<double> basiclevels;
    QList<int> paths;
    //for densities
    QList<double> aGlobalDensities;
    QList<double> globaldensities;
    QList<double> localdensities;
    //for popularities
    QList<int> hits;
    QList<double> globalpopularities;
    QList<double> localpopularities;

    /** constants **/
    const static double nameSimplicity_c = 0.3;
    const static double ncvalue_wBL = 0.66;
    const static double ncvalue_wNS = 0.33;

    const static double globaldensity_wS = 0.8;
    const static double globaldensity_wP = 0.1;
    const static double globaldensity_wI = 0.1;
    const static int    localdensity_k = 1;
    const static double localdensity_ratioD = 0.1;
    const static double localdensity_wGDL = 0.5;
    const static double density_wLD = 0.32;
    const static double density_wGD = 0.08;

    const static double localpopularity_k = 1;
    const static double localpopularity_ratioP = 0.1;
    const static double localpopularity_wGPL =0.5;
    const static double popularity_wLP = 0.1;
    const static double popularity_wGP = 0.2;

    const static double overallscore_wCO = 0.6;
    const static double overallscore_wCR = 0.4;


    /** functions **/
    QList<OwlClass *> getKeyClasses(int n);
    //NCValue
    void computeNameSimplicities();
    void computeBasicLevels();
    int computeNumberOfPath(OwlClass *node);
    void computeNCValues();

    //Density
    void computeGlobalDensities();
    void computeLocalDensities();
    QList<OwlClass *> getKDistanceClasses(OwlClass * node,int k,int currentdistance=0); //get distance=k sub/sup classes
    void computeDensities();

    //Popularity
    void computeGlobalPopularities();
    void computeLocalPopularities();
    void computePopularities();

    //score
    void computeScore();

    //contribution
    int contribution(OwlClass *node, QList<OwlClass *> ontoset);

};

#endif // KEYCONCEPTCLASS_H
