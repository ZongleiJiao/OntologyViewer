#ifndef java_lang_AbstractStringBuilder_H
#define java_lang_AbstractStringBuilder_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace lang {
class Appendable;
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
class StringBuffer;
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
class AbstractStringBuilder : public java::lang::Object {
  public:
    AbstractStringBuilder(JavaMarker* dummy);
    AbstractStringBuilder(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual const char* toString(); // public abstract java.lang.String java.lang.AbstractStringBuilder.toString()
    virtual java::lang::AbstractStringBuilder* append(java::lang::Object* arg1); // public java.lang.AbstractStringBuilder java.lang.AbstractStringBuilder.append(java.lang.Object)
    virtual java::lang::AbstractStringBuilder* append(const char* arg1); // public java.lang.AbstractStringBuilder java.lang.AbstractStringBuilder.append(java.lang.String)
    virtual java::lang::AbstractStringBuilder* append(java::lang::StringBuffer* arg1); // public java.lang.AbstractStringBuilder java.lang.AbstractStringBuilder.append(java.lang.StringBuffer)
    virtual java::lang::AbstractStringBuilder* append(java::lang::CharSequence* arg1); // public java.lang.AbstractStringBuilder java.lang.AbstractStringBuilder.append(java.lang.CharSequence)
    virtual java::lang::AbstractStringBuilder* append(java::lang::CharSequence* arg1, int arg2, int arg3); // public java.lang.AbstractStringBuilder java.lang.AbstractStringBuilder.append(java.lang.CharSequence,int,int)
    virtual java::lang::AbstractStringBuilder* append(JavaCharArray* arg1); // public java.lang.AbstractStringBuilder java.lang.AbstractStringBuilder.append(char[])
    virtual java::lang::AbstractStringBuilder* append(JavaCharArray* arg1, int arg2, int arg3); // public java.lang.AbstractStringBuilder java.lang.AbstractStringBuilder.append(char[],int,int)
    virtual java::lang::AbstractStringBuilder* append(bool arg1); // public java.lang.AbstractStringBuilder java.lang.AbstractStringBuilder.append(boolean)
    virtual java::lang::AbstractStringBuilder* append(char arg1); // public java.lang.AbstractStringBuilder java.lang.AbstractStringBuilder.append(char)
    virtual java::lang::AbstractStringBuilder* append(int arg1); // public java.lang.AbstractStringBuilder java.lang.AbstractStringBuilder.append(int)
    virtual java::lang::AbstractStringBuilder* append(long arg1); // public java.lang.AbstractStringBuilder java.lang.AbstractStringBuilder.append(long)
    virtual java::lang::AbstractStringBuilder* append(float arg1); // public java.lang.AbstractStringBuilder java.lang.AbstractStringBuilder.append(float)
    virtual java::lang::AbstractStringBuilder* append(double arg1); // public java.lang.AbstractStringBuilder java.lang.AbstractStringBuilder.append(double)
    virtual int indexOf(const char* arg1); // public int java.lang.AbstractStringBuilder.indexOf(java.lang.String)
    virtual int indexOf(const char* arg1, int arg2); // public int java.lang.AbstractStringBuilder.indexOf(java.lang.String,int)
    virtual int length(); // public int java.lang.AbstractStringBuilder.length()
    virtual char charAt(int arg1); // public char java.lang.AbstractStringBuilder.charAt(int)
    virtual int codePointAt(int arg1); // public int java.lang.AbstractStringBuilder.codePointAt(int)
    virtual int codePointBefore(int arg1); // public int java.lang.AbstractStringBuilder.codePointBefore(int)
    virtual int codePointCount(int arg1, int arg2); // public int java.lang.AbstractStringBuilder.codePointCount(int,int)
    virtual int offsetByCodePoints(int arg1, int arg2); // public int java.lang.AbstractStringBuilder.offsetByCodePoints(int,int)
    virtual void getChars(int arg1, int arg2, JavaCharArray* arg3, int arg4); // public void java.lang.AbstractStringBuilder.getChars(int,int,char[],int)
    virtual int lastIndexOf(const char* arg1); // public int java.lang.AbstractStringBuilder.lastIndexOf(java.lang.String)
    virtual int lastIndexOf(const char* arg1, int arg2); // public int java.lang.AbstractStringBuilder.lastIndexOf(java.lang.String,int)
    virtual const char* substring(int arg1); // public java.lang.String java.lang.AbstractStringBuilder.substring(int)
    virtual const char* substring(int arg1, int arg2); // public java.lang.String java.lang.AbstractStringBuilder.substring(int,int)
    virtual java::lang::CharSequence* subSequence(int arg1, int arg2); // public java.lang.CharSequence java.lang.AbstractStringBuilder.subSequence(int,int)
    virtual java::lang::AbstractStringBuilder* replace(int arg1, int arg2, const char* arg3); // public java.lang.AbstractStringBuilder java.lang.AbstractStringBuilder.replace(int,int,java.lang.String)
    virtual int capacity(); // public int java.lang.AbstractStringBuilder.capacity()
    virtual void ensureCapacity(int arg1); // public void java.lang.AbstractStringBuilder.ensureCapacity(int)
    virtual void trimToSize(); // public void java.lang.AbstractStringBuilder.trimToSize()
    virtual void setLength(int arg1); // public void java.lang.AbstractStringBuilder.setLength(int)
    virtual void setCharAt(int arg1, char arg2); // public void java.lang.AbstractStringBuilder.setCharAt(int,char)
    virtual java::lang::AbstractStringBuilder* appendCodePoint(int arg1); // public java.lang.AbstractStringBuilder java.lang.AbstractStringBuilder.appendCodePoint(int)
    virtual java::lang::AbstractStringBuilder* delete_(int arg1, int arg2); // public java.lang.AbstractStringBuilder java.lang.AbstractStringBuilder.delete(int,int)
    virtual java::lang::AbstractStringBuilder* deleteCharAt(int arg1); // public java.lang.AbstractStringBuilder java.lang.AbstractStringBuilder.deleteCharAt(int)
    virtual java::lang::AbstractStringBuilder* insert(int arg1, JavaCharArray* arg2, int arg3, int arg4); // public java.lang.AbstractStringBuilder java.lang.AbstractStringBuilder.insert(int,char[],int,int)
    virtual java::lang::AbstractStringBuilder* insert(int arg1, java::lang::Object* arg2); // public java.lang.AbstractStringBuilder java.lang.AbstractStringBuilder.insert(int,java.lang.Object)
    virtual java::lang::AbstractStringBuilder* insert(int arg1, const char* arg2); // public java.lang.AbstractStringBuilder java.lang.AbstractStringBuilder.insert(int,java.lang.String)
    virtual java::lang::AbstractStringBuilder* insert(int arg1, JavaCharArray* arg2); // public java.lang.AbstractStringBuilder java.lang.AbstractStringBuilder.insert(int,char[])
    virtual java::lang::AbstractStringBuilder* insert(int arg1, java::lang::CharSequence* arg2); // public java.lang.AbstractStringBuilder java.lang.AbstractStringBuilder.insert(int,java.lang.CharSequence)
    virtual java::lang::AbstractStringBuilder* insert(int arg1, java::lang::CharSequence* arg2, int arg3, int arg4); // public java.lang.AbstractStringBuilder java.lang.AbstractStringBuilder.insert(int,java.lang.CharSequence,int,int)
    virtual java::lang::AbstractStringBuilder* insert(int arg1, bool arg2); // public java.lang.AbstractStringBuilder java.lang.AbstractStringBuilder.insert(int,boolean)
    virtual java::lang::AbstractStringBuilder* insert(int arg1, char arg2); // public java.lang.AbstractStringBuilder java.lang.AbstractStringBuilder.insert(int,char)
    virtual java::lang::AbstractStringBuilder* insert(int arg1, int arg2); // public java.lang.AbstractStringBuilder java.lang.AbstractStringBuilder.insert(int,int)
    virtual java::lang::AbstractStringBuilder* insert(int arg1, long arg2); // public java.lang.AbstractStringBuilder java.lang.AbstractStringBuilder.insert(int,long)
    virtual java::lang::AbstractStringBuilder* insert(int arg1, float arg2); // public java.lang.AbstractStringBuilder java.lang.AbstractStringBuilder.insert(int,float)
    virtual java::lang::AbstractStringBuilder* insert(int arg1, double arg2); // public java.lang.AbstractStringBuilder java.lang.AbstractStringBuilder.insert(int,double)
    virtual java::lang::AbstractStringBuilder* reverse(); // public java.lang.AbstractStringBuilder java.lang.AbstractStringBuilder.reverse()

};
}
}
#endif
