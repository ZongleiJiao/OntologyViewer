#include "util.h"
#include "QtGui"
using namespace dunnart;
using namespace std;

Util::Util(OwlOntology *ontology,QObject *parent) : QObject(parent)
{
    onto = ontology;
}

//void Util::connectWgt(InformationBoxDockWidget *wgt){
//    this->inforWgt = wgt;
////    connect(onto,SIGNAL(clickedClass(QString)),inforWgt,SLOT(displayInfo(QString)));
//}
