#ifndef org_semanticweb_owlapi_model_OWLOntologyFactory__OWLOntologyCreationHandler_H
#define org_semanticweb_owlapi_model_OWLOntologyFactory__OWLOntologyCreationHandler_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntology;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntologyFormat;
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
class OWLOntologyFactory__OWLOntologyCreationHandler : public java::lang::Object {
  public:
    OWLOntologyFactory__OWLOntologyCreationHandler(JavaMarker* dummy);
    OWLOntologyFactory__OWLOntologyCreationHandler(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void setOntologyFormat(org::semanticweb::owlapi::model::OWLOntology* arg1, org::semanticweb::owlapi::model::OWLOntologyFormat* arg2); // public abstract void org.semanticweb.owlapi.model.OWLOntologyFactory$OWLOntologyCreationHandler.setOntologyFormat(org.semanticweb.owlapi.model.OWLOntology,org.semanticweb.owlapi.model.OWLOntologyFormat)
    virtual void ontologyCreated(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract void org.semanticweb.owlapi.model.OWLOntologyFactory$OWLOntologyCreationHandler.ontologyCreated(org.semanticweb.owlapi.model.OWLOntology)

};
}
}
}
}
#endif
