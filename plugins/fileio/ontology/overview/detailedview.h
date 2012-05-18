#ifndef DETAILEDVIEW_H
#define DETAILEDVIEW_H
#include <canvas.h>
#include <owlontology.h>
#include <QObject>

using namespace dunnart;
class DetailedView : public QObject
{
    Q_OBJECT
public:
    explicit DetailedView(Canvas *canvas,OwlOntology * ontology,QObject *parent = 0);
    Canvas * m_canvas;
    OwlOntology * m_ontology;
    int limitEntityNum;
    int limitRelationNum;

    QList<OwlClass *> dclasses;
    QList<Connector *> dedges;

    void setCanvas(Canvas *canvas);
    void setOntology(OwlOntology * ontology);
    void setViewLimit(int entityNum, int relationNum);
    int getIndexByShortname(QList<OwlClass *> lst, QString shortname);

    QList<OwlClass *> drawClassView(OwlClass *centerNode,QList<OwlClass *> overviewClasses);
private:
    int m_entitynum;
    QList<OwlClass *> getNextLevelClasses(QList<OwlClass *> cls);
signals:

public slots:

};

#endif // DETAILEDVIEW_H
