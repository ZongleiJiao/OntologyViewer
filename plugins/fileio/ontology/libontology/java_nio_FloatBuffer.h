#ifndef java_nio_FloatBuffer_H
#define java_nio_FloatBuffer_H
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
class FloatBuffer : public java::nio::Buffer {
  public:
    FloatBuffer(JavaMarker* dummy);
    FloatBuffer(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual float get(); // public abstract float java.nio.FloatBuffer.get()
    virtual float get(int arg1); // public abstract float java.nio.FloatBuffer.get(int)
    virtual java::nio::FloatBuffer* get(JavaFloatArray* arg1, int arg2, int arg3); // public java.nio.FloatBuffer java.nio.FloatBuffer.get(float[],int,int)
    virtual java::nio::FloatBuffer* get(JavaFloatArray* arg1); // public java.nio.FloatBuffer java.nio.FloatBuffer.get(float[])
    virtual java::nio::FloatBuffer* put(float arg1); // public abstract java.nio.FloatBuffer java.nio.FloatBuffer.put(float)
    virtual java::nio::FloatBuffer* put(int arg1, float arg2); // public abstract java.nio.FloatBuffer java.nio.FloatBuffer.put(int,float)
    virtual java::nio::FloatBuffer* put(java::nio::FloatBuffer* arg1); // public java.nio.FloatBuffer java.nio.FloatBuffer.put(java.nio.FloatBuffer)
    virtual java::nio::FloatBuffer* put(JavaFloatArray* arg1, int arg2, int arg3); // public java.nio.FloatBuffer java.nio.FloatBuffer.put(float[],int,int)
    virtual java::nio::FloatBuffer* put(JavaFloatArray* arg1); // public final java.nio.FloatBuffer java.nio.FloatBuffer.put(float[])
    virtual bool equals(java::lang::Object* arg1); // public boolean java.nio.FloatBuffer.equals(java.lang.Object)
    virtual const char* toString(); // public java.lang.String java.nio.FloatBuffer.toString()
    virtual int hashCode(); // public int java.nio.FloatBuffer.hashCode()
    virtual int compareTo(java::nio::FloatBuffer* arg1); // public int java.nio.FloatBuffer.compareTo(java.nio.FloatBuffer)
    virtual int compareTo(java::lang::Object* arg1); // public int java.nio.FloatBuffer.compareTo(java.lang.Object)
    virtual bool isDirect(); // public abstract boolean java.nio.FloatBuffer.isDirect()
    virtual bool hasArray(); // public final boolean java.nio.FloatBuffer.hasArray()
    virtual JavaFloatArray* array(); // public final float[] java.nio.FloatBuffer.array()
    virtual int arrayOffset(); // public final int java.nio.FloatBuffer.arrayOffset()
    virtual java::nio::FloatBuffer* wrap(JavaFloatArray* arg1, int arg2, int arg3); // public static java.nio.FloatBuffer java.nio.FloatBuffer.wrap(float[],int,int)
    virtual java::nio::FloatBuffer* wrap(JavaFloatArray* arg1); // public static java.nio.FloatBuffer java.nio.FloatBuffer.wrap(float[])
    virtual java::nio::FloatBuffer* allocate(int arg1); // public static java.nio.FloatBuffer java.nio.FloatBuffer.allocate(int)
    virtual java::nio::FloatBuffer* slice(); // public abstract java.nio.FloatBuffer java.nio.FloatBuffer.slice()
    virtual java::nio::FloatBuffer* duplicate(); // public abstract java.nio.FloatBuffer java.nio.FloatBuffer.duplicate()
    virtual java::nio::FloatBuffer* asReadOnlyBuffer(); // public abstract java.nio.FloatBuffer java.nio.FloatBuffer.asReadOnlyBuffer()
    virtual java::nio::FloatBuffer* compact(); // public abstract java.nio.FloatBuffer java.nio.FloatBuffer.compact()
    virtual java::nio::ByteOrder* order(); // public abstract java.nio.ByteOrder java.nio.FloatBuffer.order()

};
}
}
#endif
