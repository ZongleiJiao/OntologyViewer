#ifndef OVERVIEW_H
#define OVERVIEW_H
#include <owlclass.h>
#include <QList>
#include <canvas.h>
/**
  This class implements the FMS algorithm with constraints.
  1. get N key concept classes from all classes for the overview
  2. compute distance(V,V)
  **/
using namespace dunnart;
class Overview
{
public:
    QList<OwlClass *> classes;
    //how many classes display on the overview, init with N(load N keyconcepts)
    //after load classes, set to the number of classses.
    int numOfClasses;

    Overview();
    //get N keyclasses to classes -- call this first to init classes
    void getOverviewClasses(QList<OwlClass *> allclasses,QString ontoname);
    //convert owlclasses to overview classes(shape,sub/sup relations changed)
    QList<OwlClass *> convertOverviewShapes(QList<OwlClass *> classes);
    int getIndexByShortname(QList<OwlClass *> lst,QString shortname);
    void drawOverview(Canvas *canvas);

    //whole implementation
    void overviewFMSLayout(Canvas *canvas);

private:
    /** FMS Drawing Algorithm implementation **/
    const static int MIN_K=10;
    const static int RATIO=3;
    const static int ITERATIONS=7;
    const static int RAD=7;
    const static double SINGLE_EDGE_LENGTH = 50.0; //l
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
    double deltaM(double ex, double ey);
    int getIndexOfMaxDeltaM(QList<OwlClass *> graph);
    double deltaMx(double ex,double ey,double ex2, double exy, double ey2);
    double deltaMy(double ex,double ey,double ex2, double exy, double ey2);
    double Ex(QList<OwlClass *> graph, OwlClass * node); //∂Ek/∂xv
    double Ey(QList<OwlClass *> graph, OwlClass * node); //∂Ek/∂yv
    double Ex2(QList<OwlClass *> graph, OwlClass * node); //∂E2k/∂x2v
    double Exy(QList<OwlClass *> graph, OwlClass * node); //∂E2k/∂xv∂yv
    double Ey2(QList<OwlClass *> graph, OwlClass * node); //∂E2k/∂y2v
    //projection
    void projection(QList<OwlClass *> graph);
};

#endif // OVERVIEW_H
