#include "ontologydb.h"
#include <QSqlQuery>
#include <QVariant>
using namespace std;

OntologyDB::OntologyDB(QObject *parent) :
    QObject(parent)
{
}

bool OntologyDB::openDB(){
    // Find QSLite driver
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString path("/run/shm/ontology.db");
//    QString path("../../../plugins/fileio/ontology/ontology.db");//DB path for Mac, linux might be different
    db.setDatabaseName(path);
    // Open databasee
    return db.open();
}

void OntologyDB::closeDB()
{
    if(db.isOpen())db.close();
}

int OntologyDB::getOntologyID(QString filepath)
{
    if(!db.isOpen())return -1;
    int oid=0;
    QSqlQuery sq;
    sq.prepare("Select ONTOLOGYID from ontologies where description = :path");
    sq.bindValue(":path",filepath);
    sq.exec();
    while(sq.next()){
        oid = sq.value(0).toInt();
    }
    cout<<"DB get ontologyID ="<<oid<<endl;
    return oid;
}

QString OntologyDB::getOntologyNamespace(int ontoID)
{
    if(!db.isOpen())return NULL;
    QString ns="";
    QSqlQuery sq;
    sq.prepare("Select NAMESPACE from ontologies where ontologyID = :oid");
    sq.bindValue(":oid",ontoID);
    sq.exec();
    while(sq.next()){
        ns = sq.value(0).toString();
    }
    cout<<"DB get NS: " <<ns.toStdString()<<endl;
    return ns;
}

QList<OwlIndividual *> OntologyDB::getAllIndividuals(int ontoID)
{
    QList<OwlIndividual *> idvs;
    if(!db.isOpen())return idvs;

    QSqlQuery sq;
    sq.prepare("Select URI,NAME,entityid from individuals where ontologyID = :oid");
    sq.bindValue(":oid",ontoID);
    sq.exec();
    while(sq.next()){
        OwlIndividual * tmp = new OwlIndividual();
        tmp->URI = sq.value(0).toString();
        tmp->shortname = sq.value(1).toString();
        tmp->db_entityID = sq.value(2).toInt();

        //create shape
        tmp->shape = new OntologyIndividualShape();
        tmp->shape->setIdString(tmp->shortname);
        tmp->shape->setLabel(tmp->shortname);
        tmp->shape->setToolTip(tmp->URI);
        tmp->shape->setSize(QSizeF(180,20));
        tmp->shape->setFillColour(OwlIndividual::INDIVIDUAL_SHAPE_COLOR);

        idvs.append(tmp);
    }
    cout<<"DB individuals: "<<idvs.size()<<endl;
    return idvs;
}

QList<OwlClass *> OntologyDB::getAllNamedClasses(int ontoID)
{
    QList<OwlClass *> cls;
    if(!db.isOpen())return cls;

    QSqlQuery sq;
    sq.prepare("Select URI,SHORTNAME,EntityID from classes where ontologyID = :oid");
    sq.bindValue(":oid",ontoID);
    sq.exec();
    int i=0;
    while(sq.next()){
        OwlClass * tmpclass = new OwlClass();
        tmpclass->URI = sq.value(0).toString();
        tmpclass->shortname = sq.value(1).toString();
        tmpclass->db_entityID = sq.value(2).toInt();

        //create shape
        tmpclass->shape = new OntologyClassShape();
        tmpclass->shape->setIdString(tmpclass->shortname);
        tmpclass->shape->setToolTip(tmpclass->URI);
        tmpclass->shape->setPosAndSize(QPointF(0,i*25),QSizeF(150,20));
        i++;
        tmpclass->shape->setMyLabel(tmpclass->shortname);
        tmpclass->shape->setLabelByLevels(1,tmpclass->shortname); //set level 1 label
        tmpclass->shape->setLabelByLevels(2,"[IND]:");
        tmpclass->shape->setLabelByLevels(3,"[SUB]:");
        tmpclass->shape->setLabelByLevels(4,"[SUP]:");
        tmpclass->shape->setLabelByLevels(5,"[DIS]:");
        tmpclass->shape->setLabelByLevels(6,"[EQU]:");
        tmpclass->shape->setFillColour(OwlClass::CLASS_SHAPE_COLOR);

        cls.append(tmpclass);
    }
    return cls;
}

