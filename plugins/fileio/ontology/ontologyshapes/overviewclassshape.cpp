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

    painter_path.addEllipse(-width()/2,-height()/2,width(),height());
    painter_path.closeSubpath();

    return painter_path;
}
int OverviewClassShape::getStatus()
{
   return m_status;
}

void OverviewClassShape::setStatus(status stats)
{
    this->m_status=stats;
    switch(stats)
    {
    case STATUS_Hide:
        this->setFillColour(QColor("gray"));
        this->setSize(QSizeF(1,1));        
        break;
    case STATUS_OutDetailview:
        this->setFillColour(QColor("gray"));
        this->setSize(QSizeF(4,4));
        break;
    case STATUS_InDetailview_Default:
        this->setFillColour(OwlClass::CLASS_SHAPE_COLOR);
        this->setSize(QSizeF(6,6));
        break;
    case STATUS_InDetailview_Focused:
        this->setFillColour(OwlClass::CLASS_SHAPE_FOCUSED_COLOR);
        this->setSize(QSizeF(6,6));
        break;
    case STATUS_InDetailview_SubFocused:
        this->setFillColour(OwlClass::SUBCLASS_SHAPE_FOCUSED_COLOR);
        this->setSize(QSizeF(6,6));
        break;
    case STATUS_InDetailview_SuperFocused:
        this->setFillColour(OwlClass::SUPERCLASS_SHAPE_FOCUSED_COLOR);
        this->setSize(QSizeF(6,6));
        break;
    default:
        break;
    }
}
