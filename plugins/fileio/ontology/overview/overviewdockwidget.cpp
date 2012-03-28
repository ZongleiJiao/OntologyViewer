#include "overviewdockwidget.h"
#include "ui_overviewdockwidget.h"

OverviewDockWidget::OverviewDockWidget(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::OverviewDockWidget)
{
    ui->setupUi(this);
    my_canvas = new Canvas();
    my_view = new CanvasView(my_canvas);
//    my_view->scale(0.4,0.4);
    this->setWidget(my_view);
    setWindowTitle("Ontology Overview");
}

OverviewDockWidget::~OverviewDockWidget()
{
    delete ui;
}

void OverviewDockWidget::clearall()
{
    my_canvas->~Canvas();
    my_canvas = new Canvas();
    my_view->~CanvasView();
    my_view = new CanvasView(my_canvas);
//    my_view->scale(0.6,0.6);
    this->setWidget(my_view);
}
