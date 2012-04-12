#ifndef OWLINDIVIDUAL_H
#define OWLINDIVIDUAL_H
#include <QString>
#include <QList>
#include "libdunnartcanvas/shape.h"
#include <ontoindividual.h>
#include <owlentity.h>

using namespace dunnart;
class OwlIndividual : public OwlEntity
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
