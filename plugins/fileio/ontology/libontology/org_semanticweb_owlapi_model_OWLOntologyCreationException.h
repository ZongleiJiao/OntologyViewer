#ifndef org_semanticweb_owlapi_model_OWLOntologyCreationException_H
#define org_semanticweb_owlapi_model_OWLOntologyCreationException_H
#include <jni.h>
#include <java_marker.h>
#include <org_semanticweb_owlapi_model_OWLException.h>

namespace java {
namespace lang {
class String;
}
}

namespace java {
namespace lang {
class Throwable;
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
class OWLOntologyCreationException : public org::semanticweb::owlapi::model::OWLException {
  public:
    OWLOntologyCreationException(JavaMarker* dummy);
    OWLOntologyCreationException(jobject obj);
    OWLOntologyCreationException(); // public org.semanticweb.owlapi.model.OWLOntologyCreationException()
    OWLOntologyCreationException(const char* arg1); // public org.semanticweb.owlapi.model.OWLOntologyCreationException(java.lang.String)
    OWLOntologyCreationException(const char* arg1, java::lang::Throwable* arg2); // public org.semanticweb.owlapi.model.OWLOntologyCreationException(java.lang.String,java.lang.Throwable)
    OWLOntologyCreationException(java::lang::Throwable* arg1); // public org.semanticweb.owlapi.model.OWLOntologyCreationException(java.lang.Throwable)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);

};
}
}
}
}
#endif
