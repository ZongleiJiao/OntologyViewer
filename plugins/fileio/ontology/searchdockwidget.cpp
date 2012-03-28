#include "searchdockwidget.h"
#include "ui_searchdockwidget.h"

SearchDockWidget::SearchDockWidget(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::SearchDockWidget)
{
    ui->setupUi(this);
}

SearchDockWidget::~SearchDockWidget()
{
    delete ui;
}
