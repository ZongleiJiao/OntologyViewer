#include "overviewclassshape.h"
#include "libdunnartcanvas/canvasitem.h"
#include <owlclass.h>

using namespace dunnart;

OverviewClassShape::OverviewClassShape():ShapeObj("overviewclassshape")
{
    this->setStatus(STATUS_OutDetailview);
}

QPainterPath OverviewClassShape::buildPainterPath(void)
{
    QPainterPath painter_path;

    painter_path.addEllipse(0,0,width(),height());
    painter_path.closeSubpath();

    return painter_path;
}
void OverviewClassShape::setStatus(status stats)
{
    switch(stats)
    {
    case STATUS_Hide:
        this->setFillColour(QColor("gray"));
        this->setSize(QSizeF(1,1));
        break;
    case STATUS_OutDetailview:
        this->setFillColour(QColor("gray"));
        this->setSize(QSizeF(5,5));
        break;
    case STATUS_InDetailview_Default:
        this->setFillColour(OwlClass::CLASS_SHAPE_COLOR);
        this->setSize(QSizeF(8,8));
        break;
    case STATUS_InDetailview_Focused:
        this->setFillColour(OwlClass::CLASS_SHAPE_FOCUSED_COLOR);
        this->setSize(QSizeF(8,8));
        break;
    case STATUS_InDetailview_SubFocused:
        this->setFillColour(OwlClass::SUBCLASS_SHAPE_FOCUSED_COLOR);
        this->setSize(QSizeF(8,8));
        break;
    case STATUS_InDetailview_SuperFocused:
        this->setFillColour(OwlClass::SUPERCLASS_SHAPE_FOCUSED_COLOR);
        this->setSize(QSizeF(8,8));
        break;
    default:
        break;
    }
}
