#ifndef org_semanticweb_owlapi_model_OWLDisjointObjectPropertiesAxiom_H
#define org_semanticweb_owlapi_model_OWLDisjointObjectPropertiesAxiom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLNaryPropertyAxiom;
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
class OWLDisjointObjectPropertiesAxiom : public java::lang::Object {
  public:
    OWLDisjointObjectPropertiesAxiom(JavaMarker* dummy);
    OWLDisjointObjectPropertiesAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLDisjointObjectPropertiesAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLDisjointObjectPropertiesAxiom org.semanticweb.owlapi.model.OWLDisjointObjectPropertiesAxiom.getAxiomWithoutAnnotations()

};
}
}
}
}
#endif
