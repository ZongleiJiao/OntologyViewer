#ifndef org_semanticweb_owlapi_model_OWLAsymmetricObjectPropertyAxiom_H
#define org_semanticweb_owlapi_model_OWLAsymmetricObjectPropertyAxiom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObjectPropertyCharacteristicAxiom;
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
class OWLAsymmetricObjectPropertyAxiom : public java::lang::Object {
  public:
    OWLAsymmetricObjectPropertyAxiom(JavaMarker* dummy);
    OWLAsymmetricObjectPropertyAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLAsymmetricObjectPropertyAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLAsymmetricObjectPropertyAxiom org.semanticweb.owlapi.model.OWLAsymmetricObjectPropertyAxiom.getAxiomWithoutAnnotations()

};
}
}
}
}
#endif
