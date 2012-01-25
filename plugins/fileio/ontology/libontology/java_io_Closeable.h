#ifndef java_io_Closeable_H
#define java_io_Closeable_H
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
class Closeable : public java::lang::Object {
  public:
    Closeable(JavaMarker* dummy);
    Closeable(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void close(); // public abstract void java.io.Closeable.close() throws java.io.IOException

};
}
}
#endif
