#ifndef KEYCONCEPTCLASS_H
#define KEYCONCEPTCLASS_H
#include <owlclass.h>

class KeyConceptClass
{
public:
    //init with all classes
    KeyConceptClass(QList<OwlClass *> classes);

    QList<OwlClass *> originclasses;
    QList<double> scores;
    QList<double> densities;
    QList<double> popularities;
    QList<double> ncvalues;
    QList<double> contributions;

    QList<double> namesimplicities;
    QList<double> basiclevels;
    QList<int> paths;

    QList<int> globaldensities;

    /** constants **/
    const static double nameSimplicity_c = 0.3;
    const static double ncvalue_wBL = 0.8;
    const static double ncvalue_wNS = 0.2;

    /** functions **/
    QList<OwlClass *> getKeyClasses(int n);
    //NCValue
    void computeNameSimplicities();
    void computeBasicLevels();
    int computeNumberOfPath(OwlClass *node);
    void computeNCValues();

    //Density
    void computeGlobalDensities();

};

#endif // KEYCONCEPTCLASS_H
