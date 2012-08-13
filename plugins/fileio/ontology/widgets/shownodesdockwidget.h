#ifndef SHOWNODESDOCKWIDGET_H

#define SHOWNODESDOCKWIDGET_H

#include <QDockWidget>
#include "overview/detailedview.h"

namespace Ui {

class ShowNodesDockWidget;

}
class DetailedView;

class ShowNodesDockWidget : public QDockWidget

{

    Q_OBJECT



public:

    OwlOntology *ontology;
    DetailedView *detailedview;

    void setOntology(OwlOntology * onto,DetailedView *detailedview);

    explicit ShowNodesDockWidget(QWidget *parent = 0);

    ~ShowNodesDockWidget();



private:

    Ui::ShowNodesDockWidget *ui;

public slots:

    void showEntities(int entityType);

};

#endif // SHOWNODESDOCKWIDGET_H
