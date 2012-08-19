#include "detailvisualizationdockwidget.h"
#include "ui_detailvisualizationdockwidget.h"


DetailVisualizationDockWidget::DetailVisualizationDockWidget(OwlOntology *onto, OwlClass *cls, QWidget *parent):
    QDockWidget(parent),
    ui(new Ui::DetailVisualizationDockWidget)
{
    ui->setupUi(this);

    this->m_onto = onto;
    this->m_cls = cls;

    setWindowTitle("Detail Visualization for " + this->m_cls->shortname);

    m_scene = new QGraphicsScene(ui->sceneDockWidget);
    m_view = new QGraphicsView(m_scene,this);
    ui->sceneDockWidget->setWidget(m_view);
    m_scene->setBackgroundBrush(QBrush(QColor("white")));

    //assign data
    for(int i=0;i<cls->subclasses.size();i++){
        subs.append(cls->subclasses[i]->shortname);
    }
    subs.append(cls->anonymousSubs);

    for(int i=0;i<cls->superclasses.size();i++){
        supers.append(cls->superclasses[i]->shortname);
    }
    supers.append(cls->anonymousSupers);

    for(int i=0;i<cls->disjointclasses.size();i++){
        disjoints.append(cls->disjointclasses[i]->shortname);
    }
    disjoints.append(cls->anonymousDisjoints);

    for(int i=0;i<cls->equivalentclasses.size();i++){
        equs.append(cls->equivalentclasses[i]->shortname);
    }
    equs.append(cls->anonymousEqus);

    for(int i=0;i<cls->individuals.size();i++){
        indvs.append(cls->individuals[i]->shortname);
    }


    //ui operation
    ui->checkBox->setChecked(true);
    ui->checkBox_2->setChecked(true);
    ui->checkBox_3->setChecked(true);
    ui->checkBox_4->setChecked(true);
    ui->checkBox_5->setChecked(true);
    connect(ui->checkBox,SIGNAL(clicked()),this,SLOT(checkbox_Changed()));
    connect(ui->checkBox_2,SIGNAL(clicked()),this,SLOT(checkbox_Changed()));
    connect(ui->checkBox_3,SIGNAL(clicked()),this,SLOT(checkbox_Changed()));
    connect(ui->checkBox_4,SIGNAL(clicked()),this,SLOT(checkbox_Changed()));
    connect(ui->checkBox_5,SIGNAL(clicked()),this,SLOT(checkbox_Changed()));

    this->checkbox_Changed();
}

DetailVisualizationDockWidget::~DetailVisualizationDockWidget()
{
    delete ui;
}

qreal DetailVisualizationDockWidget::drawExpression(Expression * e, qreal rectWidth,qreal sx, qreal sy)
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

    QGraphicsItem *it = m_scene->addRect(rsx,rsy,rw,rh,QPen(QColor("black")),QBrush(bc,Qt::SolidPattern));
    m_scene->addItem(txt);

    it->setToolTip(e->fullexpression);

    qreal ey = rsy+rh;

    qreal subsy = sy + 25;
    for(int i=0;i<e->subExpressions.size();i++){
        drawExpression(e->subExpressions[i],rw-10,sx+10,subsy);
        subsy+=e->subExpressions[i]->getHeight()+10;
    }

    return ey;
}

