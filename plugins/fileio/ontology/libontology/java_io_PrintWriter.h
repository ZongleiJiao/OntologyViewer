#ifndef java_io_PrintWriter_H
#define java_io_PrintWriter_H
#include <jni.h>
#include <java_marker.h>
#include <java_io_Writer.h>

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
namespace lang {
class Appendable;
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
class PrintWriter : public java::io::Writer {
  public:
    PrintWriter(JavaMarker* dummy);
    PrintWriter(jobject obj);
    PrintWriter(java::io::Writer* arg1); // public java.io.PrintWriter(java.io.Writer)
    PrintWriter(java::io::Writer* arg1, bool arg2); // public java.io.PrintWriter(java.io.Writer,boolean)
    PrintWriter(java::io::OutputStream* arg1); // public java.io.PrintWriter(java.io.OutputStream)
    PrintWriter(java::io::OutputStream* arg1, bool arg2); // public java.io.PrintWriter(java.io.OutputStream,boolean)
    PrintWriter(const char* arg1); // public java.io.PrintWriter(java.lang.String) throws java.io.FileNotFoundException
    PrintWriter(const char* arg1, const char* arg2); // public java.io.PrintWriter(java.lang.String,java.lang.String) throws java.io.FileNotFoundException,java.io.UnsupportedEncodingException
    PrintWriter(java::io::File* arg1); // public java.io.PrintWriter(java.io.File) throws java.io.FileNotFoundException
    PrintWriter(java::io::File* arg1, const char* arg2); // public java.io.PrintWriter(java.io.File,java.lang.String) throws java.io.FileNotFoundException,java.io.UnsupportedEncodingException

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void println(); // public void java.io.PrintWriter.println()
    virtual void println(bool arg1); // public void java.io.PrintWriter.println(boolean)
    virtual void println(char arg1); // public void java.io.PrintWriter.println(char)
    virtual void println(int arg1); // public void java.io.PrintWriter.println(int)
    virtual void println(long arg1); // public void java.io.PrintWriter.println(long)
    virtual void println(float arg1); // public void java.io.PrintWriter.println(float)
    virtual void println(double arg1); // public void java.io.PrintWriter.println(double)
    virtual void println(JavaCharArray* arg1); // public void java.io.PrintWriter.println(char[])
    virtual void println(const char* arg1); // public void java.io.PrintWriter.println(java.lang.String)
    virtual void println(java::lang::Object* arg1); // public void java.io.PrintWriter.println(java.lang.Object)
    virtual java::io::PrintWriter* append(java::lang::CharSequence* arg1); // public java.io.PrintWriter java.io.PrintWriter.append(java.lang.CharSequence)
    virtual java::io::PrintWriter* append(java::lang::CharSequence* arg1, int arg2, int arg3); // public java.io.PrintWriter java.io.PrintWriter.append(java.lang.CharSequence,int,int)
    virtual java::io::PrintWriter* append(char arg1); // public java.io.PrintWriter java.io.PrintWriter.append(char)
    virtual java::io::PrintWriter* format(const char* arg1, JavaObjectArray* arg2); // public java.io.PrintWriter java.io.PrintWriter.format(java.lang.String,java.lang.Object[])
    virtual java::io::PrintWriter* format(java::util::Locale* arg1, const char* arg2, JavaObjectArray* arg3); // public java.io.PrintWriter java.io.PrintWriter.format(java.util.Locale,java.lang.String,java.lang.Object[])
    virtual void write(int arg1); // public void java.io.PrintWriter.write(int)
    virtual void write(JavaCharArray* arg1, int arg2, int arg3); // public void java.io.PrintWriter.write(char[],int,int)
    virtual void write(JavaCharArray* arg1); // public void java.io.PrintWriter.write(char[])
    virtual void write(const char* arg1, int arg2, int arg3); // public void java.io.PrintWriter.write(java.lang.String,int,int)
    virtual void write(const char* arg1); // public void java.io.PrintWriter.write(java.lang.String)
    virtual void print(bool arg1); // public void java.io.PrintWriter.print(boolean)
    virtual void print(char arg1); // public void java.io.PrintWriter.print(char)
    virtual void print(int arg1); // public void java.io.PrintWriter.print(int)
    virtual void print(long arg1); // public void java.io.PrintWriter.print(long)
    virtual void print(float arg1); // public void java.io.PrintWriter.print(float)
    virtual void print(double arg1); // public void java.io.PrintWriter.print(double)
    virtual void print(JavaCharArray* arg1); // public void java.io.PrintWriter.print(char[])
    virtual void print(const char* arg1); // public void java.io.PrintWriter.print(java.lang.String)
    virtual void print(java::lang::Object* arg1); // public void java.io.PrintWriter.print(java.lang.Object)
    virtual void flush(); // public void java.io.PrintWriter.flush()
    virtual void close(); // public void java.io.PrintWriter.close()
    virtual bool checkError(); // public boolean java.io.PrintWriter.checkError()
    virtual java::io::PrintWriter* printf(const char* arg1, JavaObjectArray* arg2); // public java.io.PrintWriter java.io.PrintWriter.printf(java.lang.String,java.lang.Object[])
    virtual java::io::PrintWriter* printf(java::util::Locale* arg1, const char* arg2, JavaObjectArray* arg3); // public java.io.PrintWriter java.io.PrintWriter.printf(java.util.Locale,java.lang.String,java.lang.Object[])

};
}
}
#endif
