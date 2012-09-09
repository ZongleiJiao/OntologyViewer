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

//    connect(ui->resultList,SIGNAL(doubleClicked(QModelIndex)),this,SLOT(doubleClickedListItem(QModelIndex)));
}

SearchDockWidget::~SearchDockWidget()
{
    delete ui;
}

void SearchDockWidget::setOntology(OwlOntology *onto){
    this->ontology = onto;
    connect(ui->resultList,SIGNAL(itemClicked(QListWidgetItem*)),this,SLOT(selectedEntity(QListWidgetItem*)));
    connect(ui->resultList,SIGNAL(itemDoubleClicked(QListWidgetItem*)),this,SLOT(doubleClickedEntity(QListWidgetItem*)));
}

void SearchDockWidget::selectedEntity(QListWidgetItem *item){
    QString name = item->text();
    QList<OwlClass *> selcs;
    if(name=="----OwlClasses----") {
        selcs.append(classes);
    }
    else{
        int idx1 = this->ontology->getIndexOfClasses(name);
        if(idx1 > -1){
            selcs.append(this->ontology->classes[idx1]);
        }
    }
    if(!selcs.empty())
        emit this->searchResultSelected(selcs);

}

void SearchDockWidget::doubleClickedEntity(QListWidgetItem *item)
{
    QString name = item->text();
    int idx1 = this->ontology->getIndexOfClasses(name);
    if(idx1 > -1){
        emit this->searchResultDoubleClicked(this->ontology->classes[idx1]);
    }
}

void SearchDockWidget::searchOntology()
{
    ui->resultList->clear();
    QString searchText = ui->input->text();

    if(!ui->classCB->isChecked() && !ui->individualCB->isChecked()
            && !ui->dPropertyCB->isChecked() && !ui->oPropertyCB->isChecked())
    {
        classes.clear();
        individuals.clear();
        properties.clear();
        classes = this->ontology->getOwlClassByName(searchText);
        individuals = this->ontology->getOwlIndividualByName(searchText);
        properties = this->ontology->getOwlPropertyByName(searchText);

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
    classes.clear();
    individuals.clear();
    properties.clear();
    ui->input->clear();
    ui->resultList->clear();
    ui->sorting->setCurrentIndex(0);
    ui->classCB->setChecked(false);
    ui->individualCB->setChecked(false);
    ui->dPropertyCB->setChecked(false);
    ui->oPropertyCB->setChecked(false);
}

