#ifndef org_semanticweb_owlapi_model_OWLPropertyExpressionVisitor_H
#define org_semanticweb_owlapi_model_OWLPropertyExpressionVisitor_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObjectProperty;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObjectInverseOf;
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
class OWLPropertyExpressionVisitor : public java::lang::Object {
  public:
    OWLPropertyExpressionVisitor(JavaMarker* dummy);
    OWLPropertyExpressionVisitor(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void visit(org::semanticweb::owlapi::model::OWLObjectProperty* arg1); // public abstract void org.semanticweb.owlapi.model.OWLPropertyExpressionVisitor.visit(org.semanticweb.owlapi.model.OWLObjectProperty)
    virtual void visit(org::semanticweb::owlapi::model::OWLObjectInverseOf* arg1); // public abstract void org.semanticweb.owlapi.model.OWLPropertyExpressionVisitor.visit(org.semanticweb.owlapi.model.OWLObjectInverseOf)
    virtual void visit(org::semanticweb::owlapi::model::OWLDataProperty* arg1); // public abstract void org.semanticweb.owlapi.model.OWLPropertyExpressionVisitor.visit(org.semanticweb.owlapi.model.OWLDataProperty)

};
}
}
}
}
#endif
