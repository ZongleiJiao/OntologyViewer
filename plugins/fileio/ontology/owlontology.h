#ifndef OWLONTOLOGY_H
#define OWLONTOLOGY_H
#include <owlclass.h>
#include <owlproperty.h>
#include <owlindividual.h>

class OwlOntology
{
public:
    //const
    static const QColor CLASS_SHAPE_COLOR;
    static const QColor INDIVIDUAL_SHAPE_COLOR;
    static const QColor PROPERTY_SHAPE_COLOR;

    static const QColor CLASS_CONNECTER_COLOR;
    static const QColor INDIVIDUAL_CONNECTER_COLOR;
    static const QColor PROPERTY_CONNECT_TO_CLASS_COLOR;
    static const QColor PROPERTY_CONNECTER_COLOR;
    //variable
    QString ontologyname;
    QList<OwlClass *> classes;
    QList<OwlIndividual *> individuals;
    QList<OwlProperty *> properties;

    OwlOntology();
    int getIndexOfIndividuals(QString shortname);
    int getIndexOfClasses(QString shortname);
    int getIndexOfProperties(QString shortname);
    void loadontology(const QFileInfo& fileInfo);
    void drawClassView(Canvas *canvas);
    void drawIndividualView(Canvas *canvas);
    void drawPropertyView(Canvas *canvas);

    void drawClassOverview(Canvas *canvas);

    QString toQString();

    //methods to get the logical representation and view
    QString getFormula(QString str);
    QList<QString> splitFormula(QString str);
    ShapeObj * drawLogicalView(QString str,Canvas *canvas);
};

#endif // OWLONTOLOGY_H
