#ifndef java_lang_StackTraceElement_H
#define java_lang_StackTraceElement_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace io {
class Serializable;
}
}

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
class StackTraceElement : public java::lang::Object {
  public:
    StackTraceElement(JavaMarker* dummy);
    StackTraceElement(jobject obj);
    StackTraceElement(const char* arg1, const char* arg2, const char* arg3, int arg4); // public java.lang.StackTraceElement(java.lang.String,java.lang.String,java.lang.String,int)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool equals(java::lang::Object* arg1); // public boolean java.lang.StackTraceElement.equals(java.lang.Object)
    virtual const char* toString(); // public java.lang.String java.lang.StackTraceElement.toString()
    virtual int hashCode(); // public int java.lang.StackTraceElement.hashCode()
    virtual const char* getFileName(); // public java.lang.String java.lang.StackTraceElement.getFileName()
    virtual int getLineNumber(); // public int java.lang.StackTraceElement.getLineNumber()
    virtual const char* getClassName(); // public java.lang.String java.lang.StackTraceElement.getClassName()
    virtual const char* getMethodName(); // public java.lang.String java.lang.StackTraceElement.getMethodName()
    virtual bool isNativeMethod(); // public boolean java.lang.StackTraceElement.isNativeMethod()

};
}
}
#endif