void DetailVisualizationDockWidget::checkbox_Changed()
{
    m_scene->clear();
    qreal sx = 0;
    qreal sy = 0;
    qreal w = 380;
    if(ui->checkBox->checkState()==Qt::Checked){

        QGraphicsTextItem * txt = new QGraphicsTextItem();
        txt->setPos(sx+5,sy);
        QFont font;
        font.setPixelSize(10);
        font.setBold(false);
        font.setFamily("Calibri");
        txt->setFont(font);
        txt->setDefaultTextColor(QColor("black"));
        txt->setPlainText("[Sub]");
        m_scene->addItem(txt);
        m_scene->addLine(sx,sy+15,w,sy+15,QPen(QColor("black")));
        sy = sy+20;

        for(int i=0;i<subs.size();i++)
        {
            m_scene->addEllipse(3,sy+10,4,4,QPen(QColor("black")),QBrush(QColor("blue")));
            qreal ey = this->drawExpression(Expression::getExpressionData(m_onto,subs[i]),w,sx,sy);
            sy = ey+5;
        }
    }
    if(ui->checkBox_2->checkState()==Qt::Checked){
        QGraphicsTextItem * txt = new QGraphicsTextItem();
        txt->setPos(sx+5,sy);
        QFont font;
        font.setPixelSize(10);
        font.setBold(false);
        font.setFamily("Calibri");
        txt->setFont(font);
        txt->setDefaultTextColor(QColor("black"));
        txt->setPlainText("[Super]");
        m_scene->addItem(txt);
        m_scene->addLine(sx,sy+15,w,sy+15,QPen(QColor("black")));
        sy = sy+20;

        for(int i=0;i<supers.size();i++)
        {
            m_scene->addEllipse(3,sy+10,4,4,QPen(QColor("black")),QBrush(QColor("blue")));
            qreal ey = this->drawExpression(Expression::getExpressionData(m_onto,supers[i]),w,sx,sy);
            sy = ey+5;
        }
    }
    if(ui->checkBox_3->checkState()==Qt::Checked){
        QGraphicsTextItem * txt = new QGraphicsTextItem();
        txt->setPos(sx+5,sy);
        QFont font;
        font.setPixelSize(10);
        font.setBold(false);
        font.setFamily("Calibri");
        txt->setFont(font);
        txt->setDefaultTextColor(QColor("black"));
        txt->setPlainText("[Equivalent]");
        m_scene->addItem(txt);
        m_scene->addLine(sx,sy+15,w,sy+15,QPen(QColor("black")));
        sy = sy+20;

        for(int i=0;i<equs.size();i++)
        {
            m_scene->addEllipse(3,sy+10,4,4,QPen(QColor("black")),QBrush(QColor("blue")));
            qreal ey = this->drawExpression(Expression::getExpressionData(m_onto,equs[i]),w,sx,sy);
            sy = ey+5;
        }
    }
    if(ui->checkBox_4->checkState()==Qt::Checked){
        QGraphicsTextItem * txt = new QGraphicsTextItem();
        txt->setPos(sx+5,sy);
        QFont font;
        font.setPixelSize(10);
        font.setBold(false);
        font.setFamily("Calibri");
        txt->setFont(font);
        txt->setDefaultTextColor(QColor("black"));
        txt->setPlainText("[Disjoint]");
        m_scene->addItem(txt);
        m_scene->addLine(sx,sy+15,w,sy+15,QPen(QColor("black")));
        sy = sy+20;

        for(int i=0;i<disjoints.size();i++)
        {
            m_scene->addEllipse(3,sy+10,4,4,QPen(QColor("black")),QBrush(QColor("blue")));
            qreal ey = this->drawExpression(Expression::getExpressionData(m_onto,disjoints[i]),w,sx,sy);
            sy = ey+5;
        }
    }

    if(ui->checkBox_5->checkState()==Qt::Checked){
        QGraphicsTextItem * txt = new QGraphicsTextItem();
        txt->setPos(sx+5,sy);
        QFont font;
        font.setPixelSize(10);
        font.setBold(false);
        font.setFamily("Calibri");
        txt->setFont(font);
        txt->setDefaultTextColor(QColor("black"));
        txt->setPlainText("[Individual]");
        m_scene->addItem(txt);
        m_scene->addLine(sx,sy+15,w,sy+15,QPen(QColor("black")));
        sy = sy+20;

        for(int i=0;i<indvs.size();i++)
        {
            m_scene->addEllipse(3,sy+10,4,4,QPen(QColor("black")),QBrush(QColor("blue")));
            qreal ey = this->drawExpression(Expression::getExpressionData(m_onto,indvs[i]),w,sx,sy);
            sy = ey+5;
        }
    }

    m_scene->addRect(sx,sy+10,w,10,QPen(Qt::transparent),QBrush(Qt::NoBrush));
}


//void DetailVisualizationDockWidget::lstView_selected(QModelIndex i)
//{
//    QString s = model->data(i,0).toString();
//    Expression *e = Expression::getExpressionData(m_onto,s);
//    this->m_scene->clear();
//    this->drawExpression(e,370);
//}
