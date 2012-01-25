#ifndef java_io_OutputStream_H
#define java_io_OutputStream_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace io {
class Closeable;
}
}

namespace java {
namespace io {
class Flushable;
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
namespace io {
class OutputStream : public java::lang::Object {
  public:
    OutputStream(JavaMarker* dummy);
    OutputStream(jobject obj);
    OutputStream(); // public java.io.OutputStream()

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void write(int arg1); // public abstract void java.io.OutputStream.write(int) throws java.io.IOException
    virtual void write(JavaByteArray* arg1); // public void java.io.OutputStream.write(byte[]) throws java.io.IOException
    virtual void write(JavaByteArray* arg1, int arg2, int arg3); // public void java.io.OutputStream.write(byte[],int,int) throws java.io.IOException
    virtual void flush(); // public void java.io.OutputStream.flush() throws java.io.IOException
    virtual void close(); // public void java.io.OutputStream.close() throws java.io.IOException

};
}
}
#endif
