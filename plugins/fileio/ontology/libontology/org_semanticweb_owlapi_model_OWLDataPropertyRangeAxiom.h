#ifndef org_semanticweb_owlapi_model_OWLDataPropertyRangeAxiom_H
#define org_semanticweb_owlapi_model_OWLDataPropertyRangeAxiom_H
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
class OWLDataPropertyAxiom;
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
class OWLDataPropertyRangeAxiom : public java::lang::Object {
  public:
    OWLDataPropertyRangeAxiom(JavaMarker* dummy);
    OWLDataPropertyRangeAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLDataPropertyRangeAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLDataPropertyRangeAxiom org.semanticweb.owlapi.model.OWLDataPropertyRangeAxiom.getAxiomWithoutAnnotations()

};
}
}
}
}
#endif
