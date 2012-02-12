#ifndef org_semanticweb_owlapi_model_OWLDataPropertyAssertionAxiom_H
#define org_semanticweb_owlapi_model_OWLDataPropertyAssertionAxiom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLPropertyAssertionAxiom;
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
class OWLDataPropertyAssertionAxiom : public java::lang::Object {
  public:
    OWLDataPropertyAssertionAxiom(JavaMarker* dummy);
    OWLDataPropertyAssertionAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLDataPropertyAssertionAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLDataPropertyAssertionAxiom org.semanticweb.owlapi.model.OWLDataPropertyAssertionAxiom.getAxiomWithoutAnnotations()

};
}
}
}
}
#endif
