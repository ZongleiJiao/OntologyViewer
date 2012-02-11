#ifndef OWLPROPERTY_H
#define OWLPROPERTY_H
#include <QString>
#include <QList>
#include "libdunnartcanvas/shape.h"
#include <owlclass.h>

using namespace dunnart;

class OwlProperty
{
public:
    /** Definition of property type strings
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
    static const QString ENTITIY_TYPE_CLASS;
    static const QString ENTITIY_TYPE_DATA_PROPERTY;
    static const QString ENTITIY_TYPE_OBJECT_PROPERTY;
    static const QString PROPERTY_TYPE_FUNCTIONAL;
    static const QString PROPERTY_TYPE_INVERSE;
    static const QString PROPERTY_TYPE_INVERSE_FUNCTIONAL;
    static const QString PROPERTY_TYPE_SYMMETRIC;
    static const QString PROPERTY_TYPE_ASYMMETRIC;
    static const QString PROPERTY_TYPE_TRANSITIVE;
    static const QString PROPERTY_TYPE_REFLEXIVE;
    static const QString PROPERTY_TYPE_IRREFLEXIVE;
    static const QString SPLITER;

    //short for property types and entity types
    static const QString ENTITIY_TYPE_CLASS_SHORT;
    static const QString ENTITIY_TYPE_DATA_PROPERTY_SHORT;
    static const QString ENTITIY_TYPE_OBJECT_PROPERTY_SHORT;
    static const QString PROPERTY_TYPE_FUNCTIONAL_SHORT;
    static const QString PROPERTY_TYPE_INVERSE_SHORT;
    static const QString PROPERTY_TYPE_INVERSE_FUNCTIONAL_SHORT;
    static const QString PROPERTY_TYPE_SYMMETRIC_SHORT;
    static const QString PROPERTY_TYPE_ASYMMETRIC_SHORT;
    static const QString PROPERTY_TYPE_TRANSITIVE_SHORT;
    static const QString PROPERTY_TYPE_REFLEXIVE_SHORT;
    static const QString PROPERTY_TYPE_IRREFLEXIVE_SHORT;

    /** variables **/
    QString URI;
    QString shortname;
    QString propertytype;
    ShapeObj * shape;
    QList<OwlClass *> domains;
    QList<QString> ranges;
    QList<OwlProperty *> subproperties;
    QList<OwlProperty *> superproperties;
    QList<OwlProperty *> disjointproperties;

    /** functions **/
    OwlProperty();
    //Print to QString
    QString toQString();

    /** static methods to decode the property type&name string **/
    QString getPropertyTypeCodeByEncodedString(QString encodedString);
    QString getPropertyTypeByEncodedString(QString encodedString);
    QString getPropertyShortNameByEncodedString(QString encodedString);

};

#endif // OWLPROPERTY_H