QList<int> OntologyDB::getIndividualURIsByClass(int class_entityid)
{
//    cout<<"get IND..."<<endl;
    QList<int> idvs;
    if(!db.isOpen())return idvs;
    QSqlQuery sq;
    sq.prepare("select individualID from individualrelations where classID = :clsid");
    sq.bindValue(":clsid",class_entityid);
    sq.exec();
    while(sq.next())
    {
        idvs += sq.value(0).toInt();
    }
    return idvs;
}

QList<int> OntologyDB::getSubClasses(int class_entityid)
{
//    cout<<"get subs..."<<endl;
    QList<int> subs;
    if(!db.isOpen())return subs;

    QSqlQuery sq;

    sq.prepare("select childid from subSumption where parentID= :clsid");
    sq.bindValue(":clsid",class_entityid);
    sq.exec();
    while(sq.next())
    {
        subs += sq.value(0).toInt();
    }
    return subs;

}

QList<int> OntologyDB::getSuperClasses(int class_entityid){

//    cout<<"get sups..."<<endl;
    QList<int> sups;
    if(!db.isOpen())return sups;

    QSqlQuery sq;

    sq.prepare("select parentid from subSumption where childID= :clsid");
    sq.bindValue(":clsid",class_entityid);
    sq.exec();
    while(sq.next())
    {
        sups += sq.value(0).toInt();
    }
    return sups;
}

QList<int> OntologyDB::getDisjointClasses(int class_entityid){

//    cout<<"get diss..."<<endl;
    QList<int> disjoints;
    if(!db.isOpen())return disjoints;

    QSqlQuery sq;
    sq.prepare("select disjointClassID from disjointClasses where classID = :clsid;");
    sq.bindValue(":clsid",class_entityid);
    sq.exec();

    while(sq.next())
    {
        disjoints += sq.value(0).toInt();
    }

    return disjoints;
}

QList<int> OntologyDB::getEquivalentClasses(int class_entityid){

//    cout<<"get equs..."<<endl;
    QList<int> equs;
    if(!db.isOpen())return equs;

    QSqlQuery sq;
    sq.prepare("select EquivalentClassID from EquivalentClasses where classID = :clsid;");
    sq.bindValue(":clsid",class_entityid);
    sq.exec();

    while(sq.next())
    {
        equs += sq.value(0).toInt();
    }

    return equs;
}


QList<QString> OntologyDB::getAnonymousSubClasses(int class_entityid)
{

//    cout<<"get asubs..."<<endl;
    QList<QString> asubs;
    if(!db.isOpen())return asubs;

    QSqlQuery sq;
//    sq.prepare("select anonymousclasses.anonymousexpression from (select * from subSumption where parentID = :clsid) as t1 join anonymousclasses on t1.childid = anonymousclasses.entityID;");
    sq.prepare("select anonymousclasses.anonymousexpression from subSumption join anonymousclasses on childid = entityID where parentID = :clsid;");
    sq.bindValue(":clsid",class_entityid);
    sq.exec();

    while(sq.next())
    {
        asubs += sq.value(0).toString();
    }

    return asubs;
}

QList<QString> OntologyDB::getAnonymousSuperClasses(int class_entityid)
{

//    cout<<"get asups..."<<endl;
    QList<QString> asups;
    if(!db.isOpen())return asups;

    QSqlQuery sq;
//    sq.prepare("select anonymousclasses.anonymousexpression from (select * from subSumption where childID = :clsid) as t1 join anonymousclasses on t1.parentID = anonymousclasses.entityID;");
    sq.prepare("select anonymousclasses.anonymousexpression from subSumption join anonymousclasses on parentID = entityID where childID = :clsid;");
    sq.bindValue(":clsid",class_entityid);
    sq.exec();

    while(sq.next())
    {
        asups += sq.value(0).toString();
    }

    return asups;
}

