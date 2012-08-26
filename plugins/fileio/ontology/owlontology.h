#ifndef OWLONTOLOGY_H
#define OWLONTOLOGY_H
#include <owlclass.h>
#include <owlproperty.h>
#include <owlindividual.h>
#include <ontoclass.h>
#include <ontoindividual.h>
#include <ontoproperty.h>
#include <widgets/detaildockwidget.h>
#include <widgets/zoomdockwidget.h>
#include <widgets/searchdockwidget.h>
#include <widgets/filterdockwidget.h>
#include <widgets/historydockwidget.h>
#include <widgets/informationboxdockwidget.h>
#include <widgets/shownodesdockwidget.h>
#include <widgets/detailinfodockwidget.h>
#include <QtGui>
#include <owlentity.h>
#include <ontologydb.h>

class OwlOntology:public QObject
{
    Q_OBJECT
signals:
    void clickedClass(QString);
    void hoverEnterClass(QString);
    void hoverLeaveClass(QString);
    void loading(QString);
    void savingInterests(QString);
    void loadHistory(int);
public slots:
    void ontoclass_clicked(OntologyClassShape * classshape);
    void ontoclass_doubleclicked(OntologyClassShape * classshape);
    void ontoclass_rightclicked(OntologyClassShape * classshape);
    void ontoclass_hoverEnter(QString shortname);
    void ontoclass_hoverLeave(QString shortname);

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
    QMainWindow * appmainwindow;
    Canvas * maincanvas;
    DetailDockWidget * equclasswid;
//    ZoomDockWidget * zoomdwgt;
//    FilterDockWidget * filterdwgt;
//    HistoryDockWidget * historydwgt;
//    SearchDockWidget * searchdwgt;
//    InformationBoxDockWidget *infoboxdwgt;
//    ShowNodesDockWidget * typedwgt;
//    DetailInfoDockWidget * deatildwgt;

    OntologyDB * db;
    int ontologyID;
    QString ontologyname;
    const QFileInfo * ontologyfile;
    QString owlnamespace;
    QString ontoInfo;
    QString classInfo;
    QString individualInfo;
    QString propertyInfo;
    QList<OwlClass *> classes;
    QList<OwlIndividual *> individuals;
    QList<OwlProperty *> properties;
    QList<OwlClass *> searchedClasses;
    QList<OwlIndividual *> searchedIndividuals;
    QList<OwlProperty *> searchedProperties;
    QList<OwlClass *> dClasses;

    int currentfocusedclassidx;

    //methods
//    OwlOntology(Canvas * canvas,QMainWindow *mainwin);
    OwlOntology(Canvas * canvas,QMainWindow *mainwin,DetailDockWidget * equwid);

    int getIndexOfIndividuals(QString shortname);
    int getIndexOfIndividualsByURI(QString URI);
    int getIndexOfClasses(QString shortname);
    int getIndexOfClassesByURI(QString URI);
    int getIndexOfProperties(QString shortname);
    int getIndexOfPropertiesByURI(QString URI);

    void loadontology(const QFileInfo& fileInfo);
    void loadontologyFromDB(const QFileInfo& fileInfo);
    void loadontologyFromDBOptimized(const QFileInfo& fileInfo);

    void drawClassView(Canvas *canvas);
    void drawIndividualView(Canvas *canvas);
    void drawPropertyView(Canvas *canvas);

    void drawClassOverview(Canvas *canvas);

    void removeIndividualView(Canvas *canvas);
    void removeClassView(Canvas *canvas);

    QString toQString();

    //methods to get the equivalent class representation and view
    QString getFormula(QString qstr);
    QList<QString> splitFormula(QString str);
    ShapeObj * drawEquivalentClass(QString str,Canvas *canvas);
    void drawLogicalView(Canvas *canvas);

    QString getOntoInfo();
    QString getClassInfo(OwlClass *selectedClass);
    QString getIndividualInfo(OwlIndividual *selectedIndividual);
    QString getPropertyInfo(OwlProperty *selectedProperty);

    QList<OwlClass *> getOwlClassByName(QString name);
    QList<OwlIndividual *> getOwlIndividualByName(QString name);
    QList<OwlProperty *> getOwlPropertyByName(QString name);
    QList<OwlProperty *> getOwlDataPropertyByName(QString name);
    QList<OwlProperty *> getOwlObjectPropertyByName(QString name);
    void getEntityByText(QString text);
    OwlClass* getOneClassByName(QString name);
    QList<OwlClass *> getCurrentOwlClassByName(QString name);
    void emitLoadhistory(int ontoID);
};

#endif // OWLONTOLOGY_H
