#ifndef org_semanticweb_owlapi_model_OWLFunctionalObjectPropertyAxiom_H
#define org_semanticweb_owlapi_model_OWLFunctionalObjectPropertyAxiom_H
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

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLSubClassOfAxiomShortCut;
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
class OWLFunctionalObjectPropertyAxiom : public java::lang::Object {
  public:
    OWLFunctionalObjectPropertyAxiom(JavaMarker* dummy);
    OWLFunctionalObjectPropertyAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLFunctionalObjectPropertyAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLFunctionalObjectPropertyAxiom org.semanticweb.owlapi.model.OWLFunctionalObjectPropertyAxiom.getAxiomWithoutAnnotations()

};
}
}
}
}
#endif
