#include "owlontology.h"

#include "libdunnartcanvas/connector.h"
#include "libdunnartcanvas/pluginshapefactory.h"

#include <java_magic.h>
#include <edu_monash_infotech_OWLAPIWrapper.h>
#include <iostream>
#include <stack>
#include <libdunnartcanvas/canvas.h>
#include <owlclass.h>
#include <owlproperty.h>
#include <owlindividual.h>
#include <ontoclass.h>
#include <ontoindividual.h>
#include <ontoproperty.h>

#include <ontologydb.h>
#include <widgets/detailvisualizationdockwidget.h>

using namespace dunnart;
using namespace std;

//OwlOntology::OwlOntology(Canvas *canvas, QMainWindow *mainwin)
OwlOntology::OwlOntology(Canvas *canvas, QMainWindow *mainwin, DetailDockWidget *equwid)
{
    this->maincanvas = canvas;
    this->currentfocusedclassidx = -1;
    this->appmainwindow = mainwin;
    this->equclasswid = equwid;

//    wid = new DetailDockWidget();
//    this->appmainwindow->addDockWidget(Qt::LeftDockWidgetArea,wid);
//    wid->setWindowTitle("Equivalent Class");
//    wid->show();

//    //////////////need canvasview to initialize widgets///////////////////
//    zoomdwgt = new ZoomDockWidget();
//    this->appmainwindow->addDockWidget(Qt::BottomDockWidgetArea,zoomdwgt);
//    zoomdwgt->show();

//    filterdwgt = new FilterDockWidget();
//    appmainwindow->addDockWidget(Qt::BottomDockWidgetArea,filterdwgt);
//    filterdwgt->show();

//    historydwgt = new HistoryDockWidget();
//    appmainwindow->addDockWidget(Qt::RightDockWidgetArea,historydwgt);
//    historydwgt->show();

//    searchdwgt = new SearchDockWidget();
//    appmainwindow->addDockWidget(Qt::RightDockWidgetArea,searchdwgt);
//    searchdwgt->show();

//    infoboxdwgt = new InformationBoxDockWidget();
//    appmainwindow->addDockWidget(Qt::RightDockWidgetArea,infoboxdwgt);
//    infoboxdwgt->show();

//    typedwgt = new ShowNodesDockWidget;
//    appmainwindow->addDockWidget(Qt::BottomDockWidgetArea,typedwgt);
//    typedwgt->show();

//    //temp TODO create new widget (QListWidget)
//    DetailInfoDockWidget * deatildwgt = new DetailInfoDockWidget();
//    appmainwindow->addDockWidget(Qt::LeftDockWidgetArea,deatildwgt);
//    deatildwgt->show();

    //TODO restore position of widgets--doesn't work right now, may need to restore them when lunach dunnart???
//    appmainwindow->restoreDockWidget(zoomdwgt);
}

/** TODO List:
1. --all URI name ---only one namespace!!!
2. --prefix---only one namespace!!!
3. --properties --done
4. --about Thing?
5. --(done) Did not deal with the -1 error when use getIndexOfClasses(),getIndexOfIndividuals(),getIndexOfProperties()
6. --(done) drawEquivalentClass() and getFormula() has not fully covered all the expressions
7. link different views
*/

//const
const QColor OwlOntology::CLASS_SHAPE_COLOR = OwlClass::CLASS_SHAPE_COLOR;
const QColor OwlOntology::INDIVIDUAL_SHAPE_COLOR = QColor(238,130,238);
const QColor OwlOntology::PROPERTY_SHAPE_COLOR = QColor(143,188,143);

const QColor OwlOntology::CLASS_CONNECTOR_COLOR = QColor("blue");
const QColor OwlOntology::INDIVIDUAL_CONNECTOR_COLOR = QColor("purple");
const QColor OwlOntology::PROPERTY_CONNECT_TO_CLASS_COLOR = QColor("yellow");
const QColor OwlOntology::PROPERTY_CONNECTOR_COLOR = QColor("green");

//get index of individuals by its shortname
int OwlOntology::getIndexOfIndividuals(QString shortname)
{
    for(int i=0;i<individuals.length();i++)
    {
        if(individuals[i]->shortname.toLower() == shortname.toLower()) return i;
    }
    return -1;
}

//get index of classes by its shortname
int OwlOntology::getIndexOfClasses(QString shortname)
{
    for(int i=0;i<classes.length();i++)
    {
        if(classes[i]->shortname.toLower() == shortname.toLower()) return i;
    }
    return -1;
}

//get index of properties by its shortname
int OwlOntology::getIndexOfProperties(QString shortname)
{
    for(int i=0;i<properties.length();i++)
    {
        if(properties[i]->shortname.toLower() == shortname.toLower()) return i;
    }
    return -1;
}

//load ontology from database
void OwlOntology::loadontologyFromDB(const QFileInfo &fileInfo)
{
    QString filename = fileInfo.absoluteFilePath();
    this->ontologyname = fileInfo.absoluteFilePath();
    this->ontologyfile = &fileInfo;

    OntologyDB * db = new OntologyDB();
    db->openDB();

    //get ontology ID
    this->ontologyID = db->getOntologyID(filename);
    cout<<this->ontologyID<<endl;
    //get namespace for the URI
    this->owlnamespace = db->getOntologyNamespace(filename);
    cout<<owlnamespace.toStdString()<<endl;
    //get all individuals
    QList<QString> idvs = db->getAllIndividualNames(this->ontologyID);
    for(int i=0;i<idvs.size();i++)
    {
        //set individual name
//        OwlIndividual * tmpindividual = new OwlIndividual();
//        tmpindividual->shortname=QString(owlindividuals[i]->toString());
//        tmpindividual->URI="<" + owlnamespace + tmpindividual->shortname + ">";

//        //create shape
//        tmpindividual->shape = new OntologyIndividualShape();
//        tmpindividual->shape->setIdString(tmpindividual->shortname);
//        tmpindividual->shape->setLabel(tmpindividual->shortname);
//        tmpindividual->shape->setToolTip(tmpindividual->URI);
//        tmpindividual->shape->setSize(QSizeF(150,20));
//        tmpindividual->shape->setFillColour(this->INDIVIDUAL_SHAPE_COLOR);


//        //append tmpindividual to list
//        this->individuals.append(tmpindividual);
    }


}

