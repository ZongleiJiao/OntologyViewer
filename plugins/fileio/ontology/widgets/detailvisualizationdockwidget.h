#ifndef DETAILVISUALIZATIONDOCKWIDGET_H
#define DETAILVISUALIZATIONDOCKWIDGET_H

#include <QDockWidget>
#include <QtGui>
#include <owlontology.h>
#include <owlclass.h>
#include <expression.h>

namespace Ui {
    class DetailVisualizationDockWidget;
}

class DetailVisualizationDockWidget : public QDockWidget
{
    Q_OBJECT

public:
    explicit DetailVisualizationDockWidget(OwlOntology * onto, OwlClass * cls, QWidget *parent = 0);
    ~DetailVisualizationDockWidget();
    QButtonGroup *bg1;
    QGraphicsScene * m_scene;
    QGraphicsView * m_view;

    OwlOntology * m_onto;
    OwlClass * m_cls;

    QStringListModel *model;


    QList<QString> subs;
    QList<QString> equs;
    QList<QString> disjoints;
    QList<QString> supers;
    QList<QString> indvs;

    qreal drawExpression(Expression * e,qreal rectWidth,qreal sx=0, qreal sy=0);

private:
    Ui::DetailVisualizationDockWidget *ui;

public slots:
    void checkbox_Changed();
//    void lstView_selected(QModelIndex i);
};

#endif // DETAILVISUALIZATIONDOCKWIDGET_H
