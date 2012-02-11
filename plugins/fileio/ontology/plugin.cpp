/*
 * Dunnart - Constraint-based Diagram Editor
 *
 * Copyright (C) 2011  Monash University
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software 
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, 
 * MA  02110-1301, USA.
 * 
 *
 * Author(s): Michael Wybrow  <http://michael.wybrow.info/>
*/

//! @file
//! Plugin that adds support for reading and writing .layout documents.

#include <QtGui>
#include <QObject>
#include <QFileInfo>

#include "libdunnartcanvas/fileioplugininterface.h"
#include "libdunnartcanvas/canvas.h"
#include "libdunnartcanvas/canvasitem.h"
#include "libdunnartcanvas/pluginshapefactory.h"
#include "libdunnartcanvas/shape.h"
#include "libdunnartcanvas/connector.h"
#include "libdunnartcanvas/undo.h"

#include <java_magic.h>
#include <edu_monash_infotech_OWLAPIWrapper.h>
#include <iostream>

#include <owlontology.h>

using namespace std;
using namespace dunnart;


//! @brief  Plugin class that adds support for loading and saving .layout
//!         documents.
//!
//! This is the layout description file format used by the Garuda project.
//!
//! This plugin implements the builtin .layout loading/saving functionality.
//! All the actual work of loading and saving the network is implemented in
//! libdunnartcanvas.  This is still implemented as a plugin so that
//! software built on top of Dunnart can easily exclude this functionality
//! if desired.
//!
class OntologyFileIOPlugin : public QObject, public FileIOPluginInterface
{
    Q_OBJECT
        Q_INTERFACES (dunnart::FileIOPluginInterface)

    public:
        OntologyFileIOPlugin()
        {
        }
        QStringList saveableFileExtensions(void) const
        {
            QStringList fileTypes;
            return fileTypes;
        }
        QStringList loadableFileExtensions(void) const
        {
            QStringList fileTypes;
            fileTypes << "owl";
            return fileTypes;
        }
        QString fileExtensionDescription(const QString& extension) const
        {
            if (extension == "owl")
            {
                return "OWL Ontology description";
            }
            return QString();
        }
        bool saveDiagramToFile(Canvas *canvas, const QFileInfo& fileInfo,
                QString& errorMessage);
        bool loadDiagramFromFile(Canvas *canvas, const QFileInfo& fileInfo,
                QString& errorMessage);
};

bool OntologyFileIOPlugin::saveDiagramToFile(Canvas *canvas,
        const QFileInfo& fileInfo, QString& errorMessage)
{
    return false;
}


