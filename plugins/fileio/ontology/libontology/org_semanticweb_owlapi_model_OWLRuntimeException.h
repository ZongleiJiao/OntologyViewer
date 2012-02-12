#ifndef org_semanticweb_owlapi_model_OWLRuntimeException_H
#define org_semanticweb_owlapi_model_OWLRuntimeException_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_RuntimeException.h>

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
class OWLRuntimeException : public java::lang::RuntimeException {
  public:
    OWLRuntimeException(JavaMarker* dummy);
    OWLRuntimeException(jobject obj);
    OWLRuntimeException(); // public org.semanticweb.owlapi.model.OWLRuntimeException()
    OWLRuntimeException(const char* arg1); // public org.semanticweb.owlapi.model.OWLRuntimeException(java.lang.String)
    OWLRuntimeException(const char* arg1, java::lang::Throwable* arg2); // public org.semanticweb.owlapi.model.OWLRuntimeException(java.lang.String,java.lang.Throwable)
    OWLRuntimeException(java::lang::Throwable* arg1); // public org.semanticweb.owlapi.model.OWLRuntimeException(java.lang.Throwable)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);

};
}
}
}
}
#endif
