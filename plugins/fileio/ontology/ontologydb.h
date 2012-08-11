#ifndef ONTOLOGYDB_H
#define ONTOLOGYDB_H

#include <QObject>
#include <QtSql/QSqlDatabase>
#include <owlindividual.h>
#include <owlclass.h>
#include <owlproperty.h>

class OntologyDB : public QObject
{
    Q_OBJECT
public:
    explicit OntologyDB(QObject *parent = 0);
public:
    bool openDB();
    void closeDB();

    int getOntologyID(QString filepath);
    QString getOntologyNamespace(int ontoID);
    QList<OwlIndividual *> getAllIndividuals(int ontoID);       
    QList<int> getIndividualURIsByClass(int class_entityid);

    QList<OwlClass *> getAllNamedClasses(int ontoID);
    QList<int> getSubClasses(int class_entityid);
    QList<int> getSuperClasses(int class_entityid);
    QList<int> getDisjointClasses(int class_entityid);
    QList<int> getEquivalentClasses(int class_entityid);
    QList<QString> getAnonymousSubClasses(int class_entityid);
    QList<QString> getAnonymousSuperClasses(int class_entityid);
    QList<QString> getAnonymousDisjointClasses(int class_entityid);
    QList<QString> getAnonymousEquivalentClasses(int class_entityid);

    QList<OwlProperty *> getAllNamedProperties(int ontoID);
    QList<int> getSubProperties(int Property_entityid);
    QList<int> getSuperProperties(int Property_entityid);
    QList<int> getDisjointProperties(int Property_entityid);
    QList<int> getEquivalentProperties(int Property_entityid);
    QList<QString> getAnonymousSubProperties(int Property_entityid);
    QList<QString> getAnonymousSuperProperties(int Property_entityid);
    QList<QString> getAnonymousDisjointProperties(int Property_entityid);
    QList<QString> getAnonymousEquivalentProperties(int Property_entityid);


private:
    QSqlDatabase db;

signals:

public slots:

};

#endif // ONTOLOGYDB_H
