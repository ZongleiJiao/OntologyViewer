#ifndef SHOWNODESDOCKWIDGET_H
#define SHOWNODESDOCKWIDGET_H

#include <QDockWidget>
#include <owlontology.h>

namespace Ui {
class ShowNodesDockWidget;
}
class OwlOntology;
class ShowNodesDockWidget : public QDockWidget
{
    Q_OBJECT
    
public:
    OwlOntology *ontology;

    void setOntology(OwlOntology * onto);

    explicit ShowNodesDockWidget(QWidget *parent = 0);
    ~ShowNodesDockWidget();
    
private:
    Ui::ShowNodesDockWidget *ui;

public slots:
    void showEntities(int entityType);
};

#endif // SHOWNODESDOCKWIDGET_H
