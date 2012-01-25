#ifndef java_lang_StringBuffer_H
#define java_lang_StringBuffer_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_AbstractStringBuilder.h>

namespace java {
namespace io {
class Serializable;
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

namespace java {
namespace lang {
class Object;
}
}

namespace java {
namespace lang {
class Appendable;
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
class StringBuffer : public java::lang::AbstractStringBuilder {
  public:
    StringBuffer(JavaMarker* dummy);
    StringBuffer(jobject obj);
    StringBuffer(); // public java.lang.StringBuffer()
    StringBuffer(int arg1); // public java.lang.StringBuffer(int)
    StringBuffer(const char* arg1); // public java.lang.StringBuffer(java.lang.String)
    StringBuffer(java::lang::CharSequence* arg1); // public java.lang.StringBuffer(java.lang.CharSequence)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual const char* toString(); // public synchronized java.lang.String java.lang.StringBuffer.toString()
    virtual java::lang::StringBuffer* append(java::lang::Object* arg1); // public synchronized java.lang.StringBuffer java.lang.StringBuffer.append(java.lang.Object)
    virtual java::lang::StringBuffer* append(const char* arg1); // public synchronized java.lang.StringBuffer java.lang.StringBuffer.append(java.lang.String)
    virtual java::lang::StringBuffer* append(java::lang::StringBuffer* arg1); // public synchronized java.lang.StringBuffer java.lang.StringBuffer.append(java.lang.StringBuffer)
    virtual java::lang::StringBuffer* append(java::lang::CharSequence* arg1); // public java.lang.StringBuffer java.lang.StringBuffer.append(java.lang.CharSequence)
    virtual java::lang::StringBuffer* append(java::lang::CharSequence* arg1, int arg2, int arg3); // public synchronized java.lang.StringBuffer java.lang.StringBuffer.append(java.lang.CharSequence,int,int)
    virtual java::lang::StringBuffer* append(JavaCharArray* arg1); // public synchronized java.lang.StringBuffer java.lang.StringBuffer.append(char[])
    virtual java::lang::StringBuffer* append(JavaCharArray* arg1, int arg2, int arg3); // public synchronized java.lang.StringBuffer java.lang.StringBuffer.append(char[],int,int)
    virtual java::lang::StringBuffer* append(bool arg1); // public synchronized java.lang.StringBuffer java.lang.StringBuffer.append(boolean)
    virtual java::lang::StringBuffer* append(char arg1); // public synchronized java.lang.StringBuffer java.lang.StringBuffer.append(char)
    virtual java::lang::StringBuffer* append(int arg1); // public synchronized java.lang.StringBuffer java.lang.StringBuffer.append(int)
    virtual java::lang::StringBuffer* append(long arg1); // public synchronized java.lang.StringBuffer java.lang.StringBuffer.append(long)
    virtual java::lang::StringBuffer* append(float arg1); // public synchronized java.lang.StringBuffer java.lang.StringBuffer.append(float)
    virtual java::lang::StringBuffer* append(double arg1); // public synchronized java.lang.StringBuffer java.lang.StringBuffer.append(double)
    virtual int indexOf(const char* arg1); // public int java.lang.StringBuffer.indexOf(java.lang.String)
    virtual int indexOf(const char* arg1, int arg2); // public synchronized int java.lang.StringBuffer.indexOf(java.lang.String,int)
    virtual int length(); // public synchronized int java.lang.StringBuffer.length()
    virtual char charAt(int arg1); // public synchronized char java.lang.StringBuffer.charAt(int)
    virtual int codePointAt(int arg1); // public synchronized int java.lang.StringBuffer.codePointAt(int)
    virtual int codePointBefore(int arg1); // public synchronized int java.lang.StringBuffer.codePointBefore(int)
    virtual int codePointCount(int arg1, int arg2); // public synchronized int java.lang.StringBuffer.codePointCount(int,int)
    virtual int offsetByCodePoints(int arg1, int arg2); // public synchronized int java.lang.StringBuffer.offsetByCodePoints(int,int)
    virtual void getChars(int arg1, int arg2, JavaCharArray* arg3, int arg4); // public synchronized void java.lang.StringBuffer.getChars(int,int,char[],int)
    virtual int lastIndexOf(const char* arg1); // public int java.lang.StringBuffer.lastIndexOf(java.lang.String)
    virtual int lastIndexOf(const char* arg1, int arg2); // public synchronized int java.lang.StringBuffer.lastIndexOf(java.lang.String,int)
    virtual const char* substring(int arg1); // public synchronized java.lang.String java.lang.StringBuffer.substring(int)
    virtual const char* substring(int arg1, int arg2); // public synchronized java.lang.String java.lang.StringBuffer.substring(int,int)
    virtual java::lang::CharSequence* subSequence(int arg1, int arg2); // public synchronized java.lang.CharSequence java.lang.StringBuffer.subSequence(int,int)
    virtual java::lang::StringBuffer* replace(int arg1, int arg2, const char* arg3); // public synchronized java.lang.StringBuffer java.lang.StringBuffer.replace(int,int,java.lang.String)
    virtual int capacity(); // public synchronized int java.lang.StringBuffer.capacity()
    virtual void ensureCapacity(int arg1); // public synchronized void java.lang.StringBuffer.ensureCapacity(int)
    virtual void trimToSize(); // public synchronized void java.lang.StringBuffer.trimToSize()
    virtual void setLength(int arg1); // public synchronized void java.lang.StringBuffer.setLength(int)
    virtual void setCharAt(int arg1, char arg2); // public synchronized void java.lang.StringBuffer.setCharAt(int,char)
    virtual java::lang::StringBuffer* appendCodePoint(int arg1); // public synchronized java.lang.StringBuffer java.lang.StringBuffer.appendCodePoint(int)
    virtual java::lang::StringBuffer* delete_(int arg1, int arg2); // public synchronized java.lang.StringBuffer java.lang.StringBuffer.delete(int,int)
    virtual java::lang::StringBuffer* deleteCharAt(int arg1); // public synchronized java.lang.StringBuffer java.lang.StringBuffer.deleteCharAt(int)
    virtual java::lang::StringBuffer* insert(int arg1, JavaCharArray* arg2, int arg3, int arg4); // public synchronized java.lang.StringBuffer java.lang.StringBuffer.insert(int,char[],int,int)
    virtual java::lang::StringBuffer* insert(int arg1, java::lang::Object* arg2); // public synchronized java.lang.StringBuffer java.lang.StringBuffer.insert(int,java.lang.Object)
    virtual java::lang::StringBuffer* insert(int arg1, const char* arg2); // public synchronized java.lang.StringBuffer java.lang.StringBuffer.insert(int,java.lang.String)
    virtual java::lang::StringBuffer* insert(int arg1, JavaCharArray* arg2); // public synchronized java.lang.StringBuffer java.lang.StringBuffer.insert(int,char[])
    virtual java::lang::StringBuffer* insert(int arg1, java::lang::CharSequence* arg2); // public java.lang.StringBuffer java.lang.StringBuffer.insert(int,java.lang.CharSequence)
    virtual java::lang::StringBuffer* insert(int arg1, java::lang::CharSequence* arg2, int arg3, int arg4); // public synchronized java.lang.StringBuffer java.lang.StringBuffer.insert(int,java.lang.CharSequence,int,int)
    virtual java::lang::StringBuffer* insert(int arg1, bool arg2); // public java.lang.StringBuffer java.lang.StringBuffer.insert(int,boolean)
    virtual java::lang::StringBuffer* insert(int arg1, char arg2); // public synchronized java.lang.StringBuffer java.lang.StringBuffer.insert(int,char)
    virtual java::lang::StringBuffer* insert(int arg1, int arg2); // public java.lang.StringBuffer java.lang.StringBuffer.insert(int,int)
    virtual java::lang::StringBuffer* insert(int arg1, long arg2); // public java.lang.StringBuffer java.lang.StringBuffer.insert(int,long)
    virtual java::lang::StringBuffer* insert(int arg1, float arg2); // public java.lang.StringBuffer java.lang.StringBuffer.insert(int,float)
    virtual java::lang::StringBuffer* insert(int arg1, double arg2); // public java.lang.StringBuffer java.lang.StringBuffer.insert(int,double)
    virtual java::lang::StringBuffer* reverse(); // public synchronized java.lang.StringBuffer java.lang.StringBuffer.reverse()

};
}
}
#endif
