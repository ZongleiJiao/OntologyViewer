#ifndef java_io_PrintStream_H
#define java_io_PrintStream_H
#include <jni.h>
#include <java_marker.h>
#include <java_io_FilterOutputStream.h>

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
class OutputStream;
}
}

namespace java {
namespace lang {
class String;
}
}

namespace java {
namespace io {
class File;
}
}

namespace java {
namespace lang {
class Object;
}
}

namespace java {
namespace lang {
class CharSequence;
}
}

namespace java {
namespace util {
class Locale;
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
class PrintStream : public java::io::FilterOutputStream {
  public:
    PrintStream(JavaMarker* dummy);
    PrintStream(jobject obj);
    PrintStream(java::io::OutputStream* arg1); // public java.io.PrintStream(java.io.OutputStream)
    PrintStream(java::io::OutputStream* arg1, bool arg2); // public java.io.PrintStream(java.io.OutputStream,boolean)
    PrintStream(java::io::OutputStream* arg1, bool arg2, const char* arg3); // public java.io.PrintStream(java.io.OutputStream,boolean,java.lang.String) throws java.io.UnsupportedEncodingException
    PrintStream(const char* arg1); // public java.io.PrintStream(java.lang.String) throws java.io.FileNotFoundException
    PrintStream(const char* arg1, const char* arg2); // public java.io.PrintStream(java.lang.String,java.lang.String) throws java.io.FileNotFoundException,java.io.UnsupportedEncodingException
    PrintStream(java::io::File* arg1); // public java.io.PrintStream(java.io.File) throws java.io.FileNotFoundException
    PrintStream(java::io::File* arg1, const char* arg2); // public java.io.PrintStream(java.io.File,java.lang.String) throws java.io.FileNotFoundException,java.io.UnsupportedEncodingException

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void println(); // public void java.io.PrintStream.println()
    virtual void println(bool arg1); // public void java.io.PrintStream.println(boolean)
    virtual void println(char arg1); // public void java.io.PrintStream.println(char)
    virtual void println(int arg1); // public void java.io.PrintStream.println(int)
    virtual void println(long arg1); // public void java.io.PrintStream.println(long)
    virtual void println(float arg1); // public void java.io.PrintStream.println(float)
    virtual void println(double arg1); // public void java.io.PrintStream.println(double)
    virtual void println(JavaCharArray* arg1); // public void java.io.PrintStream.println(char[])
    virtual void println(const char* arg1); // public void java.io.PrintStream.println(java.lang.String)
    virtual void println(java::lang::Object* arg1); // public void java.io.PrintStream.println(java.lang.Object)
    virtual java::io::PrintStream* append(java::lang::CharSequence* arg1); // public java.io.PrintStream java.io.PrintStream.append(java.lang.CharSequence)
    virtual java::io::PrintStream* append(java::lang::CharSequence* arg1, int arg2, int arg3); // public java.io.PrintStream java.io.PrintStream.append(java.lang.CharSequence,int,int)
    virtual java::io::PrintStream* append(char arg1); // public java.io.PrintStream java.io.PrintStream.append(char)
    virtual java::io::PrintStream* format(const char* arg1, JavaObjectArray* arg2); // public java.io.PrintStream java.io.PrintStream.format(java.lang.String,java.lang.Object[])
    virtual java::io::PrintStream* format(java::util::Locale* arg1, const char* arg2, JavaObjectArray* arg3); // public java.io.PrintStream java.io.PrintStream.format(java.util.Locale,java.lang.String,java.lang.Object[])
    virtual void write(int arg1); // public void java.io.PrintStream.write(int)
    virtual void write(JavaByteArray* arg1, int arg2, int arg3); // public void java.io.PrintStream.write(byte[],int,int)
    virtual void print(bool arg1); // public void java.io.PrintStream.print(boolean)
    virtual void print(char arg1); // public void java.io.PrintStream.print(char)
    virtual void print(int arg1); // public void java.io.PrintStream.print(int)
    virtual void print(long arg1); // public void java.io.PrintStream.print(long)
    virtual void print(float arg1); // public void java.io.PrintStream.print(float)
    virtual void print(double arg1); // public void java.io.PrintStream.print(double)
    virtual void print(JavaCharArray* arg1); // public void java.io.PrintStream.print(char[])
    virtual void print(const char* arg1); // public void java.io.PrintStream.print(java.lang.String)
    virtual void print(java::lang::Object* arg1); // public void java.io.PrintStream.print(java.lang.Object)
    virtual void flush(); // public void java.io.PrintStream.flush()
    virtual void close(); // public void java.io.PrintStream.close()
    virtual bool checkError(); // public boolean java.io.PrintStream.checkError()
    virtual java::io::PrintStream* printf(const char* arg1, JavaObjectArray* arg2); // public java.io.PrintStream java.io.PrintStream.printf(java.lang.String,java.lang.Object[])
    virtual java::io::PrintStream* printf(java::util::Locale* arg1, const char* arg2, JavaObjectArray* arg3); // public java.io.PrintStream java.io.PrintStream.printf(java.util.Locale,java.lang.String,java.lang.Object[])

};
}
}
#endif
