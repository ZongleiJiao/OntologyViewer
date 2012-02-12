#ifndef org_semanticweb_owlapi_model_OWLObjectMinCardinality_H
#define org_semanticweb_owlapi_model_OWLObjectMinCardinality_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObjectCardinalityRestriction;
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
class OWLObjectMinCardinality : public java::lang::Object {
  public:
    OWLObjectMinCardinality(JavaMarker* dummy);
    OWLObjectMinCardinality(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);

};
}
}
}
}
#endif
