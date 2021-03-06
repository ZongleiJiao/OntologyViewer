#ifndef org_semanticweb_owlapi_model_SWRLSameIndividualAtom_H
#define org_semanticweb_owlapi_model_SWRLSameIndividualAtom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLBinaryAtom;
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
class SWRLSameIndividualAtom : public java::lang::Object {
  public:
    SWRLSameIndividualAtom(JavaMarker* dummy);
    SWRLSameIndividualAtom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);

};
}
}
}
}
#endif
