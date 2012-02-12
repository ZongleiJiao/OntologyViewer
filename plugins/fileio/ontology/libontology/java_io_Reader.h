#ifndef java_io_Reader_H
#define java_io_Reader_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace lang {
class Readable;
}
}

namespace java {
namespace io {
class Closeable;
}
}

namespace java {
namespace nio {
class CharBuffer;
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
class Reader : public java::lang::Object {
  public:
    Reader(JavaMarker* dummy);
    Reader(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void close(); // public abstract void java.io.Reader.close() throws java.io.IOException
    virtual void mark(int arg1); // public void java.io.Reader.mark(int) throws java.io.IOException
    virtual void reset(); // public void java.io.Reader.reset() throws java.io.IOException
    virtual int read(java::nio::CharBuffer* arg1); // public int java.io.Reader.read(java.nio.CharBuffer) throws java.io.IOException
    virtual int read(); // public int java.io.Reader.read() throws java.io.IOException
    virtual int read(JavaCharArray* arg1); // public int java.io.Reader.read(char[]) throws java.io.IOException
    virtual int read(JavaCharArray* arg1, int arg2, int arg3); // public abstract int java.io.Reader.read(char[],int,int) throws java.io.IOException
    virtual long skip(long arg1); // public long java.io.Reader.skip(long) throws java.io.IOException
    virtual bool markSupported(); // public boolean java.io.Reader.markSupported()
    virtual bool ready(); // public boolean java.io.Reader.ready() throws java.io.IOException

};
}
}
#endif
