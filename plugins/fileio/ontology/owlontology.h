#ifndef OWLONTOLOGY_H
#define OWLONTOLOGY_H
#include <owlclass.h>
#include <owlproperty.h>
#include <owlindividual.h>

class OwlOntology
{
public:
    QString ontologyname;
    QList<OwlClass *> classes;
    QList<OwlIndividual *> individuals;

    OwlOntology();
    int getIndexOfIndividuals(QString shortname);
    int getIndexOfClasses(QString shortname);
    void loadontology(const QFileInfo& fileInfo);
    void drawClassView(Canvas *canvas);
    void drawIndividualView(Canvas *canvas);
    void drawPropertyView(Canvas *canvas);

    QString toQString();
};

#endif // OWLONTOLOGY_H