//load ontology using owlapi via OWLAPIWrapper
void OwlOntology::loadontology(const QFileInfo& fileInfo)
{
    //init JVM
    initJavaWrapper(0,NULL);
    //init OWLAPIWrapper class
    edu::monash::infotech::OWLAPIWrapper * wp = new edu::monash::infotech::OWLAPIWrapper();
    //load owl file
    QString filename = fileInfo.absoluteFilePath();
    cout<<filename.toStdString()<<"()()()()()()"<<endl;
    this->ontologyname = fileInfo.absoluteFilePath();
    this->ontologyfile = &fileInfo;
    wp->loadOntologyFile(filename.toUtf8().constData());

    /** get owl namespace (Warn: only one namespace was handled!) **/
    //get namespace for the URI
    owlnamespace = wp->getDefaultNameSpace();

    //get all individuals
    JavaObjectArray *resGetAllIndividuals = wp->getAllIndividuals();
    java::lang::String ** owlindividuals = (java::lang::String **)resGetAllIndividuals->getArrayData();
    for(int i=0;i<resGetAllIndividuals->getArrayLength();i++)
    {
        cout<<owlindividuals[i]->toString()<<endl;
        //set individual name
        OwlIndividual * tmpindividual = new OwlIndividual();
        tmpindividual->shortname=QString(owlindividuals[i]->toString());
        tmpindividual->URI="<" + owlnamespace + tmpindividual->shortname + ">";

        //create shape
        tmpindividual->shape = new OntologyIndividualShape();
        tmpindividual->shape->setIdString(tmpindividual->shortname);
        tmpindividual->shape->setLabel(tmpindividual->shortname);
        tmpindividual->shape->setToolTip(tmpindividual->URI);
        tmpindividual->shape->setSize(QSizeF(150,20));
        tmpindividual->shape->setFillColour(this->INDIVIDUAL_SHAPE_COLOR);


        //append tmpindividual to list
        this->individuals.append(tmpindividual);
    }

    //get all ontology classes from JVM
    JavaObjectArray *resGetAllOWLClasses = wp->getAllOWLClasses();
    java::lang::String ** owlclasses = (java::lang::String **)resGetAllOWLClasses->getArrayData();
    for(int i=0;i<resGetAllOWLClasses->getArrayLength();i++)
    {

        //set class name (???prefix,short,full name???)
        OwlClass * tmpclass=new OwlClass();
        tmpclass->shortname=QString(owlclasses[i]->toString());
        tmpclass->URI = "<" + owlnamespace + tmpclass->shortname + ">";

        //create shape
        tmpclass->shape = new OntologyClassShape();
        tmpclass->shape->setIdString(tmpclass->shortname);
        tmpclass->shape->setToolTip(tmpclass->URI);
        tmpclass->shape->setPosAndSize(QPointF(0,i*25),QSizeF(150,20));
        tmpclass->shape->setMyLabel(tmpclass->shortname);
        tmpclass->shape->setLabelByLevels(1,tmpclass->shortname); //set level 1 label
        tmpclass->shape->setFillColour(this->CLASS_SHAPE_COLOR);

        //connect signals
        connect(tmpclass->shape,SIGNAL(myclick(OntologyClassShape*)),this,SLOT(ontoclass_clicked(OntologyClassShape*)));
        connect(tmpclass->shape,SIGNAL(myDoubleClick(OntologyClassShape*)),this,SLOT(ontoclass_doubleclicked(OntologyClassShape*)));
        connect(tmpclass->shape,SIGNAL(myRightClick(OntologyClassShape*)),this,SLOT(ontoclass_rightclicked(OntologyClassShape*)));


        //get equivalent class (Warn!!! only 1 or more???)
        QString tmpstr = QString(wp->getEquivalentClasses(tmpclass->shortname.toLocal8Bit().data()));
        tmpclass->equivalentclass = tmpstr;
        tmpclass->shape->setLabelByLevels(6,"[EQU]:"+ this->getFormula(tmpstr)); //set level 6 label

        //append tmpclass to list
        this->classes.append(tmpclass);
    }

    //get and set the subclasses, superclasses, disjointclasses and individuals of classes
    for(int i=0;i<classes.length();i++)
    {
        //get&set subclasses
        QString substr = "[SUB]:"; //for level 2 label
        JavaObjectArray *resGetSubClasses = wp->getSubClasses(owlclasses[i]->toString());
        if(resGetSubClasses!=NULL){
            java::lang::String ** owlsubclasses = (java::lang::String **)resGetSubClasses->getArrayData();

            for(int j=0;j<resGetSubClasses->getArrayLength();j++){
                substr += QString(owlsubclasses[j]->toString())+" "; //add to level 2 label
                int idx = getIndexOfClasses(owlsubclasses[j]->toString());
                if(idx!=-1)classes[i]->subclasses<<classes[idx];

                //create connectors
                /** Do not create connectors for "Thing" **/
                if(classes[i]->shortname.toLower()!="thing")
                {
                    Connector * conn = new Connector();
                    conn->initWithConnection(classes[idx]->shape,classes[i]->shape);
                    conn->setDirected(true);
                    conn->setColour(CLASS_CONNECTOR_COLOR);

                    classes[i]->classesconnectors<<conn;
                    classes[idx]->classesconnectors<<conn;
                }
            }            
        }
        classes[i]->shape->setLabelByLevels(3,substr); //set level 3 label

        //get&set superclasses
        QString supstr= "[SUP]:";
        JavaObjectArray *resGetSuperClasses = wp->getSuperClasses(owlclasses[i]->toString());
        if(resGetSuperClasses!=NULL){
            java::lang::String ** owlsuperclasses = (java::lang::String **)resGetSuperClasses->getArrayData();
            for(int j=0;j<resGetSuperClasses->getArrayLength();j++){
                supstr += QString(owlsuperclasses[j]->toString())+" "; //add to level 3 label
                int idx = getIndexOfClasses(owlsuperclasses[j]->toString());
                if(idx!=-1)classes[i]->superclasses<<classes[idx];
            }            
        }
        classes[i]->shape->setLabelByLevels(4,supstr); //set level 4 label

        //get&set disjointclasses
        QString disstr= "[DIS]:";
        JavaObjectArray *resGetDisjointClasses = wp->getDisjointClasses(owlclasses[i]->toString());
        if(resGetDisjointClasses!=NULL){
            java::lang::String ** owldisjointclasses = (java::lang::String **)resGetDisjointClasses->getArrayData();
            for(int j=0;j<resGetDisjointClasses->getArrayLength();j++){
                disstr += QString(owldisjointclasses[j]->toString())+" "; //add to level 4 label
                int idx = getIndexOfClasses(owldisjointclasses[j]->toString());
                if(idx!=-1)classes[i]->disjointclasses<<classes[idx];
            }
        }
        classes[i]->shape->setLabelByLevels(5,disstr); //set level 5 label

        //get&set individuals
        QString indstr = "[IND]:";
        JavaObjectArray *resGetIndividuals = wp->getIndividuals(owlclasses[i]->toString());
        if(resGetIndividuals!=NULL){
            java::lang::String ** owlclassindividuals = (java::lang::String **)resGetIndividuals->getArrayData();
            for(int j=0;j<resGetIndividuals->getArrayLength();j++){
                indstr += QString(owlclassindividuals[j]->toString())+ " "; //add to level 2 label
                int idx = getIndexOfIndividuals(owlclassindividuals[j]->toString());
                //if found the individual in the list
                if(idx!=-1){
                    //add this class[i] to individual's owner classes list
                    this->individuals[idx]->ownerclasses.append(classes[i]->shortname);
                    //add individuals[ind] to class[i] individuals list
                    classes[i]->individuals<<this->individuals[idx];
                    //create connectors
                    Connector * conn = new Connector();
                    conn->initWithConnection(individuals[idx]->shape, classes[i]->shape);
                    conn->setDirected(true);
                    conn->setColour(this->INDIVIDUAL_CONNECTOR_COLOR);

                    classes[i]->individualconnectors<<conn;
                    individuals[idx]->classesconnectors<<conn;
                }
            }            
        }
        classes[i]->shape->setLabelByLevels(2,indstr); //set level 2 label
    }

    //get all ontology properties name and type encoded string from JVM
    JavaObjectArray *resGetAllPropertiesNameAndSubType = wp->getAllPropertiesNameAndSubType();
    if(resGetAllPropertiesNameAndSubType!=NULL){
        java::lang::String ** owlproperties = (java::lang::String **)resGetAllPropertiesNameAndSubType->getArrayData();
        for(int i=0;i<resGetAllPropertiesNameAndSubType->getArrayLength();i++){
            //set the property type, name, encoded string,and URI
            QString encodedstr = QString(owlproperties[i]->toString());
            OwlProperty * tmpproperty = new OwlProperty();

            tmpproperty->encodedPropertyNameAndType = encodedstr;
            tmpproperty->shortname = tmpproperty->getPropertyShortNameByEncodedString(encodedstr);
            tmpproperty->URI = "<" + owlnamespace + tmpproperty->shortname + ">";
            tmpproperty->propertytype = tmpproperty->getPropertyTypeByEncodedString(encodedstr);
            //create shape for property
            tmpproperty->shape = new OntologyPropertyShape();
            tmpproperty->shape->setIdString(tmpproperty->encodedPropertyNameAndType);
            tmpproperty->shape->setLabel("["+tmpproperty->propertytype +"]\n" + tmpproperty->shortname);
            tmpproperty->shape->setToolTip(tmpproperty->URI);
            tmpproperty->shape->setPosAndSize(QPointF(0,i*40),QSizeF(200,35));
            tmpproperty->shape->setFillColour(this->PROPERTY_SHAPE_COLOR);

            //add to property list
            this->properties.append(tmpproperty);
        }
    }

    //get the domains, ranges, sub/super/disjoint properties and make the internal connection of the pointers
    for(int i=0;i<this->properties.length();i++){
        //data or object property
        QString basictype="";
        if(properties[i]->isDataProperty())basictype=wp->ENTITIY_TYPE_DATA_PROPERTY;
        if(properties[i]->isObjectProperty())basictype=wp->ENTITIY_TYPE_OBJECT_PROPERTY;

        //domains -- get and connect the pointers of classes
        JavaObjectArray *resGetPropertyDomainsByName = wp->getPropertyDomainsByName(basictype.toLocal8Bit().data(),properties[i]->shortname.toLocal8Bit().data());
        if(resGetPropertyDomainsByName!=NULL){
            java::lang::String ** owlpropertydomains = (java::lang::String **)resGetPropertyDomainsByName->getArrayData();
            for(int j=0;j<resGetPropertyDomainsByName->getArrayLength();j++){
                QString domainname = owlpropertydomains[j]->toString();
                //deal with no domain
                if(domainname.trimmed()=="")continue;
                //get the domain class index
                int domainclassidx = this->getIndexOfClasses(domainname);
                //if found the class, insert the domain class pointer
                if(domainclassidx!=-1){
                    properties[i]->domains<<classes[domainclassidx];
                    classes[domainclassidx]->propertydomains<<properties[i]->shortname;
                }
            }
        }

        //ranges -- only get the string since DataProperty does not has range of classes.
        //ObjectProperty ranges are the class shortnames. DataProperty range is a datatype definition
        JavaObjectArray *resGetPropertyRangesByName = wp->getPropertyRangesByName(basictype.toLocal8Bit().data(),properties[i]->shortname.toLocal8Bit().data());
        if(resGetPropertyRangesByName!=NULL){
            java::lang::String ** owlpropertyranges = (java::lang::String **)resGetPropertyRangesByName->getArrayData();
            for(int j=0;j<resGetPropertyRangesByName->getArrayLength();j++){
                QString range = owlpropertyranges[j]->toString();
                if(range.trimmed()=="")continue;
                else {
                    properties[i]->ranges<<range;
                    if(properties[i]->isObjectProperty()){
                        int idx=getIndexOfClasses(range);
                        if(idx!=-1)classes[idx]->propertyranges<<properties[i]->shortname;
                    }
                }
            }
        }
        //sub properties
        JavaObjectArray *resGetSubProperites = wp->getSubProperites(basictype.toLocal8Bit().data(),properties[i]->shortname.toLocal8Bit().data());
        if(resGetSubProperites!=NULL){
            java::lang::String ** owlsubproperties = (java::lang::String **)resGetSubProperites->getArrayData();
            for(int j=0;j<resGetSubProperites->getArrayLength();j++){
                int idx = getIndexOfProperties(owlsubproperties[j]->toString());
                //if found, add to list
                if(idx!=-1)properties[i]->subproperties<<properties[idx];
            }
        }
        //super properties
        JavaObjectArray *resGetSuperProperites = wp->getSuperProperites(basictype.toLocal8Bit().data(),properties[i]->shortname.toLocal8Bit().data());
        if(resGetSuperProperites!=NULL){
            java::lang::String ** owlsuperproperties = (java::lang::String **)resGetSuperProperites->getArrayData();
            for(int j=0;j<resGetSuperProperites->getArrayLength();j++){
                int idx = getIndexOfProperties(owlsuperproperties[j]->toString());
                //if found, add to list
                if(idx!=-1)properties[i]->superproperties<<properties[idx];
            }
        }
        //disjoint properties
        JavaObjectArray *resGetDisjointProperites = wp->getDisjointProperties(basictype.toLocal8Bit().data(),properties[i]->shortname.toLocal8Bit().data());
        if(resGetDisjointProperites!=NULL){
            java::lang::String ** owldisjointproperties = (java::lang::String **)resGetDisjointProperites->getArrayData();
            for(int j=0;j<resGetDisjointProperites->getArrayLength();j++){
                int idx = getIndexOfProperties(owldisjointproperties[j]->toString());
                //if found, add to list
                if(idx!=-1)properties[i]->disjointproperties<<properties[idx];
            }
        }
    }

    /**
      Check "Thing" Class, if it does not exist, create one and link it.
      Then set the superclass of classes without superclasses to "Thing".
      **/
    int idxThing = this->getIndexOfClasses("Thing");
    if(idxThing==-1)
    {
        cout<<"Thing not found! Creating..."<<endl;
        OwlClass * thingClass = new OwlClass();
        thingClass->shortname = "Thing";
        thingClass->URI ="owl:Thing";
        thingClass->shape = new OntologyClassShape();
        thingClass->shape->setIdString(thingClass->shortname);
        thingClass->shape->setToolTip(thingClass->URI);
        thingClass->shape->setPosAndSize(QPointF(200,0),QSizeF(150,20));
        thingClass->shape->setMyLabel(thingClass->shortname);
        thingClass->shape->setLabelByLevels(1,thingClass->shortname); //set level 1 label
        thingClass->shape->setFillColour(this->CLASS_SHAPE_COLOR);
        classes.append(thingClass);
        idxThing = classes.size()-1;
    }
    for(int i=0;i<classes.size();i++)
    {
        if(i!=idxThing&&classes[i]->superclasses.size()==0){
            classes[i]->superclasses.append(classes[idxThing]);
            classes[i]->shape->setLabelByLevels(4,"[SUP]:Thing");
            classes[idxThing]->subclasses.append(classes[i]);
        }
    }
    QString thingsub = "[SUB]:";
    for(int i=0;i<classes[idxThing]->subclasses.size();i++){
        thingsub +=classes[idxThing]->subclasses[i]->shortname+" ";
    }
    classes[idxThing]->shape->setLabelByLevels(3,thingsub);

    /** dealwith unmatched super/sub relation**/
    for(int i=0;i<classes.size();i++)
    {
        //classes[i]'s superclass does not has subclass(classes[i])
        //Warn:This needs to add the sub relation connector
        //Moreover, if the superclass is "Thing", do not create the connector
        for(int j=0;j<classes[i]->superclasses.size();j++)
        {
            if(!classes[i]->superclasses[j]->subclasses.contains(classes[i]))
            {
                classes[i]->superclasses[j]->subclasses.append(classes[i]);
                //set level label, add this subclass
                classes[i]->superclasses[j]->shape->levelLabels[2] += classes[i]->shortname+" ";
                //create connectors
                if(classes[i]->superclasses[j]->shortname.toLower()!="thing")
                {
                    Connector * conn = new Connector();
                    conn->initWithConnection(classes[i]->shape,classes[i]->superclasses[j]->shape);
                    conn->setDirected(true);
                    conn->setColour(CLASS_CONNECTOR_COLOR);

                    classes[i]->classesconnectors<<conn;
                    classes[i]->superclasses[j]->classesconnectors<<conn;
                }
            }
        }

        //classes[i]'s subclass does not has superclass(classes[i])
        //Since we only use the subclasses to draw the classview, so this does not need add connector
        for(int j=0;j<classes[i]->subclasses.size();j++)
        {
            if(!classes[i]->subclasses[j]->superclasses.contains(classes[i]))
            {
                classes[i]->subclasses[j]->superclasses.append(classes[i]);
                //set level label, add this superclass
                classes[i]->subclasses[j]->shape->levelLabels[3] += classes[i]->shortname+" ";
            }
        }
    }

//    cout<<"///////////get information of this ontology/////////////////"<<endl;
    this->getOntoInfo();
    //    emit(this->loading("111"));
//    cout<<"///////////get information of this ontology/////////////////"<<endl;
}

