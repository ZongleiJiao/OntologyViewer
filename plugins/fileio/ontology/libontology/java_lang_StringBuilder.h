#ifndef java_lang_StringBuilder_H
#define java_lang_StringBuilder_H
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
class StringBuffer;
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
class StringBuilder : public java::lang::AbstractStringBuilder {
  public:
    StringBuilder(JavaMarker* dummy);
    StringBuilder(jobject obj);
    StringBuilder(); // public java.lang.StringBuilder()
    StringBuilder(int arg1); // public java.lang.StringBuilder(int)
    StringBuilder(const char* arg1); // public java.lang.StringBuilder(java.lang.String)
    StringBuilder(java::lang::CharSequence* arg1); // public java.lang.StringBuilder(java.lang.CharSequence)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual const char* toString(); // public java.lang.String java.lang.StringBuilder.toString()
    virtual java::lang::StringBuilder* append(java::lang::Object* arg1); // public java.lang.StringBuilder java.lang.StringBuilder.append(java.lang.Object)
    virtual java::lang::StringBuilder* append(const char* arg1); // public java.lang.StringBuilder java.lang.StringBuilder.append(java.lang.String)
    virtual java::lang::StringBuilder* append(java::lang::StringBuffer* arg1); // public java.lang.StringBuilder java.lang.StringBuilder.append(java.lang.StringBuffer)
    virtual java::lang::StringBuilder* append(java::lang::CharSequence* arg1); // public java.lang.StringBuilder java.lang.StringBuilder.append(java.lang.CharSequence)
    virtual java::lang::StringBuilder* append(java::lang::CharSequence* arg1, int arg2, int arg3); // public java.lang.StringBuilder java.lang.StringBuilder.append(java.lang.CharSequence,int,int)
    virtual java::lang::StringBuilder* append(JavaCharArray* arg1); // public java.lang.StringBuilder java.lang.StringBuilder.append(char[])
    virtual java::lang::StringBuilder* append(JavaCharArray* arg1, int arg2, int arg3); // public java.lang.StringBuilder java.lang.StringBuilder.append(char[],int,int)
    virtual java::lang::StringBuilder* append(bool arg1); // public java.lang.StringBuilder java.lang.StringBuilder.append(boolean)
    virtual java::lang::StringBuilder* append(char arg1); // public java.lang.StringBuilder java.lang.StringBuilder.append(char)
    virtual java::lang::StringBuilder* append(int arg1); // public java.lang.StringBuilder java.lang.StringBuilder.append(int)
    virtual java::lang::StringBuilder* append(long arg1); // public java.lang.StringBuilder java.lang.StringBuilder.append(long)
    virtual java::lang::StringBuilder* append(float arg1); // public java.lang.StringBuilder java.lang.StringBuilder.append(float)
    virtual java::lang::StringBuilder* append(double arg1); // public java.lang.StringBuilder java.lang.StringBuilder.append(double)
    virtual int indexOf(const char* arg1); // public int java.lang.StringBuilder.indexOf(java.lang.String)
    virtual int indexOf(const char* arg1, int arg2); // public int java.lang.StringBuilder.indexOf(java.lang.String,int)
    virtual int length(); // public int java.lang.StringBuilder.length()
    virtual char charAt(int arg1); // public char java.lang.StringBuilder.charAt(int)
    virtual int codePointAt(int arg1); // public int java.lang.StringBuilder.codePointAt(int)
    virtual int codePointBefore(int arg1); // public int java.lang.StringBuilder.codePointBefore(int)
    virtual int codePointCount(int arg1, int arg2); // public int java.lang.StringBuilder.codePointCount(int,int)
    virtual int offsetByCodePoints(int arg1, int arg2); // public int java.lang.StringBuilder.offsetByCodePoints(int,int)
    virtual void getChars(int arg1, int arg2, JavaCharArray* arg3, int arg4); // public void java.lang.StringBuilder.getChars(int,int,char[],int)
    virtual int lastIndexOf(const char* arg1); // public int java.lang.StringBuilder.lastIndexOf(java.lang.String)
    virtual int lastIndexOf(const char* arg1, int arg2); // public int java.lang.StringBuilder.lastIndexOf(java.lang.String,int)
    virtual const char* substring(int arg1, int arg2); // public java.lang.String java.lang.StringBuilder.substring(int,int)
    virtual const char* substring(int arg1); // public java.lang.String java.lang.StringBuilder.substring(int)
    virtual java::lang::CharSequence* subSequence(int arg1, int arg2); // public java.lang.CharSequence java.lang.StringBuilder.subSequence(int,int)
    virtual java::lang::StringBuilder* replace(int arg1, int arg2, const char* arg3); // public java.lang.StringBuilder java.lang.StringBuilder.replace(int,int,java.lang.String)
    virtual int capacity(); // public int java.lang.StringBuilder.capacity()
    virtual void ensureCapacity(int arg1); // public void java.lang.StringBuilder.ensureCapacity(int)
    virtual void trimToSize(); // public void java.lang.StringBuilder.trimToSize()
    virtual void setLength(int arg1); // public void java.lang.StringBuilder.setLength(int)
    virtual void setCharAt(int arg1, char arg2); // public void java.lang.StringBuilder.setCharAt(int,char)
    virtual java::lang::StringBuilder* appendCodePoint(int arg1); // public java.lang.StringBuilder java.lang.StringBuilder.appendCodePoint(int)
    virtual java::lang::StringBuilder* delete_(int arg1, int arg2); // public java.lang.StringBuilder java.lang.StringBuilder.delete(int,int)
    virtual java::lang::StringBuilder* deleteCharAt(int arg1); // public java.lang.StringBuilder java.lang.StringBuilder.deleteCharAt(int)
    virtual java::lang::StringBuilder* insert(int arg1, JavaCharArray* arg2, int arg3, int arg4); // public java.lang.StringBuilder java.lang.StringBuilder.insert(int,char[],int,int)
    virtual java::lang::StringBuilder* insert(int arg1, java::lang::Object* arg2); // public java.lang.StringBuilder java.lang.StringBuilder.insert(int,java.lang.Object)
    virtual java::lang::StringBuilder* insert(int arg1, const char* arg2); // public java.lang.StringBuilder java.lang.StringBuilder.insert(int,java.lang.String)
    virtual java::lang::StringBuilder* insert(int arg1, JavaCharArray* arg2); // public java.lang.StringBuilder java.lang.StringBuilder.insert(int,char[])
    virtual java::lang::StringBuilder* insert(int arg1, java::lang::CharSequence* arg2); // public java.lang.StringBuilder java.lang.StringBuilder.insert(int,java.lang.CharSequence)
    virtual java::lang::StringBuilder* insert(int arg1, java::lang::CharSequence* arg2, int arg3, int arg4); // public java.lang.StringBuilder java.lang.StringBuilder.insert(int,java.lang.CharSequence,int,int)
    virtual java::lang::StringBuilder* insert(int arg1, bool arg2); // public java.lang.StringBuilder java.lang.StringBuilder.insert(int,boolean)
    virtual java::lang::StringBuilder* insert(int arg1, char arg2); // public java.lang.StringBuilder java.lang.StringBuilder.insert(int,char)
    virtual java::lang::StringBuilder* insert(int arg1, int arg2); // public java.lang.StringBuilder java.lang.StringBuilder.insert(int,int)
    virtual java::lang::StringBuilder* insert(int arg1, long arg2); // public java.lang.StringBuilder java.lang.StringBuilder.insert(int,long)
    virtual java::lang::StringBuilder* insert(int arg1, float arg2); // public java.lang.StringBuilder java.lang.StringBuilder.insert(int,float)
    virtual java::lang::StringBuilder* insert(int arg1, double arg2); // public java.lang.StringBuilder java.lang.StringBuilder.insert(int,double)
    virtual java::lang::StringBuilder* reverse(); // public java.lang.StringBuilder java.lang.StringBuilder.reverse()

};
}
}
#endif
