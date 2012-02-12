#ifndef org_semanticweb_owlapi_model_OWLSubDataPropertyOfAxiom_H
#define org_semanticweb_owlapi_model_OWLSubDataPropertyOfAxiom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLSubPropertyAxiom;
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
class OWLSubDataPropertyOfAxiom : public java::lang::Object {
  public:
    OWLSubDataPropertyOfAxiom(JavaMarker* dummy);
    OWLSubDataPropertyOfAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLSubDataPropertyOfAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLSubDataPropertyOfAxiom org.semanticweb.owlapi.model.OWLSubDataPropertyOfAxiom.getAxiomWithoutAnnotations()

};
}
}
}
}
#endif