///////////get information of this ontology/////////////////
QString OwlOntology::getOntoInfo(){

    QString num_class="0";
    QString num_individual="0";
    QString num_property="0";
    num_class = num_class.setNum(this->classes.size());
    num_individual = num_individual.setNum(this->individuals.size());
    num_property = num_property.setNum(this->properties.size());

    this->ontoInfo.append("Name Space: "+this->owlnamespace+"\n");
    this->ontoInfo.append("Number of Classes: "+num_class+"\n");
    this->ontoInfo.append("Number of Individuals: "+num_individual+"\n");
    this->ontoInfo.append("Number of Properties: "+num_property+"\n");

    return this->ontoInfo;
}

//draw the ontology classes
void OwlOntology::drawClassView(Canvas *canvas)
{
    cout<<"Start drawing classes..."<<endl;
    //draw classes, check whether thing is a subclass of them
    bool issubthing=false;
    int idxthing=getIndexOfClasses("Thing");
    OwlClass * thingclass=new OwlClass();
    if(idxthing!=-1)thingclass=classes[idxthing];
    for(int i=0;i<classes.length();i++)
    {
        cout<<"Node "<<i<<". ";
        //check if "Thing" is one subclass
        if(classes[i]->subclasses.contains(thingclass))issubthing=true;
        //**** do not draw thing ****
        if(i!=idxthing)
            canvas->addItem(classes[i]->shape);       
    }
    //if "Thing" is a subclass, draw it
    if(issubthing)canvas->addItem(thingclass->shape);

    cout<<"\nStart drawing edges..."<<endl;
    //draw subclasses connections
    for(int i=0;i<classes.length();i++)
    {
        cout<<"\nedges of class["<<i<<"]("
            <<classes[i]->shortname.toStdString()<<"):"
            <<"total connectors="<<classes[i]->classesconnectors.size()<<endl;
        //**** do not draw thing's connectors ****
        if(i!=idxthing)
        {           
            for(int j=0;j<classes[i]->classesconnectors.size();j++)
            {   cout<<"<"<<j<<">";
                canvas->addItem(classes[i]->classesconnectors[j]);
            }
        }
    }

}

