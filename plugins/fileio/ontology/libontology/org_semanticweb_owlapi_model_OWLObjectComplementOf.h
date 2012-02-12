#ifndef org_semanticweb_owlapi_model_OWLObjectComplementOf_H
#define org_semanticweb_owlapi_model_OWLObjectComplementOf_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLBooleanClassExpression;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLClassExpression;
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
class OWLObjectComplementOf : public java::lang::Object {
  public:
    OWLObjectComplementOf(JavaMarker* dummy);
    OWLObjectComplementOf(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLClassExpression* getOperand(); // public abstract org.semanticweb.owlapi.model.OWLClassExpression org.semanticweb.owlapi.model.OWLObjectComplementOf.getOperand()

};
}
}
}
}
#endif
