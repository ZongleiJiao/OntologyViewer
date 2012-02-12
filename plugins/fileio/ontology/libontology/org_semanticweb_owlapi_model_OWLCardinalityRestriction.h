#ifndef org_semanticweb_owlapi_model_OWLCardinalityRestriction_H
#define org_semanticweb_owlapi_model_OWLCardinalityRestriction_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLQuantifiedRestriction;
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
class OWLCardinalityRestriction : public java::lang::Object {
  public:
    OWLCardinalityRestriction(JavaMarker* dummy);
    OWLCardinalityRestriction(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual int getCardinality(); // public abstract int org.semanticweb.owlapi.model.OWLCardinalityRestriction.getCardinality()
    virtual bool isQualified(); // public abstract boolean org.semanticweb.owlapi.model.OWLCardinalityRestriction.isQualified()

};
}
}
}
}
#endif