QList<QString> OntologyDB::getAnonymousDisjointClasses(int class_entityid)
{

//    cout<<"get adiss..."<<endl;
    QList<QString> adisjoint;
    if(!db.isOpen())return adisjoint;

    QSqlQuery sq;
//    sq.prepare("select anonymousclasses.anonymousexpression from (select * from disjointClasses where classID = :clsid) as t1 join anonymousclasses on t1.disjointClassID = anonymousclasses.entityID;");
    sq.prepare("select anonymousclasses.anonymousexpression from disjointClasses join anonymousclasses on disjointClassID = entityID where classID = :clsid;");
    sq.bindValue(":clsid",class_entityid);
    sq.exec();

    while(sq.next())
    {
        adisjoint += sq.value(0).toString();
    }

    return adisjoint;
}

QList<QString> OntologyDB::getAnonymousEquivalentClasses(int class_entityid)
{

//    cout<<"get aequs..."<<endl;
    QList<QString> aequs;
    if(!db.isOpen())return aequs;

    QSqlQuery sq;
//    sq.prepare("select anonymousclasses.anonymousexpression from (select * from EquivalentClasses where classID = :clsid) as t1 join anonymousclasses on t1.EquivalentClassID = anonymousclasses.entityID;");
    sq.prepare("select anonymousclasses.anonymousexpression from EquivalentClasses join anonymousclasses on EquivalentClassID = entityID where classid = :clsid;");
    sq.bindValue(":clsid",class_entityid);
    sq.exec();

    while(sq.next())
    {
        aequs += sq.value(0).toString();
    }

    return aequs;
}

QList<OwlProperty *> OntologyDB::getAllNamedProperties(int ontoID){

}

QList<int> OntologyDB::getSubProperties(int Property_entityid){

}

QList<int> OntologyDB::getSuperProperties(int Property_entityid){

}

QList<int> OntologyDB::getDisjointProperties(int Property_entityid){

}

QList<int> OntologyDB::getEquivalentProperties(int Property_entityid){

}

QList<QString> OntologyDB::getAnonymousSubProperties(int Property_entityid){

}

QList<QString> OntologyDB::getAnonymousSuperProperties(int Property_entityid){

}

QList<QString> OntologyDB::getAnonymousDisjointProperties(int Property_entityid){

}

QList<QString> OntologyDB::getAnonymousEquivalentProperties(int Property_entityid){

}

void OntologyDB::saveInterests(int ontoID, int entityID, int entityType){

    if(!db.isOpen()){
        cout <<"============->"<<ontoID<<" "<<entityID <<" "<<entityType <<" " <<endl;
        db.open();
    }
    QSqlQuery sq;

//    sq.prepare("insert into historyRecord(ontologyID,entityID,entityType) values(?,?,?)");
    sq.prepare("insert into historyRecord values(?,?,?, datetime('now'))");
    sq.addBindValue(ontoID);
    sq.addBindValue(entityID);
    sq.addBindValue(entityType);

    sq.exec();
//    cout <<"----------->"<<ontoID<<" "<<entityID <<" "<<entityType <<" " << sq.exec()<<endl;
}

void OntologyDB::clearHistoryByOntology(int ontoID){
    if(!db.isOpen()){
        db.open();
    }
    QSqlQuery sq;
    sq.prepare("delete from historyRecord where ontologyID =?");
    sq.addBindValue(ontoID);
    sq.exec();
}

QList<QString> OntologyDB::loadHistory(int ontoID){

cout <<"ontologyID1:"+ontoID<<endl;
    if(!db.isOpen()){
        db.open();
    }
    cout <<"ontologyID2:"+ontoID<<endl;
    QSqlQuery sq;
    cout <<"ontologyID3:"+ontoID<<endl;
    sq.prepare("select shortname from Classes c, historyRecord h where h.OntologyID = ? and c.entityid = h.entityid");
    sq.addBindValue(ontoID);

    sq.exec();
}

