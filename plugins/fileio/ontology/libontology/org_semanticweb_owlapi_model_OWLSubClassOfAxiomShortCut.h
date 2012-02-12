#ifndef org_semanticweb_owlapi_model_OWLSubClassOfAxiomShortCut_H
#define org_semanticweb_owlapi_model_OWLSubClassOfAxiomShortCut_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLSubClassOfAxiom;
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
class OWLSubClassOfAxiomShortCut : public java::lang::Object {
  public:
    OWLSubClassOfAxiomShortCut(JavaMarker* dummy);
    OWLSubClassOfAxiomShortCut(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLSubClassOfAxiom* asOWLSubClassOfAxiom(); // public abstract org.semanticweb.owlapi.model.OWLSubClassOfAxiom org.semanticweb.owlapi.model.OWLSubClassOfAxiomShortCut.asOWLSubClassOfAxiom()

};
}
}
}
}
#endif
