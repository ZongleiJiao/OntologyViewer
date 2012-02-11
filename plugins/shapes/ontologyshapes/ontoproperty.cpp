#include "ontoproperty.h"
#include <QString>
#include "libdunnartcanvas/canvasitem.h"
#include <iostream>
using namespace std;
using namespace dunnart;
//===========================================================================
//  "Ontology Property" shape code:


OntologyPropertyShape::OntologyPropertyShape()
    : ShapeObj("ontoproperty")
{
}

QPainterPath OntologyPropertyShape::buildPainterPath(void)
{
    QPainterPath painter_path;

    QPolygonF polygon;
//    polygon << QPointF(0, -height() / 2)
//            << QPointF(-width() / 2, 0)
//            << QPointF(0, height() / 2)
//            << QPointF(width() / 2, 0);
//    polygon << QPointF(-0.4*width(), 0.5*height())
//            << QPointF(0.4*width(), 0.5*height())
//            << QPointF(0.5*width(), 0)
//            << QPointF(0.4*width(), -0.5*height())
//            << QPointF(-0.4*width(), -0.5*height())
//            << QPointF(-0.5*width(), 0);

    polygon << QPointF(-0.3*width(), 0.5*height())
            << QPointF(0.3*width(), 0.5*height())
            << QPointF(0.5*width(), 0)
            << QPointF(0.5*width(), -0.5*height())
            << QPointF(-0.5*width(), -0.5*height())
            << QPointF(-0.5*width(), 0);
    painter_path.addPolygon(polygon);
    painter_path.closeSubpath();
    return painter_path;
}
