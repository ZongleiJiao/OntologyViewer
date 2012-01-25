#ifndef java_nio_DoubleBuffer_H
#define java_nio_DoubleBuffer_H
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
class DoubleBuffer : public java::nio::Buffer {
  public:
    DoubleBuffer(JavaMarker* dummy);
    DoubleBuffer(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual double get(); // public abstract double java.nio.DoubleBuffer.get()
    virtual double get(int arg1); // public abstract double java.nio.DoubleBuffer.get(int)
    virtual java::nio::DoubleBuffer* get(JavaDoubleArray* arg1, int arg2, int arg3); // public java.nio.DoubleBuffer java.nio.DoubleBuffer.get(double[],int,int)
    virtual java::nio::DoubleBuffer* get(JavaDoubleArray* arg1); // public java.nio.DoubleBuffer java.nio.DoubleBuffer.get(double[])
    virtual java::nio::DoubleBuffer* put(double arg1); // public abstract java.nio.DoubleBuffer java.nio.DoubleBuffer.put(double)
    virtual java::nio::DoubleBuffer* put(int arg1, double arg2); // public abstract java.nio.DoubleBuffer java.nio.DoubleBuffer.put(int,double)
    virtual java::nio::DoubleBuffer* put(java::nio::DoubleBuffer* arg1); // public java.nio.DoubleBuffer java.nio.DoubleBuffer.put(java.nio.DoubleBuffer)
    virtual java::nio::DoubleBuffer* put(JavaDoubleArray* arg1, int arg2, int arg3); // public java.nio.DoubleBuffer java.nio.DoubleBuffer.put(double[],int,int)
    virtual java::nio::DoubleBuffer* put(JavaDoubleArray* arg1); // public final java.nio.DoubleBuffer java.nio.DoubleBuffer.put(double[])
    virtual bool equals(java::lang::Object* arg1); // public boolean java.nio.DoubleBuffer.equals(java.lang.Object)
    virtual const char* toString(); // public java.lang.String java.nio.DoubleBuffer.toString()
    virtual int hashCode(); // public int java.nio.DoubleBuffer.hashCode()
    virtual int compareTo(java::nio::DoubleBuffer* arg1); // public int java.nio.DoubleBuffer.compareTo(java.nio.DoubleBuffer)
    virtual int compareTo(java::lang::Object* arg1); // public int java.nio.DoubleBuffer.compareTo(java.lang.Object)
    virtual bool isDirect(); // public abstract boolean java.nio.DoubleBuffer.isDirect()
    virtual bool hasArray(); // public final boolean java.nio.DoubleBuffer.hasArray()
    virtual JavaDoubleArray* array(); // public final double[] java.nio.DoubleBuffer.array()
    virtual int arrayOffset(); // public final int java.nio.DoubleBuffer.arrayOffset()
    virtual java::nio::DoubleBuffer* wrap(JavaDoubleArray* arg1, int arg2, int arg3); // public static java.nio.DoubleBuffer java.nio.DoubleBuffer.wrap(double[],int,int)
    virtual java::nio::DoubleBuffer* wrap(JavaDoubleArray* arg1); // public static java.nio.DoubleBuffer java.nio.DoubleBuffer.wrap(double[])
    virtual java::nio::DoubleBuffer* allocate(int arg1); // public static java.nio.DoubleBuffer java.nio.DoubleBuffer.allocate(int)
    virtual java::nio::DoubleBuffer* slice(); // public abstract java.nio.DoubleBuffer java.nio.DoubleBuffer.slice()
    virtual java::nio::DoubleBuffer* duplicate(); // public abstract java.nio.DoubleBuffer java.nio.DoubleBuffer.duplicate()
    virtual java::nio::DoubleBuffer* asReadOnlyBuffer(); // public abstract java.nio.DoubleBuffer java.nio.DoubleBuffer.asReadOnlyBuffer()
    virtual java::nio::DoubleBuffer* compact(); // public abstract java.nio.DoubleBuffer java.nio.DoubleBuffer.compact()
    virtual java::nio::ByteOrder* order(); // public abstract java.nio.ByteOrder java.nio.DoubleBuffer.order()

};
}
}
#endif
