#ifndef org_semanticweb_owlapi_model_OWLObjectExactCardinality_H
#define org_semanticweb_owlapi_model_OWLObjectExactCardinality_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObjectCardinalityRestriction;
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
class OWLObjectExactCardinality : public java::lang::Object {
  public:
    OWLObjectExactCardinality(JavaMarker* dummy);
    OWLObjectExactCardinality(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLClassExpression* asIntersectionOfMinMax(); // public abstract org.semanticweb.owlapi.model.OWLClassExpression org.semanticweb.owlapi.model.OWLObjectExactCardinality.asIntersectionOfMinMax()

};
}
}
}
}
#endif
