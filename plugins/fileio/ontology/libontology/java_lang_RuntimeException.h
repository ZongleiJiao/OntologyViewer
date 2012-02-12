#ifndef java_lang_RuntimeException_H
#define java_lang_RuntimeException_H
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

namespace java {
namespace lang {
class RuntimeException : public java::lang::Exception {
  public:
    RuntimeException(JavaMarker* dummy);
    RuntimeException(jobject obj);
    RuntimeException(); // public java.lang.RuntimeException()
    RuntimeException(const char* arg1); // public java.lang.RuntimeException(java.lang.String)
    RuntimeException(const char* arg1, java::lang::Throwable* arg2); // public java.lang.RuntimeException(java.lang.String,java.lang.Throwable)
    RuntimeException(java::lang::Throwable* arg1); // public java.lang.RuntimeException(java.lang.Throwable)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);

};
}
}
#endif
