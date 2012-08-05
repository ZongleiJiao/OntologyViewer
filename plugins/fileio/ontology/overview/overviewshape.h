#ifndef OVERVIEWSHAPE_H
#define OVERVIEWSHAPE_H

#include <QObject>
#include <QGraphicsRectItem>

class OverviewShape : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
    Q_PROPERTY(QPointF pos READ pos WRITE setPos)
public:
    explicit OverviewShape(QObject *parent = 0);

signals:

public slots:

};

#endif // OVERVIEWSHAPE_H
