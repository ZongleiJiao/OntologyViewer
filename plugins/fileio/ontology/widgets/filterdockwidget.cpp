#include "filterdockwidget.h"
#include "ui_filterdockwidget.h"
//#include <owlclass.h>
//#include <QtGui>

using namespace std;

FilterDockWidget::FilterDockWidget(QWidget *parent) :
    QDockWidget(parent),
//    ontology(NULL),
    ui(new Ui::FilterDockWidget)
{
    ui->setupUi(this);
}

FilterDockWidget::~FilterDockWidget()
{
    delete ui;
}

//void FilterDockWidget::setOntology(OwlOntology *ontology,DetailedView* detailedview){
    void FilterDockWidget::setOntology(OwlOntology *ontology){
    this->ontology = ontology;

    Q_ASSERT(this->ontology);
//    connect(this->ontology,SIGNAL(loading(QString)),this,SLOT(displayInfo(QString)));

    connect(ui->filterBtn,SIGNAL(clicked()),this,SLOT(filterEntities()));
    connect(ui->name,SIGNAL(returnPressed()),this,SLOT(filterEntities()));
    connect(ui->clearBtn,SIGNAL(clicked()),this,SLOT(clearFilter()));
}

void FilterDockWidget::filterEntities(){
    QString name = ui->name->text();

    if(name.isNull() || name.isEmpty())
    {
        return;
    }

    QList<OwlClass*> classes = this->ontology->getCurrentOwlClassByName(name);

    int m = classes.size();
    int n = -1;
    for(int i=0;i<m;i++){
        if(!classes[i]->classesconnectors.isEmpty()){
            n = this->ontology->classes[i]->classesconnectors.size();
            for(int j=0;j<n;j++){
                this->ontology->maincanvas->removeItem(classes[i]->classesconnectors[j]);

            }
        }
        this->ontology->maincanvas->removeItem(classes[i]->shape);
    }

    this->ontology->maincanvas->restart_graph_layout();
}

void FilterDockWidget::clearFilter(){
    ui->name->clear();
    this->ontology->drawClassView(this->ontology->maincanvas);
    this->ontology->maincanvas->restart_graph_layout();

}





