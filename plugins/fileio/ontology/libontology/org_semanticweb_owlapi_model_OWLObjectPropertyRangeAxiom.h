#ifndef org_semanticweb_owlapi_model_OWLObjectPropertyRangeAxiom_H
#define org_semanticweb_owlapi_model_OWLObjectPropertyRangeAxiom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLPropertyRangeAxiom;
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
class OWLObjectPropertyRangeAxiom : public java::lang::Object {
  public:
    OWLObjectPropertyRangeAxiom(JavaMarker* dummy);
    OWLObjectPropertyRangeAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLObjectPropertyRangeAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLObjectPropertyRangeAxiom org.semanticweb.owlapi.model.OWLObjectPropertyRangeAxiom.getAxiomWithoutAnnotations()

};
}
}
}
}
#endif
