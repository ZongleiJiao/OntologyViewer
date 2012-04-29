#include "overviewdockwidget.h"
#include "ui_overviewdockwidget.h"

OverviewDockWidget::OverviewDockWidget(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::OverviewDockWidget)
{
    ui->setupUi(this);
    m_scene = new OverviewScene();
    m_view = new QGraphicsView(m_scene,this);
    this->setWidget(m_view);
//    connect(m_scene,SIGNAL(myclick(QPointF)),this,SLOT(sceneClicked(QPointF)));
    setWindowTitle("Ontology Overview");
}

OverviewDockWidget::~OverviewDockWidget()
{
    delete ui;
}

void OverviewDockWidget::clearall()
{

//    disconnect(m_scene,SIGNAL(myclick(QPointF)),this,SLOT(sceneClicked(QPointF)));
    m_scene->~QGraphicsScene();
    m_scene = new OverviewScene();
//    connect(m_scene,SIGNAL(myclick(QPointF)),this,SLOT(sceneClicked(QPointF)));
    m_view->~QGraphicsView();
    m_view = new QGraphicsView(m_scene,this);
    this->setWidget(m_view);
}
void OverviewDockWidget::addOverviewLine(OverviewClassShape *start, OverviewClassShape *end)
{
    qreal sx = start->pos().rx();
    qreal sy = start->pos().ry();
    qreal ex = end->pos().rx();
    qreal ey = end->pos().ry();
    m_scene->addLine(sx,sy,ex,ey,QPen(QColor("blue")));
}

void OverviewDockWidget::addOverviewShape(OverviewClassShape *shape)
{
    qreal x = shape->pos().rx();
    qreal y = shape->pos().ry();
    int stat = shape->getStatus();
    switch(stat)
    {
    case OverviewClassShape::STATUS_Hide:
//        this->setFillColour(QColor("gray"));
//        this->setSize(QSizeF(1,1));
        break;
    case OverviewClassShape::STATUS_OutDetailview:
//        this->setFillColour(QColor("gray"));
//        this->setSize(QSizeF(4,4));

        m_scene->addRect(x-2,y-2,4,4,QPen(QColor("black")),QBrush(QColor("gray")));
        break;
    case OverviewClassShape::STATUS_InDetailview_Default:
//        this->setFillColour(OwlClass::CLASS_SHAPE_COLOR);
//        this->setSize(QSizeF(8,8));
        break;
    case OverviewClassShape::STATUS_InDetailview_Focused:
//        this->setFillColour(OwlClass::CLASS_SHAPE_FOCUSED_COLOR);
//        this->setSize(QSizeF(8,8));
        break;
    case OverviewClassShape::STATUS_InDetailview_SubFocused:
//        this->setFillColour(OwlClass::SUBCLASS_SHAPE_FOCUSED_COLOR);
//        this->setSize(QSizeF(8,8));
        break;
    case OverviewClassShape::STATUS_InDetailview_SuperFocused:
//        this->setFillColour(OwlClass::SUPERCLASS_SHAPE_FOCUSED_COLOR);
//        this->setSize(QSizeF(8,8));
        break;
    default:
        break;
    }
}

void OverviewDockWidget::sceneClicked(QPointF pos)
{
//    std::cout<<"Scene Clicked:"<<pos.rx()<<","<<pos.ry()<<std::endl;
}
