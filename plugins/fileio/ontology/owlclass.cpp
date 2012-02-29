#include "owlclass.h"
using namespace std;
OwlClass::OwlClass()
{    
    this->equivalentclass="";
    this->isIndividualsShowed=false;
    this->isFocused=false;
}
QString OwlClass::toQString(){
    QString res;
    res.append("--------------------");
//    res.append("\nFull  Name: ");
//    res.append(URI);
    res.append("\nShort Name: ");
    res.append(shortname);
    res.append("\nSubclasses:");    

    for(int i=0;i<subclasses.length();i++){
        res.append(" ");
        res.append(subclasses[i]->shortname);
    }

    res.append("\nSuperclasses:");
    for(int i=0;i<this->superclasses.length();i++){
        res.append(" ");
        res.append(superclasses[i]->shortname);
    }

    res.append("\nDisjointclasses:");
    for(int i=0;i<this->disjointclasses.length();i++){
        res.append(" ");
        res.append(disjointclasses[i]->shortname);
    }
    res.append("\n--------------------\n");
    return res;
}

void OwlClass::showIndividuals(Canvas *canvas)
{
    if(!isIndividualsShowed)
    {
        for(int i=0; i<individuals.size();i++)canvas->addItem(individuals[i]->shape);
        for(int i=0; i<individualconnectors.size();i++)canvas->addItem(individualconnectors.at(i));

        this->isIndividualsShowed=true;
    }
}

void OwlClass::hideIndividuals(Canvas *canvas)
{

    if(isIndividualsShowed)
    {
        for(int i=0; i<individuals.size();i++)
        {
            canvas->removeItem(individuals[i]->shape);
        }
        for(int i=0; i<individualconnectors.size();i++)canvas->removeItem(individualconnectors[i]);
        this->isIndividualsShowed=false;
    }
}

void OwlClass::setFocused(bool focus, Canvas *canvas)
{
    //not focused --> set to focused status
    if(focus&&(!isFocused)){
        shape->setFillColour(CLASS_SHAPE_FOCUSED_COLOR);
        for(int i=0;i<subclasses.size();i++){
            subclasses[i]->shape->setFillColour(SUBCLASS_SHAPE_FOCUSED_COLOR);
        }
        for(int i=0;i<superclasses.size();i++){
            superclasses[i]->shape->setFillColour(SUPERCLASS_SHAPE_FOCUSED_COLOR);
        }
        for(int i=0;i<classesconnectors.size();i++){
            classesconnectors[i]->setColour(CLASS_CONNECTOR_FOCUSED_COLOR);
        }
        isFocused = true;
        canvas->setFocusItem(shape,Qt::OtherFocusReason);
    }
    //is focused --> release it
    if(!focus&&isFocused){
        shape->setFillColour(CLASS_SHAPE_COLOR);
        for(int i=0;i<subclasses.size();i++){
            subclasses[i]->shape->setFillColour(CLASS_SHAPE_COLOR);
        }
        for(int i=0;i<superclasses.size();i++){
            superclasses[i]->shape->setFillColour(CLASS_SHAPE_COLOR);
        }
        for(int i=0;i<classesconnectors.size();i++){
            classesconnectors[i]->setColour(CLASS_CONNECTOR_COLOR);
        }

        isFocused = false;
    }
}

const QColor OwlClass::CLASS_SHAPE_COLOR = QColor(65,105,225);
const QColor OwlClass::CLASS_SHAPE_FOCUSED_COLOR = QColor("orange");
const QColor OwlClass::SUBCLASS_SHAPE_FOCUSED_COLOR = QColor("purple");
const QColor OwlClass::SUPERCLASS_SHAPE_FOCUSED_COLOR = QColor("yellow");
const QColor OwlClass::CLASS_CONNECTOR_COLOR = QColor("blue");
const QColor OwlClass::CLASS_CONNECTOR_FOCUSED_COLOR = QColor("red");
