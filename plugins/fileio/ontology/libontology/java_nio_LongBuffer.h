#ifndef java_nio_LongBuffer_H
#define java_nio_LongBuffer_H
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
class LongBuffer : public java::nio::Buffer {
  public:
    LongBuffer(JavaMarker* dummy);
    LongBuffer(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual long get(); // public abstract long java.nio.LongBuffer.get()
    virtual long get(int arg1); // public abstract long java.nio.LongBuffer.get(int)
    virtual java::nio::LongBuffer* get(JavaLongArray* arg1, int arg2, int arg3); // public java.nio.LongBuffer java.nio.LongBuffer.get(long[],int,int)
    virtual java::nio::LongBuffer* get(JavaLongArray* arg1); // public java.nio.LongBuffer java.nio.LongBuffer.get(long[])
    virtual java::nio::LongBuffer* put(long arg1); // public abstract java.nio.LongBuffer java.nio.LongBuffer.put(long)
    virtual java::nio::LongBuffer* put(int arg1, long arg2); // public abstract java.nio.LongBuffer java.nio.LongBuffer.put(int,long)
    virtual java::nio::LongBuffer* put(java::nio::LongBuffer* arg1); // public java.nio.LongBuffer java.nio.LongBuffer.put(java.nio.LongBuffer)
    virtual java::nio::LongBuffer* put(JavaLongArray* arg1, int arg2, int arg3); // public java.nio.LongBuffer java.nio.LongBuffer.put(long[],int,int)
    virtual java::nio::LongBuffer* put(JavaLongArray* arg1); // public final java.nio.LongBuffer java.nio.LongBuffer.put(long[])
    virtual bool equals(java::lang::Object* arg1); // public boolean java.nio.LongBuffer.equals(java.lang.Object)
    virtual const char* toString(); // public java.lang.String java.nio.LongBuffer.toString()
    virtual int hashCode(); // public int java.nio.LongBuffer.hashCode()
    virtual int compareTo(java::nio::LongBuffer* arg1); // public int java.nio.LongBuffer.compareTo(java.nio.LongBuffer)
    virtual int compareTo(java::lang::Object* arg1); // public int java.nio.LongBuffer.compareTo(java.lang.Object)
    virtual bool isDirect(); // public abstract boolean java.nio.LongBuffer.isDirect()
    virtual bool hasArray(); // public final boolean java.nio.LongBuffer.hasArray()
    virtual JavaLongArray* array(); // public final long[] java.nio.LongBuffer.array()
    virtual int arrayOffset(); // public final int java.nio.LongBuffer.arrayOffset()
    virtual java::nio::LongBuffer* wrap(JavaLongArray* arg1, int arg2, int arg3); // public static java.nio.LongBuffer java.nio.LongBuffer.wrap(long[],int,int)
    virtual java::nio::LongBuffer* wrap(JavaLongArray* arg1); // public static java.nio.LongBuffer java.nio.LongBuffer.wrap(long[])
    virtual java::nio::LongBuffer* allocate(int arg1); // public static java.nio.LongBuffer java.nio.LongBuffer.allocate(int)
    virtual java::nio::LongBuffer* slice(); // public abstract java.nio.LongBuffer java.nio.LongBuffer.slice()
    virtual java::nio::LongBuffer* duplicate(); // public abstract java.nio.LongBuffer java.nio.LongBuffer.duplicate()
    virtual java::nio::LongBuffer* asReadOnlyBuffer(); // public abstract java.nio.LongBuffer java.nio.LongBuffer.asReadOnlyBuffer()
    virtual java::nio::LongBuffer* compact(); // public abstract java.nio.LongBuffer java.nio.LongBuffer.compact()
    virtual java::nio::ByteOrder* order(); // public abstract java.nio.ByteOrder java.nio.LongBuffer.order()

};
}
}
#endif
