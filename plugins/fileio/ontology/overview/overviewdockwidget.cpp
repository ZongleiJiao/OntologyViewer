#include "overviewdockwidget.h"
#include "ui_overviewdockwidget.h"
#include "owlclass.h"
#include <ogdf/basic/Graph.h>
#include <ogdf/basic/GraphAttributes.h>


OverviewDockWidget::OverviewDockWidget(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::OverviewDockWidget)
{
    ui->setupUi(this);
    setWindowTitle("Ontology Overview");
    m_scene = new OverviewScene();
    m_view = new QGraphicsView(m_scene,this);
    ui->dockWidget->setWidget(m_view);

    this->originalSeceneSize = m_scene->sceneRect();

    ui->comboBox_LayoutMethod->addItem("Orthogonal Tree");
    ui->comboBox_LayoutMethod->addItem("Tree");    
    ui->comboBox_LayoutMethod->addItem("Radial Tree(90)");
    ui->comboBox_LayoutMethod->addItem("Radial Tree(180)");
    ui->comboBox_LayoutMethod->addItem("FMS");
    ui->comboBox_LayoutMethod->addItem("FMS(Projection)");

    ui->comboBox_Direction->addItem("L->R");
    ui->comboBox_Direction->addItem("R->L");
    ui->comboBox_Direction->addItem("T->B");
    ui->comboBox_Direction->addItem("B->T");

    connect(ui->comboBox_LayoutMethod,SIGNAL(activated(QString)),this,SLOT(layoutMethodChanged(QString)));
    connect(ui->comboBox_Direction,SIGNAL(activated(QString)),this,SLOT(layoutDirectionChanged(QString)));
//    connect(m_scene,SIGNAL(myclick(QPointF)),this,SLOT(sceneClicked(QPointF)));


    this->ontology = NULL;
}

OverviewDockWidget::~OverviewDockWidget()
{
    delete ui;
}

void OverviewDockWidget::setOntology(OwlOntology *onto){
    this->ontology = onto;
}

void OverviewDockWidget::clearall()
{
    this->m_scene->clear();
}

void OverviewDockWidget::addOverviewLine(OwlClass *start, OwlClass *end, QPen pen)
{
    qreal sx = start->overviewshape->pos().rx();
    qreal sy = start->overviewshape->pos().ry();
    qreal ex = end->overviewshape->pos().rx();
    qreal ey = end->overviewshape->pos().ry();
    m_scene->addLine(sx,sy,ex,ey,pen);
}

void OverviewDockWidget::addTreeConnector(DPolyline pl,QPen pen)
{
    ListConstIterator<DPoint> iter;
    qreal x0 = -167;
    qreal y0 = -167;
    for (iter = pl.begin(); iter.valid(); ++iter) {
        qreal x = (*iter).m_x;
        qreal y = (*iter).m_y;
//        std::cout<<"P: x="<<x<<", y="<<y<<endl;
        if(x0!=-167&&y0!=-167)m_scene->addLine(x0,y0,x,y,pen);
        x0=x;
        y0=y;
    }
}

void OverviewDockWidget::fixSceneRect(){
    QRectF rect;
    for(int i=0;i<m_scene->items().size();i++){
        rect |= m_scene->items()[i]->boundingRect();
    }
    rect = rect.adjusted(-20,-20,20,20);
    this->m_scene->setSceneRect(rect);
}

void OverviewDockWidget::addOverviewShape(OwlClass *cls)
{
    qreal x = cls->overviewshape->pos().rx();
    qreal y = cls->overviewshape->pos().ry();

    int stat = cls->overviewshape->getStatus();
    QGraphicsItem *it;
    switch(stat)
    {
    case OverviewClassShape::STATUS_Hide:
//        this->setFillColour(QColor("gray"));
//        this->setSize(QSizeF(1,1));
        break;
    case OverviewClassShape::STATUS_OutDetailview:
//        this->setFillColour(QColor("gray"));
//        this->setSize(QSizeF(4,4));        
        it = m_scene->addRect(x-2,y-2,4,4,QPen(QColor("black")),QBrush(QColor("gray")));
        break;
    case OverviewClassShape::STATUS_InDetailview_Default:
//        this->setFillColour(OwlClass::CLASS_SHAPE_COLOR);
//        this->setSize(QSizeF(8,8));
        it = m_scene->addRect(x-3,y-3,6,6,QPen(QColor("black")),QBrush(OwlClass::CLASS_SHAPE_COLOR));
        break;
    case OverviewClassShape::STATUS_InDetailview_Focused:
//        this->setFillColour(OwlClass::CLASS_SHAPE_FOCUSED_COLOR);
//        this->setSize(QSizeF(8,8));
        it = m_scene->addRect(x-3,y-3,6,6,QPen(QColor("black")),QBrush(OwlClass::CLASS_SHAPE_FOCUSED_COLOR));
        break;
    case OverviewClassShape::STATUS_InDetailview_SubFocused:
//        this->setFillColour(OwlClass::SUBCLASS_SHAPE_FOCUSED_COLOR);
//        this->setSize(QSizeF(8,8));
        it = m_scene->addRect(x-3,y-3,6,6,QPen(QColor("black")),QBrush(OwlClass::SUBCLASS_SHAPE_FOCUSED_COLOR));
        break;
    case OverviewClassShape::STATUS_InDetailview_SuperFocused:
//        this->setFillColour(OwlClass::SUPERCLASS_SHAPE_FOCUSED_COLOR);
//        this->setSize(QSizeF(8,8));
        it = m_scene->addRect(x-3,y-3,6,6,QPen(QColor("black")),QBrush(OwlClass::SUPERCLASS_SHAPE_FOCUSED_COLOR));
        break;
    default:
        break;
    }
    if(it != NULL)it->setToolTip(cls->shortname);
}

void OverviewDockWidget::sceneClicked(QPointF pos)
{
//    std::cout<<"Scene Clicked:"<<pos.rx()<<","<<pos.ry()<<std::endl;
    m_centerpos = pos;
    QColor grey(0, 0, 0, 60);
    QRectF viewRect = QRectF(m_centerpos.rx()-40,m_centerpos.ry()-30,80,60);
    QPolygon polygon = QPolygon(m_scene->sceneRect().toRect()).subtracted(
            QPolygon(viewRect.toRect()));
    m_scene->addPolygon(polygon,QPen(Qt::transparent),QBrush(grey));
}

void OverviewDockWidget::layoutMethodChanged(QString method)
{
//    if(method.left(11)=="Radial Tree"||method=="FMS"){
//        ui->comboBox_Direction->setHidden(true);
//    }
//    else ui->comboBox_Direction->setHidden(false);
    emit(this->layoutChanged(method));
}
void OverviewDockWidget::layoutDirectionChanged(QString dir)
{
    emit(this->directionChanged(dir));
}

void OverviewDockWidget::resizeEvent(QResizeEvent *event){
//    if(event)
    int w = this->width();
    int h = this->height();
    int posx = w/2;
    if(posx<120)posx=120;
    ui->comboBox_LayoutMethod->setGeometry(QRect(0, 0, posx, 28));
    ui->comboBox_Direction->setGeometry(QRect(posx, 0, w-posx, 28));
    ui->dockWidget->setGeometry(QRect(0, 10, w, h-35));
}
