#ifndef org_semanticweb_owlapi_model_OWLException_H
#define org_semanticweb_owlapi_model_OWLException_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Exception.h>

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
class OWLException : public java::lang::Exception {
  public:
    OWLException(JavaMarker* dummy);
    OWLException(jobject obj);
    OWLException(const char* arg1); // public org.semanticweb.owlapi.model.OWLException(java.lang.String)
    OWLException(const char* arg1, java::lang::Throwable* arg2); // public org.semanticweb.owlapi.model.OWLException(java.lang.String,java.lang.Throwable)
    OWLException(java::lang::Throwable* arg1); // public org.semanticweb.owlapi.model.OWLException(java.lang.Throwable)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);

};
}
}
}
}
#endif
