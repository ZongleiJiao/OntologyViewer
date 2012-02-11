#include "owlclass.h"

OwlClass::OwlClass()
{    

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
