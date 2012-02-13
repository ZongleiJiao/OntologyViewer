#ifndef edu_monash_infotech_OWLAPIWrapper_H
#define edu_monash_infotech_OWLAPIWrapper_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace lang {
class String;
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLClass;
}
}
}
}
class JavaByteArray;
class JavaBooleanArray;
class JavaCharArray;
class JavaIntArray;
class JavaShortArray;
class JavaLongArray;
class JavaDoubleArray;
class JavaFloatArray;
class JavaObjectArray;

namespace edu {
namespace monash {
namespace infotech {
class OWLAPIWrapper : public java::lang::Object {
  public:
    OWLAPIWrapper(JavaMarker* dummy);
    OWLAPIWrapper(jobject obj);
    OWLAPIWrapper(); // public edu.monash.infotech.OWLAPIWrapper()

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual const char* loadOntologyFile(const char* arg1); // public java.lang.String edu.monash.infotech.OWLAPIWrapper.loadOntologyFile(java.lang.String)
    virtual JavaObjectArray* getAllOWLClasses(); // public java.lang.String[] edu.monash.infotech.OWLAPIWrapper.getAllOWLClasses()
    virtual JavaObjectArray* getSubClasses(const char* arg1); // public java.lang.String[] edu.monash.infotech.OWLAPIWrapper.getSubClasses(java.lang.String)
    virtual JavaObjectArray* getSuperClasses(const char* arg1); // public java.lang.String[] edu.monash.infotech.OWLAPIWrapper.getSuperClasses(java.lang.String)
    virtual JavaObjectArray* getDisjointClasses(const char* arg1); // public java.lang.String[] edu.monash.infotech.OWLAPIWrapper.getDisjointClasses(java.lang.String)
    virtual const char* getEquivalentClassesFormula(const char* arg1); // public java.lang.String edu.monash.infotech.OWLAPIWrapper.getEquivalentClassesFormula(java.lang.String)
    virtual const char* getEquivalentClasses(const char* arg1); // public java.lang.String edu.monash.infotech.OWLAPIWrapper.getEquivalentClasses(java.lang.String)
    virtual JavaObjectArray* getIndividuals(const char* arg1); // public java.lang.String[] edu.monash.infotech.OWLAPIWrapper.getIndividuals(java.lang.String)
    virtual JavaObjectArray* getAllIndividuals(); // public java.lang.String[] edu.monash.infotech.OWLAPIWrapper.getAllIndividuals()
    virtual const char* getDefaultNameSpace(); // public java.lang.String edu.monash.infotech.OWLAPIWrapper.getDefaultNameSpace()
    virtual const char* getPropertyTypeByName(const char* arg1, const char* arg2); // public java.lang.String edu.monash.infotech.OWLAPIWrapper.getPropertyTypeByName(java.lang.String,java.lang.String)
    virtual JavaObjectArray* getPropertyDomainsByName(const char* arg1, const char* arg2); // public java.lang.String[] edu.monash.infotech.OWLAPIWrapper.getPropertyDomainsByName(java.lang.String,java.lang.String)
    virtual JavaObjectArray* getPropertyRangesByName(const char* arg1, const char* arg2); // public java.lang.String[] edu.monash.infotech.OWLAPIWrapper.getPropertyRangesByName(java.lang.String,java.lang.String)
    virtual JavaObjectArray* getAllPropertiesNameAndSubType(); // public java.lang.String[] edu.monash.infotech.OWLAPIWrapper.getAllPropertiesNameAndSubType()
    virtual JavaObjectArray* getSubProperites(const char* arg1, const char* arg2); // public java.lang.String[] edu.monash.infotech.OWLAPIWrapper.getSubProperites(java.lang.String,java.lang.String)
    virtual JavaObjectArray* getSuperProperites(const char* arg1, const char* arg2); // public java.lang.String[] edu.monash.infotech.OWLAPIWrapper.getSuperProperites(java.lang.String,java.lang.String)
    virtual JavaObjectArray* getDisjointProperties(const char* arg1, const char* arg2); // public java.lang.String[] edu.monash.infotech.OWLAPIWrapper.getDisjointProperties(java.lang.String,java.lang.String)
    virtual JavaObjectArray* getEquivalentProperties(const char* arg1, const char* arg2); // public java.lang.String[] edu.monash.infotech.OWLAPIWrapper.getEquivalentProperties(java.lang.String,java.lang.String)
    virtual JavaObjectArray* getAllPropertiesByType(const char* arg1); // public java.lang.String[] edu.monash.infotech.OWLAPIWrapper.getAllPropertiesByType(java.lang.String)
    virtual JavaObjectArray* getAllDataProperties(); // public java.lang.String[] edu.monash.infotech.OWLAPIWrapper.getAllDataProperties()
    virtual JavaObjectArray* getObjectProperties(); // public java.lang.String[] edu.monash.infotech.OWLAPIWrapper.getObjectProperties()
    virtual JavaObjectArray* getAllOWLClass(); // public org.semanticweb.owlapi.model.OWLClass[] edu.monash.infotech.OWLAPIWrapper.getAllOWLClass()

