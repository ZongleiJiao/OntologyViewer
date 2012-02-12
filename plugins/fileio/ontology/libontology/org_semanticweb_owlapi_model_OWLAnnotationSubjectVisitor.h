#ifndef org_semanticweb_owlapi_model_OWLAnnotationSubjectVisitor_H
#define org_semanticweb_owlapi_model_OWLAnnotationSubjectVisitor_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class IRI;
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
class OWLAnnotationSubjectVisitor : public java::lang::Object {
  public:
    OWLAnnotationSubjectVisitor(JavaMarker* dummy);
    OWLAnnotationSubjectVisitor(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void visit(org::semanticweb::owlapi::model::IRI* arg1); // public abstract void org.semanticweb.owlapi.model.OWLAnnotationSubjectVisitor.visit(org.semanticweb.owlapi.model.IRI)
    virtual void visit(org::semanticweb::owlapi::model::OWLAnonymousIndividual* arg1); // public abstract void org.semanticweb.owlapi.model.OWLAnnotationSubjectVisitor.visit(org.semanticweb.owlapi.model.OWLAnonymousIndividual)

};
}
}
}
}
#endif
