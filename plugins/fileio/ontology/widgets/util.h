#ifndef UTIL_H
#define UTIL_H
#include <owlontology.h>
#include <widgets/informationboxdockwidget.h>

class Util : public QObject
{
    Q_OBJECT
//public slots:
//    void display(QString str);
public:
    OwlOntology * onto;
    InformationBoxDockWidget * inforWgt;

    Util(OwlOntology *ontology,QObject *parent = 0);

//    void connectWgt(InformationBoxDockWidget * inforWgt);

};

#endif // UTIL_H
