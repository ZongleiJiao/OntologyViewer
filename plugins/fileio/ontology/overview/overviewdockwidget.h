#ifndef OVERVIEWDOCKWIDGET_H
#define OVERVIEWDOCKWIDGET_H

#include <QDockWidget>
#include "libdunnartcanvas/canvas.h"
#include "libdunnartcanvas/canvasview.h"
using namespace dunnart;

namespace Ui {
    class OverviewDockWidget;
}

class OverviewDockWidget : public QDockWidget
{
    Q_OBJECT

public:
    explicit OverviewDockWidget(QWidget *parent = 0);
    ~OverviewDockWidget();

    Canvas *my_canvas;
    CanvasView * my_view;
    void clearall();

private:
    Ui::OverviewDockWidget *ui;
};

#endif // OVERVIEWDOCKWIDGET_H
