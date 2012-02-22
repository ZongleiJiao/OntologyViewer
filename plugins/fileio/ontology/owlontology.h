#ifndef OWLONTOLOGY_H
#define OWLONTOLOGY_H
#include <owlclass.h>
#include <owlproperty.h>
#include <owlindividual.h>
#include <ontoclass.h>
#include <ontoindividual.h>
#include <ontoproperty.h>
#include <detaildockwidget.h>

class OwlOntology:public QObject
{
    Q_OBJECT
public slots:
    void ontoclass_clicked(OntologyClassShape * classshape);
    void ontoclass_doubleclicked(OntologyClassShape * classshape);
    void ontoclass_rightclicked(OntologyClassShape * classshape);

    void ontoindividual_clicked(OntologyIndividualShape * individualshape);
    void ontoproperty_clicked(OntologyPropertyShape * propertyshape);
public:
    //const
    static const QColor CLASS_SHAPE_COLOR;
    static const QColor INDIVIDUAL_SHAPE_COLOR;
    static const QColor PROPERTY_SHAPE_COLOR;

    static const QColor CLASS_CONNECTOR_COLOR;
    static const QColor INDIVIDUAL_CONNECTOR_COLOR;
    static const QColor PROPERTY_CONNECT_TO_CLASS_COLOR;
    static const QColor PROPERTY_CONNECTOR_COLOR;

    //variable
    Canvas * maincanvas;
    QString ontologyname;
    QList<OwlClass *> classes;
    QList<OwlIndividual *> individuals;
    QList<OwlProperty *> properties;

    int currentfocusedclassidx;

    //methods
    OwlOntology(Canvas * canvas);
    int getIndexOfIndividuals(QString shortname);
    int getIndexOfClasses(QString shortname);
    int getIndexOfProperties(QString shortname);
    void loadontology(const QFileInfo& fileInfo);
    void drawClassView(Canvas *canvas);
    void drawIndividualView(Canvas *canvas);
    void drawPropertyView(Canvas *canvas);

    void drawClassOverview(Canvas *canvas);

    QString toQString();

    //methods to get the equivalent class representation and view
    QString getFormula(QString qstr);
    QList<QString> splitFormula(QString str);
    ShapeObj * drawEquivalentClass(QString str,Canvas *canvas);
    void drawLogicalView(Canvas *canvas);
};

#endif // OWLONTOLOGY_H
