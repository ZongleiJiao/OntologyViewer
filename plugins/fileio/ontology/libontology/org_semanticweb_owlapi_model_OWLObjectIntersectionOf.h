#ifndef org_semanticweb_owlapi_model_OWLObjectIntersectionOf_H
#define org_semanticweb_owlapi_model_OWLObjectIntersectionOf_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLNaryBooleanClassExpression;
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
class OWLObjectIntersectionOf : public java::lang::Object {
  public:
    OWLObjectIntersectionOf(JavaMarker* dummy);
    OWLObjectIntersectionOf(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);

};
}
}
}
}
#endif
