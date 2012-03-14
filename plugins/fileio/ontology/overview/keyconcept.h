#ifndef KEYCONCEPT_H
#define KEYCONCEPT_H
#include <owlclass.h>
class KeyConcept
{
public:
    //init with all classes
    KeyConcept(QList<OwlClass *> classes);

    /** Variables **/

    //get n key classes in the set
    QList<OwlClass *> getKeyClasses(int n);

    //the classes
    QList<OwlClass *> originClasses;
    //the scores
    QList<double> scores;
    //how many times in the middle of path
    QList<int> pathnums;
    int maxpath;

    /** constants **/
    const static double nameSimplicity_c = 0.3;

    /** functions **/

    //measure -- density
    double globalDensity(OwlClass *node);
    double localDensity(OwlClass *node);
    double overallDensity(OwlClass *node);
    //measure -- popularity
    double globalPopularity(OwlClass *node);
    double localPopularity(OwlClass *node);
    double overallPopularity(OwlClass *node);
    //measure -- Natural Category Value
    double naturalCategoryValue(OwlClass *node);
    double basicLevel(OwlClass *node);
    double nameSimplicity(OwlClass *node);
    int getPath(OwlClass *node);
    //coverage contribution
    double contribution();
    //score
    double score(OwlClass *node);
    double overallScore();
};

#endif // KEYCONCEPT_H
