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
    void getOverviewClasses(QList<OwlClass *> allclasses);
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
    const static int ITERATIONS=4;
    const static int RAD=7;
    const static double SINGLE_EDGE_LENGTH = 20.0; //l
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
    void localLayout(QList<OwlClass *>nodes,int k,int iteratioon);
    QList<OwlClass *> k_neighborhood(OwlClass * node,int k);
    double energy(int k);
    double deltakv(int k,OwlClass *node);
    //projection
    void projection();    
};

#endif // OVERVIEW_H
