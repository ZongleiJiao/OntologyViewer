#ifndef SEARCHDOCKWIDGET_H
#define SEARCHDOCKWIDGET_H

#include <QDockWidget>
#include <owlontology.h>

namespace Ui {
class SearchDockWidget;
}

class OwlOntology;
class QListWidgetItem;

class SearchDockWidget : public QDockWidget
{
    Q_OBJECT
    
public:

    OwlOntology *ontology;

    explicit SearchDockWidget(QWidget *parent = 0);
    ~SearchDockWidget();
    void setOntology(OwlOntology * onto);
public slots:
    void searchOntology();
    void selectedEntity(QListWidgetItem* item);
    void sortingList();
    void clearSearch();
private:
    Ui::SearchDockWidget *ui;
};

#endif // SEARCHDOCKWIDGET_H
