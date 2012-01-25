#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "libdunnartcanvas/shape.h"
using dunnart::ShapeObj;

class OntologyClassShape: public ShapeObj
{
    public:
        OntologyClassShape();
        virtual ~OntologyClassShape() { }

        virtual QPainterPath buildPainterPath(void);
};


#endif // ELLIPSE_H
// vim: filetype=cpp ts=4 sw=4 et tw=0 wm=0 cindent
