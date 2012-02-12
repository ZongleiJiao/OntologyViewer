#ifndef org_semanticweb_owlapi_model_OWLOntologyChangeException_H
#define org_semanticweb_owlapi_model_OWLOntologyChangeException_H
#include <jni.h>
#include <java_marker.h>
#include <org_semanticweb_owlapi_model_OWLRuntimeException.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntologyChange;
}
}
}
}

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
class OWLOntologyChangeException : public org::semanticweb::owlapi::model::OWLRuntimeException {
  public:
    OWLOntologyChangeException(JavaMarker* dummy);
    OWLOntologyChangeException(jobject obj);
    OWLOntologyChangeException(org::semanticweb::owlapi::model::OWLOntologyChange* arg1, const char* arg2); // public org.semanticweb.owlapi.model.OWLOntologyChangeException(org.semanticweb.owlapi.model.OWLOntologyChange,java.lang.String)
    OWLOntologyChangeException(org::semanticweb::owlapi::model::OWLOntologyChange* arg1, const char* arg2, java::lang::Throwable* arg3); // public org.semanticweb.owlapi.model.OWLOntologyChangeException(org.semanticweb.owlapi.model.OWLOntologyChange,java.lang.String,java.lang.Throwable)
    OWLOntologyChangeException(org::semanticweb::owlapi::model::OWLOntologyChange* arg1, java::lang::Throwable* arg2); // public org.semanticweb.owlapi.model.OWLOntologyChangeException(org.semanticweb.owlapi.model.OWLOntologyChange,java.lang.Throwable)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLOntologyChange* getChange(); // public org.semanticweb.owlapi.model.OWLOntologyChange org.semanticweb.owlapi.model.OWLOntologyChangeException.getChange()

};
}
}
}
}
#endif
