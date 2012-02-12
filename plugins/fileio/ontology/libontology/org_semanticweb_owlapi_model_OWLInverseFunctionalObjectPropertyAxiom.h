#ifndef org_semanticweb_owlapi_model_OWLInverseFunctionalObjectPropertyAxiom_H
#define org_semanticweb_owlapi_model_OWLInverseFunctionalObjectPropertyAxiom_H
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
class OWLInverseFunctionalObjectPropertyAxiom : public java::lang::Object {
  public:
    OWLInverseFunctionalObjectPropertyAxiom(JavaMarker* dummy);
    OWLInverseFunctionalObjectPropertyAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLInverseFunctionalObjectPropertyAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLInverseFunctionalObjectPropertyAxiom org.semanticweb.owlapi.model.OWLInverseFunctionalObjectPropertyAxiom.getAxiomWithoutAnnotations()

};
}
}
}
}
#endif
