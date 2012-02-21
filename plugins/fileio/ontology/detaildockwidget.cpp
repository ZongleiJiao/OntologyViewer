#include "detaildockwidget.h"
#include "ui_detaildockwidget.h"

DetailDockWidget::DetailDockWidget(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::DetailDockWidget)
{
    ui->setupUi(this);
    my_canvas = new Canvas();
}

DetailDockWidget::~DetailDockWidget()
{
    delete ui;
}
