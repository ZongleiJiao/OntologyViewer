#ifndef java_nio_ShortBuffer_H
#define java_nio_ShortBuffer_H
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
class Object;
}
}

namespace java {
namespace lang {
class String;
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
class ShortBuffer : public java::nio::Buffer {
  public:
    ShortBuffer(JavaMarker* dummy);
    ShortBuffer(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual short get(); // public abstract short java.nio.ShortBuffer.get()
    virtual short get(int arg1); // public abstract short java.nio.ShortBuffer.get(int)
    virtual java::nio::ShortBuffer* get(JavaShortArray* arg1, int arg2, int arg3); // public java.nio.ShortBuffer java.nio.ShortBuffer.get(short[],int,int)
    virtual java::nio::ShortBuffer* get(JavaShortArray* arg1); // public java.nio.ShortBuffer java.nio.ShortBuffer.get(short[])
    virtual java::nio::ShortBuffer* put(short arg1); // public abstract java.nio.ShortBuffer java.nio.ShortBuffer.put(short)
    virtual java::nio::ShortBuffer* put(int arg1, short arg2); // public abstract java.nio.ShortBuffer java.nio.ShortBuffer.put(int,short)
    virtual java::nio::ShortBuffer* put(java::nio::ShortBuffer* arg1); // public java.nio.ShortBuffer java.nio.ShortBuffer.put(java.nio.ShortBuffer)
    virtual java::nio::ShortBuffer* put(JavaShortArray* arg1, int arg2, int arg3); // public java.nio.ShortBuffer java.nio.ShortBuffer.put(short[],int,int)
    virtual java::nio::ShortBuffer* put(JavaShortArray* arg1); // public final java.nio.ShortBuffer java.nio.ShortBuffer.put(short[])
    virtual bool equals(java::lang::Object* arg1); // public boolean java.nio.ShortBuffer.equals(java.lang.Object)
    virtual const char* toString(); // public java.lang.String java.nio.ShortBuffer.toString()
    virtual int hashCode(); // public int java.nio.ShortBuffer.hashCode()
    virtual int compareTo(java::nio::ShortBuffer* arg1); // public int java.nio.ShortBuffer.compareTo(java.nio.ShortBuffer)
    virtual int compareTo(java::lang::Object* arg1); // public int java.nio.ShortBuffer.compareTo(java.lang.Object)
    virtual bool isDirect(); // public abstract boolean java.nio.ShortBuffer.isDirect()
    virtual bool hasArray(); // public final boolean java.nio.ShortBuffer.hasArray()
    virtual JavaShortArray* array(); // public final short[] java.nio.ShortBuffer.array()
    virtual int arrayOffset(); // public final int java.nio.ShortBuffer.arrayOffset()
    virtual java::nio::ShortBuffer* wrap(JavaShortArray* arg1, int arg2, int arg3); // public static java.nio.ShortBuffer java.nio.ShortBuffer.wrap(short[],int,int)
    virtual java::nio::ShortBuffer* wrap(JavaShortArray* arg1); // public static java.nio.ShortBuffer java.nio.ShortBuffer.wrap(short[])
    virtual java::nio::ShortBuffer* allocate(int arg1); // public static java.nio.ShortBuffer java.nio.ShortBuffer.allocate(int)
    virtual java::nio::ShortBuffer* slice(); // public abstract java.nio.ShortBuffer java.nio.ShortBuffer.slice()
    virtual java::nio::ShortBuffer* duplicate(); // public abstract java.nio.ShortBuffer java.nio.ShortBuffer.duplicate()
    virtual java::nio::ShortBuffer* asReadOnlyBuffer(); // public abstract java.nio.ShortBuffer java.nio.ShortBuffer.asReadOnlyBuffer()
    virtual java::nio::ShortBuffer* compact(); // public abstract java.nio.ShortBuffer java.nio.ShortBuffer.compact()
    virtual java::nio::ByteOrder* order(); // public abstract java.nio.ByteOrder java.nio.ShortBuffer.order()

};
}
}
#endif
