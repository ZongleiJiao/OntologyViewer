#include "informationboxdockwidget.h"
#include "ui_informationboxdockwidget.h"

InformationBoxDockWidget::InformationBoxDockWidget(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::InformationBoxDockWidget)
{
    ui->setupUi(this);
}

InformationBoxDockWidget::~InformationBoxDockWidget()
{
    delete ui;
}
