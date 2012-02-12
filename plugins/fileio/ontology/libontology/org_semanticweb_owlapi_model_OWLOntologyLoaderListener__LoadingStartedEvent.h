#ifndef org_semanticweb_owlapi_model_OWLOntologyLoaderListener__LoadingStartedEvent_H
#define org_semanticweb_owlapi_model_OWLOntologyLoaderListener__LoadingStartedEvent_H
#include <jni.h>
#include <java_marker.h>
#include <org_semanticweb_owlapi_model_OWLOntologyLoaderListener__LoadingEvent.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntologyID;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class IRI;
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
class OWLOntologyLoaderListener__LoadingStartedEvent : public org::semanticweb::owlapi::model::OWLOntologyLoaderListener__LoadingEvent {
  public:
    OWLOntologyLoaderListener__LoadingStartedEvent(JavaMarker* dummy);
    OWLOntologyLoaderListener__LoadingStartedEvent(jobject obj);
    OWLOntologyLoaderListener__LoadingStartedEvent(org::semanticweb::owlapi::model::OWLOntologyID* arg1, org::semanticweb::owlapi::model::IRI* arg2, bool arg3); // public org.semanticweb.owlapi.model.OWLOntologyLoaderListener$LoadingStartedEvent(org.semanticweb.owlapi.model.OWLOntologyID,org.semanticweb.owlapi.model.IRI,boolean)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);

};
}
}
}
}
#endif
