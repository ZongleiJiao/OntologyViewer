#include "historydockwidget.h"
#include "ui_historydockwidget.h"

using namespace std;

HistoryDockWidget::HistoryDockWidget(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::HistoryDockWidget)
{
    ui->setupUi(this);
}

HistoryDockWidget::~HistoryDockWidget()
{
    delete ui;
}

void HistoryDockWidget::setOntology(DetailedView *detailedview){
    this->detailedview = detailedview;
    connect(this->detailedview->m_ontology,SIGNAL(savingInterests(QString)),this,SLOT(saveInterest(QString)));
//    connect(this->detailedview->m_ontology,SIGNAL(loadHistory()),this,SLOT(loadInterests()));

    connect(ui->historyList,SIGNAL(itemClicked(QListWidgetItem*)),this,SLOT(selectedItem(QListWidgetItem*)));
}

//TODO now only save class, need add saving other entities
//TODO make it only 10
void HistoryDockWidget::saveInterest(QString name){
    items = ui->historyList->findItems(QString("*"), Qt::MatchWrap | Qt::MatchWildcard);
    if(items.size()>0)
    for(int i=0;i<items.size();i++){
        if(QString::compare(name,items[i]->text())==0){
            delete ui->historyList->item(i);
        }
    }

    ui->historyList->insertItem(0,name);
    items = ui->historyList->findItems(QString("*"), Qt::MatchWrap | Qt::MatchWildcard);
    this->detailedview->m_ontology->db->clearHistoryByOntology(this->detailedview->m_ontology->ontologyID);
    for(int i=0;i<items.size();i++){
        //insert into db
        OwlClass* cls = this->detailedview->m_ontology->getOneClassByName(items[i]->text());
//        cout << cls->shortname.toStdString() <<"------------" <<endl;
        this->detailedview->m_ontology->db->saveInterests(this->detailedview->m_ontology->ontologyID,cls->db_entityID,cls->db_entity_type);

    }
}

void HistoryDockWidget::selectedItem(QListWidgetItem *item){

    QString name = item->text();

    int idx1 = this->detailedview->m_ontology->getIndexOfClasses(name);

    if(idx1 > -1){
        this->detailedview->m_ontology->ontoclass_clicked(this->detailedview->m_ontology->classes[idx1]->shape);
    }
}

void HistoryDockWidget::loadInterests(int ontoID){
cout << "+++++++++++++++>>>>>11111---"<<ontoID<<endl;

//    QList<QString> his = this->detailedview->m_ontology->db->loadHistory(ontoID);

//    cout << "+++++++++++++++>>>>>2222----"<<his.size() <<endl;
//    for(int i=0;i<his.size();i++){
//        ui->historyList->addItem(his[i]);
//    }
}
