#ifndef org_semanticweb_owlapi_model_OWLOntologySetProvider_H
#define org_semanticweb_owlapi_model_OWLOntologySetProvider_H
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
class OWLOntologySetProvider : public java::lang::Object {
  public:
    OWLOntologySetProvider(JavaMarker* dummy);
    OWLOntologySetProvider(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::util::Set* getOntologies(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntologySetProvider.getOntologies()

};
}
}
}
}
#endif
