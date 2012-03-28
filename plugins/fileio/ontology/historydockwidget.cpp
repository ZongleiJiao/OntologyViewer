#include "historydockwidget.h"
#include "ui_historydockwidget.h"

HistoryDockWidget::HistoryDockWidget(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::HistoryDockWidget)
{
    ui->setupUi(this);
}

HistoryDockWidget::~HistoryDockWidget()
{
    delete ui;
}
