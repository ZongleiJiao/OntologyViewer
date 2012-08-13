#ifndef FILTERDOCKWIDGET_H
#define FILTERDOCKWIDGET_H

#include <QDockWidget>
#include <owlontology.h>
//#include "overview/detailedview.h"

namespace Ui {
class FilterDockWidget;
}
class OwlOntology;
//class DetailedView;

class FilterDockWidget : public QDockWidget
{
    Q_OBJECT
    
public:
    OwlOntology* ontology;
//    DetailedView* detailedview;

    void setOntology(OwlOntology* ontology);
//    void setOntology(OwlOntology* ontology,DetailedView* detailedview);
    explicit FilterDockWidget(QWidget *parent = 0);
    ~FilterDockWidget();
    
private:
    Ui::FilterDockWidget *ui;

public slots:
    void filterEntities();
    void clearFilter();
};

#endif // FILTERDOCKWIDGET_H
