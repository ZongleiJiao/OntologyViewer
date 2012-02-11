#include "owlontology.h"

#include "libdunnartcanvas/connector.h"
#include "libdunnartcanvas/pluginshapefactory.h"

#include <java_magic.h>
#include <edu_monash_infotech_OWLAPIWrapper.h>
#include <iostream>
#include <stack>

using namespace dunnart;
using namespace std;

OwlOntology::OwlOntology()
{
}

//get index of individuals by its shortname
int OwlOntology::getIndexOfIndividuals(QString shortname)
{
    for(int i=0;i<individuals.length();i++)
    {
        if(individuals[i]->shortname == shortname) return i;
    }
    return -1;
}

//get index of classes by its shortname
int OwlOntology::getIndexOfClasses(QString shortname)
{
    for(int i=0;i<classes.length();i++)
    {
        if(classes[i]->shortname == shortname) return i;
    }
    return -1;
}

//load ontology using owlapi via OWLAPIWrapper
/** unfinished:
1. all URI name
2. prefix
3. properties
4. about Thing?
5. individual---class
*/
void OwlOntology::loadontology(const QFileInfo& fileInfo)
{
    //init JVM
    initJavaWrapper(0,NULL);
    //init OWLAPIWrapper class
    edu::monash::infotech::OWLAPIWrapper * wp = new edu::monash::infotech::OWLAPIWrapper();
    //load owl file
    QString filename = fileInfo.absoluteFilePath();
    this->ontologyname = fileInfo.baseName();
    wp->loadOntologyFile(filename.toUtf8().constData());

    PluginShapeFactory *shapeFactory = sharedPluginShapeFactory();

    //get all individuals
    JavaObjectArray *resGetAllIndividuals = wp->getAllIndividuals();
    java::lang::String ** owlindividuals = (java::lang::String **)resGetAllIndividuals->getArrayData();
    for(int i=0;i<resGetAllIndividuals->getArrayLength();i++)
    {
        cout<<owlindividuals[i]->toString()<<endl;
        //set individual name
        OwlIndividual * tmpindividual = new OwlIndividual();
        tmpindividual->shortname=QString(owlindividuals[i]->toString());
        tmpindividual->URI="<individual URI name>";

        //create shape
        tmpindividual->shape = shapeFactory->createShape("ontoindividual");
        tmpindividual->shape->setIdString(tmpindividual->shortname);
        tmpindividual->shape->setLabel(tmpindividual->shortname);
        tmpindividual->shape->setSize(QSizeF(150,20));

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
        tmpclass->URI = "<Class URI Name>";

        //create shape
        tmpclass->shape = shapeFactory->createShape("ontoclass");
        tmpclass->shape->setIdString(tmpclass->shortname);
        tmpclass->shape->setLabel(tmpclass->shortname);
        tmpclass->shape->setSize(QSizeF(150,20));
        tmpclass->shape->setPosAndSize(QPointF(0,i*25),QSizeF(150,20));

        //append tmpclass to list
        this->classes.append(tmpclass);
    }

    //get the subclasses, superclasses, disjointclasses and individuals of classes
    for(int i=0;i<classes.length();i++)
    {
        //get&set subclasses
        JavaObjectArray *resGetSubClasses = wp->getSubClasses(owlclasses[i]->toString());
        if(resGetSubClasses!=NULL){
            java::lang::String ** owlsubclasses = (java::lang::String **)resGetSubClasses->getArrayData();
            for(int j=0;j<resGetSubClasses->getArrayLength();j++){
                int ind = getIndexOfClasses(owlsubclasses[j]->toString());
                classes[i]->subclasses<<classes[ind];
            }
        }

        //get&set superclasses
        JavaObjectArray *resGetSuperClasses = wp->getSuperClasses(owlclasses[i]->toString());
        if(resGetSuperClasses!=NULL){
            java::lang::String ** owlsuperclasses = (java::lang::String **)resGetSuperClasses->getArrayData();
            for(int j=0;j<resGetSuperClasses->getArrayLength();j++){
                int ind = getIndexOfClasses(owlsuperclasses[j]->toString());
                classes[i]->superclasses<<classes[ind];
            }
        }

        //get&set disjointclasses
        JavaObjectArray *resGetDisjointClasses = wp->getDisjointClasses(owlclasses[i]->toString());
        if(resGetDisjointClasses!=NULL){
            java::lang::String ** owldisjointclasses = (java::lang::String **)resGetDisjointClasses->getArrayData();
            for(int j=0;j<resGetDisjointClasses->getArrayLength();j++){
                int ind = getIndexOfClasses(owldisjointclasses[j]->toString());
                classes[i]->disjointclasses<<classes[ind];
            }
        }

        //get&set individuals
        JavaObjectArray *resGetIndividuals = wp->getIndividuals(owlclasses[i]->toString());
        if(resGetIndividuals!=NULL){
            java::lang::String ** owlclassindividuals = (java::lang::String **)resGetIndividuals->getArrayData();
            for(int j=0;j<resGetIndividuals->getArrayLength();j++){
                int ind = getIndexOfIndividuals(owlclassindividuals[j]->toString());
                //add this class[i] to individual's owner classes list
                this->individuals[ind]->ownerclasses.append(classes[i]->shortname);
                //add individuals[ind] to class[i] individuals list
                classes[i]->individuals<<this->individuals[ind];
            }
        }
    }

    //get all ontology properties from JVM
    JavaObjectArray *resGetAllPropertiesNameAndSubType = wp->getAllPropertiesNameAndSubType();
    if(resGetAllPropertiesNameAndSubType!=NULL){
        java::lang::String ** owlproperties = (java::lang::String **)resGetAllPropertiesNameAndSubType->getArrayData();
        for(int j=0;j<resGetAllPropertiesNameAndSubType->getArrayLength();j++){
            cout<<"--property::"<<owlproperties[j]->toString()<<endl;
        }
    }

    JavaObjectArray *resGetPropertyDomainsByName = wp->getPropertyDomainsByName(wp->ENTITIY_TYPE_OBJECT_PROPERTY,"hasDegree");
    if(resGetPropertyDomainsByName!=NULL){
        java::lang::String ** owlproperties = (java::lang::String **)resGetPropertyDomainsByName->getArrayData();
        for(int j=0;j<resGetPropertyDomainsByName->getArrayLength();j++){
            cout<<"--property Domain::"<<owlproperties[j]->toString()<<endl;
        }
    }

    JavaObjectArray *resGetPropertyRangesByName = wp->getPropertyRangesByName(wp->ENTITIY_TYPE_OBJECT_PROPERTY,"hasDegree");
    if(resGetPropertyRangesByName!=NULL){
        java::lang::String ** owlproperties = (java::lang::String **)resGetPropertyRangesByName->getArrayData();
        for(int j=0;j<resGetPropertyRangesByName->getArrayLength();j++){
            cout<<"--property Range::"<<owlproperties[j]->toString()<<endl;
        }
    }

    JavaObjectArray *resGetSubProperites = wp->getSubProperites(wp->ENTITIY_TYPE_OBJECT_PROPERTY,"isIngredientOf");
    if(resGetSubProperites!=NULL){
        java::lang::String ** owlproperties = (java::lang::String **)resGetSubProperites->getArrayData();
        for(int j=0;j<resGetSubProperites->getArrayLength();j++){
            cout<<"--sub property::"<<owlproperties[j]->toString()<<endl;
        }
    }

    JavaObjectArray *resGetSuperProperites = wp->getSuperProperites(wp->ENTITIY_TYPE_OBJECT_PROPERTY,"isBaseOf");
    if(resGetSuperProperites!=NULL){
        java::lang::String ** owlproperties = (java::lang::String **)resGetSuperProperites->getArrayData();
        for(int j=0;j<resGetSuperProperites->getArrayLength();j++){
            cout<<"--super property::"<<owlproperties[j]->toString()<<endl;
        }
    }


}

