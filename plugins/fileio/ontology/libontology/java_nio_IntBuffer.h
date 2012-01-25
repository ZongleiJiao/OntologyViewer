#ifndef java_nio_IntBuffer_H
#define java_nio_IntBuffer_H
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
class IntBuffer : public java::nio::Buffer {
  public:
    IntBuffer(JavaMarker* dummy);
    IntBuffer(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual int get(); // public abstract int java.nio.IntBuffer.get()
    virtual int get(int arg1); // public abstract int java.nio.IntBuffer.get(int)
    virtual java::nio::IntBuffer* get(JavaIntArray* arg1, int arg2, int arg3); // public java.nio.IntBuffer java.nio.IntBuffer.get(int[],int,int)
    virtual java::nio::IntBuffer* get(JavaIntArray* arg1); // public java.nio.IntBuffer java.nio.IntBuffer.get(int[])
    virtual java::nio::IntBuffer* put(int arg1); // public abstract java.nio.IntBuffer java.nio.IntBuffer.put(int)
    virtual java::nio::IntBuffer* put(int arg1, int arg2); // public abstract java.nio.IntBuffer java.nio.IntBuffer.put(int,int)
    virtual java::nio::IntBuffer* put(java::nio::IntBuffer* arg1); // public java.nio.IntBuffer java.nio.IntBuffer.put(java.nio.IntBuffer)
    virtual java::nio::IntBuffer* put(JavaIntArray* arg1, int arg2, int arg3); // public java.nio.IntBuffer java.nio.IntBuffer.put(int[],int,int)
    virtual java::nio::IntBuffer* put(JavaIntArray* arg1); // public final java.nio.IntBuffer java.nio.IntBuffer.put(int[])
    virtual bool equals(java::lang::Object* arg1); // public boolean java.nio.IntBuffer.equals(java.lang.Object)
    virtual const char* toString(); // public java.lang.String java.nio.IntBuffer.toString()
    virtual int hashCode(); // public int java.nio.IntBuffer.hashCode()
    virtual int compareTo(java::nio::IntBuffer* arg1); // public int java.nio.IntBuffer.compareTo(java.nio.IntBuffer)
    virtual int compareTo(java::lang::Object* arg1); // public int java.nio.IntBuffer.compareTo(java.lang.Object)
    virtual bool isDirect(); // public abstract boolean java.nio.IntBuffer.isDirect()
    virtual bool hasArray(); // public final boolean java.nio.IntBuffer.hasArray()
    virtual JavaIntArray* array(); // public final int[] java.nio.IntBuffer.array()
    virtual int arrayOffset(); // public final int java.nio.IntBuffer.arrayOffset()
    virtual java::nio::IntBuffer* wrap(JavaIntArray* arg1, int arg2, int arg3); // public static java.nio.IntBuffer java.nio.IntBuffer.wrap(int[],int,int)
    virtual java::nio::IntBuffer* wrap(JavaIntArray* arg1); // public static java.nio.IntBuffer java.nio.IntBuffer.wrap(int[])
    virtual java::nio::IntBuffer* allocate(int arg1); // public static java.nio.IntBuffer java.nio.IntBuffer.allocate(int)
    virtual java::nio::IntBuffer* slice(); // public abstract java.nio.IntBuffer java.nio.IntBuffer.slice()
    virtual java::nio::IntBuffer* duplicate(); // public abstract java.nio.IntBuffer java.nio.IntBuffer.duplicate()
    virtual java::nio::IntBuffer* asReadOnlyBuffer(); // public abstract java.nio.IntBuffer java.nio.IntBuffer.asReadOnlyBuffer()
    virtual java::nio::IntBuffer* compact(); // public abstract java.nio.IntBuffer java.nio.IntBuffer.compact()
    virtual java::nio::ByteOrder* order(); // public abstract java.nio.ByteOrder java.nio.IntBuffer.order()

};
}
}
#endif
