#include "detaildockwidget.h"
#include "ui_detaildockwidget.h"

DetailDockWidget::DetailDockWidget(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::DetailDockWidget)
{
    ui->setupUi(this);
    my_canvas = new Canvas();
    my_view = new CanvasView(my_canvas);
    this->setWidget(my_view);
}

DetailDockWidget::~DetailDockWidget()
{
    delete ui;
}
