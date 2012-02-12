#ifndef org_semanticweb_owlapi_model_OWLOntologyLoaderListener_H
#define org_semanticweb_owlapi_model_OWLOntologyLoaderListener_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntologyLoaderListener__LoadingStartedEvent;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntologyLoaderListener__LoadingFinishedEvent;
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
class OWLOntologyLoaderListener : public java::lang::Object {
  public:
    OWLOntologyLoaderListener(JavaMarker* dummy);
    OWLOntologyLoaderListener(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void startedLoadingOntology(org::semanticweb::owlapi::model::OWLOntologyLoaderListener__LoadingStartedEvent* arg1); // public abstract void org.semanticweb.owlapi.model.OWLOntologyLoaderListener.startedLoadingOntology(org.semanticweb.owlapi.model.OWLOntologyLoaderListener$LoadingStartedEvent)
    virtual void finishedLoadingOntology(org::semanticweb::owlapi::model::OWLOntologyLoaderListener__LoadingFinishedEvent* arg1); // public abstract void org.semanticweb.owlapi.model.OWLOntologyLoaderListener.finishedLoadingOntology(org.semanticweb.owlapi.model.OWLOntologyLoaderListener$LoadingFinishedEvent)

};
}
}
}
}
#endif
