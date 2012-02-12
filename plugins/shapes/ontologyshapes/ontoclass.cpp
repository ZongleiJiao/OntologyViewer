#include <QString>
#include "libdunnartcanvas/canvasitem.h"
#include "ontoclass.h"

using namespace dunnart;

OntologyClassShape::OntologyClassShape() : ShapeObj("ontoclass")
{    
}

QPainterPath OntologyClassShape::buildPainterPath(void)
{
    QPainterPath painter_path;

    double yround = (height() / 2);
    double xround = (width() / 2);

    double round = (xround <= yround) ? xround : yround;

    painter_path.addRoundedRect(-width() / 2, -height() / 2, width(), height(),
            round, round);

    return painter_path;
}
