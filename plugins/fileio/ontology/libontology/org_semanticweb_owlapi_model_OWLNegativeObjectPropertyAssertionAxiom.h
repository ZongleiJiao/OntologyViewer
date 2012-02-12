#ifndef org_semanticweb_owlapi_model_OWLNegativeObjectPropertyAssertionAxiom_H
#define org_semanticweb_owlapi_model_OWLNegativeObjectPropertyAssertionAxiom_H
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
class OWLNegativeObjectPropertyAssertionAxiom : public java::lang::Object {
  public:
    OWLNegativeObjectPropertyAssertionAxiom(JavaMarker* dummy);
    OWLNegativeObjectPropertyAssertionAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLNegativeObjectPropertyAssertionAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLNegativeObjectPropertyAssertionAxiom org.semanticweb.owlapi.model.OWLNegativeObjectPropertyAssertionAxiom.getAxiomWithoutAnnotations()
    virtual bool containsAnonymousIndividuals(); // public abstract boolean org.semanticweb.owlapi.model.OWLNegativeObjectPropertyAssertionAxiom.containsAnonymousIndividuals()

};
}
}
}
}
#endif
