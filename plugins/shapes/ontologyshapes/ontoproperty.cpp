#include "ontoproperty.h"
#include <QString>
#include "libdunnartcanvas/canvasitem.h"
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
    polygon << QPointF(0, -height() / 2)
            << QPointF(-width() / 2, 0)
            << QPointF(0, height() / 2)
            << QPointF(width() / 2, 0);

    painter_path.addPolygon(polygon);
    painter_path.closeSubpath();

    return painter_path;
}
