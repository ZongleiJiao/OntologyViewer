#include "shownodesdockwidget.h"
#include "ui_shownodesdockwidget.h"

ShowNodesDockWidget::ShowNodesDockWidget(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::ShowNodesDockWidget)
{
    ui->setupUi(this);
}

ShowNodesDockWidget::~ShowNodesDockWidget()
{
    delete ui;
}