bool OntologyFileIOPlugin::loadDiagramFromFile(Canvas *canvas,
        const QFileInfo& fileInfo, QString& errorMessage)
{
    OwlOntology * onto = new OwlOntology();
    onto->loadontology(fileInfo);
    cout<<onto->toQString().toStdString();

    onto->drawClassView(canvas);
    //onto->drawIndividualView(canvas);
/** origin code
    QString filename = fileInfo.absoluteFilePath();

//    QFile file(filename);
//    if ( ! file.open(QIODevice::ReadOnly) )
//    {
//        errorMessage = tr("File could not be opened for reading.");
//        return false;
//    }



    initJavaWrapper(0,NULL);
    edu::monash::infotech::OWLAPIWrapper * wp = new edu::monash::infotech::OWLAPIWrapper();

    //load owl file
    wp->loadOntologyFile(filename.toUtf8().constData());

    //get all ontology classes
    JavaObjectArray *res = wp->getAllOWLClasses();
    java::lang::String ** a = (java::lang::String **)res->getArrayData();

    //number of ontology classes
    int num = res->getArrayLength();
    cout<<"-=-=-=-"<<num<<"-=-=-=-=-=-"<<endl;

    //display the ontology classes on canvas
    PluginShapeFactory *shapeFactory = sharedPluginShapeFactory();
    ShapeObj **ontoclasses=new ShapeObj * [num];
    for(int i=0;i<num;i++){
        //add ontoclasses
        cout<<a[i]->toString()<<endl;
        ontoclasses[i] = shapeFactory->createShape("ontoclass");
        ontoclasses[i]->setIdString(QString(a[i]->toString()));
        ontoclasses[i]->setLabel(QString(a[i]->toString()));
        ontoclasses[i]->setPosAndSize(QPointF(0,i*25), QSizeF(150,20));
        canvas->addItem(ontoclasses[i]);
    }

    Connector *conn, *conn_indi;
    for(int i=0;i<num;i++){
        //display the subclass relationships
        JavaObjectArray *sub = wp->getSubClasses(a[i]->toString());
        if(sub!=NULL){
            java::lang::Object ** b = (java::lang::Object **)sub->getArrayData();
            cout<<"+++Subclasses:"<<sub->getArrayLength()<<endl;

            for(int j=0;j<sub->getArrayLength();j++){
                cout<<"::"<<b[j]->toString()<<endl;
                QString subid = (QString)b[j]->toString();

                for(int k=0;k<num;k++){
                    if(subid == ontoclasses[k]->getLabel()){
                        cout<<i<<"*********"<<k<<"***"<<ontoclasses[k]->getLabel().toStdString()<<endl;
                        conn = new Connector();
                        conn->initWithConnection(ontoclasses[i], ontoclasses[k]);
                        canvas->addItem(conn);
                        conn->setDirected(true);
                        break;
                    }
                }
            }
        }
        //check whether has supper class (no->thing)*****(not finished)

//        JavaObjectArray *sup = wp->getSuperClasses(a[i]->toString());

//        if(sup==NULL){
//            conn = new Connector();
//            conn->initWithConnection(ontoclasses[0], ontoclasses[i]);
//            canvas->addItem(conn);
//            conn->setDirected(true);
//        }
//        else{
//            java::lang::Object ** c = (java::lang::Object **)sup->getArrayData();
//            QString supid=QString(c[0]->toString());
//            if(supid.contains("Thing")){
//                conn = new Connector();
//                conn->initWithConnection(ontoclasses[0], ontoclasses[i]);
//                canvas->addItem(conn);
//                conn->setDirected(true);
//            }
//        }


        //display individuals
//        JavaObjectArray *indi = wp->getIndividuals(a[i]->toString());
//        if(indi != NULL)
//        {
//              java::lang::Object ** in = (java::lang::Object **)indi->getArrayData();
//              cout<<"+++Individual:"<<indi->getArrayLength()<<endl;

//              for(int j=0;j<indi->getArrayLength();j++){
//                  cout<<"::"<<in[j]->toString()<<endl;

//                  //add individuals to canvas
//                  ShapeObj *ontoindividual=shapeFactory->createShape("ontoindividual");
//                  ontoindividual->setLabel(QString(in[j]->toString()));
//                  ontoindividual->setPosAndSize(QPointF(0,i*25), QSizeF(150,20));
//                  canvas->addItem(ontoindividual);

//                  conn_indi = new Connector();
//                  conn_indi->initWithConnection(ontoclasses[i],ontoindividual);
//                  canvas->addItem(conn_indi);
//                  conn_indi->setDirected(true);
//              }
//          }
    }

    //get all properties 0: name 1: type 2: domain 3: range
//    JavaObjectArray *dataprop = wp->getAllPropertiesByType(wp->TYPE_DATA_PROPERTY);
//    JavaObjectArray *objprop = wp->getAllPropertiesByType(wp->TYPE_OBJECT_PROPERTY);
//    java::lang::String ** dataprops = (java::lang::String **) dataprop->getArrayData();
//    java::lang::String ** objprops = (java::lang::String **) objprop->getArrayData();
//    int datapropertyno = (dataprop->getArrayLength())/4;
//    int objpropertyno = (objprop->getArrayLength())/4;
//    cout<<"-=-=-=-=-=-=-=Properties [DATA] "
//        <<datapropertyno
//        <<" [OBJECT] "
//        <<objpropertyno
//        <<" -=-=-=-=-=-="<<endl;

//    ShapeObj **ontodataproperties=new ShapeObj * [datapropertyno];
//    ShapeObj **ontoobjproperties=new ShapeObj * [objpropertyno];

//    //draw data properties
//    for(int i=0;i<datapropertyno;i++){

//        cout<<dataprops[i*4]->toString()<<endl;

//        ontodataproperties[i] = shapeFactory->createShape("ontoproperty");
//        QString lbl = "["
//                + QString(dataprops[i*4+1]->toString())
//                + "]\n"
//                + QString(dataprops[i*4]->toString())
//                + "\n"
//                + QString(dataprops[i*4+3]->toString());
//        ontodataproperties[i]->setLabel(lbl);
//        ontodataproperties[i]->setPosAndSize(QPointF(200,i*25), QSizeF(200,60));
//        canvas->addItem(ontodataproperties[i]);
//        //connect domain
//        QString domainclass = dataprops[i*4+2]->toString();
//        for(int k=0;k<num;k++){
//            if(domainclass == ontoclasses[k]->getLabel()){
//                conn = new Connector();
//                conn->initWithConnection(ontoclasses[k],ontodataproperties[i]);
//                conn->setDotted(true);
//                canvas->addItem(conn);
//                conn->setDirected(true);
//            }
//        }
//    }

//    //draw object properties
//    for(int i=0;i<objpropertyno;i++){

//        cout<<objprops[i*4]->toString()<<endl;

//        ontoobjproperties[i] = shapeFactory->createShape("ontoproperty");
//        QString lbl = "["
//                + QString(objprops[i*4+1]->toString())
//                + "]\n"
//                + QString(objprops[i*4]->toString());
//        ontoobjproperties[i]->setLabel(lbl);
//        ontoobjproperties[i]->setPosAndSize(QPointF(-200,i*60), QSizeF(200,60));
//        canvas->addItem(ontoobjproperties[i]);
//        //connect domain & range
//        QString domainclass = objprops[i*4+2]->toString();
//        QString rangeclass = objprops[i*4+3]->toString();
//        for(int k=0;k<num;k++){
//            if(domainclass == ontoclasses[k]->getLabel()){
//                conn = new Connector();
//                conn->initWithConnection(ontoclasses[k],ontoobjproperties[i]);
//                conn->setDotted(true);
//                canvas->addItem(conn);
//                conn->setDirected(true);
//            }
//            if(rangeclass == ontoclasses[k]->getLabel()){
//                conn = new Connector();
//                conn->initWithConnection(ontoobjproperties[i],ontoclasses[k]);
//                conn->setDotted(true);
//                canvas->addItem(conn);
//                conn->setDirected(true);
//            }
//        }

//    }
  */

    return true;
}




Q_EXPORT_PLUGIN2(fileio_ontology, OntologyFileIOPlugin)

// Because there is no header file, we need to load the MOC file here to 
// cause Qt to generate it for us.
#include "plugin.moc"

// vim: filetype=cpp ts=4 sw=4 et tw=0 wm=0 cindent
