#ifndef java_io_FilterOutputStream_H
#define java_io_FilterOutputStream_H
#include <jni.h>
#include <java_marker.h>
#include <java_io_OutputStream.h>
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
class FilterOutputStream : public java::io::OutputStream {
  public:
    FilterOutputStream(JavaMarker* dummy);
    FilterOutputStream(jobject obj);
    FilterOutputStream(java::io::OutputStream* arg1); // public java.io.FilterOutputStream(java.io.OutputStream)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void write(int arg1); // public void java.io.FilterOutputStream.write(int) throws java.io.IOException
    virtual void write(JavaByteArray* arg1); // public void java.io.FilterOutputStream.write(byte[]) throws java.io.IOException
    virtual void write(JavaByteArray* arg1, int arg2, int arg3); // public void java.io.FilterOutputStream.write(byte[],int,int) throws java.io.IOException
    virtual void flush(); // public void java.io.FilterOutputStream.flush() throws java.io.IOException
    virtual void close(); // public void java.io.FilterOutputStream.close() throws java.io.IOException

};
}
}
#endif
