#ifndef OWLCLASS_H
#define OWLCLASS_H
#include <QString>
#include <QList>
#include "libdunnartcanvas/shape.h"
#include <owlindividual.h>

using namespace dunnart;

class OwlClass
{
public:
    QString URI;
    QString shortname;
    QList<OwlClass *> subclasses;
    QList<OwlClass *> superclasses;
    //QList<OwlClass *> disjointclasses;
    QList<OwlIndividual *> individuals;
    ShapeObj * shape;

//    int xpos,ylevel;
//    bool placed;

    OwlClass();
    QString toQString();
};

#endif // OWLCLASS_H
