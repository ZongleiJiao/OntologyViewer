#ifndef ONTOPROPERTY_H
#define ONTOPROPERTY_H

#include "libdunnartcanvas/shape.h"
using dunnart::ShapeObj;

class OntologyPropertyShape: public virtual ShapeObj
{
    public:
        OntologyPropertyShape();
        virtual ~OntologyPropertyShape() { }

        virtual QPainterPath buildPainterPath(void);
};

#endif // ONTOPROPERTY_H
