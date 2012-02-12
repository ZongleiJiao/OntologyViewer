#ifndef org_semanticweb_owlapi_model_OWLNegativeDataPropertyAssertionAxiom_H
#define org_semanticweb_owlapi_model_OWLNegativeDataPropertyAssertionAxiom_H
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
class OWLNegativeDataPropertyAssertionAxiom : public java::lang::Object {
  public:
    OWLNegativeDataPropertyAssertionAxiom(JavaMarker* dummy);
    OWLNegativeDataPropertyAssertionAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLNegativeDataPropertyAssertionAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLNegativeDataPropertyAssertionAxiom org.semanticweb.owlapi.model.OWLNegativeDataPropertyAssertionAxiom.getAxiomWithoutAnnotations()
    virtual bool containsAnonymousIndividuals(); // public abstract boolean org.semanticweb.owlapi.model.OWLNegativeDataPropertyAssertionAxiom.containsAnonymousIndividuals()

};
}
}
}
}
#endif
