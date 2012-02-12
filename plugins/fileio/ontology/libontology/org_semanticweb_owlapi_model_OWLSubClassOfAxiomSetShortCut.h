#ifndef org_semanticweb_owlapi_model_OWLSubClassOfAxiomSetShortCut_H
#define org_semanticweb_owlapi_model_OWLSubClassOfAxiomSetShortCut_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace util {
class Set;
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

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLSubClassOfAxiomSetShortCut : public java::lang::Object {
  public:
    OWLSubClassOfAxiomSetShortCut(JavaMarker* dummy);
    OWLSubClassOfAxiomSetShortCut(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::util::Set* asOWLSubClassOfAxioms(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLSubClassOfAxiomSetShortCut.asOWLSubClassOfAxioms()

};
}
}
}
}
#endif
