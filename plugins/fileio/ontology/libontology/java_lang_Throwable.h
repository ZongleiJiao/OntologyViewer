#ifndef java_lang_Throwable_H
#define java_lang_Throwable_H
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

namespace java {
namespace io {
class PrintStream;
}
}

namespace java {
namespace io {
class PrintWriter;
}
}

namespace java {
namespace lang {
class StackTraceElement;
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
class Throwable : public java::lang::Object {
  public:
    Throwable(JavaMarker* dummy);
    Throwable(jobject obj);
    Throwable(); // public java.lang.Throwable()
    Throwable(const char* arg1); // public java.lang.Throwable(java.lang.String)
    Throwable(const char* arg1, java::lang::Throwable* arg2); // public java.lang.Throwable(java.lang.String,java.lang.Throwable)
    Throwable(java::lang::Throwable* arg1); // public java.lang.Throwable(java.lang.Throwable)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void printStackTrace(); // public void java.lang.Throwable.printStackTrace()
    virtual void printStackTrace(java::io::PrintStream* arg1); // public void java.lang.Throwable.printStackTrace(java.io.PrintStream)
    virtual void printStackTrace(java::io::PrintWriter* arg1); // public void java.lang.Throwable.printStackTrace(java.io.PrintWriter)
    virtual java::lang::Throwable* fillInStackTrace(); // public synchronized native java.lang.Throwable java.lang.Throwable.fillInStackTrace()
    virtual java::lang::Throwable* getCause(); // public java.lang.Throwable java.lang.Throwable.getCause()
    virtual java::lang::Throwable* initCause(java::lang::Throwable* arg1); // public synchronized java.lang.Throwable java.lang.Throwable.initCause(java.lang.Throwable)
    virtual const char* toString(); // public java.lang.String java.lang.Throwable.toString()
    virtual const char* getMessage(); // public java.lang.String java.lang.Throwable.getMessage()
    virtual const char* getLocalizedMessage(); // public java.lang.String java.lang.Throwable.getLocalizedMessage()
    virtual JavaObjectArray* getStackTrace(); // public java.lang.StackTraceElement[] java.lang.Throwable.getStackTrace()
    virtual void setStackTrace(JavaObjectArray* arg1); // public void java.lang.Throwable.setStackTrace(java.lang.StackTraceElement[])

};
}
}
#endif
