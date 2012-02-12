#ifndef org_semanticweb_owlapi_model_OWLPropertyExpressionVisitorEx_H
#define org_semanticweb_owlapi_model_OWLPropertyExpressionVisitorEx_H
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
class OWLPropertyExpressionVisitorEx : public java::lang::Object {
  public:
    OWLPropertyExpressionVisitorEx(JavaMarker* dummy);
    OWLPropertyExpressionVisitorEx(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLObjectProperty* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLPropertyExpressionVisitorEx.visit(org.semanticweb.owlapi.model.OWLObjectProperty)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLObjectInverseOf* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLPropertyExpressionVisitorEx.visit(org.semanticweb.owlapi.model.OWLObjectInverseOf)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLDataProperty* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLPropertyExpressionVisitorEx.visit(org.semanticweb.owlapi.model.OWLDataProperty)

};
}
}
}
}
#endif
