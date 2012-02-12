#ifndef org_semanticweb_owlapi_model_OWLQuantifiedRestriction_H
#define org_semanticweb_owlapi_model_OWLQuantifiedRestriction_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLRestriction;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLPropertyRange;
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
class OWLQuantifiedRestriction : public java::lang::Object {
  public:
    OWLQuantifiedRestriction(JavaMarker* dummy);
    OWLQuantifiedRestriction(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLPropertyRange* getFiller(); // public abstract org.semanticweb.owlapi.model.OWLPropertyRange org.semanticweb.owlapi.model.OWLQuantifiedRestriction.getFiller()

};
}
}
}
}
#endif
