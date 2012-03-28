#include "zoomdockwidget.h"
#include "ui_zoomdockwidget.h"

ZoomDockWidget::ZoomDockWidget(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::ZoomDockWidget)
{
    ui->setupUi(this);
}

ZoomDockWidget::~ZoomDockWidget()
{
    delete ui;
}
