#include "informationboxdockwidget.h"
#include "ui_informationboxdockwidget.h"

using namespace std;

InformationBoxDockWidget::InformationBoxDockWidget(QWidget *parent) :
    QDockWidget(parent),
    ontology(NULL),
    ui(new Ui::InformationBoxDockWidget)
{
    ui->setupUi(this);
}

InformationBoxDockWidget::~InformationBoxDockWidget()
{
    delete ui;
}

void InformationBoxDockWidget::setOntology(OwlOntology *onto){
    this->ontology = onto;

    Q_ASSERT(this->ontology);
    connect(this->ontology,SIGNAL(loading(QString)),this,SLOT(displayInfo(QString)));
//    connect(ontology,SIGNAL(clickedClass(QString)),this,SLOT(displayInfo(QString)));
}

void InformationBoxDockWidget::displayInfo(QString infor)
{
    if(infor.compare("OntologyInfor")==0)
    {
        ui->Infor->setText(this->ontology->ontoInfo);
    }
    else{
        //display details of one entity
        int idx = this->ontology->getIndexOfClasses(infor);
//        QString str = this->ontology->classes.at(idx)->toQString();
        QString str = this->ontology->getClassInfo(this->ontology->classes[idx]);
        ui->Infor->setText(str);
    }
}
