#ifndef ONTOCLASS_H
#define ONTOCLASS_H

#include "libdunnartcanvas/shape.h"
#include <QGraphicsSceneMouseEvent>
using dunnart::ShapeObj;

class OntologyClassShape: public ShapeObj
{
    Q_OBJECT
    signals:
    void myclick(OntologyClassShape *shape);
    void myDoubleClick(OntologyClassShape *shape);

    public:
        OntologyClassShape();
        virtual ~OntologyClassShape() { }
        virtual QPainterPath buildPainterPath(void);

        //mouse events sending singnals
        void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event);
        void mousePressEvent(QGraphicsSceneMouseEvent *event);
};


#endif // ONTOCLASS_H
// vim: filetype=cpp ts=4 sw=4 et tw=0 wm=0 cindent
