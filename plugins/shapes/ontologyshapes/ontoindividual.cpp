#include <QString>
#include "libdunnartcanvas/canvasitem.h"
#include "ontoindividual.h"

using namespace dunnart;

OntologyIndividualShape::OntologyIndividualShape()
    : ShapeObj("ontoindividual")
{
}

QPainterPath OntologyIndividualShape::buildPainterPath(void)
{
    QPainterPath painter_path;

    QPolygonF polygon;
    polygon << QPointF(-0.4*width(), 0.5*height())
            << QPointF(0.4*width(), 0.5*height())
            << QPointF(0.5*width(), 0)
            << QPointF(0.4*width(), -0.5*height())
            << QPointF(-0.4*width(), -0.5*height())
            << QPointF(-0.5*width(), 0);

    painter_path.addPolygon(polygon);
    painter_path.closeSubpath();

    return painter_path;
}