//draw the ontology individuals
void OwlOntology::drawIndividualView(Canvas *canvas)
{
    //draw individuals
    for(int i=0;i<individuals.length();i++)
    {
        canvas->addItem(individuals[i]->shape);
        //draw owner classes
        for(int j=0;j<individuals[i]->ownerclasses.length();j++)
        {
            int ownerclassidx = this->getIndexOfClasses(individuals[i]->ownerclasses[j]);
            if(ownerclassidx!=-1) canvas->addItem(this->classes[ownerclassidx]->shape);
        }
        //draw connectors
        for(int j=0;j<individuals[i]->classesconnectors.size();j++)
        {
            canvas->addItem(individuals[i]->classesconnectors[j]);
        }
    }
}

//draw the ontology properties
void OwlOntology::drawPropertyView(Canvas *canvas)
{
    Connector *conn;
    //draw properties
    for(int i=0;i<properties.length();i++){
        canvas->addItem(properties[i]->shape);
    }
    //draw domains, ranges, sub relations (super,disjoint not handled)
    for(int i=0;i<properties.length();i++){
        //domains
        for(int j=0;j<properties[i]->domains.length();j++)
        {
            //draw the domain class on the canvas(if it is duplicated, canvas will handle it?)
            canvas->addItem(properties[i]->domains[j]->shape);
            //draw a connection between domain->property
            conn = new Connector();
            conn->initWithConnection(properties[i]->domains[j]->shape, properties[i]->shape);
            canvas->addItem(conn);
            conn->setDirected(true);
            conn->setDotted(true);
            conn->setColour(this->PROPERTY_CONNECT_TO_CLASS_COLOR);
        }

        //ranges
        //dataproperty add a line to label
        if(properties[i]->isDataProperty()){
            QString lbl = properties[i]->shape->idString();
            //lbl += "\n--------------------";
            for(int j=0;j<properties[i]->ranges.length();j++)
            {
                lbl += "\n(" + properties[i]->ranges[j]+")";
            }
            properties[i]->shape->setSize(QSizeF(200,52.5));
            properties[i]->shape->setLabel(lbl);
        }
        //object property: add the range classes and connect them
        if(properties[i]->isObjectProperty()){
            for(int j=0;j<properties[i]->ranges.length();j++)
            {
                //draw the range class on the canvas(if it is duplicated, canvas will handle it?)
                int idx = this->getIndexOfClasses(properties[i]->ranges[j]);
                if(idx!=-1){
                    canvas->addItem(classes[idx]->shape);
                    //draw a connection between property->range classes
                    conn = new Connector();
                    conn->initWithConnection(properties[i]->shape, classes[idx]->shape);
                    canvas->addItem(conn);
                    conn->setDirected(true);
                    conn->setDotted(true);
                    conn->setColour(this->PROPERTY_CONNECT_TO_CLASS_COLOR);
                }
            }
        }
        //sub
        for(int j=0;j<properties[i]->subproperties.length();j++)
        {
            conn = new Connector();
            conn->initWithConnection(properties[i]->subproperties[j]->shape,properties[i]->shape);
            canvas->addItem(conn);
            conn->setDirected(true);
            conn->setColour(this->PROPERTY_CONNECTOR_COLOR);
        }
        //super, disjoint -- Need to deal with?
    }
}

//draw the ontology classes
void OwlOntology::drawClassOverview(Canvas *canvas)
{

}

//String output
QString OwlOntology::toQString()
{
    QString res;
    //output name
    res.append("============= Ontology : ");
    res.append(ontologyname);
    res.append(" ===============");

    //output classes
    res.append("\nOntology Classes :\n");
    for(int i=0;i<classes.length();i++)res.append(classes[i]->toQString());

    //output individuals
    res.append("\nOntology individuals :\n");
    for(int i=0;i<individuals.length();i++)res.append(individuals[i]->toQString());

    //output properties
    res.append("\nOntology properties :\n");
    for(int i=0;i<properties.length();i++)res.append(properties[i]->toQString());
    return res;
}


//methods to get the logical representation.
QList<QString> OwlOntology::splitFormula(QString str)
{
    QList<QString> res;
    int s = 0;
    int e;
    int count = -1;
    for (int i = 0; i < str.length(); i++) {
        if (str.at(i) == '(' || str.at(i) == '<') {
            if (count == -1) {
                count = 1;
            } else {
                count++;
            }
        }
        if (str.at(i) == ')' || str.at(i) == '>') {
            count--;
        }

        if ((str.at(i) == ' ' || i == str.length() - 1) && count == -1) {
            e = i + 1;
            if (s != e && str.at(s) != ' ') {
                QString tmp = str.mid(s, e-s).trimmed();
                res.append(tmp);
            }

            s = i + 1;
        }
        if (count == 0) {
            e = i + 1;
            QString tmp = str.mid(s, e-s).trimmed();
            res.append(tmp);
            s = i + 1;
            count = -1;
        }
    }
    return res;
}