//draw the ontology classes
void OwlOntology::drawClassView(Canvas *canvas)
{
    //draw classes
    for(int i=0;i<classes.length();i++)canvas->addItem(classes[i]->shape);

    //draw connections
    Connector *conn;
    for(int i=0;i<classes.length();i++)
    {
        //subclasses
//       for(int j=0;j<classes[i]->subclasses.length();j++){
//            conn = new Connector();
//            conn->initWithConnection(classes[i]->shape, classes[i]->subclasses[j]->shape);
//            canvas->addItem(conn);
//            conn->setDirected(true);
//        }
        //superclasses ???
        for(int j=0;j<classes[i]->superclasses.length();j++)
        {
            conn = new Connector();
            conn->initWithConnection(classes[i]->superclasses[j]->shape,classes[i]->shape);
            canvas->addItem(conn);
            conn->setDirected(true);
        }
    }

    //adjust postions -- level only
    stack<OwlClass *> sts;
    for(int i=0;i<classes.length();i++)
    {
        if((classes[i]->superclasses.length()==0)||(classes[i]->superclasses.length()==1&&classes[i]->superclasses[0]->shortname=="Thing"))
        {
            classes[i]->shape->setPosAndSize(QPointF(0,i*25),QSizeF(150,20));
            sts.push(classes[i]);
            //cout<<"-->Stack size:" <<sts.size() << "Top: " << classes[i]->shortname.toStdString() <<endl;
        }
        if(classes[i]->shortname=="Thing"){
            classes[i]->shape->setPosAndSize(QPointF(-200,i*25),QSizeF(150,20));
        }
    }
    while(!sts.empty()){
        OwlClass * tmp = sts.top();
        sts.pop();
        qreal x = tmp->shape->pos().x();

        for(int i=0;i<tmp->subclasses.length();i++)
        {
            qreal y = tmp->subclasses[i]->shape->pos().y();
            tmp->subclasses[i]->shape->setPosAndSize(QPointF(x+200,y),QSizeF(150,20));
            sts.push(tmp->subclasses[i]);
            //cout<<"==>Stack size:" <<sts.size() << "Top: " << tmp->subclasses[i]->shortname.toStdString() <<endl;
        }

    }

}

//draw the ontology individuals
void OwlOntology::drawIndividualView(Canvas *canvas)
{
    Connector *conn;
    //draw individuals
    for(int i=0;i<individuals.length();i++)
    {
        canvas->addItem(individuals[i]->shape);
        for(int j=0;j<individuals[i]->ownerclasses.length();j++)
        {
            int ownerclassidx = this->getIndexOfClasses(individuals[i]->ownerclasses[j]);
            canvas->addItem(this->classes[ownerclassidx]->shape);

            conn = new Connector();
            conn->initWithConnection(individuals[i]->shape, this->classes[ownerclassidx]->shape);
            canvas->addItem(conn);
            conn->setDirected(true);
        }
    }
}

//draw the ontology properties -- Unfinished
void OwlOntology::drawPropertyView(Canvas *canvas)
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
    return res;
}
