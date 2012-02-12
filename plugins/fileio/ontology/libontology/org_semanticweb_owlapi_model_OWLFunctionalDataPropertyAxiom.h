#ifndef org_semanticweb_owlapi_model_OWLFunctionalDataPropertyAxiom_H
#define org_semanticweb_owlapi_model_OWLFunctionalDataPropertyAxiom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataPropertyCharacteristicAxiom;
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
class OWLFunctionalDataPropertyAxiom : public java::lang::Object {
  public:
    OWLFunctionalDataPropertyAxiom(JavaMarker* dummy);
    OWLFunctionalDataPropertyAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLFunctionalDataPropertyAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLFunctionalDataPropertyAxiom org.semanticweb.owlapi.model.OWLFunctionalDataPropertyAxiom.getAxiomWithoutAnnotations()

};
}
}
}
}
#endif