QString OwlOntology::getFormula(QString qstr)
{
    if(qstr.trimmed()=="")return "";
    /** Need to be verified all syntax!! **/

    QString r = "";

    int startpos=0;
    QString marker="";

    if(qstr.startsWith("Object")){
        startpos=6;
        marker="";

    }
    else if(qstr.startsWith("Data"))
    {
        startpos=4;
        marker="[D]";
    }
    else
    {
        startpos=0;
        marker="";
    }

    QString str = qstr.right(qstr.length()-startpos);
    //<> element

    if (str.startsWith("<"))
    {
        int i = str.indexOf("#",0);
        r = "<"+str.mid(i+1,str.length() - 2-i)+">";
    }

    //Syntax--both data and object
    else if (str.startsWith("OneOf"))
    {
        QString fstr = str.mid(6, str.length() - 7);
        QList<QString> substrs = splitFormula(fstr);
        r = marker + "OneOf("+getFormula(substrs.at(0));
        for (int i = 1; i < substrs.size(); i++) {
            r += " , " + getFormula(substrs.at(i));
        }
        r+=")";
    }

    else if (str.startsWith("IntersectionOf"))
    {
        QString fstr = str.mid(15, str.length() - 16);
        QList<QString> substrs = splitFormula(fstr);
        r = marker + "("+getFormula(substrs.at(0));
        for (int i = 1; i < substrs.size(); i++) {
            r += " AND " + getFormula(substrs.at(i));
        }
        r+=")";
    }

    else if (str.startsWith("UnionOf"))
    {
        QString fstr = str.mid(8, str.length() - 9);
        QList<QString> substrs = splitFormula(fstr);
        r = marker+"("+getFormula(substrs.at(0));
        for (int i = 1; i < substrs.size(); i++) {
            r += " OR " + getFormula(substrs.at(i));
        }
        r+=")";
    }

    else if (str.startsWith("ComplementOf"))
    {
        /** Need to be verified!! **/
        QString fstr = str.mid(13, str.length() - 14);
        QList<QString> substrs = splitFormula(fstr);
        r = marker+"NOT("+getFormula(substrs.at(0)) + ")";
    }

    else if (str.startsWith("AllValuesFrom"))
    {
        QString fstr = str.mid(14, str.length() - 15);
        QList<QString> substrs = splitFormula(fstr);
        r = "(" + getFormula(substrs.at(0)) +" "+marker+"ONLY " + getFormula(substrs.at(1)) +")";
    }

    else if (str.startsWith("SomeValuesFrom"))
    {
        QString fstr = str.mid(15, str.length() - 16);
        QList<QString> substrs = splitFormula(fstr);
        r = "(" + getFormula(substrs.at(0)) + " "+marker+"SOME " + getFormula(substrs.at(1)) +")";
    }

    else if (str.startsWith("HasValue"))
    {
        QString fstr = str.mid(9, str.length() - 10);
        QList<QString> substrs = splitFormula(fstr);
        r = "(" + getFormula(substrs.at(0)) + " "+marker+"VALUE " + getFormula(substrs.at(1)) +")";
    }

    else if (str.startsWith("ExactCardinality"))
    {
        QString fstr = str.mid(17, str.length() - 18);
        QList<QString> substrs = splitFormula(fstr);
        r = "(" + getFormula(substrs.at(1))+" "+marker+"EXACTLY " +getFormula(substrs.at(0)) + getFormula(substrs.at(2)) +")";
    }

    else if (str.startsWith("MinCardinality"))
    {
        QString fstr = str.mid(15, str.length() - 16);
        QList<QString> substrs = splitFormula(fstr);
        r = "(" + getFormula(substrs.at(1))+" "+marker+"MIN " +getFormula(substrs.at(0)) + getFormula(substrs.at(2)) +")";
    }

    else if (str.startsWith("MaxCardinality"))
    {
        QString fstr = str.mid(15, str.length() - 16);
        QList<QString> substrs = splitFormula(fstr);
        r = "(" + getFormula(substrs.at(1))+" "+marker+"MAX " +getFormula(substrs.at(0)) + getFormula(substrs.at(2)) +")";
    }

    //others
    else {
        r = "<"+str +">";
    }
    return r;
}

