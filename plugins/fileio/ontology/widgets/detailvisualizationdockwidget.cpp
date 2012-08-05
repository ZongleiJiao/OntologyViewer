#include "detailvisualizationdockwidget.h"
#include "ui_detailvisualizationdockwidget.h"


DetailVisualizationDockWidget::DetailVisualizationDockWidget(OwlOntology *onto, OwlClass *cls, QWidget *parent):
    QDockWidget(parent),
    ui(new Ui::DetailVisualizationDockWidget)
{
    ui->setupUi(this);
    bg1 = new QButtonGroup(this);
    bg1->addButton(ui->radioButton);
    bg1->addButton(ui->radioButton_2);
    bg1->addButton(ui->radioButton_3);
    bg1->addButton(ui->radioButton_4);

    this->m_onto = onto;
    this->m_cls = cls;

    setWindowTitle("Detail Visualization for " + this->m_cls->shortname);

    m_scene = new QGraphicsScene(ui->sceneDockWidget);
    m_view = new QGraphicsView(m_scene,this);
    ui->sceneDockWidget->setWidget(m_view);
    m_scene->setBackgroundBrush(QBrush(QColor(189, 189, 223)));

    //test data
    equs += "ObjectIntersectionOf(<Person> ObjectSomeValuesFrom(<hasHabitat> <University>) DataHasValue(<isHardWorking> \"true\"^^xsd:boolean))";
    equs += "ObjectIntersectionOf(<Student> ObjectAllValuesFrom(<hasChildren> <Female>) ObjectHasValue(<hasGender> <male>) ObjectExactCardinality(3 <hasChildren> Thing))";
    subs += "abc";
    supers += "expsss";
    //assign data

    //ui operation
    model = new QStringListModel(this->equs);
    ui->listView->setModel(this->model);

    connect(ui->radioButton,SIGNAL(clicked()),this,SLOT(rbtn_subs()));
    connect(ui->radioButton_2,SIGNAL(clicked()),this,SLOT(rbtn_supers()));
    connect(ui->radioButton_3,SIGNAL(clicked()),this,SLOT(rbtn_disjoints()));
    connect(ui->radioButton_4,SIGNAL(clicked()),this,SLOT(rbtn_equs()));

    connect(ui->listView,SIGNAL(clicked(QModelIndex)),this,SLOT(lstView_selected(QModelIndex)));
}

DetailVisualizationDockWidget::~DetailVisualizationDockWidget()
{
    delete ui;
}

void DetailVisualizationDockWidget::drawExpression(Expression * e, qreal rectWidth,qreal sx, qreal sy)
{
    qreal rsx = sx+10;
    qreal rsy = sy+5;
    qreal rw = rectWidth -15;
    qreal rh = e->getHeight();

    QColor bc; //brush color
    if(e->type == 1) bc = QColor("lightgray");
    else if(e->type == 2) bc = OwlOntology::CLASS_SHAPE_COLOR;
    else if(e->type == 3) bc = OwlOntology::INDIVIDUAL_SHAPE_COLOR;
    else if(e->type == 4) bc = OwlOntology::PROPERTY_SHAPE_COLOR;
    else bc = QColor("lightyellow");

    QGraphicsTextItem * txt = new QGraphicsTextItem();
    txt->setPos(rsx+5,rsy);
    QFont font;
    font.setPixelSize(10);
    font.setBold(false);
    font.setFamily("Calibri");
    txt->setFont(font);
    txt->setDefaultTextColor(QColor("black"));
    txt->setPlainText(e->symbol);

    m_scene->addRect(rsx,rsy,rw,rh,QPen(QColor("black")),QBrush(bc,Qt::SolidPattern));
    m_scene->addItem(txt);

    qreal subsy = sy + 25;
    for(int i=0;i<e->subExpressions.size();i++){
        drawExpression(e->subExpressions[i],rw-10,sx+10,subsy);
        subsy+=e->subExpressions[i]->getHeight()+10;
    }
}

void DetailVisualizationDockWidget::rbtn_subs()
{
    model->setStringList(subs);
}

void DetailVisualizationDockWidget::rbtn_supers()
{
    model->setStringList(supers);
}

void DetailVisualizationDockWidget::rbtn_disjoints()
{
    model->setStringList(disjoints);
}

void DetailVisualizationDockWidget::rbtn_equs()
{
    model->setStringList(equs);
}

void DetailVisualizationDockWidget::lstView_selected(QModelIndex i)
{
    QString s = model->data(i,0).toString();
    Expression *e = Expression::getExpressionData(m_onto,s);
    this->m_scene->clear();
    this->drawExpression(e,370);
}
