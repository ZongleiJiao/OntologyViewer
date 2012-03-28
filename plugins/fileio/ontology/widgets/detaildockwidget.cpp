#include "detaildockwidget.h"
#include "ui_detaildockwidget.h"

DetailDockWidget::DetailDockWidget(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::DetailDockWidget)
{
    ui->setupUi(this);
    my_canvas = new Canvas();
    my_view = new CanvasView(my_canvas);
//    my_view->scale(0.4,0.4);
    this->setWidget(my_view);
}

void DetailDockWidget::clearall()
{
//    my_canvas->~Canvas();
//    my_canvas = new Canvas();
    my_canvas->clear();
    my_view->~CanvasView();
    my_view = new CanvasView(my_canvas);
//    my_view->scale(0.6,0.6);
    this->setWidget(my_view);
}

DetailDockWidget::~DetailDockWidget()
{
    delete ui;
}
