#include "owlclass.h"

OwlClass::OwlClass()
{    
//    this->placed=false;
//    this->xpos=0;
//    this->ylevel=0;
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
    res.append("\n--------------------\n");
    return res;
}
