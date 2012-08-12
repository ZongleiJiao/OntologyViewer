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

#include "libdunnartcanvas/shapeplugininterface.h"
#include "libdunnartcanvas/fileioplugininterface.h"
#include "libdunnartcanvas/applicationplugininterface.h"
#include "libdunnartcanvas/canvas.h"
#include "libdunnartcanvas/canvasitem.h"
#include "libdunnartcanvas/pluginshapefactory.h"
#include "libdunnartcanvas/shape.h"
#include "libdunnartcanvas/connector.h"
#include "libdunnartcanvas/undo.h"
#include "libdunnartcanvas/canvasapplication.h"


#include <java_magic.h>
#include <edu_monash_infotech_OWLAPIWrapper.h>
#include <iostream>

#include <owlontology.h>
#include <ontoclass.h>
#include <ontoindividual.h>
#include <ontoproperty.h>
#include <extensionshape.h>
#include <overviewclassshape.h>
#include <overview/overview.h>
#include <widgets/detaildockwidget.h>
#include <overview/overviewdockwidget.h>
#include <editor/mainwindow.h>
#include <canvasview.h>
#include <QMainWindow>

#include <overview/keyconceptclass.h>
#include "widgets/detailvisualizationdockwidget.h"
#include <widgets/searchdockwidget.h>
#include <widgets/informationboxdockwidget.h>
//#include <widgets/util.h>
#include <widgets/shownodesdockwidget.h>
#include <widgets/filterdockwidget.h>


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
class OntologyFileIOPlugin :
        public QObject,
        public ShapePluginInterface,
        public FileIOPluginInterface,
        public ApplicationPluginInterface
{
    Q_OBJECT
        Q_INTERFACES (dunnart::FileIOPluginInterface)
        Q_INTERFACES (dunnart::ShapePluginInterface)
        Q_INTERFACES (dunnart::ApplicationPluginInterface)

    public:
        QMainWindow * appmainwin;
        OverviewDockWidget *overviewwid;
        DetailDockWidget *equclasswid;
        SearchDockWidget * searchdwgt;
        InformationBoxDockWidget *infoboxdwgt;
        ShowNodesDockWidget * typedwgt;
        FilterDockWidget * filterdwgt;

        OntologyFileIOPlugin()
        {

        }
        //methods for FileIOPluginInterface
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

        //methods for ShapePluginInterface
        QString shapesClassLabel(void) const
        {
            return "Ontology";
        }
        QStringList producableShapeTypes() const
        {
            QStringList shapes;
            shapes << "org.dunnart.shapes.ontoclass";
            shapes << "org.dunnart.shapes.ontoindividual";
            shapes << "org.dunnart.shapes.ontoequivalentclass";
            shapes << "org.dunnart.shapes.ontoproperty";
            shapes << "org.dunnart.shapes.extshape";
            return shapes;
        }
        ShapeObj *generateShapeOfType(QString shapeType)
        {
            if (shapeType == "org.dunnart.shapes.ontoclass")
            {
                return new OntologyClassShape();
            }
            else if (shapeType == "org.dunnart.shapes.ontoindividual")
            {
                return new OntologyIndividualShape();
            }
            else if (shapeType == "org.dunnart.shapes.ontoequivalentclass")
            {
                return new RectangleShape();
            }
            else if (shapeType == "org.dunnart.shapes.ontoproperty")
            {
                return new OntologyPropertyShape();
            }
            else if (shapeType == "org.dunnart.shapes.extshape")
            {
                return new ExtensionShape();
            }
            return NULL;
        }

        //methods for ApplicationPluginInterface
        void applicationMainWindowInitialised(CanvasApplication *canvasApplication)
        {
            this->appmainwin = canvasApplication->mainWindow();


            this->overviewwid = new OverviewDockWidget();
            this->appmainwin->addDockWidget(Qt::LeftDockWidgetArea,overviewwid);


            this->equclasswid= new DetailDockWidget();
            this->appmainwin->addDockWidget(Qt::LeftDockWidgetArea,equclasswid);
            this->equclasswid->setWindowTitle("Equivalent Class");

            searchdwgt = new SearchDockWidget();
            this->appmainwin->addDockWidget(Qt::RightDockWidgetArea,searchdwgt);

            infoboxdwgt = new InformationBoxDockWidget();
            this->appmainwin->addDockWidget(Qt::RightDockWidgetArea,infoboxdwgt);

            typedwgt = new ShowNodesDockWidget;
            this->appmainwin->addDockWidget(Qt::RightDockWidgetArea,typedwgt);

            filterdwgt = new FilterDockWidget();
            this->appmainwin->addDockWidget(Qt::RightDockWidgetArea,filterdwgt);
        }

        void applicationWillClose(CanvasApplication *canvasApplication){}
};

