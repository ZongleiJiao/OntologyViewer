#ifndef KEYCONCEPT_H
#define KEYCONCEPT_H
#include <owlclass.h>
class KeyConcept
{
private:
    //the classes
    QList<OwlClass *> originClasses;
    //the scores
    QList<double> scores;

    /* preformat the class set, any class without superclass
       will be set the 'Thing' as its superclass. And if there
       is no 'Thing' class, it will be created. */
    QList<OwlClass> preformat(QList<OwlClass*> classes);

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
    //coverage contribution
    double contribution();
    //score
    double score(OwlClass *node);
    double overallScore();

public:
    //init with all classes
    KeyConcept(QList<OwlClass *> classes);
    //get n key classes in the set
    QList<OwlClass *> getKeyClasses(int n);
};

#endif // KEYCONCEPT_H
