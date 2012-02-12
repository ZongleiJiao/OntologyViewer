#ifndef org_semanticweb_owlapi_model_OWLOntologyChangesVetoedListener_H
#define org_semanticweb_owlapi_model_OWLOntologyChangesVetoedListener_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace util {
class List;
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntologyChangeVetoException;
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

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntologyChangesVetoedListener : public java::lang::Object {
  public:
    OWLOntologyChangesVetoedListener(JavaMarker* dummy);
    OWLOntologyChangesVetoedListener(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void ontologyChangesVetoed(java::util::List* arg1, org::semanticweb::owlapi::model::OWLOntologyChangeVetoException* arg2); // public abstract void org.semanticweb.owlapi.model.OWLOntologyChangesVetoedListener.ontologyChangesVetoed(java.util.List,org.semanticweb.owlapi.model.OWLOntologyChangeVetoException)

};
}
}
}
}
#endif
