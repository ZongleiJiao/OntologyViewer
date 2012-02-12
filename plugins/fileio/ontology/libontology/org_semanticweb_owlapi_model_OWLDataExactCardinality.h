#ifndef org_semanticweb_owlapi_model_OWLDataExactCardinality_H
#define org_semanticweb_owlapi_model_OWLDataExactCardinality_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataCardinalityRestriction;
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
class OWLDataExactCardinality : public java::lang::Object {
  public:
    OWLDataExactCardinality(JavaMarker* dummy);
    OWLDataExactCardinality(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLClassExpression* asIntersectionOfMinMax(); // public abstract org.semanticweb.owlapi.model.OWLClassExpression org.semanticweb.owlapi.model.OWLDataExactCardinality.asIntersectionOfMinMax()

};
}
}
}
}
#endif
