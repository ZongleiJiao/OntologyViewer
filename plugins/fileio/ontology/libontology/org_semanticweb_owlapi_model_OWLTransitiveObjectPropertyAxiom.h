#ifndef org_semanticweb_owlapi_model_OWLTransitiveObjectPropertyAxiom_H
#define org_semanticweb_owlapi_model_OWLTransitiveObjectPropertyAxiom_H
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
class OWLTransitiveObjectPropertyAxiom : public java::lang::Object {
  public:
    OWLTransitiveObjectPropertyAxiom(JavaMarker* dummy);
    OWLTransitiveObjectPropertyAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLTransitiveObjectPropertyAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLTransitiveObjectPropertyAxiom org.semanticweb.owlapi.model.OWLTransitiveObjectPropertyAxiom.getAxiomWithoutAnnotations()

};
}
}
}
}
#endif
