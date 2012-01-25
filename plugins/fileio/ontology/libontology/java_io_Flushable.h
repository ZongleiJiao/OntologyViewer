#ifndef java_io_Flushable_H
#define java_io_Flushable_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>
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
namespace io {
class Flushable : public java::lang::Object {
  public:
    Flushable(JavaMarker* dummy);
    Flushable(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void flush(); // public abstract void java.io.Flushable.flush() throws java.io.IOException

};
}
}
#endif
