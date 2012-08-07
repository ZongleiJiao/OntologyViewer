#ifndef FILTERDOCKWIDGET_H
#define FILTERDOCKWIDGET_H

#include <QDockWidget>
#include <owlontology.h>

namespace Ui {
class FilterDockWidget;
}
class OwlOntology;
class FilterDockWidget : public QDockWidget
{
    Q_OBJECT
    
public:
    OwlOntology* ontology;

    void setOntology(OwlOntology* ontology);
    explicit FilterDockWidget(QWidget *parent = 0);
    ~FilterDockWidget();
    
private:
    Ui::FilterDockWidget *ui;

public slots:
    void filterEntities();
    void clearFilter();
};

#endif // FILTERDOCKWIDGET_H
