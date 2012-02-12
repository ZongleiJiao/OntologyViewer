#ifndef java_io_Writer_H
#define java_io_Writer_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace lang {
class Appendable;
}
}

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

namespace java {
namespace lang {
class CharSequence;
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
namespace io {
class Writer : public java::lang::Object {
  public:
    Writer(JavaMarker* dummy);
    Writer(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::io::Writer* append(java::lang::CharSequence* arg1); // public java.io.Writer java.io.Writer.append(java.lang.CharSequence) throws java.io.IOException
    virtual java::io::Writer* append(java::lang::CharSequence* arg1, int arg2, int arg3); // public java.io.Writer java.io.Writer.append(java.lang.CharSequence,int,int) throws java.io.IOException
    virtual java::io::Writer* append(char arg1); // public java.io.Writer java.io.Writer.append(char) throws java.io.IOException
    virtual void write(int arg1); // public void java.io.Writer.write(int) throws java.io.IOException
    virtual void write(JavaCharArray* arg1); // public void java.io.Writer.write(char[]) throws java.io.IOException
    virtual void write(JavaCharArray* arg1, int arg2, int arg3); // public abstract void java.io.Writer.write(char[],int,int) throws java.io.IOException
    virtual void write(const char* arg1); // public void java.io.Writer.write(java.lang.String) throws java.io.IOException
    virtual void write(const char* arg1, int arg2, int arg3); // public void java.io.Writer.write(java.lang.String,int,int) throws java.io.IOException
    virtual void flush(); // public abstract void java.io.Writer.flush() throws java.io.IOException
    virtual void close(); // public abstract void java.io.Writer.close() throws java.io.IOException

};
}
}
#endif
