#ifndef org_semanticweb_owlapi_model_OWLBooleanClassExpression_H
#define org_semanticweb_owlapi_model_OWLBooleanClassExpression_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAnonymousClassExpression;
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
class OWLBooleanClassExpression : public java::lang::Object {
  public:
    OWLBooleanClassExpression(JavaMarker* dummy);
    OWLBooleanClassExpression(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);

};
}
}
}
}
#endif
