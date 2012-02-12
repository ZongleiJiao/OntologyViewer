#ifndef org_semanticweb_owlapi_model_OWLObjectPropertyCharacteristicAxiom_H
#define org_semanticweb_owlapi_model_OWLObjectPropertyCharacteristicAxiom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObjectPropertyAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLUnaryPropertyAxiom;
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
class OWLObjectPropertyCharacteristicAxiom : public java::lang::Object {
  public:
    OWLObjectPropertyCharacteristicAxiom(JavaMarker* dummy);
    OWLObjectPropertyCharacteristicAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);

};
}
}
}
}
#endif
