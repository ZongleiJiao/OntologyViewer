#ifndef org_semanticweb_owlapi_model_SWRLDataRangeAtom_H
#define org_semanticweb_owlapi_model_SWRLDataRangeAtom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLUnaryAtom;
}
}
}
}

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
class SWRLDataRangeAtom : public java::lang::Object {
  public:
    SWRLDataRangeAtom(JavaMarker* dummy);
    SWRLDataRangeAtom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLDataRange* getPredicate(); // public abstract org.semanticweb.owlapi.model.OWLDataRange org.semanticweb.owlapi.model.SWRLDataRangeAtom.getPredicate()

};
}
}
}
}
#endif