bool OntologyFileIOPlugin::saveDiagramToFile(Canvas *canvas,
        const QFileInfo& fileInfo, QString& errorMessage)
{
    return false;
}


bool OntologyFileIOPlugin::loadDiagramFromFile(Canvas *canvas,
        const QFileInfo& fileInfo, QString& errorMessage)
{
    this->overviewwid->show();
    this->equclasswid->show();
    searchdwgt->show();
    infoboxdwgt->show();
    typedwgt->show();
    filterdwgt->show();

    cout<<"Start loading ontology :"<<fileInfo.completeBaseName().toStdString()<<endl;
    QTime st = QTime::currentTime();
    st.start();
    //OwlOntology * onto = new OwlOntology(canvas,this->appmainwin);
    OwlOntology * onto = new OwlOntology(canvas,this->appmainwin,this->equclasswid);
//    onto->loadontology(fileInfo);

    onto->loadontologyFromDB(fileInfo);

    cout<<endl<<"T:"<<st.elapsed()<<endl;
    cout<<"Finish loading. Total " <<onto->classes.size()<<" class notes."<<endl;

    this->searchdwgt->setOntology(onto);
    this->infoboxdwgt->setOntology(onto);
    this->typedwgt->setOntology(onto);
    filterdwgt->setOntology(onto);
    this->infoboxdwgt->displayInfo("OntologyInfor");

//    Util * util = new Util(onto);
//    util->connectWgt(this->infoboxdwgt);

    /** text output **/
//    cout<<onto->toQString().toStdString();

    /** Overview of classes (not finished) **/
    /**
      1. get N keyclasses from allclasses & reset sub/sup relations
      2. draw overview
      **/

    this->overviewwid->setOntology(onto);
    Overview * ov = new Overview(300,onto,canvas);
    cout<<"Getting "<<ov->numOfClasses<<" overview keyconcept classes..."<<endl;
    cout<<"T:"<<st.elapsed()<<endl;
    cout<<"drawing overview..."<<endl;
    ov->showlayout(this->overviewwid);
    cout<<"T:"<<st.elapsed()<<endl;

    /** classview, individualview, propertyview can
      * be displayed together or individually.
    **/
    //classview
//    onto->drawClassView(canvas);
    //individualview
//    onto->drawIndividualView(canvas);
    //propertyview
//    onto->drawPropertyView(canvas);

    //set automatic layout
//    canvas->setOptAutomaticGraphLayout(true);
//    canvas->setOptLayoutMode(canvas->LayeredLayout);
//    canvas->setOptPreventOverlaps(true);
//    canvas->setOptFlowDirection(Canvas::FlowUp);
//    canvas->fully_restart_graph_layout();

    /** the getFormula() and logicalview() display
      * the anonymous class strings into formula
      *  and graphs.
    **/
//    onto->drawLogicalView(canvas);


    //set automatic layout
//    canvas->setOptAutomaticGraphLayout(true);
//    canvas->setOptLayoutMode(canvas->FlowLayout);
//    canvas->setOptPreventOverlaps(true);
//    canvas->setOptFlowDirection(Canvas::FlowUp);
//    canvas->fully_restart_graph_layout();



//    cout<<onto->ontologyname.toStdString()<<endl;


//    DetailVisualizationDockWidget * dvDW = new DetailVisualizationDockWidget(onto,onto->classes[0]);
    //this->appmainwin->addDockWidget(Qt::LeftDockWidgetArea,dvDW);
//    dvDW->show();
//    QString x = "ObjectIntersectionOf(<Student> ObjectAllValuesFrom(<hasChildren> <Female>) ObjectHasValue(<hasGender> <male>) ObjectExactCardinality(3 <hasChildren> Thing))";
//    QString x1 = "<Student>";
//    QString x2 ="ObjectIntersectionOf(<Person> ObjectSomeValuesFrom(<hasHabitat> <University>) DataHasValue(<isHardWorking> \"true\"^^xsd:boolean))";
//    Expression * e = new Expression();
//    e = e->getExpressionData(onto,x2);
//    dvDW->drawExpression(e,370);
//    cout<<e->getHeight()<<endl;
//    cout<<e->subExpressions.size()<<endl;

    return true;
}




Q_EXPORT_PLUGIN2(fileio_ontology, OntologyFileIOPlugin)

// Because there is no header file, we need to load the MOC file here to 
// cause Qt to generate it for us.
#include "plugin.moc"

// vim: filetype=cpp ts=4 sw=4 et tw=0 wm=0 cindent
