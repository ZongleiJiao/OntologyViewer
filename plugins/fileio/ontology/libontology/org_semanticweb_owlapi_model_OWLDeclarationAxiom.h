#ifndef org_semanticweb_owlapi_model_OWLDeclarationAxiom_H
#define org_semanticweb_owlapi_model_OWLDeclarationAxiom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLEntity;
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
class OWLDeclarationAxiom : public java::lang::Object {
  public:
    OWLDeclarationAxiom(JavaMarker* dummy);
    OWLDeclarationAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLDeclarationAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLDeclarationAxiom org.semanticweb.owlapi.model.OWLDeclarationAxiom.getAxiomWithoutAnnotations()
    virtual org::semanticweb::owlapi::model::OWLEntity* getEntity(); // public abstract org.semanticweb.owlapi.model.OWLEntity org.semanticweb.owlapi.model.OWLDeclarationAxiom.getEntity()

};
}
}
}
}
#endif
