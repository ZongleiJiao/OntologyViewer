#ifndef OVERVIEWDOCKWIDGET_H
#define OVERVIEWDOCKWIDGET_H

#include <QDockWidget>
#include "libdunnartcanvas/canvas.h"
#include "libdunnartcanvas/canvasview.h"
#include <overview/overviewscene.h>
#include <owlontology.h>
#include <ogdf/basic/geometry.h>
#include <overview/overviewshape.h>
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
    void setOverviewNodeNumber(int);
    void setDetailviewNodeNumber(int);
    void setNumber(int,int);
public slots:
    void sceneClicked(QPointF pos);
    void layoutMethodChanged(QString method);
    void layoutDirectionChanged(QString dir);
    void le_ovnChange(QString ovn);
    void le_dvnChange(QString dvn);
    void btnGo_Clicked();
public:
    explicit OverviewDockWidget(QWidget *parent = 0);
    ~OverviewDockWidget();

    OwlOntology *ontology;
    OverviewScene *m_scene;
    QGraphicsView *m_view;
    QPointF m_centerpos;
    QGraphicsItem *hoverCircle;

    QList<OverviewShape *> gitems;
    QList<QPointF> oripos;
    QList<QPointF> oriabspos;
    QList<QGraphicsItem *> lines;
    QList<int> gitem_status;
    QList<OverviewShape *> hideclasses;

    int getGItemID(QString shortname);

    QParallelAnimationGroup *ani_group;
    void animationPre();
    void animationStart();
//    Canvas *my_canvas;
//    CanvasView * my_view;
    void setOntology(OwlOntology * onto);
    void clearall();
    void clearallitems();

    void addOverviewShape(OwlClass *shape);
    void addOverviewLine(OwlClass *start,OwlClass *end,QPen pen);
    void addLine(qreal sx, qreal sy, qreal ex, qreal ey, QPen pen);
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
