#ifndef OVERVIEWCLASSSHAPE_H
#define OVERVIEWCLASSSHAPE_H

#include "libdunnartcanvas/shape.h"
using dunnart::ShapeObj;

class OverviewClassShape
{
public:
    OverviewClassShape();
    virtual ~OverviewClass() { }
    virtual QPainterPath buildPainterPath(void);

    const static QColor DEFAULT_COLOR = QColor("gray");
    const static QColor HIGHLIGHT_COLOR = QColor("blue");
    const static QColor DEFAULT_SIZE = QSizeF(5,5);
    const static QColor HIGHLIGHT_SIZE = QSizeF(8,8);
};

#endif // OVERVIEWCLASSSHAPE_H
