#ifndef org_semanticweb_owlapi_model_OWLObjectPropertyDomainAxiom_H
#define org_semanticweb_owlapi_model_OWLObjectPropertyDomainAxiom_H
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
class OWLObjectPropertyAxiom;
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
class OWLObjectPropertyDomainAxiom : public java::lang::Object {
  public:
    OWLObjectPropertyDomainAxiom(JavaMarker* dummy);
    OWLObjectPropertyDomainAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLObjectPropertyDomainAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLObjectPropertyDomainAxiom org.semanticweb.owlapi.model.OWLObjectPropertyDomainAxiom.getAxiomWithoutAnnotations()

};
}
}
}
}
#endif
