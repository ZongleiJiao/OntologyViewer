#ifndef org_semanticweb_owlapi_model_ImpendingOWLOntologyChangeListener_H
#define org_semanticweb_owlapi_model_ImpendingOWLOntologyChangeListener_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace util {
class List;
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
class ImpendingOWLOntologyChangeListener : public java::lang::Object {
  public:
    ImpendingOWLOntologyChangeListener(JavaMarker* dummy);
    ImpendingOWLOntologyChangeListener(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void handleImpendingOntologyChanges(java::util::List* arg1); // public abstract void org.semanticweb.owlapi.model.ImpendingOWLOntologyChangeListener.handleImpendingOntologyChanges(java.util.List) throws org.semanticweb.owlapi.model.OWLOntologyChangeVetoException

};
}
}
}
}
#endif