ShapeObj * OwlOntology::drawEquivalentClass(QString qstr,Canvas *canvas)
{
    ShapeObj * rshape=NULL;

    /** Need to be verified all syntax!! **/

    int startpos=0;
    QString marker="";

    if(qstr.startsWith("Object")){
        startpos=6;
        marker="[O]";

    }
    else if(qstr.startsWith("Data"))
    {
        startpos=4;
        marker="[D]";
    }
    else
    {
        startpos=0;
        marker="";
    }

    QString str = qstr.right(qstr.length()-startpos);

    //<> element ??? consider about multiple namespace!!!
    if (str.startsWith("<"))
    {
        int cidx = str.indexOf("#",0);
        QString sname = str.mid(cidx+1,str.length() - 2-cidx);

        ShapeObj * entityshape;

        int idx = -1;
        //not found entity type, check class
        if(idx==-1){
            idx=this->getIndexOfClasses(sname);
            if(idx != -1)
            {
                OntologyClassShape * classshape = new OntologyClassShape();
                classshape->setIdString(">"+classes[idx]->shortname);
                classshape->setToolTip(classes[idx]->URI);
                classshape->setSize(QSizeF(150,20));
                classshape->setMyLabel(classes[idx]->shortname);
                classshape->setFillColour(this->CLASS_SHAPE_COLOR);
                /** set level labels
                    1 shortname
                    2 individuals
                    3 sub
                    4 super
                    5 disjoint
                    6 equivalent
                **/
                for(int i=0;i<6;i++)
                    classshape->setLabelByLevels(i+1,classes[idx]->shape->levelLabels[i]);

                entityshape = classshape;
            }
        }

        //not class, check individual
        if(idx==-1){
            idx=this->getIndexOfIndividuals(sname);
            if(idx != -1)
            {
                OntologyIndividualShape * individualshape = new OntologyIndividualShape();
                individualshape->setIdString(">" + individuals[idx]->shortname);
                individualshape->setLabel(individuals[idx]->shortname);
                individualshape->setToolTip(individuals[idx]->URI);
                individualshape->setSize(QSizeF(150,20));
                individualshape->setFillColour(this->INDIVIDUAL_SHAPE_COLOR);

                entityshape = individualshape;
            }
        }

        //not class or individual, check properties
        if(idx==-1){
            idx=this->getIndexOfProperties(sname);
            if(idx != -1)
            {
                OntologyPropertyShape * propertyshape = new OntologyPropertyShape();
                propertyshape->setIdString(">"+properties[idx]->encodedPropertyNameAndType);
                propertyshape->setLabel("["+properties[idx]->propertytype +"]\n" + properties[idx]->shortname);
                propertyshape->setToolTip(properties[idx]->URI);
                propertyshape->setSize(QSizeF(200,35));
                propertyshape->setFillColour(this->PROPERTY_SHAPE_COLOR);

                entityshape = propertyshape;
            }
        }

        //not class, individual, or property
        if(idx==-1){
            entityshape = new OntologyClassShape();
            entityshape->setLabel(sname);
            entityshape->setFillColour(QColor("orange"));
        }
        entityshape->setSize(QSizeF(150,30));
        canvas->addItem(entityshape);
        rshape = entityshape;

    }

    //syntax -- both Object and Data
    else if (str.startsWith("OneOf"))
    {
        QString fstr = str.mid(6, str.length() - 7);
        QList<QString> substrs = splitFormula(fstr);

        ShapeObj * mshape = new RectangleShape();
        mshape->setLabel(marker + "OneOf");
        mshape->setSize(QSizeF(80,30));
        mshape->setFillColour(QColor("gray"));
        canvas->addItem(mshape);

        Connector *conn;
        for (int i = 0; i < substrs.size(); i++) {
            conn = new Connector();
            conn->initWithConnection(mshape,drawEquivalentClass(substrs.at(i),canvas));
            canvas->addItem(conn);
            conn->setDirected(true);
            conn->setColour(QColor("blue"));
        }
        rshape=mshape;

    }

    else if (str.startsWith("IntersectionOf")) {
        QString fstr = str.mid(15, str.length() - 16);
        QList<QString> substrs = splitFormula(fstr);

        ShapeObj * mshape = new RectangleShape();
        mshape->setLabel(marker+"AND");
        mshape->setSize(QSizeF(80,30));
        mshape->setFillColour(QColor("gray"));
        canvas->addItem(mshape);

        Connector *conn;
        for (int i = 0; i < substrs.size(); i++) {
            conn = new Connector();
            conn->initWithConnection(mshape,drawEquivalentClass(substrs.at(i),canvas));
            canvas->addItem(conn);
            conn->setDirected(true);
            conn->setColour(QColor("blue"));
        }
        rshape=mshape;
    }

    else if (str.startsWith("UnionOf"))
    {
        QString fstr = str.mid(8, str.length() - 9);
        QList<QString> substrs = splitFormula(fstr);

        ShapeObj * mshape = new RectangleShape();
        mshape->setLabel(marker+"OR");
        mshape->setSize(QSizeF(80,30));
        mshape->setFillColour(QColor("gray"));
        canvas->addItem(mshape);

        Connector *conn;
        for (int i = 0; i < substrs.size(); i++) {
            conn = new Connector();
            conn->initWithConnection(mshape,drawEquivalentClass(substrs.at(i),canvas));
            canvas->addItem(conn);
            conn->setDirected(true);
            conn->setColour(QColor("blue"));
        }
        rshape=mshape;
    }

    else if (str.startsWith("ComplementOf")){
        QString fstr = str.mid(13, str.length() - 14);
        QList<QString> substrs = splitFormula(fstr);

        ShapeObj * mshape = new RectangleShape();
        mshape->setLabel(marker+"NOT");
        mshape->setSize(QSizeF(80,30));
        mshape->setFillColour(QColor("gray"));
        canvas->addItem(mshape);

        Connector *conn;
        for (int i = 0; i < substrs.size(); i++) {
            conn = new Connector();
            conn->initWithConnection(mshape,drawEquivalentClass(substrs.at(i),canvas));
            canvas->addItem(conn);
            conn->setDirected(true);
            conn->setColour(QColor("blue"));
        }
        rshape=mshape;
    }

    else if (str.startsWith("AllValuesFrom")) {
        QString fstr = str.mid(14, str.length() - 15);
        QList<QString> substrs = splitFormula(fstr);

        ShapeObj * mshape = new RectangleShape();
        mshape->setLabel(marker+"ONLY");
        mshape->setSize(QSizeF(80,30));
        mshape->setFillColour(QColor("gray"));
        canvas->addItem(mshape);

        ShapeObj * shape1 = drawEquivalentClass(substrs.at(0),canvas);
        ShapeObj * shape2 = drawEquivalentClass(substrs.at(1),canvas);
        Connector *conn;
        conn = new Connector();
        conn->initWithConnection(mshape,shape1);
        canvas->addItem(conn);
        conn->setDirected(true);
        conn->setColour(QColor("blue"));

        conn = new Connector();
        conn->initWithConnection(mshape,shape2);
        canvas->addItem(conn);
        conn->setLabel("Only");
        conn->setDirected(true);
        conn->setColour(QColor("blue"));

        rshape = mshape;
    }

    else if (str.startsWith("SomeValuesFrom")) {
        QString fstr = str.mid(15, str.length() - 16);
        QList<QString> substrs = splitFormula(fstr);

        ShapeObj * mshape = new RectangleShape();
        mshape->setLabel(marker+"SOME");
        mshape->setSize(QSizeF(80,30));
        mshape->setFillColour(QColor("gray"));
        canvas->addItem(mshape);

        ShapeObj * shape1 = drawEquivalentClass(substrs.at(0),canvas);
        ShapeObj * shape2 = drawEquivalentClass(substrs.at(1),canvas);
        Connector *conn;
        conn = new Connector();
        conn->initWithConnection(mshape,shape1);
        canvas->addItem(conn);
        conn->setDirected(true);
        conn->setColour(QColor("blue"));

        conn = new Connector();
        conn->initWithConnection(mshape,shape2);
        canvas->addItem(conn);
        conn->setLabel("Some");
        conn->setDirected(true);
        conn->setColour(QColor("blue"));

        rshape = mshape;
    }

    else if (str.startsWith("HasValue")) {
        QString fstr = str.mid(9, str.length() - 10);
        QList<QString> substrs = splitFormula(fstr);

        ShapeObj * mshape = new RectangleShape();
        mshape->setLabel(marker+"VALUE");
        mshape->setSize(QSizeF(80,30));
        mshape->setFillColour(QColor("gray"));
        canvas->addItem(mshape);

        ShapeObj * shape1 = drawEquivalentClass(substrs.at(0),canvas);
        ShapeObj * shape2 = drawEquivalentClass(substrs.at(1),canvas);
        Connector *conn;
        conn = new Connector();
        conn->initWithConnection(mshape,shape1);
        canvas->addItem(conn);
        conn->setDirected(true);
        conn->setColour(QColor("blue"));

        conn = new Connector();
        conn->initWithConnection(mshape,shape2);
        canvas->addItem(conn);
        conn->setLabel("Has");
        conn->setDirected(true);
        conn->setColour(QColor("blue"));

        rshape = mshape;
    }

    else if (str.startsWith("ExactCardinality")) {
        QString fstr = str.mid(17, str.length() - 18);
        QList<QString> substrs = splitFormula(fstr);

        ShapeObj * mshape = new RectangleShape();
        mshape->setLabel(marker+"EXACTLY");
        mshape->setSize(QSizeF(80,30));
        mshape->setFillColour(QColor("gray"));
        canvas->addItem(mshape);

        ShapeObj * shape1 = drawEquivalentClass(substrs.at(1),canvas);
        ShapeObj * shape2 = drawEquivalentClass(substrs.at(2),canvas);

        Connector *conn;
        conn = new Connector();
        conn->initWithConnection(mshape,shape1);
        canvas->addItem(conn);
        conn->setDirected(true);
        conn->setColour(QColor("blue"));

        conn = new Connector();
        conn->initWithConnection(mshape,shape2);
        canvas->addItem(conn);
        conn->setDirected(true);
        conn->setLabel("Exactly " + substrs.at(0));
        conn->setColour(QColor("blue"));

        rshape = mshape;
    }

    else if (str.startsWith("MinCardinality")) {
        QString fstr = str.mid(15, str.length() - 16);
        QList<QString> substrs = splitFormula(fstr);

        ShapeObj * mshape = new RectangleShape();
        mshape->setLabel(marker+"MIN");
        mshape->setSize(QSizeF(80,30));
        mshape->setFillColour(QColor("gray"));
        canvas->addItem(mshape);

        ShapeObj * shape1 = drawEquivalentClass(substrs.at(1),canvas);
        ShapeObj * shape2 = drawEquivalentClass(substrs.at(2),canvas);

        Connector *conn;
        conn = new Connector();
        conn->initWithConnection(mshape,shape1);
        canvas->addItem(conn);
        conn->setDirected(true);
        conn->setColour(QColor("blue"));

        conn = new Connector();
        conn->initWithConnection(mshape,shape2);
        canvas->addItem(conn);
        conn->setDirected(true);
        conn->setLabel("Min " + substrs.at(0));
        conn->setColour(QColor("blue"));

        rshape = mshape;
    }

    else if (str.startsWith("MaxCardinality")) {
        QString fstr = str.mid(15, str.length() - 16);
        QList<QString> substrs = splitFormula(fstr);

        ShapeObj * mshape = new RectangleShape();
        mshape->setLabel(marker+"MAX");
        mshape->setSize(QSizeF(80,30));
        mshape->setFillColour(QColor("gray"));
        canvas->addItem(mshape);

        ShapeObj * shape1 = drawEquivalentClass(substrs.at(1),canvas);
        ShapeObj * shape2 = drawEquivalentClass(substrs.at(2),canvas);

        Connector *conn;
        conn = new Connector();
        conn->initWithConnection(mshape,shape1);
        canvas->addItem(conn);
        conn->setDirected(true);
        conn->setColour(QColor("blue"));

        conn = new Connector();
        conn->initWithConnection(mshape,shape2);
        canvas->addItem(conn);
        conn->setDirected(true);
        conn->setLabel("Max " + substrs.at(0));
        conn->setColour(QColor("blue"));

        rshape = mshape;
    }

    //others
    else {
        QString sname = str;
        ShapeObj * entityshape = new RectangleShape();
        entityshape->setLabel(sname);
        entityshape->setSize(QSizeF(150,30));
        entityshape->setFillColour(QColor("orange"));
        canvas->addItem(entityshape);
        rshape = entityshape;
    }

    if(rshape!=NULL)rshape->setToolTip(getFormula(qstr));
    return rshape;
}

