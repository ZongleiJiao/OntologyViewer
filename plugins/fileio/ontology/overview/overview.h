#ifndef OVERVIEW_H
#define OVERVIEW_H
#include <owlclass.h>
#include <QList>
#include <canvas.h>
using namespace dunnart;
class Overview
{
public:
    QList<OwlClass *> classes;
    int numOfClasses;

    Overview();
    //get N keyclasses to classes
    void getOverviewClasses(QList<OwlClass *> allclasses);
    //convert owlclasses to overview classes(shape,sub/sup relations changed)
    QList<OwlClass *> convertOverviewShapes(QList<OwlClass *> classes);
    int getIndexByShortname(QList<OwlClass *> lst,QString shortname);
    void drawOverview(Canvas *canvas);
};

#endif // OVERVIEW_H
