#include "overviewscene.h"

OverviewScene::OverviewScene()
{
}

void OverviewScene::mousePressEvent(QGraphicsSceneMouseEvent *event){

    if (event->button() == Qt::LeftButton) {

        emit this->myclick(event->scenePos());

    }else if(event->button() == Qt::RightButton){
        //emit this->myRightClick(this);
    }
}
