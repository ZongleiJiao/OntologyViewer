#ifndef org_semanticweb_owlapi_model_OWLOntologyLoaderListener__LoadingEvent_H
#define org_semanticweb_owlapi_model_OWLOntologyLoaderListener__LoadingEvent_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

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
class OWLOntologyLoaderListener__LoadingEvent : public java::lang::Object {
  public:
    OWLOntologyLoaderListener__LoadingEvent(JavaMarker* dummy);
    OWLOntologyLoaderListener__LoadingEvent(jobject obj);
    OWLOntologyLoaderListener__LoadingEvent(org::semanticweb::owlapi::model::OWLOntologyID* arg1, org::semanticweb::owlapi::model::IRI* arg2, bool arg3); // public org.semanticweb.owlapi.model.OWLOntologyLoaderListener$LoadingEvent(org.semanticweb.owlapi.model.OWLOntologyID,org.semanticweb.owlapi.model.IRI,boolean)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLOntologyID* getOntologyID(); // public org.semanticweb.owlapi.model.OWLOntologyID org.semanticweb.owlapi.model.OWLOntologyLoaderListener$LoadingEvent.getOntologyID()
    virtual org::semanticweb::owlapi::model::IRI* getDocumentIRI(); // public org.semanticweb.owlapi.model.IRI org.semanticweb.owlapi.model.OWLOntologyLoaderListener$LoadingEvent.getDocumentIRI()
    virtual bool isImported(); // public boolean org.semanticweb.owlapi.model.OWLOntologyLoaderListener$LoadingEvent.isImported()

};
}
}
}
}
#endif
