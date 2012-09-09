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

    QList<OwlClass *> classes;
    QList<OwlIndividual *> individuals;
    QList<OwlProperty *> properties;


    explicit SearchDockWidget(QWidget *parent = 0);
    ~SearchDockWidget();
    void setOntology(OwlOntology * onto);
signals:
    void searchResultDoubleClicked(OwlClass *);
    void searchResultSelected(QList<OwlClass *>);
public slots:
    void searchOntology();
    void selectedEntity(QListWidgetItem* item);
    void doubleClickedEntity(QListWidgetItem* item);

    void sortingList();
    void clearSearch();
private:
    Ui::SearchDockWidget *ui;
};

#endif // SEARCHDOCKWIDGET_H
