#ifndef SHOWNODESDOCKWIDGET_H

#define SHOWNODESDOCKWIDGET_H

#include <QDockWidget>

//#include <owlontology.h>

#include "overview/detailedview.h"

namespace Ui {

class ShowNodesDockWidget;

}
class DetailedView;
//class OwlOntology;

//class Overview;

class ShowNodesDockWidget : public QDockWidget

{

    Q_OBJECT



public:

    OwlOntology *ontology;

//    Overview *overview;

    DetailedView *detailedview;

    void setOntology(OwlOntology * onto);

//    void setOntology(Overview *overview);

    explicit ShowNodesDockWidget(QWidget *parent = 0);

    ~ShowNodesDockWidget();



private:

    Ui::ShowNodesDockWidget *ui;

public slots:

    void showEntities(int entityType);

};

#endif // SHOWNODESDOCKWIDGET_H
