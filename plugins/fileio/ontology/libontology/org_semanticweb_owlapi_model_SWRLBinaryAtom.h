#ifndef org_semanticweb_owlapi_model_SWRLBinaryAtom_H
#define org_semanticweb_owlapi_model_SWRLBinaryAtom_H
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
class SWRLBinaryAtom : public java::lang::Object {
  public:
    SWRLBinaryAtom(JavaMarker* dummy);
    SWRLBinaryAtom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::SWRLArgument* getFirstArgument(); // public abstract org.semanticweb.owlapi.model.SWRLArgument org.semanticweb.owlapi.model.SWRLBinaryAtom.getFirstArgument()
    virtual org::semanticweb::owlapi::model::SWRLArgument* getSecondArgument(); // public abstract org.semanticweb.owlapi.model.SWRLArgument org.semanticweb.owlapi.model.SWRLBinaryAtom.getSecondArgument()

};
}
}
}
}
#endif
