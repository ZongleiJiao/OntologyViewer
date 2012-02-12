#ifndef org_semanticweb_owlapi_model_MissingImportEvent_H
#define org_semanticweb_owlapi_model_MissingImportEvent_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace net {
class URI;
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntologyCreationException;
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
class MissingImportEvent : public java::lang::Object {
  public:
    MissingImportEvent(JavaMarker* dummy);
    MissingImportEvent(jobject obj);
    MissingImportEvent(java::net::URI* arg1, org::semanticweb::owlapi::model::OWLOntologyCreationException* arg2); // public org.semanticweb.owlapi.model.MissingImportEvent(java.net.URI,org.semanticweb.owlapi.model.OWLOntologyCreationException)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::net::URI* getImportedOntologyURI(); // public java.net.URI org.semanticweb.owlapi.model.MissingImportEvent.getImportedOntologyURI()
    virtual org::semanticweb::owlapi::model::OWLOntologyCreationException* getCreationException(); // public org.semanticweb.owlapi.model.OWLOntologyCreationException org.semanticweb.owlapi.model.MissingImportEvent.getCreationException()

};
}
}
}
}
#endif
