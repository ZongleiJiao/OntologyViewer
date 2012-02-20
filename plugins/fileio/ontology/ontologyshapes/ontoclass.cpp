#include <QString>
#include "libdunnartcanvas/canvasitem.h"
#include "ontoclass.h"
#include "QMouseEvent"

using namespace dunnart;
using namespace std;

OntologyClassShape::OntologyClassShape() : ShapeObj("ontoclass")
{
    levelLabels[0] = QString("");
    levelLabels[1] = QString("");
    levelLabels[2] = QString("");
    levelLabels[3] = QString("");
    levelLabels[4] = QString("");

    levelSizes = new QSizeF[5];
    levelSizes[0] = QSizeF(150,20);
    levelSizes[1] = QSizeF(200,35);
    levelSizes[2] = QSizeF(200,50);
    levelSizes[3] = QSizeF(200,65);
    levelSizes[4] = QSizeF(200,80);
}

QPainterPath OntologyClassShape::buildPainterPath(void)
{
    QPainterPath painter_path;

    double yround = (height() / 2);
    double xround = (width() / 2);

    double round = (xround <= yround) ? xround : yround;

    painter_path.addRoundedRect(-width() / 2, -height() / 2, width(), height(),
            round, round);

    return painter_path;
}


void OntologyClassShape::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        emit myDoubleClick(this);
    }
    setFocus();
//    QGraphicsScene *scene = new QGraphicsScene( this );
//    scene->setFocusItem(this);
}

void OntologyClassShape::mousePressEvent(QGraphicsSceneMouseEvent *event){

    if (event->button() == Qt::LeftButton) {
        emit myclick(this);
    }
//    QGraphicsScene *scene = new QGraphicsScene( this );

}
void OntologyClassShape::focusInEvent(QFocusEvent *event){
    std::cout << "1111111--" << event->type()<<endl;
}

void OntologyClassShape::focusOutEvent(QFocusEvent *event){
    std::cout << "22222--" << event->type()<<endl;
}

uint OntologyClassShape::levelsOfDetail(void) const{
    return 5;
}

QSizeF OntologyClassShape::sizeForDetailLevel(uint level){
    QString lbl="";

    if(level > 0 && level <= this->levelsOfDetail()){
        this->setSize(levelSizes[level-1]);
        for(int i=0;i<level;i++){
            if(i < level -1){
                lbl += levelLabels[i] + "\n";
            }else{
                lbl += levelLabels[i];
            }
        }
        this->setLabel(lbl);
    }

    return this->size();
}

void OntologyClassShape::setLabelByLevels(int level, QString text){
    levelLabels[level-1] = text;
}

void OntologyClassShape::setSizeByLevels(int level, QSizeF size){
    levelSizes[level-1] = size;
}
