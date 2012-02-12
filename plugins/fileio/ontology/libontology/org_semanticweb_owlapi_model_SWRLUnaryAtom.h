#ifndef org_semanticweb_owlapi_model_SWRLUnaryAtom_H
#define org_semanticweb_owlapi_model_SWRLUnaryAtom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLAtom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLArgument;
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
class SWRLUnaryAtom : public java::lang::Object {
  public:
    SWRLUnaryAtom(JavaMarker* dummy);
    SWRLUnaryAtom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::SWRLArgument* getArgument(); // public abstract org.semanticweb.owlapi.model.SWRLArgument org.semanticweb.owlapi.model.SWRLUnaryAtom.getArgument()

};
}
}
}
}
#endif
