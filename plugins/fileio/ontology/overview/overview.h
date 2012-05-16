#ifndef OVERVIEW_H
#define OVERVIEW_H

#include <QObject>
#include <owlclass.h>
#include <owlontology.h>
#include <QList>
#include <canvas.h>
#include <QtGui>
#include "overview/overviewdockwidget.h"
#include "overview/detailedview.h"
#include <ogdf/basic/geometry.h>

#include "plugins/fileio/ontology/overview/keyconceptclass.h"
using namespace ogdf;
class Overview : public QObject
{
    Q_OBJECT
public:

    explicit Overview(int numOfNode,OwlOntology *ontology,Canvas * canvas,QObject *parent = 0);

    KeyConceptClass *kcTool;

    OverviewDockWidget *m_wid;
    DetailedView *m_detailview;
    OwlOntology *m_ontology;

    bool isOrthogonalTreeLayout;
    ogdf::Orientation orientation;
    QString currentLayoutMethod;
    QList<OwlClass *> originalclasses;
    QList<OwlClass *> classes;
    QList<OwlClass *> indetailedCls;
    QList<OwlClass *> tempaddedCls;
    //how many classes display on the overview, init with N(load N keyconcepts)
    //after load classes, set to the number of classses.
    int numOfClasses;

    //get N keyclasses to classes -- call this first to init classes
//    void getOverviewClasses(OwlOntology * ontology);
    //convert owlclasses to overview classes(shape,sub/sup relations changed)
    QList<OwlClass *> convertOverviewShapes(QList<OwlClass *> classes);
    int getIndexByShortname(QList<OwlClass *> lst,QString shortname);
    void drawOverview(Canvas *canvas);
    void drawOverview(OverviewDockWidget *wid);

    //whole implementation
    void overviewFMSLayout(Canvas *canvas);
    void FMSLayout(bool isProjection);

    //show layout
    void showlayout(Canvas *canvas);
    void showlayout(OverviewDockWidget *wid);
    void updatelayout();
private:
    /** FMS Drawing Algorithm implementation **/
    const static int MIN_K=10;
    const static int RATIO=3;
    const static int ITERATIONS=7;
    const static int RAD=7;
    const static double SINGLE_EDGE_LENGTH = 30.0; //l
    //set initial layout
    void setInitialLayout();
    //compute distance of all vertices
    QList< QList<int> > distance; //store the distances
    void computeShortestPath();
    //k-centres
    QList<OwlClass *> k_centers(QList<OwlClass *> nodes, int k);
    OwlClass * getFarthestNode(QList<OwlClass *> nodes);
    OwlClass * getNearestCenter(QList<OwlClass *> centers,OwlClass * node);
    //local layout
    void localLayout(QList<OwlClass *> graph,int k,int iteration);
    QList<OwlClass *> k_neighborhood(OwlClass * node,int k);
    double EuclideanDistance(OwlClass *u,OwlClass *v);
    double EuclideanDistance(QPointF u,QPointF v);
    double deltaM(double ex, double ey);
    int getIndexOfMaxDeltaM(QList<OwlClass *> graph);
    double deltaMx(double ex,double ey,double ex2, double exy, double ey2);
    double deltaMy(double ex,double ey,double ex2, double exy, double ey2);
//    double Ex(QList<OwlClass *> graph, OwlClass * node); //∂Ek/∂xv
//    double Ey(QList<OwlClass *> graph, OwlClass * node); //∂Ek/∂yv
//    double Ex2(QList<OwlClass *> graph, OwlClass * node); //∂E2k/∂x2v
//    double Exy(QList<OwlClass *> graph, OwlClass * node); //∂E2k/∂xv∂yv
//    double Ey2(QList<OwlClass *> graph, OwlClass * node); //∂E2k/∂y2v
    QList<double> getEs(QList<OwlClass *> graph, OwlClass * node); //rs=ex,ey,ex2,exy,ey2
    //projection
    void projection(QList<OwlClass *> graph);

    //tree layout
    void quadrantRadialTree(QList<OwlClass *> graph, double rangeAngle);

    const static double TREE_siblingDistance = 2;
    const static double TREE_levelDistance = 15;
    const static double TREE_subtreeDistance = 8;
    const static double TREE_treeDistance = 10;


    QList<DPolyline> treeconnectors;
    void treeLayout(QList<OwlClass *> graph);
    void compactTreeLayout(double maxW,double maxH);
    void ogdfLayout(QList<OwlClass *> graph);

    void connectWgt(OverviewDockWidget *wgt);

signals:

public slots:
    void widSceneClicked(QPointF pos);
    void detailView_ClickedClass(QString shortname);

    void layoutmethodChanged(QString method);
    void directionChanged(QString dr);
};

#endif // OVERVIEW_H
