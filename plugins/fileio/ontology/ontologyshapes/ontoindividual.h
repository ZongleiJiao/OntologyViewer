#ifndef ONTOINDIVIDUAL_H
#define ONTOINDIVIDUAL_H

#include "libdunnartcanvas/shape.h"
using dunnart::ShapeObj;

class OntologyIndividualShape: public ShapeObj
{
    public:
        OntologyIndividualShape();
        virtual ~OntologyIndividualShape() { }

        virtual QPainterPath buildPainterPath(void);
};
#endif // ONTOINDIVIDUAL_H
