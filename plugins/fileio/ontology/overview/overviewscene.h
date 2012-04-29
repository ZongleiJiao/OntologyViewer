#ifndef OVERVIEWSCENE_H
#define OVERVIEWSCENE_H
#include <QtGui>

class OverviewScene : public QGraphicsScene
{
    Q_OBJECT
    signals:
    void myclick(QPointF pos);
public:
    OverviewScene();

    void mousePressEvent(QGraphicsSceneMouseEvent *event);
};

#endif // OVERVIEWSCENE_H
