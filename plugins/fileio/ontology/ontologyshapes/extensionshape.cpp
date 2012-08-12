#include "extensionshape.h"

ExtensionShape::ExtensionShape() : ShapeObj("extshape")
{
    this->setLabel("+");
    this->isExtended = false;
    this->linkedClass = NULL;
    this->edge = NULL;
}

QPainterPath ExtensionShape::buildPainterPath(void)
{
    QPainterPath painter_path;

    painter_path.addEllipse(-width() / 2, -height() / 2, width(), height());

    return painter_path;
}


void ExtensionShape::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        emit myDoubleClick(this);
    }
    setFocus();

}

void ExtensionShape::mousePressEvent(QGraphicsSceneMouseEvent *event){

    if (event->button() == Qt::LeftButton) {
        emit myclick(this);
    }else if(event->button() == Qt::RightButton){
        emit this->myRightClick(this);
    }
}

