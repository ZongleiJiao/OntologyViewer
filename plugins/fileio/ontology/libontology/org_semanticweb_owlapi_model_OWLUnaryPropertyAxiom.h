#ifndef org_semanticweb_owlapi_model_OWLUnaryPropertyAxiom_H
#define org_semanticweb_owlapi_model_OWLUnaryPropertyAxiom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLPropertyAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLPropertyExpression;
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
class OWLUnaryPropertyAxiom : public java::lang::Object {
  public:
    OWLUnaryPropertyAxiom(JavaMarker* dummy);
    OWLUnaryPropertyAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLPropertyExpression* getProperty(); // public abstract org.semanticweb.owlapi.model.OWLPropertyExpression org.semanticweb.owlapi.model.OWLUnaryPropertyAxiom.getProperty()

};
}
}
}
}
#endif
