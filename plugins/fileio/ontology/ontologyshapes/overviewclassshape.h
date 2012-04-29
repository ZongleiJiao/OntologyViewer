#ifndef OVERVIEWCLASSSHAPE_H
#define OVERVIEWCLASSSHAPE_H

#include "libdunnartcanvas/shape.h"
using dunnart::ShapeObj;

class OverviewClassShape:public ShapeObj
{
public:
    OverviewClassShape();
    virtual ~OverviewClassShape() { }
    virtual QPainterPath buildPainterPath(void);

    enum status{
        STATUS_Hide = 0,
        STATUS_OutDetailview = 1,
        STATUS_InDetailview_Default = 2,
        STATUS_InDetailview_Focused = 3,
        STATUS_InDetailview_SubFocused = 4,
        STATUS_InDetailview_SuperFocused = 5
    };

    void setStatus(status stats);
    int getStatus();
private:
    int m_status;
};

#endif // OVERVIEWCLASSSHAPE_H
