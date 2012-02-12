#ifndef org_semanticweb_owlapi_model_OWLOntologyChangeVetoException_H
#define org_semanticweb_owlapi_model_OWLOntologyChangeVetoException_H
#include <jni.h>
#include <java_marker.h>
#include <org_semanticweb_owlapi_model_OWLOntologyChangeException.h>

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
class OWLOntologyChangeVetoException : public org::semanticweb::owlapi::model::OWLOntologyChangeException {
  public:
    OWLOntologyChangeVetoException(JavaMarker* dummy);
    OWLOntologyChangeVetoException(jobject obj);
    OWLOntologyChangeVetoException(org::semanticweb::owlapi::model::OWLOntologyChange* arg1, const char* arg2); // public org.semanticweb.owlapi.model.OWLOntologyChangeVetoException(org.semanticweb.owlapi.model.OWLOntologyChange,java.lang.String)
    OWLOntologyChangeVetoException(org::semanticweb::owlapi::model::OWLOntologyChange* arg1, const char* arg2, java::lang::Throwable* arg3); // public org.semanticweb.owlapi.model.OWLOntologyChangeVetoException(org.semanticweb.owlapi.model.OWLOntologyChange,java.lang.String,java.lang.Throwable)
    OWLOntologyChangeVetoException(org::semanticweb::owlapi::model::OWLOntologyChange* arg1, java::lang::Throwable* arg2); // public org.semanticweb.owlapi.model.OWLOntologyChangeVetoException(org.semanticweb.owlapi.model.OWLOntologyChange,java.lang.Throwable)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);

};
}
}
}
}
#endif
