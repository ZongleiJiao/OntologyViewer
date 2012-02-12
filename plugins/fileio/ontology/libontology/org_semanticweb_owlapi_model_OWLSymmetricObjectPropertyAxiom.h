#ifndef org_semanticweb_owlapi_model_OWLSymmetricObjectPropertyAxiom_H
#define org_semanticweb_owlapi_model_OWLSymmetricObjectPropertyAxiom_H
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

namespace java {
namespace util {
class Set;
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
class OWLSymmetricObjectPropertyAxiom : public java::lang::Object {
  public:
    OWLSymmetricObjectPropertyAxiom(JavaMarker* dummy);
    OWLSymmetricObjectPropertyAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLSymmetricObjectPropertyAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLSymmetricObjectPropertyAxiom org.semanticweb.owlapi.model.OWLSymmetricObjectPropertyAxiom.getAxiomWithoutAnnotations()
    virtual java::util::Set* asSubPropertyAxioms(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLSymmetricObjectPropertyAxiom.asSubPropertyAxioms()

};
}
}
}
}
#endif
