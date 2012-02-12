#ifndef org_semanticweb_owlapi_model_OWLDataPropertyDomainAxiom_H
#define org_semanticweb_owlapi_model_OWLDataPropertyDomainAxiom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLPropertyDomainAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataPropertyAxiom;
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
class OWLDataPropertyDomainAxiom : public java::lang::Object {
  public:
    OWLDataPropertyDomainAxiom(JavaMarker* dummy);
    OWLDataPropertyDomainAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLDataPropertyDomainAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLDataPropertyDomainAxiom org.semanticweb.owlapi.model.OWLDataPropertyDomainAxiom.getAxiomWithoutAnnotations()

};
}
}
}
}
#endif
