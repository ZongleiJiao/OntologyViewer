#ifndef org_semanticweb_owlapi_model_OWLIndividualVisitor_H
#define org_semanticweb_owlapi_model_OWLIndividualVisitor_H
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
class OWLIndividualVisitor : public java::lang::Object {
  public:
    OWLIndividualVisitor(JavaMarker* dummy);
    OWLIndividualVisitor(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void visit(org::semanticweb::owlapi::model::OWLNamedIndividual* arg1); // public abstract void org.semanticweb.owlapi.model.OWLIndividualVisitor.visit(org.semanticweb.owlapi.model.OWLNamedIndividual)
    virtual void visit(org::semanticweb::owlapi::model::OWLAnonymousIndividual* arg1); // public abstract void org.semanticweb.owlapi.model.OWLIndividualVisitor.visit(org.semanticweb.owlapi.model.OWLAnonymousIndividual)

};
}
}
}
}
#endif
