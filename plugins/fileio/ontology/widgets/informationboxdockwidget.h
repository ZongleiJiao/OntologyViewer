#ifndef INFORMATIONBOXDOCKWIDGET_H
#define INFORMATIONBOXDOCKWIDGET_H

#include <QDockWidget>
#include <owlontology.h>

namespace Ui {
class InformationBoxDockWidget;
}
class OwlOntology;
class InformationBoxDockWidget : public QDockWidget
{
    Q_OBJECT
    
public:
    OwlOntology *ontology;

    explicit InformationBoxDockWidget(QWidget *parent = 0);
    ~InformationBoxDockWidget();
    
    void setOntology(OwlOntology * onto);

public slots:

    void displayInfo(QString infor);

private:
    Ui::InformationBoxDockWidget *ui;
};

#endif // INFORMATIONBOXDOCKWIDGET_H
