#include "owlindividual.h"

OwlIndividual::OwlIndividual()
{    
}

QString OwlIndividual::toQString(){
    QString res;
    res.append("<--Individual-->");
    res.append(this->shortname);
    res.append("\nOwner Classes:");
    for(int i=0;i<ownerclasses.length();i++)res.append(this->ownerclasses[i]+" ");
    res.append("\n");
    return res;
}
