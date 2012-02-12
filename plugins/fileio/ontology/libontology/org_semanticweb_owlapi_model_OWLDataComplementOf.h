#ifndef org_semanticweb_owlapi_model_OWLDataComplementOf_H
#define org_semanticweb_owlapi_model_OWLDataComplementOf_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataRange;
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
class OWLDataComplementOf : public java::lang::Object {
  public:
    OWLDataComplementOf(JavaMarker* dummy);
    OWLDataComplementOf(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLDataRange* getDataRange(); // public abstract org.semanticweb.owlapi.model.OWLDataRange org.semanticweb.owlapi.model.OWLDataComplementOf.getDataRange()

};
}
}
}
}
#endif