void OntologyDB::clearKeyconcept_Class(int ontoID)
{
    if(!db.isOpen()){
        db.open();
    }
    QSqlQuery sq;
    sq.prepare("delete from keyconcept_Classes where ontologyID = ?");
    sq.addBindValue(ontoID);
    sq.exec();
}

void OntologyDB::insertKeyconcept_Class(int ontoID, int classID, QString shortname, double score, QDateTime lvt, int nov, int lm)
{
    if(!db.isOpen()){
        db.open();
    }
    QSqlQuery sq;
    sq.prepare("insert into keyconcept_Classes (ontologyID, ClassID, Classname,score, lastvisitedTime,numberofvisits,landmark) values (?,?,?,?,?,?,?)");
    sq.addBindValue(ontoID);
    sq.addBindValue(classID);
    sq.addBindValue(shortname);
    sq.addBindValue(score);
    sq.addBindValue(lvt);
    sq.addBindValue(nov);
    sq.addBindValue(lm);
    sq.exec();
}

QList<KeyConcept_DBFormat *> OntologyDB::getKeyconcept_classes(int ontoID)
{
    if(!db.isOpen()){
        db.open();
    }
    QSqlQuery sq;
    sq.prepare("select * from keyconcept_classes where ontologyID = ?");
    sq.addBindValue(ontoID);
    sq.exec();
//0    [id]			integer PRIMARY KEY ASC,
//1    [OntologyID]		integer, --to avoid join multiple tables for KC
//2    [ClassID]		integer,
//3    [ClassName]		varchar(100), --useless??or to avoid join multiple tables for KC
//4    [Score]			real,
//5    [LastVisitedTime]	integer,
//6    [NumberOfVisits]	integer,
//7    [LandMark]		integer
    QList<KeyConcept_DBFormat *> rs;
    while(sq.next()){
        KeyConcept_DBFormat * r = new KeyConcept_DBFormat();
        r->ontoID = sq.value(1).toInt();
        r->classID = sq.value(2).toInt();
        r->classname = sq.value(3).toString();
        r->score = sq.value(4).toDouble();
        r->lastVisitedTime = sq.value(5).toDateTime();
        r->numberOfVisits = sq.value(6).toInt();
        r->landmark = sq.value(7).toInt();
        rs.append(r);
    }

    return rs;
}

QList<QPair<int,int> > OntologyDB::getAllIndividualRelations(int ontoID)
{
    QList<QPair<int,int> > idvs;
    if(!db.isOpen())return idvs;
    QSqlQuery sq;
    sq.prepare("select classID, individualID from individualrelations join individuals on individualrelations.individualid = individuals.EntityID where OntologyID = :oid");
    sq.bindValue(":oid",ontoID);
    sq.exec();
    while(sq.next())
    {
        int class_id = sq.value(0).toInt();
        int ind_id = sq.value(1).toInt();
        idvs.append(QPair<int,int> (class_id,ind_id));
    }
    return idvs;
}

QList<QPair<int,int> > OntologyDB::getAllSubClasses(int ontoID)
{
    QList<QPair<int,int> > subs;
    if(!db.isOpen())return subs;

    QSqlQuery sq;

    /**
      Consider about when parent and child
      belong to different ontology??
      */
    sq.prepare("select parentid,childid from subSumption join classes on subsumption.childid = classes.entityID where ontologyID= :oid");
    sq.bindValue(":oid",ontoID);
    sq.exec();
    while(sq.next())
    {
        int p_id = sq.value(0).toInt();
        int c_id = sq.value(1).toInt();
        subs.append(QPair<int,int> (p_id,c_id));
    }
    return subs;
}

