#ifndef OWLINDIVIDUAL_H
#define OWLINDIVIDUAL_H
#include <QString>
#include <QList>
#include "libdunnartcanvas/shape.h"
#include <ontoindividual.h>

using namespace dunnart;
class OwlIndividual
{
public:
    QString URI;
    QString shortname;
    OntologyIndividualShape * shape;
    QList<QString> ownerclasses;
    QList<Connector *> classesconnectors;

    OwlIndividual();
    QString toQString();
};

#endif // OWLINDIVIDUAL_H
