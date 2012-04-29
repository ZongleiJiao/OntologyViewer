#ifndef OWLCLASS_H
#define OWLCLASS_H
#include <QString>
#include <QList>
#include "libdunnartcanvas/shape.h"
#include "libdunnartcanvas/connector.h"
#include <owlindividual.h>
#include <ontoclass.h>
#include <overviewclassshape.h>
#include <owlentity.h>

using namespace dunnart;

class OwlClass: public OwlEntity
{    
public:
    static const QColor CLASS_SHAPE_COLOR;
    static const QColor CLASS_SHAPE_FOCUSED_COLOR;
    static const QColor SUBCLASS_SHAPE_FOCUSED_COLOR;
    static const QColor SUPERCLASS_SHAPE_FOCUSED_COLOR;
    static const QColor CLASS_CONNECTOR_COLOR;
    static const QColor CLASS_CONNECTOR_FOCUSED_COLOR;

    QString URI;
    QString shortname;
    QList<OwlClass *> subclasses;
    QList<OwlClass *> superclasses;
    QList<OwlClass *> disjointclasses;
    QList<OwlIndividual *> individuals;
    QList<QString> propertydomains;
    QList<QString> propertyranges;

    OntologyClassShape * shape;
    OverviewClassShape * overviewshape;
    QString equivalentclass;



    QList<Connector *> individualconnectors;
    QList<Connector *> classesconnectors;

    //different status showing
    bool isIndividualsShowed;
    void showIndividuals(Canvas * canvas);
    void hideIndividuals(Canvas * canvas);

    bool isFocused;
    void setFocused(bool focus, Canvas * canvas);

    OwlClass();
    QString toQString();
};

#endif // OWLCLASS_H
