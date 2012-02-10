#ifndef OWLPROPERTY_H
#define OWLPROPERTY_H
#include <QString>
#include <QList>
#include "libdunnartcanvas/shape.h"
#include <owlclass.h>

using namespace dunnart;

class OwlProperty
{
public:
    QString URI;
    QString shortname;
    QString propertytype;
    ShapeObj * shape;
    QList<OwlClass *> domains;
    QList<QString> ranges;


    OwlProperty();
    QString toQString();

};

#endif // OWLPROPERTY_H
