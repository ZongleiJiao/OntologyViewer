#include "keyconcept.h"
#include <ontoclass.h>

KeyConcept::KeyConcept(QList<OwlClass *> classes)
{
    this->originClasses = classes;
}
/* preformat the class set, any class without superclass
   will be set the 'Thing' as its superclass. And if there
   is no 'Thing' class, it will be created. */
QList<OwlClass> KeyConcept::preformat(QList<OwlClass*> classes)
{
    //check whether "Thing" exist and get its index
    int idxThing = -1;
    for(int i=0;i<classes.size();i++)
    {
        if(classes[i]->shortname.toLower() == "thing")
        {
            idxThing = i;
            break;
        }
    }
    //if "Thing" does not exist, create a "Thing" class
//    if(idxThing==-1)
//    {
//        OwlClass * thingClass = new OwlClass();
//        thingClass->shortname = "Thing";
//        thingClass->URI ="owl:Thing";
//        thingClass->shape = new OntologyClassShape();
//        thingClass->shape->setIdString(thingClass->shortname);
//        thingClass->shape->setToolTip(thingClass->URI);
//        thingClass->shape->setPosAndSize(QPointF(0,i*25),QSizeF(150,20));
//        thingClass->shape->setMyLabel(tmpclass->shortname);
//        thingClass->shape->setLabelByLevels(1,tmpclass->shortname); //set level 1 label
//        thingClass->shape->setFillColour(this->CLASS_SHAPE_COLOR);
//        classes.append(thingClass);
//        idxThing = classes.size()-1;
//    }

    //check all classes(except Thing) without superclasses



}

//measure -- density
double KeyConcept::globalDensity(OwlClass *node)
{

}

double KeyConcept::localDensity(OwlClass *node)
{

}

double KeyConcept::overallDensity(OwlClass *node)
{

}

//measure -- popularity
double KeyConcept::globalPopularity(OwlClass *node)
{

}

double KeyConcept::localPopularity(OwlClass *node)
{

}

double KeyConcept::overallPopularity(OwlClass *node)
{

}

//measure -- Natural Category Value
double KeyConcept::naturalCategoryValue(OwlClass *node)
{

}

double KeyConcept::basicLevel(OwlClass *node)
{

}

double KeyConcept::nameSimplicity(OwlClass *node)
{

}

//coverage contribution
double KeyConcept::contribution()
{

}

//score
double KeyConcept::score(OwlClass *node)
{

}

double KeyConcept::overallScore()
{

}

//get n key classes in the set
QList<OwlClass *> KeyConcept::getKeyClasses(int n)
{

}
