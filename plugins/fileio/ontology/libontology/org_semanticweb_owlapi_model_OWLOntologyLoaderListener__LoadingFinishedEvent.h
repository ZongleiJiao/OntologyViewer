#ifndef org_semanticweb_owlapi_model_OWLOntologyLoaderListener__LoadingFinishedEvent_H
#define org_semanticweb_owlapi_model_OWLOntologyLoaderListener__LoadingFinishedEvent_H
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
class OWLOntologyLoaderListener__LoadingFinishedEvent : public org::semanticweb::owlapi::model::OWLOntologyLoaderListener__LoadingEvent {
  public:
    OWLOntologyLoaderListener__LoadingFinishedEvent(JavaMarker* dummy);
    OWLOntologyLoaderListener__LoadingFinishedEvent(jobject obj);
    OWLOntologyLoaderListener__LoadingFinishedEvent(org::semanticweb::owlapi::model::OWLOntologyID* arg1, org::semanticweb::owlapi::model::IRI* arg2, bool arg3, org::semanticweb::owlapi::model::OWLOntologyCreationException* arg4); // public org.semanticweb.owlapi.model.OWLOntologyLoaderListener$LoadingFinishedEvent(org.semanticweb.owlapi.model.OWLOntologyID,org.semanticweb.owlapi.model.IRI,boolean,org.semanticweb.owlapi.model.OWLOntologyCreationException)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLOntologyCreationException* getException(); // public org.semanticweb.owlapi.model.OWLOntologyCreationException org.semanticweb.owlapi.model.OWLOntologyLoaderListener$LoadingFinishedEvent.getException()
    virtual bool isSuccessful(); // public boolean org.semanticweb.owlapi.model.OWLOntologyLoaderListener$LoadingFinishedEvent.isSuccessful()

};
}
}
}
}
#endif
