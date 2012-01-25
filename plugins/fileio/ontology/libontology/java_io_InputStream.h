#ifndef java_io_InputStream_H
#define java_io_InputStream_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace io {
class Closeable;
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
class InputStream : public java::lang::Object {
  public:
    InputStream(JavaMarker* dummy);
    InputStream(jobject obj);
    InputStream(); // public java.io.InputStream()

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void close(); // public void java.io.InputStream.close() throws java.io.IOException
    virtual void mark(int arg1); // public synchronized void java.io.InputStream.mark(int)
    virtual void reset(); // public synchronized void java.io.InputStream.reset() throws java.io.IOException
    virtual int read(); // public abstract int java.io.InputStream.read() throws java.io.IOException
    virtual int read(JavaByteArray* arg1); // public int java.io.InputStream.read(byte[]) throws java.io.IOException
    virtual int read(JavaByteArray* arg1, int arg2, int arg3); // public int java.io.InputStream.read(byte[],int,int) throws java.io.IOException
    virtual long skip(long arg1); // public long java.io.InputStream.skip(long) throws java.io.IOException
    virtual int available(); // public int java.io.InputStream.available() throws java.io.IOException
    virtual bool markSupported(); // public boolean java.io.InputStream.markSupported()

};
}
}
#endif
