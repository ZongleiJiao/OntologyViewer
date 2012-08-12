#ifndef EXTENSIONSHAPE_H
#define EXTENSIONSHAPE_H

#include "libdunnartcanvas/shape.h"
#include <QGraphicsSceneMouseEvent>
#include <QString>
#include <owlclass.h>

using dunnart::ShapeObj;

class ExtensionShape : public ShapeObj
{
    Q_OBJECT
    signals:
    void myclick(ExtensionShape *shape);
    void myDoubleClick(ExtensionShape *shape);
    void myRightClick(ExtensionShape *shape);

    public:
        ExtensionShape();
        virtual ~ExtensionShape() { }
        virtual QPainterPath buildPainterPath(void);

        OwlClass * linkedClass;
        Connector * edge;
        bool isExtended;

        //mouse events sending singnals
        void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event);
        void mousePressEvent(QGraphicsSceneMouseEvent *event);
};

#endif // EXTENSIONSHAPE_H
