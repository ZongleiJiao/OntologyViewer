#include "ontologydb.h"
#include <QSqlQuery>
#include <QVariant>

OntologyDB::OntologyDB(QObject *parent) :
    QObject(parent)
{
//    QSqlDatabase dbconn = QSqlDatabase::addDatabase("QSQLITE", "testSQLite");
    // /home/qiang/workspace/QtProjects/OntoDB/ontology.db
}

bool OntologyDB::openDB(){
    // Find QSLite driver
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString path("/home/qiang/workspace/QtProjects/OntoDB/ontology.db");
    db.setDatabaseName(path);
    // Open databasee
    return db.open();
}

void OntologyDB::closeDB()
{
    if(db.isOpen())db.close();
}
int OntologyDB::getOntologyID(QString URL)
{
    if(!db.isOpen())return -1;
    QSqlQuery sq;
    long oid=0;
    QString sql = "Select ONTOLOGYID from ontologies where URL = '" + URL + "'";
    sq.exec(sql);
    while(sq.next()){
        oid = sq.value(0).toInt();
    }
    return oid;
}

QString OntologyDB::getOntologyNamespace(QString URL)
{
    if(!db.isOpen())return NULL;
    QSqlQuery sq;
    QString ns="";
    QString sql = "Select NAMESPACE from ontologies where URL = '" + URL + "'";
    sq.exec(sql);
    while(sq.next()){
        ns = sq.value(0).toString();
    }
    return ns;
}

QList<QString> OntologyDB::getAllIndividualNames(long ontoID)
{
    QList<QString> idvs;
    if(!db.isOpen())return idvs;

    QSqlQuery sq;
//    QString sql = "Select "
//    sq.prepare("")w
}
