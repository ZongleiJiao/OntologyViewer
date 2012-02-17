#ifndef OWLCLASS_H
#define OWLCLASS_H
#include <QString>
#include <QList>
#include "libdunnartcanvas/shape.h"
#include <owlindividual.h>
#include <ontoclass.h>

using namespace dunnart;

class OwlClass
{    
public:
    QString URI;
    QString shortname;
    QList<OwlClass *> subclasses;
    QList<OwlClass *> superclasses;
    QList<OwlClass *> disjointclasses;
    QList<OwlIndividual *> individuals;
    OntologyClassShape * shape;
    QString equivalentclass;

    OwlClass();
    QString toQString();
};

#endif // OWLCLASS_H
