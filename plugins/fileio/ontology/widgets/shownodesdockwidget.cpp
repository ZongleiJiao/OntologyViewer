#include "shownodesdockwidget.h"
#include "ui_shownodesdockwidget.h"

using namespace std;
ShowNodesDockWidget::ShowNodesDockWidget(QWidget *parent) :
    QDockWidget(parent),
//    ontology(NULL),
    ui(new Ui::ShowNodesDockWidget)
{
    ui->setupUi(this);

}

ShowNodesDockWidget::~ShowNodesDockWidget()
{
    delete ui;
}

void ShowNodesDockWidget::setOntology(OwlOntology * onto,DetailedView *detailedview){
    this->ontology = onto;
    this->detailedview = detailedview;


//    Q_ASSERT(this->ontology);
    connect(this->ui->classCB,SIGNAL(stateChanged(int)),this,SLOT(showEntities(int)));
    connect(this->ui->individualCB,SIGNAL(stateChanged(int)),this,SLOT(showEntities(int)));
    connect(this->ui->propertyCB,SIGNAL(stateChanged(int)),this,SLOT(showEntities(int)));
}

void ShowNodesDockWidget::showEntities(int entityType){

    //TODO if none of the types is selected, pop up message to warn users that there will be no nodes shown

    if(ui->classCB->isChecked()){
        cout <<"class checked" <<endl;
//        this->ontology->drawClassView(this->ontology->maincanvas);
//        this->ontology->maincanvas->restart_graph_layout();

//        this->detailedview->drawClassView(detailedview->CNode,detailedview->Cclasses);
        this->detailedview->reDrawClassView();
    }else{
        cout <<"class unchecked" <<endl;
//        this->ontology->removeClassView(this->ontology->maincanvas);
        this->detailedview->removeClassView();

        if(ui->individualCB->isChecked()){
            this->ontology->drawIndividualView(this->ontology->maincanvas);
            this->ontology->maincanvas->restart_graph_layout();
        }
    }

    if(ui->individualCB->isChecked()){
        cout <<"individual checked" <<endl;
//        this->ontology->drawIndividualView(this->ontology->maincanvas);
        this->detailedview->drawIndividuals();
        //TODO get the layout mode from overview
        this->ontology->maincanvas->setOptLayoutMode(Canvas::FlowLayout);
        this->ontology->maincanvas->setIdealConnectorLength(80);

        this->ontology->maincanvas->restart_graph_layout();
        if(!ui->classCB->isChecked()){
            //TODO add owner class
            return;
        }
    }else{
        cout << "individual unchecked" <<endl;
//        this->ontology->removeIndividualView(this->ontology->maincanvas);
        this->detailedview->removeIndividuals();
    }

//    TODO change this method to switch-case mode: 8 options for each of the combination
//    if(ui->propertyCB->isChecked()){
//        cout << "property checked" <<endl;
//        this->ontology->drawPropertyView(this->ontology->maincanvas);
//        this->ontology->maincanvas->restart_graph_layout();
//    }else{
//        //remove all properties
//    }

}
