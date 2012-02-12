#ifndef org_semanticweb_owlapi_model_OWLRestriction_H
#define org_semanticweb_owlapi_model_OWLRestriction_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAnonymousClassExpression;
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
class OWLRestriction : public java::lang::Object {
  public:
    OWLRestriction(JavaMarker* dummy);
    OWLRestriction(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLPropertyExpression* getProperty(); // public abstract org.semanticweb.owlapi.model.OWLPropertyExpression org.semanticweb.owlapi.model.OWLRestriction.getProperty()
    virtual bool isObjectRestriction(); // public abstract boolean org.semanticweb.owlapi.model.OWLRestriction.isObjectRestriction()
    virtual bool isDataRestriction(); // public abstract boolean org.semanticweb.owlapi.model.OWLRestriction.isDataRestriction()

};
}
}
}
}
#endif
