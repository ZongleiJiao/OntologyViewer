#ifndef java_lang_Exception_H
#define java_lang_Exception_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Throwable.h>

namespace java {
namespace lang {
class String;
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
class Exception : public java::lang::Throwable {
  public:
    Exception(JavaMarker* dummy);
    Exception(jobject obj);
    Exception(); // public java.lang.Exception()
    Exception(const char* arg1); // public java.lang.Exception(java.lang.String)
    Exception(const char* arg1, java::lang::Throwable* arg2); // public java.lang.Exception(java.lang.String,java.lang.Throwable)
    Exception(java::lang::Throwable* arg1); // public java.lang.Exception(java.lang.Throwable)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);

};
}
}
#endif