void OwlOntology::drawLogicalView(Canvas *canvas){
    for(int i=0;i<classes.size();i++){
        if(classes[i]->equivalentclass.trimmed()!=""){
            ShapeObj * tp;

//            tp = new RectangleShape();
//            tp->setLabel(classes[i]->shortname);
//            tp->setFillColour(QColor("pink"));
//            tp->setSize(QSizeF(150,30));

             tp= classes[i]->shape;

            tp->setToolTip(getFormula(classes[i]->equivalentclass));
            canvas->addItem(tp);


            ShapeObj * lgcview = drawEquivalentClass(classes[i]->equivalentclass,canvas);
            Connector * conn = new Connector();
            conn->initWithConnection(tp,lgcview);
            conn->setColour(QColor("black"));
            conn->setDirected(true);
            canvas->addItem(conn);

        }
    }
}

//get information of one class
QString OwlOntology::getClassInfo(OwlClass *selectedClass){

    this->classInfo.clear();

    QString num_subclass="0";
    QString num_superclass="0";
    QString num_disjointclass="0";
    QString num_individual="0";
    num_subclass = num_subclass.setNum(selectedClass->subclasses.size());
    num_superclass = num_superclass.setNum(selectedClass->superclasses.size());
    num_disjointclass = num_disjointclass.setNum(selectedClass->disjointclasses.size());
    num_individual = num_individual.setNum(selectedClass->individuals.size());

    this->classInfo.append("Class Name: "+selectedClass->shortname+"\n");
    this->classInfo.append("URI: "+selectedClass->URI+"\n");
    this->classInfo.append("Number of Sub Classes: "+num_subclass+"\n");
    this->classInfo.append("Number of Super Classes: "+num_superclass+"\n");
    this->classInfo.append("Number of Disjoint Classes: "+num_disjointclass+"\n");
    this->classInfo.append("Number of Individuals: "+num_individual+"\n");

    if(selectedClass->equivalentclass.isNull() || selectedClass->equivalentclass.isEmpty()){

        this->classInfo.append("Has Equivalent Class: NO\n");
    }else{

        this->classInfo.append("Has Equivalent Class: YES\n");
    }

    return this->classInfo;
}


/** SLOTS to handle the shape signals **/
void OwlOntology::ontoclass_clicked(OntologyClassShape *classshape)
{
    if(this->currentfocusedclassidx!=-1)this->ontoclass_doubleclicked(classes[currentfocusedclassidx]->shape);
    int idx = this->getIndexOfClasses(classshape->idString());
    OwlClass *selectedClass = classes[idx];
    if(idx!=-1){
        classes[idx]->showIndividuals(this->maincanvas);
        classes[idx]->setFocused(true,this->maincanvas);
        this->maincanvas->fully_restart_graph_layout();
        this->currentfocusedclassidx = idx;
    }
    emit clickedClass(classes[idx]->shortname);
    cout << this->getClassInfo(selectedClass).toStdString();
    emit(this->loading(classshape->idString()));
}

void OwlOntology::ontoclass_doubleclicked(OntologyClassShape *classshape)
{
    int idx = this->getIndexOfClasses(classshape->idString());
    if(idx!=-1){
        classes[idx]->hideIndividuals(this->maincanvas);
        classes[idx]->setFocused(false,this->maincanvas);
        this->maincanvas->fully_restart_graph_layout();
    }
    this->currentfocusedclassidx = -1;
    emit(this->loading("OntologyInfor"));
}

void OwlOntology::ontoclass_rightclicked(OntologyClassShape *classshape)
{
    int idx = this->getIndexOfClasses(classshape->idString());

    if(idx!=-1){
        //show details
        DetailVisualizationDockWidget * detailwgt = new DetailVisualizationDockWidget(this,classes[idx]);
        detailwgt->show();
    }

    if(idx!=-1&&classes[idx]->equivalentclass.trimmed()!="")
    {
        equclasswid->clearall();
        //root class
        OntologyClassShape * classshape = new OntologyClassShape();
        classshape->setIdString(">"+classes[idx]->shortname);
        classshape->setToolTip(classes[idx]->URI);
        classshape->setSize(QSizeF(150,20));
        classshape->setMyLabel(classes[idx]->shortname);
        classshape->setFillColour(this->CLASS_SHAPE_COLOR);
        for(int i=0;i<6;i++)
            classshape->setLabelByLevels(i+1,classes[idx]->shape->levelLabels[i]);
        equclasswid->my_canvas->addItem(classshape);
        equclasswid->setWindowTitle("[EQU]"+classes[idx]->shortname);
        //formula view
        ShapeObj * fshape = drawEquivalentClass(classes[idx]->equivalentclass,equclasswid->my_canvas);
        //connection
        Connector * conn = new Connector();
        conn->initWithConnection(classshape,fshape);
        conn->setColour(QColor("brown"));
        conn->setDirected(true);
        conn->setLabel("[EQU]");
        Connector * conn1 = new Connector();
        conn1->initWithConnection(fshape,classshape);
        conn1->setColour(QColor("brown"));
        conn1->setDirected(true);

        equclasswid->my_canvas->addItem(conn);
        equclasswid->my_canvas->addItem(conn1);
        equclasswid->my_canvas->setOptAutomaticGraphLayout(true);
        equclasswid->my_canvas->setOptLayoutMode(maincanvas->FlowLayout);
        equclasswid->my_canvas->setOptPreventOverlaps(true);
        equclasswid->my_canvas->fully_restart_graph_layout();
    }

}

