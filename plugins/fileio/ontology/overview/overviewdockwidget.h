#ifndef OVERVIEWDOCKWIDGET_H
#define OVERVIEWDOCKWIDGET_H

#include <QDockWidget>
#include "libdunnartcanvas/canvas.h"
#include "libdunnartcanvas/canvasview.h"
#include <overviewclassshape.h>
#include <overview/overviewscene.h>
#include <owlontology.h>
using namespace dunnart;

namespace Ui {
    class OverviewDockWidget;
}

class OverviewDockWidget : public QDockWidget
{
    Q_OBJECT
public slots:
    void sceneClicked(QPointF pos);
public:
    explicit OverviewDockWidget(QWidget *parent = 0);
    ~OverviewDockWidget();

    OwlOntology *ontology;
    OverviewScene *m_scene;
    QGraphicsView *m_view;
    QPointF m_centerpos;

//    Canvas *my_canvas;
//    CanvasView * my_view;
    void setOntology(OwlOntology * onto);
    void clearall();

    void addOverviewShape(OverviewClassShape *shape);
    void addOverviewLine(OverviewClassShape *start,OverviewClassShape *end);

private:
    Ui::OverviewDockWidget *ui;
};

#endif // OVERVIEWDOCKWIDGET_H
