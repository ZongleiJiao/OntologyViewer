#ifndef org_semanticweb_owlapi_model_OWLDataSomeValuesFrom_H
#define org_semanticweb_owlapi_model_OWLDataSomeValuesFrom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLQuantifiedDataRestriction;
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
class OWLDataSomeValuesFrom : public java::lang::Object {
  public:
    OWLDataSomeValuesFrom(JavaMarker* dummy);
    OWLDataSomeValuesFrom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);

};
}
}
}
}
#endif
