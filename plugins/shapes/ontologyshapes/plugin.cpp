/*
 * Dunnart - Constraint-based Diagram Editor
 *
 * Copyright (C) 2010  Monash University
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

#include <QtGui>
#include <QObject>

#include "libdunnartcanvas/shapeplugininterface.h"
#include "libdunnartcanvas/shape.h"
using namespace dunnart;

#include "ontoclass.h"
#include "ontoindividual.h"
#include "ontoproperty.h"

class OntologyShapesPlugin : public QObject, public ShapePluginInterface
{
    Q_OBJECT
        Q_INTERFACES (dunnart::ShapePluginInterface)

    public:
        OntologyShapesPlugin()
        {
        }
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
            return NULL;
        }
};

Q_EXPORT_PLUGIN2(shapes_ontology, OntologyShapesPlugin)

// Because there is no header file, we need to load the MOC file here to
// cause Qt to generate it for us.
#include "plugin.moc"

// vim: filetype=cpp ts=4 sw=4 et tw=0 wm=0 cindent

