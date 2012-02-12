#ifndef org_semanticweb_owlapi_model_OWLDataPropertyExpression_H
#define org_semanticweb_owlapi_model_OWLDataPropertyExpression_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLPropertyExpression;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLPredicate;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataProperty;
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
class OWLDataPropertyExpression : public java::lang::Object {
  public:
    OWLDataPropertyExpression(JavaMarker* dummy);
    OWLDataPropertyExpression(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLDataProperty* asOWLDataProperty(); // public abstract org.semanticweb.owlapi.model.OWLDataProperty org.semanticweb.owlapi.model.OWLDataPropertyExpression.asOWLDataProperty()

};
}
}
}
}
#endif
