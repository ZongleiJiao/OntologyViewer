#ifndef ONTOCLASS_H
#define ONTOCLASS_H

#include "libdunnartcanvas/shape.h"
#include <QGraphicsSceneMouseEvent>
#include <QString>

using dunnart::ShapeObj;

class OntologyClassShape: public ShapeObj
{
    Q_OBJECT
    signals:
    void myclick(OntologyClassShape *shape);
    void myDoubleClick(OntologyClassShape *shape);
    void myRightClick(OntologyClassShape *shape);
    void myMouseHoverEnter(QString shortname);
    void myMouseHoverLeave(QString shortname);
    void myclickleft(OntologyClassShape *shape);
    void myclickright(OntologyClassShape *shape);

    public:
        OntologyClassShape();
        virtual ~OntologyClassShape() { }
        virtual QPainterPath buildPainterPath(void);

        bool hasAnonymous;
        bool hasChild;
        bool isShowingChild;

        void updateShape();

        //mouse events sending singnals
        void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event);
        void mousePressEvent(QGraphicsSceneMouseEvent *event);
        void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
        void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);        


        //shape expanding levels
        uint levelsOfDetail(void) const;
        QSizeF sizeForDetailLevel(uint level);
        void setLabelByLevels(int level, QString text);
        void setMyLabel(QString label);

        //testing
//        void focusInEvent(QFocusEvent *event);
//        void focusOutEvent(QFocusEvent *event);

        QString levelLabels[6] ;

    protected:
        QVariant itemChange(QGraphicsItem::GraphicsItemChange change,
                const QVariant &value);
};


#endif // ONTOCLASS_H
// vim: filetype=cpp ts=4 sw=4 et tw=0 wm=0 cindent
