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

    /** text output **/
    //cout<<onto->toQString().toStdString();

    /** classview, individualview, propertyview can
      * be displayed together or individually.
    **/
//    //classview
//    onto->drawClassView(canvas);
//    //individualview
//    onto->drawIndividualView(canvas);
//    //propertyview
//    onto->drawPropertyView(canvas);

    /** Overview of classes (not finished) **/
    //    onto->drawClassOverview(canvas);

    /** the getFormula() and logicalview() display
      * the anonymous class strings into formula
      *  and graphs.
    **/
//    QString s = "ObjectIntersectionOf(<http://protege.stanford.edu/plugins/owl/owl-library/koala.owl#Student> ObjectIntersectionOf(ObjectAllValuesFrom(<http://protege.stanford.edu/plugins/owl/owl-library/koala.owl#hasChildren> <http://protege.stanford.edu/plugins/owl/owl-library/koala.owl#Male>) ObjectHasValue(<http://protege.stanford.edu/plugins/owl/owl-library/koala.owl#hasGender> <http://protege.stanford.edu/plugins/owl/owl-library/koala.owl#female>)) ObjectUnionOf(ObjectUnionOf(ObjectHasValue(<http://protege.stanford.edu/plugins/owl/owl-library/koala.owl#hasGender> <http://protege.stanford.edu/plugins/owl/owl-library/koala.owl#male>) ObjectExactCardinality(3 <http://protege.stanford.edu/plugins/owl/owl-library/koala.owl#hasChildren> owl:Thing)) ObjectAllValuesFrom(<http://protege.stanford.edu/plugins/owl/owl-library/koala.owl#hasChildren> <http://protege.stanford.edu/plugins/owl/owl-library/koala.owl#Female>)))";
//    QString ss = "ObjectIntersectionOf(<http://protege.stanford.edu/plugins/owl/owl-library/koala.owl#Student> ObjectAllValuesFrom(<http://protege.stanford.edu/plugins/owl/owl-library/koala.owl#hasChildren> <http://protege.stanford.edu/plugins/owl/owl-library/koala.owl#Female>) ObjectHasValue(<http://protege.stanford.edu/plugins/owl/owl-library/koala.owl#hasGender> <http://protege.stanford.edu/plugins/owl/owl-library/koala.owl#male>) 	ObjectExactCardinality(3 <http://protege.stanford.edu/plugins/owl/owl-library/koala.owl#hasChildren> owl:Thing))";
//    cout<<">>>>> "<<onto->getFormula(ss).toStdString()<<endl;
//    canvas->addText(onto->getFormula(ss));
//    onto->drawLogical(ss,canvas);

    onto->drawLogicalView(canvas);

    return true;
}




Q_EXPORT_PLUGIN2(fileio_ontology, OntologyFileIOPlugin)

// Because there is no header file, we need to load the MOC file here to 
// cause Qt to generate it for us.
#include "plugin.moc"

// vim: filetype=cpp ts=4 sw=4 et tw=0 wm=0 cindent
