#ifndef ONTOCLASS_H
#define ONTOCLASS_H

#include "libdunnartcanvas/shape.h"
using dunnart::ShapeObj;

class OntologyClassShape: public ShapeObj
{
    public:
        OntologyClassShape();
        virtual ~OntologyClassShape() { }
        virtual QPainterPath buildPainterPath(void);
};


#endif // ONTOCLASS_H
// vim: filetype=cpp ts=4 sw=4 et tw=0 wm=0 cindent
