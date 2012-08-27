#include "detaildockwidget.h"
#include "ui_detaildockwidget.h"

DetailDockWidget::DetailDockWidget(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::DetailDockWidget)
{
    ui->setupUi(this);
    my_canvas = new Canvas();    
    my_view = new CanvasView(my_canvas);
//    my_canvas->setEditMode();
    my_view->scale(0.5,0.5);
    this->setWidget(my_view);
}

void DetailDockWidget::clearall()
{
    my_canvas->clear();
    delete my_view;
    my_view = new CanvasView(my_canvas);
    my_view->scale(0.5,0.5);
    this->setWidget(my_view);
}

DetailDockWidget::~DetailDockWidget()
{
    delete ui;
}
