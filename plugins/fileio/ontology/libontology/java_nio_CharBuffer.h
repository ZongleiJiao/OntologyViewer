#ifndef java_nio_CharBuffer_H
#define java_nio_CharBuffer_H
#include <jni.h>
#include <java_marker.h>
#include <java_nio_Buffer.h>

namespace java {
namespace lang {
class Comparable;
}
}

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
class Readable;
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
namespace nio {
class ByteOrder;
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
namespace nio {
class CharBuffer : public java::nio::Buffer {
  public:
    CharBuffer(JavaMarker* dummy);
    CharBuffer(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual char get(); // public abstract char java.nio.CharBuffer.get()
    virtual char get(int arg1); // public abstract char java.nio.CharBuffer.get(int)
    virtual java::nio::CharBuffer* get(JavaCharArray* arg1, int arg2, int arg3); // public java.nio.CharBuffer java.nio.CharBuffer.get(char[],int,int)
    virtual java::nio::CharBuffer* get(JavaCharArray* arg1); // public java.nio.CharBuffer java.nio.CharBuffer.get(char[])
    virtual java::nio::CharBuffer* put(char arg1); // public abstract java.nio.CharBuffer java.nio.CharBuffer.put(char)
    virtual java::nio::CharBuffer* put(int arg1, char arg2); // public abstract java.nio.CharBuffer java.nio.CharBuffer.put(int,char)
    virtual java::nio::CharBuffer* put(java::nio::CharBuffer* arg1); // public java.nio.CharBuffer java.nio.CharBuffer.put(java.nio.CharBuffer)
    virtual java::nio::CharBuffer* put(JavaCharArray* arg1, int arg2, int arg3); // public java.nio.CharBuffer java.nio.CharBuffer.put(char[],int,int)
    virtual java::nio::CharBuffer* put(JavaCharArray* arg1); // public final java.nio.CharBuffer java.nio.CharBuffer.put(char[])
    virtual java::nio::CharBuffer* put(const char* arg1, int arg2, int arg3); // public java.nio.CharBuffer java.nio.CharBuffer.put(java.lang.String,int,int)
    virtual java::nio::CharBuffer* put(const char* arg1); // public final java.nio.CharBuffer java.nio.CharBuffer.put(java.lang.String)
    virtual bool equals(java::lang::Object* arg1); // public boolean java.nio.CharBuffer.equals(java.lang.Object)
    virtual const char* toString(); // public java.lang.String java.nio.CharBuffer.toString()
    virtual java::nio::CharBuffer* append(java::lang::CharSequence* arg1); // public java.nio.CharBuffer java.nio.CharBuffer.append(java.lang.CharSequence)
    virtual java::nio::CharBuffer* append(java::lang::CharSequence* arg1, int arg2, int arg3); // public java.nio.CharBuffer java.nio.CharBuffer.append(java.lang.CharSequence,int,int)
    virtual java::nio::CharBuffer* append(char arg1); // public java.nio.CharBuffer java.nio.CharBuffer.append(char)
    virtual int hashCode(); // public int java.nio.CharBuffer.hashCode()
    virtual int compareTo(java::nio::CharBuffer* arg1); // public int java.nio.CharBuffer.compareTo(java.nio.CharBuffer)
    virtual int compareTo(java::lang::Object* arg1); // public int java.nio.CharBuffer.compareTo(java.lang.Object)
    virtual int length(); // public final int java.nio.CharBuffer.length()
    virtual char charAt(int arg1); // public final char java.nio.CharBuffer.charAt(int)
    virtual java::lang::CharSequence* subSequence(int arg1, int arg2); // public abstract java.lang.CharSequence java.nio.CharBuffer.subSequence(int,int)
    virtual bool isDirect(); // public abstract boolean java.nio.CharBuffer.isDirect()
    virtual bool hasArray(); // public final boolean java.nio.CharBuffer.hasArray()
    virtual JavaCharArray* array(); // public final char[] java.nio.CharBuffer.array()
    virtual int arrayOffset(); // public final int java.nio.CharBuffer.arrayOffset()
    virtual java::nio::CharBuffer* wrap(JavaCharArray* arg1, int arg2, int arg3); // public static java.nio.CharBuffer java.nio.CharBuffer.wrap(char[],int,int)
    virtual java::nio::CharBuffer* wrap(JavaCharArray* arg1); // public static java.nio.CharBuffer java.nio.CharBuffer.wrap(char[])
    virtual java::nio::CharBuffer* wrap(java::lang::CharSequence* arg1, int arg2, int arg3); // public static java.nio.CharBuffer java.nio.CharBuffer.wrap(java.lang.CharSequence,int,int)
    virtual java::nio::CharBuffer* wrap(java::lang::CharSequence* arg1); // public static java.nio.CharBuffer java.nio.CharBuffer.wrap(java.lang.CharSequence)
    virtual java::nio::CharBuffer* allocate(int arg1); // public static java.nio.CharBuffer java.nio.CharBuffer.allocate(int)
    virtual java::nio::CharBuffer* slice(); // public abstract java.nio.CharBuffer java.nio.CharBuffer.slice()
    virtual java::nio::CharBuffer* duplicate(); // public abstract java.nio.CharBuffer java.nio.CharBuffer.duplicate()
    virtual java::nio::CharBuffer* asReadOnlyBuffer(); // public abstract java.nio.CharBuffer java.nio.CharBuffer.asReadOnlyBuffer()
    virtual java::nio::CharBuffer* compact(); // public abstract java.nio.CharBuffer java.nio.CharBuffer.compact()
    virtual java::nio::ByteOrder* order(); // public abstract java.nio.ByteOrder java.nio.CharBuffer.order()
    virtual int read(java::nio::CharBuffer* arg1); // public int java.nio.CharBuffer.read(java.nio.CharBuffer) throws java.io.IOException

};
}
}
#endif
