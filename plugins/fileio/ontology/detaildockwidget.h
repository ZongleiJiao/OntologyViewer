#ifndef DETAILDOCKWIDGET_H
#define DETAILDOCKWIDGET_H

#include <QDockWidget>
#include "libdunnartcanvas/canvas.h"
#include "libdunnartcanvas/canvasview.h"
using namespace dunnart;

namespace Ui {
class DetailDockWidget;
}

class DetailDockWidget : public QDockWidget
{
    Q_OBJECT
    
public:
    explicit DetailDockWidget(QWidget *parent = 0);
    ~DetailDockWidget();
    Canvas *my_canvas;
    CanvasView * my_view;
    
private:
    Ui::DetailDockWidget *ui;
};

#endif // DETAILDOCKWIDGET_H
