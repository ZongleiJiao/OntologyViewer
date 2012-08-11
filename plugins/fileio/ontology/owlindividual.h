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
    int db_entityID;
    OntologyIndividualShape * shape;
    QList<QString> ownerclasses;
    QList<Connector *> classesconnectors;

    OwlIndividual();
    QString toQString();

    const static QColor INDIVIDUAL_SHAPE_COLOR;
};

#endif // OWLINDIVIDUAL_H
