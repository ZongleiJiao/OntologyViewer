#ifndef org_semanticweb_owlapi_model_OWLObjectPropertyAssertionAxiom_H
#define org_semanticweb_owlapi_model_OWLObjectPropertyAssertionAxiom_H
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
class OWLObjectPropertyAssertionAxiom : public java::lang::Object {
  public:
    OWLObjectPropertyAssertionAxiom(JavaMarker* dummy);
    OWLObjectPropertyAssertionAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLObjectPropertyAssertionAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLObjectPropertyAssertionAxiom org.semanticweb.owlapi.model.OWLObjectPropertyAssertionAxiom.getAxiomWithoutAnnotations()
    virtual org::semanticweb::owlapi::model::OWLObjectPropertyAssertionAxiom* getSimplified(); // public abstract org.semanticweb.owlapi.model.OWLObjectPropertyAssertionAxiom org.semanticweb.owlapi.model.OWLObjectPropertyAssertionAxiom.getSimplified()
    virtual bool isInSimplifiedForm(); // public abstract boolean org.semanticweb.owlapi.model.OWLObjectPropertyAssertionAxiom.isInSimplifiedForm()

};
}
}
}
}
#endif
