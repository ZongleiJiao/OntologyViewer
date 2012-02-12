#ifndef org_semanticweb_owlapi_model_OWLAnnotationSubjectVisitorEx_H
#define org_semanticweb_owlapi_model_OWLAnnotationSubjectVisitorEx_H
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
class OWLAnnotationSubjectVisitorEx : public java::lang::Object {
  public:
    OWLAnnotationSubjectVisitorEx(JavaMarker* dummy);
    OWLAnnotationSubjectVisitorEx(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::IRI* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAnnotationSubjectVisitorEx.visit(org.semanticweb.owlapi.model.IRI)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLAnonymousIndividual* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAnnotationSubjectVisitorEx.visit(org.semanticweb.owlapi.model.OWLAnonymousIndividual)

};
}
}
}
}
#endif
