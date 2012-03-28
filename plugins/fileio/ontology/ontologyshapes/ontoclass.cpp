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
    levelLabels[5] = QString("");

    //make class shape focusable
    setFlag(ItemIsFocusable, true);
}

QPainterPath OntologyClassShape::buildPainterPath(void)
{
    QPainterPath painter_path;

    painter_path.addRect(-width() / 2, -height() / 2, width(), height());

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
    }else if(event->button() == Qt::RightButton){
        emit this->myRightClick(this);
    }
//    QGraphicsScene *scene = new QGraphicsScene( this );

}

//TODO focusin event
void OntologyClassShape::focusInEvent(QFocusEvent *event){
//    std::cout << "1111111--" << event->type()<<endl;
}

//TODO focusout event
void OntologyClassShape::focusOutEvent(QFocusEvent *event){
//    std::cout << "22222--" << event->type()<<endl;
}

uint OntologyClassShape::levelsOfDetail(void) const{
    return 7;
}

QSizeF OntologyClassShape::sizeForDetailLevel(uint level){
    QString lbl="";
    QString tmpLbl = "";
    int maxLength = 150;
    int temp = 0;
    int maxWidth = 20;

    if(level > 0 && level < this->levelsOfDetail()){
        for(int i=0;i<level;i++){
            tmpLbl = levelLabels[i];

            if(tmpLbl.size() > 40){
                tmpLbl = levelLabels[i].left(40)+"...";
            }

            if(i < level -1){
                lbl += tmpLbl + "\n";
            }else{
                lbl += tmpLbl;
            }

            temp = tmpLbl.size()*10;
            if(temp > maxLength){
                maxLength = temp;
            }
            maxWidth += 13;
        }
        this->setLabel(lbl);

        this->setSize(QSizeF(maxLength,maxWidth));
    }else if(level >= this->levelsOfDetail()){
        int maxLel = this->levelsOfDetail()-1;
        for(int i=0;i<maxLel;i++){
            tmpLbl = levelLabels[i];

            if(i < maxLel -1){
                lbl += tmpLbl + "\n";
            }else{
                lbl += tmpLbl;
            }

            temp = tmpLbl.size()*10;
            if(temp > maxLength){
                maxLength = temp;
            }
            maxWidth += 13;
        }
        this->setLabel(lbl);

        this->setSize(QSizeF(maxLength,maxWidth));
    }

    return this->size();
}

void OntologyClassShape::setLabelByLevels(int level, QString text){
    levelLabels[level-1] = text;
}

void OntologyClassShape::setMyLabel(QString label){

    int maxLength = 150;
    int temp = 0;
    int maxWidth = 20;

    temp = label.size() *10;
    if(temp > maxLength){
        maxLength = temp;
    }
    this->setLabel(label);
    this->setSize(QSizeF(maxLength,maxWidth));
}