QList<QPair<int,int> > OntologyDB::getAllDisjointClasses(int ontoID)
{
    QList<QPair<int,int> > disjoints;
    if(!db.isOpen())return disjoints;

    QSqlQuery sq;
    sq.prepare("select classID,disjointClassID from disjointClasses join classes on disjointClasses.disjointClassID = classes.entityID  where ontologyID = :oid");
    sq.bindValue(":oid",ontoID);
    sq.exec();

    while(sq.next())
    {
        int c_id = sq.value(0).toInt();
        int d_id = sq.value(1).toInt();
        disjoints.append(QPair<int,int> (c_id,d_id));
    }
    return disjoints;
}

QList<QPair<int,int> > OntologyDB::getAllEquivalentClasses(int ontoID)
{
    QList<QPair<int,int> > equs;
    if(!db.isOpen())return equs;

    QSqlQuery sq;
    sq.prepare("select classID,equivalentClassID from equivalentClasses join classes on equivalentClasses.equivalentClassID = classes.entityID  where ontologyID = :oid");
    sq.bindValue(":oid",ontoID);
    sq.exec();

    while(sq.next())
    {
        int c_id = sq.value(0).toInt();
        int e_id = sq.value(1).toInt();
        equs.append(QPair<int,int> (c_id,e_id));
    }

    return equs;
}

QList<QPair<int,QString> > OntologyDB::getAllAnonymousSubClasses(int ontoID)
{
    QList<QPair<int,QString> > subs;
    if(!db.isOpen())return subs;

    QSqlQuery sq;
    sq.prepare("select parentID,anonymousExpression from subsumption join anonymousclasses, entities  on subsumption.childid = anonymousclasses.entityID  and entities.entityid = anonymousclasses.entityID where ontologyID = :oid");
    sq.bindValue(":oid",ontoID);
    sq.exec();

    while(sq.next())
    {
        int c_id = sq.value(0).toInt();
        QString str = sq.value(1).toString();
        subs.append(QPair<int,QString> (c_id,str));
    }

    return subs;
}

QList<QPair<int,QString> > OntologyDB::getAllAnonymousSuperClasses(int ontoID)
{
    QList<QPair<int,QString> > supers;
    if(!db.isOpen())return supers;

    QSqlQuery sq;
    sq.prepare("select childID,anonymousExpression from subsumption join anonymousclasses, entities  on subsumption.parentid = anonymousclasses.entityID  and entities.entityid = anonymousclasses.entityID where ontologyID = :oid");
    sq.bindValue(":oid",ontoID);
    sq.exec();

    while(sq.next())
    {
        int c_id = sq.value(0).toInt();
        QString str = sq.value(1).toString();
        supers.append(QPair<int,QString> (c_id,str));
    }

    return supers;
}

QList<QPair<int,QString> > OntologyDB::getAllAnonymousDisjointClasses(int ontoID)
{
    QList<QPair<int,QString> > ds;
    if(!db.isOpen())return ds;

    QSqlQuery sq;
    sq.prepare("select classID,anonymousExpression from disjointClasses join anonymousclasses, entities  on disjointClasses.disjointClassID = anonymousclasses.entityID  and entities.entityid = anonymousclasses.entityID where ontologyID = :oid");
    sq.bindValue(":oid",ontoID);
    sq.exec();

    while(sq.next())
    {
        int c_id = sq.value(0).toInt();
        QString str = sq.value(1).toString();
        ds.append(QPair<int,QString> (c_id,str));
    }

    return ds;
}

QList<QPair<int,QString> > OntologyDB::getAllAnonymousEquivalentClasses(int ontoID)
{
    QList<QPair<int,QString> > equs;
    if(!db.isOpen())return equs;

    QSqlQuery sq;

    sq.prepare("select classID,anonymousExpression from equivalentClasses join anonymousclasses, entities  on equivalentClasses.equivalentClassID = anonymousclasses.entityID  and entities.entityid = anonymousclasses.entityID where ontologyID = :oid");
    sq.bindValue(":oid",ontoID);
    sq.exec();

    while(sq.next())
    {
        int c_id = sq.value(0).toInt();
        QString str = sq.value(1).toString();
        equs.append(QPair<int,QString> (c_id,str));
    }

    return equs;
}
