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
    virtual void main(JavaObjectArray* arg1); // public static void edu.monash.infotech.OWLAPIWrapper.main(java.lang.String[])
    virtual const char* loadOntologyFile(const char* arg1); // public java.lang.String edu.monash.infotech.OWLAPIWrapper.loadOntologyFile(java.lang.String)
    virtual JavaObjectArray* getAllOWLClasses(); // public java.lang.String[] edu.monash.infotech.OWLAPIWrapper.getAllOWLClasses()
    virtual JavaObjectArray* getSubClasses(const char* arg1); // public java.lang.String[] edu.monash.infotech.OWLAPIWrapper.getSubClasses(java.lang.String)
    virtual JavaObjectArray* getSuperClasses(const char* arg1); // public java.lang.String[] edu.monash.infotech.OWLAPIWrapper.getSuperClasses(java.lang.String)
    virtual JavaObjectArray* getDisjointClasses(const char* arg1); // public java.lang.String[] edu.monash.infotech.OWLAPIWrapper.getDisjointClasses(java.lang.String)
    virtual JavaObjectArray* getEquivalentClasses(const char* arg1); // public java.lang.String[] edu.monash.infotech.OWLAPIWrapper.getEquivalentClasses(java.lang.String)
    virtual JavaObjectArray* getIndividuals(const char* arg1); // public java.lang.String[] edu.monash.infotech.OWLAPIWrapper.getIndividuals(java.lang.String)
    virtual JavaObjectArray* getAllIndividuals(); // public java.lang.String[] edu.monash.infotech.OWLAPIWrapper.getAllIndividuals()
    virtual const char* getDefaultNameSpace(); // public java.lang.String edu.monash.infotech.OWLAPIWrapper.getDefaultNameSpace()
    virtual JavaObjectArray* getAllPropertiesByType(const char* arg1); // public java.lang.String[] edu.monash.infotech.OWLAPIWrapper.getAllPropertiesByType(java.lang.String)
    virtual JavaObjectArray* getDataProperties(const char* arg1); // public java.lang.String[] edu.monash.infotech.OWLAPIWrapper.getDataProperties(java.lang.String)
    virtual JavaObjectArray* getObjectProperties(const char* arg1); // public java.lang.String[] edu.monash.infotech.OWLAPIWrapper.getObjectProperties(java.lang.String)

    const char* TYPE_CLASS; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.TYPE_CLASS
    const char* TYPE_DATA_PROPERTY; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.TYPE_DATA_PROPERTY
    const char* TYPE_OBJECT_PROPERTY; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.TYPE_OBJECT_PROPERTY
    const char* SPLITER; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.SPLITER
    const char* PROPERTY_TYPE_FUNCTIONAL; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.PROPERTY_TYPE_FUNCTIONAL
    const char* PROPERTY_TYPE_INVERSE; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.PROPERTY_TYPE_INVERSE
    const char* PROPERTY_TYPE_INVERSE_FUNCTIONAL; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.PROPERTY_TYPE_INVERSE_FUNCTIONAL
    const char* PROPERTY_TYPE_SYMMETRIC; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.PROPERTY_TYPE_SYMMETRIC
    const char* PROPERTY_TYPE_ASYMMETRIC; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.PROPERTY_TYPE_ASYMMETRIC
    const char* PROPERTY_TYPE_TRANSITIVE; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.PROPERTY_TYPE_TRANSITIVE
    const char* PROPERTY_TYPE_REFLEXIVE; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.PROPERTY_TYPE_REFLEXIVE
    const char* PROPERTY_TYPE_IRREFLEXIVE; // public final java.lang.String edu.monash.infotech.OWLAPIWrapper.PROPERTY_TYPE_IRREFLEXIVE
};
}
}
}
#endif
