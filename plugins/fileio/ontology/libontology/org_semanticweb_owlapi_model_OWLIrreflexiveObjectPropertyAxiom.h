#ifndef org_semanticweb_owlapi_model_OWLIrreflexiveObjectPropertyAxiom_H
#define org_semanticweb_owlapi_model_OWLIrreflexiveObjectPropertyAxiom_H
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
class OWLIrreflexiveObjectPropertyAxiom : public java::lang::Object {
  public:
    OWLIrreflexiveObjectPropertyAxiom(JavaMarker* dummy);
    OWLIrreflexiveObjectPropertyAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLIrreflexiveObjectPropertyAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLIrreflexiveObjectPropertyAxiom org.semanticweb.owlapi.model.OWLIrreflexiveObjectPropertyAxiom.getAxiomWithoutAnnotations()

};
}
}
}
}
#endif
