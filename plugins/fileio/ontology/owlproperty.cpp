#include "owlproperty.h"

OwlProperty::OwlProperty()
{
}

/** Value of property type strings
  * format:
  *     [0] DataProperty(D) or ObjectProperty(O),
  *
  *     [1] number(y) sub types does the property
  *         have(if it's 2, means this property has
  *         two sub types. eg: functional and symmetric)
  *
  *     [3~X] (X=(y+1)*2)
  *         shortcut of all sub types that this property has.
  *         eg:FU(functional) or FUSY(functional and symmetric)
  *
  *     the name of this property will be appended in the end
**/
//types of property types
const QString OwlProperty::ENTITIY_TYPE_CLASS = "Class";
const QString OwlProperty::ENTITIY_TYPE_DATA_PROPERTY = "DataProperty";
const QString OwlProperty::ENTITIY_TYPE_OBJECT_PROPERTY = "ObjectProperty";
const QString OwlProperty::PROPERTY_TYPE_FUNCTIONAL = "Functional";
const QString OwlProperty::PROPERTY_TYPE_INVERSE = "Inverse";
const QString OwlProperty::PROPERTY_TYPE_INVERSE_FUNCTIONAL = "InverseFunctional";
const QString OwlProperty::PROPERTY_TYPE_SYMMETRIC = "Symmetric";
const QString OwlProperty::PROPERTY_TYPE_ASYMMETRIC = "Asymmetric";
const QString OwlProperty::PROPERTY_TYPE_TRANSITIVE = "Transitive";
const QString OwlProperty::PROPERTY_TYPE_REFLEXIVE = "Reflexive";
const QString OwlProperty::PROPERTY_TYPE_IRREFLEXIVE = "Irreflexive";
const QString OwlProperty::SPLITER = ":-=-:";

//short for property types and entity types
const QString OwlProperty::ENTITIY_TYPE_CLASS_SHORT = "C";
const QString OwlProperty::ENTITIY_TYPE_DATA_PROPERTY_SHORT = "D";
const QString OwlProperty::ENTITIY_TYPE_OBJECT_PROPERTY_SHORT = "O";
const QString OwlProperty::PROPERTY_TYPE_FUNCTIONAL_SHORT = "FU";
const QString OwlProperty::PROPERTY_TYPE_INVERSE_SHORT = "IN";
const QString OwlProperty::PROPERTY_TYPE_INVERSE_FUNCTIONAL_SHORT = "IF";
const QString OwlProperty::PROPERTY_TYPE_SYMMETRIC_SHORT = "SY";
const QString OwlProperty::PROPERTY_TYPE_ASYMMETRIC_SHORT = "AS";
const QString OwlProperty::PROPERTY_TYPE_TRANSITIVE_SHORT = "TR";
const QString OwlProperty::PROPERTY_TYPE_REFLEXIVE_SHORT = "RE";
const QString OwlProperty::PROPERTY_TYPE_IRREFLEXIVE_SHORT = "IR";

/** static methods to decode the property type&name string **/
//get property type (full type name)
QString OwlProperty::getPropertyTypeCodeByEncodedString(QString encodedString)
{
    int num = encodedString[1].digitValue();
    if(num==-1) return NULL;
    QString tpname = "";
    for(int i=0;i<num;i++){
        QString tmp = encodedString.mid(2+2*i,2);
        if(tmp==PROPERTY_TYPE_FUNCTIONAL_SHORT)
        {
            tpname += PROPERTY_TYPE_FUNCTIONAL;
            continue;
        }
        if(tmp==PROPERTY_TYPE_INVERSE_SHORT)
        {
            tpname += PROPERTY_TYPE_INVERSE;
            continue;
        }
        if(tmp==PROPERTY_TYPE_INVERSE_FUNCTIONAL_SHORT)
        {
            tpname += PROPERTY_TYPE_INVERSE_FUNCTIONAL;
            continue;
        }
        if(tmp==PROPERTY_TYPE_SYMMETRIC_SHORT)
        {
            tpname += PROPERTY_TYPE_SYMMETRIC;
            continue;
        }
        if(tmp==PROPERTY_TYPE_ASYMMETRIC_SHORT)
        {
            tpname += PROPERTY_TYPE_ASYMMETRIC;
            continue;
        }
        if(tmp==PROPERTY_TYPE_TRANSITIVE_SHORT)
        {
            tpname += PROPERTY_TYPE_TRANSITIVE;
            continue;
        }
        if(tmp==PROPERTY_TYPE_REFLEXIVE_SHORT)
        {
            tpname += PROPERTY_TYPE_REFLEXIVE;
            continue;
        }
        if(tmp==PROPERTY_TYPE_IRREFLEXIVE_SHORT)
        {
            tpname += PROPERTY_TYPE_IRREFLEXIVE;
            continue;
        }
    }

    if(encodedString.left(1)==ENTITIY_TYPE_DATA_PROPERTY_SHORT)
    {
        tpname += ENTITIY_TYPE_DATA_PROPERTY;
    }
    else if (encodedString.left(1)==ENTITIY_TYPE_OBJECT_PROPERTY_SHORT)
    {
        tpname += ENTITIY_TYPE_OBJECT_PROPERTY;
    }

    return tpname;
}
//get property type (short type name)
QString OwlProperty::getPropertyTypeByEncodedString(QString encodedString)
{
    int num = encodedString[1].digitValue();
    if(num==-1) return NULL;

    QString shorttypename = encodedString.mid(2,num*2) + encodedString[0];

    return shorttypename;
}
//get property shortname (full type name)
QString OwlProperty::getPropertyShortNameByEncodedString(QString encodedString)
{
    int num = encodedString[1].digitValue();
    if(num==-1) return NULL;

    int namelength = encodedString.length()-(num+1)*2;
    QString name = encodedString.right(namelength);

    return name;
}
