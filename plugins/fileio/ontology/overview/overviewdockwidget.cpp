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
    m_scene = new OverviewScene();
    m_view = new QGraphicsView(m_scene,this);
    this->setWidget(m_view);
//    connect(m_scene,SIGNAL(myclick(QPointF)),this,SLOT(sceneClicked(QPointF)));
    setWindowTitle("Ontology Overview");

    this->ontology = NULL;
    this->sceneClicked(QPointF(0,0));
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

    m_scene->clear();
}

void OverviewDockWidget::addOverviewLine(OverviewClassShape *start, OverviewClassShape *end, QPen pen)
{
    qreal sx = start->pos().rx();
    qreal sy = start->pos().ry();
    qreal ex = end->pos().rx();
    qreal ey = end->pos().ry();
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
        m_scene->addRect(x-3,y-3,6,6,QPen(QColor("black")),QBrush(OwlClass::CLASS_SHAPE_COLOR));
        break;
    case OverviewClassShape::STATUS_InDetailview_Focused:
//        this->setFillColour(OwlClass::CLASS_SHAPE_FOCUSED_COLOR);
//        this->setSize(QSizeF(8,8));
        m_scene->addRect(x-3,y-3,6,6,QPen(QColor("black")),QBrush(OwlClass::CLASS_SHAPE_FOCUSED_COLOR));
        break;
    case OverviewClassShape::STATUS_InDetailview_SubFocused:
//        this->setFillColour(OwlClass::SUBCLASS_SHAPE_FOCUSED_COLOR);
//        this->setSize(QSizeF(8,8));
        m_scene->addRect(x-3,y-3,6,6,QPen(QColor("black")),QBrush(OwlClass::SUBCLASS_SHAPE_FOCUSED_COLOR));
        break;
    case OverviewClassShape::STATUS_InDetailview_SuperFocused:
//        this->setFillColour(OwlClass::SUPERCLASS_SHAPE_FOCUSED_COLOR);
//        this->setSize(QSizeF(8,8));
        m_scene->addRect(x-3,y-3,6,6,QPen(QColor("black")),QBrush(OwlClass::SUPERCLASS_SHAPE_FOCUSED_COLOR));
        break;
    default:
        break;
    }
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
