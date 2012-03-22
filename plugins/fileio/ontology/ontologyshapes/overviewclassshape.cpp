#include "overviewclassshape.h"

using namespace dunnart;

OverviewClassShape::OverviewClassShape():ShapeObj("overviewclassshape")
{
    this->setSize(QSizeF(5,5));
    this->setFillColour(QColor("Gray"));
}

QPainterPath OverviewClassShape::buildPainterPath(void)
{
    QPainterPath painter_path;

    painter_path.addEllipse(0,0,width(),height());
    painter_path.closeSubpath();

    return painter_path;
}