//get individual information to add on infowidget
QString OwlOntology::getIndividualInfo(OwlIndividual *selectedIndividual){

    this->individualInfo.clear();

    this->individualInfo.append("Individual Name: "+selectedIndividual->shortname+"\n");
    this->individualInfo.append("URI: "+selectedIndividual->URI);
    this->individualInfo.append("Class Type: "+selectedIndividual->ownerclasses[0]);
    int n = selectedIndividual->ownerclasses.size();
    for(int i=1;i<n;i++){
        this->individualInfo.append(", "+selectedIndividual->ownerclasses[i]);
    }
    this->individualInfo.append("\n");

    return this->individualInfo;
}

void OwlOntology::ontoindividual_clicked(OntologyIndividualShape *individualshape)
{
    int index = this->getIndexOfIndividuals(individualshape->idString());
    OwlIndividual *selectedIndividual = this->individuals[index];

    //emit signal to send info to widget
    cout<<"//get individual information to add on infowidget"<<endl;
    cout<<this->getIndividualInfo(selectedIndividual).toStdString()<<endl;
}

//get property information to add on infowidget
QString OwlOntology::getPropertyInfo(OwlProperty *selectedProperty){
    this->propertyInfo.clear();

    QString num_subProperty="0";
    QString num_superProperty="0";
    QString num_disjointProperty="0";
    num_subProperty = num_subProperty.setNum(selectedProperty->subproperties.size());
    num_superProperty = num_superProperty.setNum(selectedProperty->superproperties.size());
    num_disjointProperty = num_disjointProperty.setNum(selectedProperty->disjointproperties.size());

    this->propertyInfo.append("Property Name: "+selectedProperty->shortname+"\n");
    this->propertyInfo.append("URI: "+selectedProperty->URI+"\n");
    this->propertyInfo.append("Property Type: "+selectedProperty->propertytype+"\n");
    this->propertyInfo.append("Property Domain: "+selectedProperty->domains[0]->shortname);
    int m = selectedProperty->domains.size();
    for(int i=1;i<m;i++){
        this->propertyInfo.append(", "+selectedProperty->domains[i]->shortname);
    }
    this->propertyInfo.append("\n");
    this->propertyInfo.append("Property Range: "+selectedProperty->ranges[0]);
    int n = selectedProperty->ranges.size();
    for(int j=1;j<n;j++){
        this->propertyInfo.append(", "+selectedProperty->ranges[j]);
    }
    this->propertyInfo.append("\n");
    this->propertyInfo.append("Number of Sub Properties: "+num_subProperty+"\n");
    this->propertyInfo.append("Number of Super Properties: "+num_superProperty+"\n");
    this->propertyInfo.append("Number of Disjoint Properties: "+num_disjointProperty+"\n");

    return this->propertyInfo;
}

void OwlOntology::ontoproperty_clicked(OntologyPropertyShape *propertyshape)
{
    int index = this->getIndexOfProperties(propertyshape->idString());
    OwlProperty *selectedProperty = this->properties[index];

    //emit signal to send info to widget
    cout << "//get property information to add on infowidget"<<endl;
    cout << this->getPropertyInfo(selectedProperty).toStdString()<<endl;
}

//get owl classes by name
QList<OwlClass *> OwlOntology::getOwlClassByName(QString name){

    QList<OwlClass *> classList;
    //qSort(classes);
    for(int i=0;i<classes.length();i++)
    {
        if(classes[i]->shortname.contains(name,Qt::CaseInsensitive)){
            classList.append(classes[i]);
        }
    }
    return classList;
}

//get owl individuals by name
QList<OwlIndividual *> OwlOntology::getOwlIndividualByName(QString name){

    QList<OwlIndividual *> individualList;

    for(int i=0;i<individuals.size();i++){
        if(individuals[i]->shortname.contains(name,Qt::CaseInsensitive)){
            individualList.append(individuals[i]);
        }
    }

    return individualList;
}

//get owl properties by name
QList<OwlProperty *> OwlOntology::getOwlPropertyByName(QString name){

    QList<OwlProperty *> propertyList;

    for(int i=0;i<properties.size();i++){
        if(properties[i]->shortname.contains(name,Qt::CaseInsensitive)){
            propertyList.append(properties[i]);
        }
    }

    return propertyList;
}

QList<OwlProperty *> OwlOntology::getOwlDataPropertyByName(QString name){
    QList<OwlProperty *> propertyList;

    for(int i=0;i<properties.size();i++){
        if(properties[i]->isDataProperty() && properties[i]->shortname.contains(name,Qt::CaseInsensitive)){
            propertyList.append(properties[i]);
        }
    }

    return propertyList;
}

QList<OwlProperty *> OwlOntology::getOwlObjectPropertyByName(QString name){
    QList<OwlProperty *> propertyList;

    for(int i=0;i<properties.size();i++){
        if(properties[i]->isObjectProperty() && properties[i]->shortname.contains(name,Qt::CaseInsensitive)){
            propertyList.append(properties[i]);
        }
    }

    return propertyList;
}


//get entities by expression pattern(c$aaa+ddd[ AND x OR y NOT z) i$bbb+fff(+x-y)-ggg p$ccc+hhh(+x-y)-jjj)
void OwlOntology::getEntityByText(QString text){
//You can use qobject_cast<MyClass*>(instance) on QObject derived classes and check the return value.
//If instance cannot be cast to MyClass*, the return value will be NULL.;
//    OwlClass *a = qobject_cast<OwlClass *>(entityList[0]);

    int index_class = text.indexOf("c$",Qt::CaseInsensitive);
    int index_individual = text.indexOf("i$",Qt::CaseInsensitive);
    int index_property = text.indexOf("p$",Qt::CaseInsensitive);
    QString classText;
    QString individualText;
    QString propertyText;

    if(index_class != -1){
        if(index_class < index_individual || index_class < index_property){
            if(index_individual < index_property){
                classText = text.mid(index_class, index_property);
            }else{
                classText = text.mid(index_class, index_individual);
            }
        }else{
            classText = text.mid(index_class);
        }
    }

    if(index_individual != -1){
        if(index_individual < index_class || index_individual < index_property){
            if(index_class < index_property){
                individualText = text.mid(index_individual,index_property);
            }else{
                individualText = text.mid(index_individual,index_class);
            }
        }else{
            individualText = text.mid(index_individual);
        }
    }

    if(index_property != -1){
        if(index_property < index_class || index_property < index_individual){
            if(index_class < index_individual){
                propertyText = text.mid(index_property, index_individual);
            }else{
                propertyText = text.mid(index_property, index_class);
            }
        }else{
            propertyText = text.mid(index_property);
        }
    }

}


void OwlOntology::removeIndividualView(Canvas *canvas){

    int n = this->classes.size();
    for(int j=0; j<n; j++){
        if(this->classes.at(j)->isIndividualsShowed){
            this->classes.at(j)->hideIndividuals(canvas);
        }
    }
    this->maincanvas->fully_restart_graph_layout();
}

void OwlOntology::removeClassView(Canvas *canvas){
    int m = this->classes.size();
    int n = -1;
    for(int i=0;i<m;i++){
        if(!this->classes[i]->classesconnectors.isEmpty()){
            n = this->classes[i]->classesconnectors.size();

            for(int j=0;j<n;j++){
                this->maincanvas->removeItem(this->classes[i]->classesconnectors[j]);
            }
        }
        this->maincanvas->removeItem(this->classes[i]->shape);
    }
    this->maincanvas->restart_graph_layout();

}












