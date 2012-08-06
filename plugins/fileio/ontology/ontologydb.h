#ifndef ONTOLOGYDB_H
#define ONTOLOGYDB_H

#include <QObject>
#include <QtSql/QSqlDatabase>

class OntologyDB : public QObject
{
    Q_OBJECT
public:
    explicit OntologyDB(QObject *parent = 0);
public:
    bool openDB();
    void closeDB();

    QString getOntologyNamespace(QString URL);
    int getOntologyID(QString URL);
    QList<QString> getAllIndividualNames(long ontoID);

private:
    QSqlDatabase db;

signals:

public slots:

};

#endif // ONTOLOGYDB_H