    const char* ENTITIY_TYPE_CLASS; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.ENTITIY_TYPE_CLASS
    const char* ENTITIY_TYPE_DATA_PROPERTY; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.ENTITIY_TYPE_DATA_PROPERTY
    const char* ENTITIY_TYPE_OBJECT_PROPERTY; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.ENTITIY_TYPE_OBJECT_PROPERTY
    const char* PROPERTY_TYPE_FUNCTIONAL; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.PROPERTY_TYPE_FUNCTIONAL
    const char* PROPERTY_TYPE_INVERSE; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.PROPERTY_TYPE_INVERSE
    const char* PROPERTY_TYPE_INVERSE_FUNCTIONAL; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.PROPERTY_TYPE_INVERSE_FUNCTIONAL
    const char* PROPERTY_TYPE_SYMMETRIC; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.PROPERTY_TYPE_SYMMETRIC
    const char* PROPERTY_TYPE_ASYMMETRIC; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.PROPERTY_TYPE_ASYMMETRIC
    const char* PROPERTY_TYPE_TRANSITIVE; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.PROPERTY_TYPE_TRANSITIVE
    const char* PROPERTY_TYPE_REFLEXIVE; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.PROPERTY_TYPE_REFLEXIVE
    const char* PROPERTY_TYPE_IRREFLEXIVE; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.PROPERTY_TYPE_IRREFLEXIVE
    const char* SPLITER; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.SPLITER
    const char* ENTITIY_TYPE_CLASS_SHORT; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.ENTITIY_TYPE_CLASS_SHORT
    const char* ENTITIY_TYPE_DATA_PROPERTY_SHORT; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.ENTITIY_TYPE_DATA_PROPERTY_SHORT
    const char* ENTITIY_TYPE_OBJECT_PROPERTY_SHORT; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.ENTITIY_TYPE_OBJECT_PROPERTY_SHORT
    const char* PROPERTY_TYPE_FUNCTIONAL_SHORT; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.PROPERTY_TYPE_FUNCTIONAL_SHORT
    const char* PROPERTY_TYPE_INVERSE_SHORT; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.PROPERTY_TYPE_INVERSE_SHORT
    const char* PROPERTY_TYPE_INVERSE_FUNCTIONAL_SHORT; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.PROPERTY_TYPE_INVERSE_FUNCTIONAL_SHORT
    const char* PROPERTY_TYPE_SYMMETRIC_SHORT; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.PROPERTY_TYPE_SYMMETRIC_SHORT
    const char* PROPERTY_TYPE_ASYMMETRIC_SHORT; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.PROPERTY_TYPE_ASYMMETRIC_SHORT
    const char* PROPERTY_TYPE_TRANSITIVE_SHORT; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.PROPERTY_TYPE_TRANSITIVE_SHORT
    const char* PROPERTY_TYPE_REFLEXIVE_SHORT; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.PROPERTY_TYPE_REFLEXIVE_SHORT
    const char* PROPERTY_TYPE_IRREFLEXIVE_SHORT; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.PROPERTY_TYPE_IRREFLEXIVE_SHORT
};
}
}
}
#endif
