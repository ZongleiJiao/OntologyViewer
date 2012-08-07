#include "searchdockwidget.h"
#include "ui_searchdockwidget.h"
#include "QList"
#include <owlclass.h>
#include <owlproperty.h>
#include <owlindividual.h>
#include "QListWidgetItem"

using namespace std;
SearchDockWidget::SearchDockWidget(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::SearchDockWidget)
{
    ui->setupUi(this);

    connect(ui->searchBtn,SIGNAL(clicked()),this,SLOT(searchOntology()));
    connect(ui->input,SIGNAL(returnPressed()),this,SLOT(searchOntology()));
    connect(ui->sorting,SIGNAL(activated(QString)),this,SLOT(sortingList()));
    connect(ui->clearBtn,SIGNAL(clicked()),this,SLOT(clearSearch()));
}

SearchDockWidget::~SearchDockWidget()
{
    delete ui;
}

void SearchDockWidget::setOntology(OwlOntology *onto){
    this->ontology = onto;
    connect(ui->resultList,SIGNAL(itemClicked(QListWidgetItem*)),this,SLOT(selectedEntity(QListWidgetItem*)));
}

void SearchDockWidget::selectedEntity(QListWidgetItem *item){
//    cout << "-=--=----=" << item->text().toStdString()<<endl;
    QString name = item->text();
    int idx1 = this->ontology->getIndexOfClasses(name);
//    int idx2 = this->ontology->getIndexOfIndividuals(name);
    if(idx1 > -1){
        this->ontology->ontoclass_clicked(this->ontology->classes[idx1]->shape);
    }

}

void SearchDockWidget::searchOntology()
{
    ui->resultList->clear();
    QString searchText = ui->input->text();

    if(!ui->classCB->isChecked() && !ui->individualCB->isChecked()
            && !ui->dPropertyCB->isChecked() && !ui->oPropertyCB->isChecked())
    {
        QList<OwlClass *> classes = this->ontology->getOwlClassByName(searchText);
        QList<OwlIndividual *> individuals = this->ontology->getOwlIndividualByName(searchText);
        QList<OwlProperty *> properties = this->ontology->getOwlPropertyByName(searchText);

        if(classes.isEmpty() && individuals.isEmpty() && properties.isEmpty())
        {
            ui->resultList->addItem("Oops! Cannot find any entity by this name!");
        }

        if(!classes.isEmpty()){
            ui->resultList->addItem("----OwlClasses----");
           for(int i =0; i < classes.size() ; i ++)
           {
               ui->resultList->addItem(classes.at(i)->shortname);
           }
        }

        if(!individuals.isEmpty()){
            ui->resultList->addItem("----Individuals----");
           for(int i =0; i < individuals.size() ; i ++)
           {
               ui->resultList->addItem(individuals.at(i)->shortname);
           }
        }

        if(!properties.isEmpty()){
            ui->resultList->addItem("----Properties----");
           for(int i =0; i < properties.size() ; i ++)
           {
               ui->resultList->addItem(properties.at(i)->shortname);
           }
        }
    }else{
        if(ui->classCB->isChecked()){
            QList<OwlClass *> classes = this->ontology->getOwlClassByName(searchText);

            if(classes.isEmpty()){
                ui->resultList->addItem("Oops! Cannot find any class by this name!");
            }else{
                ui->resultList->addItem("----OwlClasses----");
               for(int i =0; i < classes.size() ; i ++)
               {
                   ui->resultList->addItem(classes.at(i)->shortname);
               }
            }
        }

        if(ui->individualCB->isChecked()){
            QList<OwlIndividual *> individuals = this->ontology->getOwlIndividualByName(searchText);
            if(individuals.isEmpty()){
                ui->resultList->addItem("Oops! Cannot find any individual by this name!");
            }else{
                ui->resultList->addItem("----Individuals----");
               for(int i =0; i < individuals.size() ; i ++)
               {
                   ui->resultList->addItem(individuals.at(i)->shortname);
               }
            }
        }

        if(ui->dPropertyCB->isChecked()){
            QList<OwlProperty *> dProperties = this->ontology->getOwlDataPropertyByName(searchText);
            if(dProperties.isEmpty()){
                ui->resultList->addItem("Oops! Cannot find any data property by this name!");
            }else{
                ui->resultList->addItem("----Data Property----");
               for(int i =0; i < dProperties.size() ; i ++)
               {
                   ui->resultList->addItem(dProperties.at(i)->shortname);
               }
            }
        }

        if(ui->oPropertyCB->isChecked()){
            QList<OwlProperty *> oProperties = this->ontology->getOwlObjectPropertyByName(searchText);
            if(oProperties.isEmpty()){
                ui->resultList->addItem("Oops! Cannot find any object property by this name!");
            }else{
                ui->resultList->addItem("----Object Property----");
               for(int i =0; i < oProperties.size() ; i ++)
               {
                   ui->resultList->addItem(oProperties.at(i)->shortname);
               }
            }
        }
    }

}

void SearchDockWidget::sortingList(){
    cout << "----------------->>>" << ui->sorting->currentText().toStdString()<<endl;
    if(ui->sorting->currentText().compare("Alphabetically") == 0){
        ui->resultList->sortItems(Qt::AscendingOrder);
    }else if(ui->sorting->currentText().compare("Importance") == 0){
        //read XML file to sort result ...., now is DescendingOrder
        ui->resultList->sortItems(Qt::DescendingOrder);
    }
}

void SearchDockWidget::clearSearch(){
    ui->input->clear();
    ui->resultList->clear();
    ui->sorting->setCurrentIndex(0);
    ui->classCB->setChecked(false);
    ui->individualCB->setChecked(false);
    ui->dPropertyCB->setChecked(false);
    ui->oPropertyCB->setChecked(false);
}
