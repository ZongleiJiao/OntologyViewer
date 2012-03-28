#include "filterdockwidget.h"
#include "ui_filterdockwidget.h"

FilterDockWidget::FilterDockWidget(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::FilterDockWidget)
{
    ui->setupUi(this);
}

FilterDockWidget::~FilterDockWidget()
{
    delete ui;
}
