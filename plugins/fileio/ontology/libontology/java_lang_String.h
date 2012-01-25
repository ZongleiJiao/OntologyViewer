#ifndef java_lang_String_H
#define java_lang_String_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace io {
class Serializable;
}
}

namespace java {
namespace lang {
class Comparable;
}
}

namespace java {
namespace lang {
class CharSequence;
}
}

namespace java {
namespace nio {
namespace charset {
class Charset;
}
}
}

namespace java {
namespace lang {
class StringBuffer;
}
}

namespace java {
namespace lang {
class StringBuilder;
}
}

namespace java {
namespace util {
class Locale;
}
}

namespace java {
namespace util {
class Comparator;
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
class String : public java::lang::Object {
  public:
    String(JavaMarker* dummy);
    String(jobject obj);
    String(); // public java.lang.String()
    String(const char* arg1); // public java.lang.String(java.lang.String)
    String(JavaCharArray* arg1); // public java.lang.String(char[])
    String(JavaCharArray* arg1, int arg2, int arg3); // public java.lang.String(char[],int,int)
    String(JavaIntArray* arg1, int arg2, int arg3); // public java.lang.String(int[],int,int)
    String(JavaByteArray* arg1, int arg2, int arg3, int arg4); // public java.lang.String(byte[],int,int,int)
    String(JavaByteArray* arg1, int arg2); // public java.lang.String(byte[],int)
    String(JavaByteArray* arg1, int arg2, int arg3, const char* arg4); // public java.lang.String(byte[],int,int,java.lang.String) throws java.io.UnsupportedEncodingException
    String(JavaByteArray* arg1, int arg2, int arg3, java::nio::charset::Charset* arg4); // public java.lang.String(byte[],int,int,java.nio.charset.Charset)
    String(JavaByteArray* arg1, const char* arg2); // public java.lang.String(byte[],java.lang.String) throws java.io.UnsupportedEncodingException
    String(JavaByteArray* arg1, java::nio::charset::Charset* arg2); // public java.lang.String(byte[],java.nio.charset.Charset)
    String(JavaByteArray* arg1, int arg2, int arg3); // public java.lang.String(byte[],int,int)
    String(JavaByteArray* arg1); // public java.lang.String(byte[])
    String(java::lang::StringBuffer* arg1); // public java.lang.String(java.lang.StringBuffer)
    String(java::lang::StringBuilder* arg1); // public java.lang.String(java.lang.StringBuilder)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool equals(java::lang::Object* arg1); // public boolean java.lang.String.equals(java.lang.Object)
    virtual const char* toString(); // public java.lang.String java.lang.String.toString()
    virtual int hashCode(); // public int java.lang.String.hashCode()
    virtual int compareTo(const char* arg1); // public int java.lang.String.compareTo(java.lang.String)
    virtual int compareTo(java::lang::Object* arg1); // public int java.lang.String.compareTo(java.lang.Object)
    virtual int indexOf(int arg1); // public int java.lang.String.indexOf(int)
    virtual int indexOf(int arg1, int arg2); // public int java.lang.String.indexOf(int,int)
    virtual int indexOf(const char* arg1); // public int java.lang.String.indexOf(java.lang.String)
    virtual int indexOf(const char* arg1, int arg2); // public int java.lang.String.indexOf(java.lang.String,int)
    virtual const char* valueOf(java::lang::Object* arg1); // public static java.lang.String java.lang.String.valueOf(java.lang.Object)
    virtual const char* valueOf(JavaCharArray* arg1); // public static java.lang.String java.lang.String.valueOf(char[])
    virtual const char* valueOf(JavaCharArray* arg1, int arg2, int arg3); // public static java.lang.String java.lang.String.valueOf(char[],int,int)
    virtual const char* valueOf(bool arg1); // public static java.lang.String java.lang.String.valueOf(boolean)
    virtual const char* valueOf(char arg1); // public static java.lang.String java.lang.String.valueOf(char)
    virtual const char* valueOf(int arg1); // public static java.lang.String java.lang.String.valueOf(int)
    virtual const char* valueOf(long arg1); // public static java.lang.String java.lang.String.valueOf(long)
    virtual const char* valueOf(float arg1); // public static java.lang.String java.lang.String.valueOf(float)
    virtual const char* valueOf(double arg1); // public static java.lang.String java.lang.String.valueOf(double)
    virtual int length(); // public int java.lang.String.length()
    virtual bool isEmpty(); // public boolean java.lang.String.isEmpty()
    virtual char charAt(int arg1); // public char java.lang.String.charAt(int)
    virtual int codePointAt(int arg1); // public int java.lang.String.codePointAt(int)
    virtual int codePointBefore(int arg1); // public int java.lang.String.codePointBefore(int)
    virtual int codePointCount(int arg1, int arg2); // public int java.lang.String.codePointCount(int,int)
    virtual int offsetByCodePoints(int arg1, int arg2); // public int java.lang.String.offsetByCodePoints(int,int)
    virtual void getChars(int arg1, int arg2, JavaCharArray* arg3, int arg4); // public void java.lang.String.getChars(int,int,char[],int)
    virtual void getBytes(int arg1, int arg2, JavaByteArray* arg3, int arg4); // public void java.lang.String.getBytes(int,int,byte[],int)
    virtual JavaByteArray* getBytes(const char* arg1); // public byte[] java.lang.String.getBytes(java.lang.String) throws java.io.UnsupportedEncodingException
    virtual JavaByteArray* getBytes(java::nio::charset::Charset* arg1); // public byte[] java.lang.String.getBytes(java.nio.charset.Charset)
    virtual JavaByteArray* getBytes(); // public byte[] java.lang.String.getBytes()
    virtual bool contentEquals(java::lang::StringBuffer* arg1); // public boolean java.lang.String.contentEquals(java.lang.StringBuffer)
    virtual bool contentEquals(java::lang::CharSequence* arg1); // public boolean java.lang.String.contentEquals(java.lang.CharSequence)
    virtual bool equalsIgnoreCase(const char* arg1); // public boolean java.lang.String.equalsIgnoreCase(java.lang.String)
    virtual int compareToIgnoreCase(const char* arg1); // public int java.lang.String.compareToIgnoreCase(java.lang.String)
    virtual bool regionMatches(int arg1, const char* arg2, int arg3, int arg4); // public boolean java.lang.String.regionMatches(int,java.lang.String,int,int)
    virtual bool regionMatches(bool arg1, int arg2, const char* arg3, int arg4, int arg5); // public boolean java.lang.String.regionMatches(boolean,int,java.lang.String,int,int)
    virtual bool startsWith(const char* arg1, int arg2); // public boolean java.lang.String.startsWith(java.lang.String,int)
    virtual bool startsWith(const char* arg1); // public boolean java.lang.String.startsWith(java.lang.String)
    virtual bool endsWith(const char* arg1); // public boolean java.lang.String.endsWith(java.lang.String)
    virtual int lastIndexOf(int arg1); // public int java.lang.String.lastIndexOf(int)
    virtual int lastIndexOf(int arg1, int arg2); // public int java.lang.String.lastIndexOf(int,int)
    virtual int lastIndexOf(const char* arg1); // public int java.lang.String.lastIndexOf(java.lang.String)
    virtual int lastIndexOf(const char* arg1, int arg2); // public int java.lang.String.lastIndexOf(java.lang.String,int)
    virtual const char* substring(int arg1); // public java.lang.String java.lang.String.substring(int)
    virtual const char* substring(int arg1, int arg2); // public java.lang.String java.lang.String.substring(int,int)
    virtual java::lang::CharSequence* subSequence(int arg1, int arg2); // public java.lang.CharSequence java.lang.String.subSequence(int,int)
    virtual const char* concat(const char* arg1); // public java.lang.String java.lang.String.concat(java.lang.String)
    virtual const char* replace(char arg1, char arg2); // public java.lang.String java.lang.String.replace(char,char)
    virtual const char* replace(java::lang::CharSequence* arg1, java::lang::CharSequence* arg2); // public java.lang.String java.lang.String.replace(java.lang.CharSequence,java.lang.CharSequence)
    virtual bool matches(const char* arg1); // public boolean java.lang.String.matches(java.lang.String)
    virtual bool contains(java::lang::CharSequence* arg1); // public boolean java.lang.String.contains(java.lang.CharSequence)
    virtual const char* replaceFirst(const char* arg1, const char* arg2); // public java.lang.String java.lang.String.replaceFirst(java.lang.String,java.lang.String)
    virtual const char* replaceAll(const char* arg1, const char* arg2); // public java.lang.String java.lang.String.replaceAll(java.lang.String,java.lang.String)
    virtual JavaObjectArray* split(const char* arg1, int arg2); // public java.lang.String[] java.lang.String.split(java.lang.String,int)
    virtual JavaObjectArray* split(const char* arg1); // public java.lang.String[] java.lang.String.split(java.lang.String)
    virtual const char* toLowerCase(java::util::Locale* arg1); // public java.lang.String java.lang.String.toLowerCase(java.util.Locale)
    virtual const char* toLowerCase(); // public java.lang.String java.lang.String.toLowerCase()
    virtual const char* toUpperCase(java::util::Locale* arg1); // public java.lang.String java.lang.String.toUpperCase(java.util.Locale)
    virtual const char* toUpperCase(); // public java.lang.String java.lang.String.toUpperCase()
    virtual const char* trim(); // public java.lang.String java.lang.String.trim()
    virtual JavaCharArray* toCharArray(); // public char[] java.lang.String.toCharArray()
    virtual const char* format(const char* arg1, JavaObjectArray* arg2); // public static java.lang.String java.lang.String.format(java.lang.String,java.lang.Object[])
    virtual const char* format(java::util::Locale* arg1, const char* arg2, JavaObjectArray* arg3); // public static java.lang.String java.lang.String.format(java.util.Locale,java.lang.String,java.lang.Object[])
    virtual const char* copyValueOf(JavaCharArray* arg1, int arg2, int arg3); // public static java.lang.String java.lang.String.copyValueOf(char[],int,int)
    virtual const char* copyValueOf(JavaCharArray* arg1); // public static java.lang.String java.lang.String.copyValueOf(char[])
    virtual const char* intern(); // public native java.lang.String java.lang.String.intern()

    java::util::Comparator* CASE_INSENSITIVE_ORDER; // public static final java.util.Comparator java.lang.String.CASE_INSENSITIVE_ORDER
};
}
}
#endif
