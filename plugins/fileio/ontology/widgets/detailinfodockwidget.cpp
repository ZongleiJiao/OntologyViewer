#include "detailinfodockwidget.h"
#include "ui_detailinfodockwidget.h"

DetailInfoDockWidget::DetailInfoDockWidget(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::DetailInfoDockWidget)
{
    ui->setupUi(this);
}

DetailInfoDockWidget::~DetailInfoDockWidget()
{
    delete ui;
}
