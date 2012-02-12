#ifndef org_semanticweb_owlapi_model_OWLIndividualVisitorEx_H
#define org_semanticweb_owlapi_model_OWLIndividualVisitorEx_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLNamedIndividual;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAnonymousIndividual;
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
class OWLIndividualVisitorEx : public java::lang::Object {
  public:
    OWLIndividualVisitorEx(JavaMarker* dummy);
    OWLIndividualVisitorEx(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLNamedIndividual* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLIndividualVisitorEx.visit(org.semanticweb.owlapi.model.OWLNamedIndividual)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLAnonymousIndividual* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLIndividualVisitorEx.visit(org.semanticweb.owlapi.model.OWLAnonymousIndividual)

};
}
}
}
}
#endif
