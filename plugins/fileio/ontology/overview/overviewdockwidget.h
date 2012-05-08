#ifndef OVERVIEWDOCKWIDGET_H
#define OVERVIEWDOCKWIDGET_H

#include <QDockWidget>
#include "libdunnartcanvas/canvas.h"
#include "libdunnartcanvas/canvasview.h"
#include <overview/overviewscene.h>
#include <owlontology.h>
#include <ogdf/basic/geometry.h>
using namespace dunnart;
using namespace ogdf;

namespace Ui {
    class OverviewDockWidget;
}

class OverviewDockWidget : public QDockWidget
{
    Q_OBJECT
signals:
    void layoutChanged(QString);
    void directionChanged(QString);
public slots:
    void sceneClicked(QPointF pos);
    void layoutMethodChanged(QString method);
    void layoutDirectionChanged(QString dir);
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

    void addOverviewShape(OwlClass *shape);
    void addOverviewLine(OwlClass *start,OwlClass *end,QPen pen);
    void addTreeConnector(DPolyline pl,QPen pen);

    void fixSceneRect();

    QGraphicsItem * highlightpolygon;
    void highlightItems(QList<OwlClass *> cls);

    //event
    void resizeEvent(QResizeEvent *event);

private:
    Ui::OverviewDockWidget *ui;
    QRectF originalSeceneSize;
};

#endif // OVERVIEWDOCKWIDGET_H
