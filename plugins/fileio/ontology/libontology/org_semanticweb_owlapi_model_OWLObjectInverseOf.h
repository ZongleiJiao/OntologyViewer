#ifndef org_semanticweb_owlapi_model_OWLObjectInverseOf_H
#define org_semanticweb_owlapi_model_OWLObjectInverseOf_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObjectPropertyExpression;
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
class OWLObjectInverseOf : public java::lang::Object {
  public:
    OWLObjectInverseOf(JavaMarker* dummy);
    OWLObjectInverseOf(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLObjectPropertyExpression* getInverse(); // public abstract org.semanticweb.owlapi.model.OWLObjectPropertyExpression org.semanticweb.owlapi.model.OWLObjectInverseOf.getInverse()

};
}
}
}
}
#endif
