#ifndef edu_monash_it_OWLAPIWrapper_H
#define edu_monash_it_OWLAPIWrapper_H
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
namespace it {
class OWLAPIWrapper : public java::lang::Object {
  public:
    OWLAPIWrapper(JavaMarker* dummy);
    OWLAPIWrapper(jobject obj);
    OWLAPIWrapper(); // public edu.monash.it.OWLAPIWrapper()

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void main(JavaObjectArray* arg1); // public static void edu.monash.it.OWLAPIWrapper.main(java.lang.String[])
    virtual const char* loadOntologyFile(const char* arg1); // public java.lang.String edu.monash.it.OWLAPIWrapper.loadOntologyFile(java.lang.String)
    virtual JavaObjectArray* getAllOWLClasses(); // public java.lang.String[] edu.monash.it.OWLAPIWrapper.getAllOWLClasses()
    virtual JavaObjectArray* getSubClasses(const char* arg1); // public java.lang.String[] edu.monash.it.OWLAPIWrapper.getSubClasses(java.lang.String)
    virtual JavaObjectArray* getSuperClasses(const char* arg1); // public java.lang.String[] edu.monash.it.OWLAPIWrapper.getSuperClasses(java.lang.String)
    virtual JavaObjectArray* getDisjointClasses(const char* arg1); // public java.lang.String[] edu.monash.it.OWLAPIWrapper.getDisjointClasses(java.lang.String)
    virtual JavaObjectArray* getEquivalentClasses(const char* arg1); // public java.lang.String[] edu.monash.it.OWLAPIWrapper.getEquivalentClasses(java.lang.String)
    virtual JavaObjectArray* getIndividuals(const char* arg1); // public java.lang.String[] edu.monash.it.OWLAPIWrapper.getIndividuals(java.lang.String)
    virtual JavaObjectArray* getDataProperties(); // public java.lang.String[] edu.monash.it.OWLAPIWrapper.getDataProperties()
    virtual JavaObjectArray* getObjectProperties(); // public java.lang.String[] edu.monash.it.OWLAPIWrapper.getObjectProperties()

};
}
}
}
#endif
