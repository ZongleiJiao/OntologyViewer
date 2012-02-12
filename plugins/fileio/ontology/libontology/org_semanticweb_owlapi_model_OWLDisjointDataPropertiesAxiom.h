#ifndef org_semanticweb_owlapi_model_OWLDisjointDataPropertiesAxiom_H
#define org_semanticweb_owlapi_model_OWLDisjointDataPropertiesAxiom_H
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
class OWLDisjointDataPropertiesAxiom : public java::lang::Object {
  public:
    OWLDisjointDataPropertiesAxiom(JavaMarker* dummy);
    OWLDisjointDataPropertiesAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLDisjointDataPropertiesAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLDisjointDataPropertiesAxiom org.semanticweb.owlapi.model.OWLDisjointDataPropertiesAxiom.getAxiomWithoutAnnotations()

};
}
}
}
}
#endif
