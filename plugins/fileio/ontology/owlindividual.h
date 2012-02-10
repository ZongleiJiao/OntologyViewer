#ifndef OWLINDIVIDUAL_H
#define OWLINDIVIDUAL_H
#include <QString>
#include <QList>
#include "libdunnartcanvas/shape.h"

using namespace dunnart;
class OwlIndividual
{
public:
    QString URI;
    QString shortname;
    ShapeObj * shape;
    QList<QString> ownerclasses;

    OwlIndividual();
    QString toQString();
};

#endif // OWLINDIVIDUAL_H
