#ifndef org_semanticweb_owlapi_model_OWLObjectCardinalityRestriction_H
#define org_semanticweb_owlapi_model_OWLObjectCardinalityRestriction_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLCardinalityRestriction;
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
class OWLObjectCardinalityRestriction : public java::lang::Object {
  public:
    OWLObjectCardinalityRestriction(JavaMarker* dummy);
    OWLObjectCardinalityRestriction(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);

};
}
}
}
}
#endif
