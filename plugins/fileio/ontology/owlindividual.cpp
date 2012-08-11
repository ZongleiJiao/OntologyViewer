#include "owlindividual.h"

OwlIndividual::OwlIndividual()
{    
}

const QColor OwlIndividual::INDIVIDUAL_SHAPE_COLOR = QColor(238,130,238);

QString OwlIndividual::toQString(){
    QString res;
    res.append("<--Individual-->");
    res.append(this->shortname);
    res.append("\nOwner Classes:");
    for(int i=0;i<ownerclasses.length();i++)res.append(this->ownerclasses[i]+" ");
    res.append("\n");
    return res;
}
