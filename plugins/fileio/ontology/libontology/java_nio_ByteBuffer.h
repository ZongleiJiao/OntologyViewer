#ifndef java_nio_ByteBuffer_H
#define java_nio_ByteBuffer_H
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

namespace java {
namespace nio {
class CharBuffer;
}
}

namespace java {
namespace nio {
class ShortBuffer;
}
}

namespace java {
namespace nio {
class IntBuffer;
}
}

namespace java {
namespace nio {
class LongBuffer;
}
}

namespace java {
namespace nio {
class FloatBuffer;
}
}

namespace java {
namespace nio {
class DoubleBuffer;
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
class ByteBuffer : public java::nio::Buffer {
  public:
    ByteBuffer(JavaMarker* dummy);
    ByteBuffer(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual char get(); // public abstract byte java.nio.ByteBuffer.get()
    virtual char get(int arg1); // public abstract byte java.nio.ByteBuffer.get(int)
    virtual java::nio::ByteBuffer* get(JavaByteArray* arg1, int arg2, int arg3); // public java.nio.ByteBuffer java.nio.ByteBuffer.get(byte[],int,int)
    virtual java::nio::ByteBuffer* get(JavaByteArray* arg1); // public java.nio.ByteBuffer java.nio.ByteBuffer.get(byte[])
    virtual java::nio::ByteBuffer* put(char arg1); // public abstract java.nio.ByteBuffer java.nio.ByteBuffer.put(byte)
    virtual java::nio::ByteBuffer* put(int arg1, char arg2); // public abstract java.nio.ByteBuffer java.nio.ByteBuffer.put(int,byte)
    virtual java::nio::ByteBuffer* put(java::nio::ByteBuffer* arg1); // public java.nio.ByteBuffer java.nio.ByteBuffer.put(java.nio.ByteBuffer)
    virtual java::nio::ByteBuffer* put(JavaByteArray* arg1, int arg2, int arg3); // public java.nio.ByteBuffer java.nio.ByteBuffer.put(byte[],int,int)
    virtual java::nio::ByteBuffer* put(JavaByteArray* arg1); // public final java.nio.ByteBuffer java.nio.ByteBuffer.put(byte[])
    virtual bool equals(java::lang::Object* arg1); // public boolean java.nio.ByteBuffer.equals(java.lang.Object)
    virtual const char* toString(); // public java.lang.String java.nio.ByteBuffer.toString()
    virtual int hashCode(); // public int java.nio.ByteBuffer.hashCode()
    virtual int compareTo(java::nio::ByteBuffer* arg1); // public int java.nio.ByteBuffer.compareTo(java.nio.ByteBuffer)
    virtual int compareTo(java::lang::Object* arg1); // public int java.nio.ByteBuffer.compareTo(java.lang.Object)
    virtual short getShort(); // public abstract short java.nio.ByteBuffer.getShort()
    virtual short getShort(int arg1); // public abstract short java.nio.ByteBuffer.getShort(int)
    virtual java::nio::ByteBuffer* putShort(short arg1); // public abstract java.nio.ByteBuffer java.nio.ByteBuffer.putShort(short)
    virtual java::nio::ByteBuffer* putShort(int arg1, short arg2); // public abstract java.nio.ByteBuffer java.nio.ByteBuffer.putShort(int,short)
    virtual char getChar(); // public abstract char java.nio.ByteBuffer.getChar()
    virtual char getChar(int arg1); // public abstract char java.nio.ByteBuffer.getChar(int)
    virtual java::nio::ByteBuffer* putChar(char arg1); // public abstract java.nio.ByteBuffer java.nio.ByteBuffer.putChar(char)
    virtual java::nio::ByteBuffer* putChar(int arg1, char arg2); // public abstract java.nio.ByteBuffer java.nio.ByteBuffer.putChar(int,char)
    virtual int getInt(); // public abstract int java.nio.ByteBuffer.getInt()
    virtual int getInt(int arg1); // public abstract int java.nio.ByteBuffer.getInt(int)
    virtual java::nio::ByteBuffer* putInt(int arg1); // public abstract java.nio.ByteBuffer java.nio.ByteBuffer.putInt(int)
    virtual java::nio::ByteBuffer* putInt(int arg1, int arg2); // public abstract java.nio.ByteBuffer java.nio.ByteBuffer.putInt(int,int)
    virtual long getLong(); // public abstract long java.nio.ByteBuffer.getLong()
    virtual long getLong(int arg1); // public abstract long java.nio.ByteBuffer.getLong(int)
    virtual java::nio::ByteBuffer* putLong(long arg1); // public abstract java.nio.ByteBuffer java.nio.ByteBuffer.putLong(long)
    virtual java::nio::ByteBuffer* putLong(int arg1, long arg2); // public abstract java.nio.ByteBuffer java.nio.ByteBuffer.putLong(int,long)
    virtual float getFloat(); // public abstract float java.nio.ByteBuffer.getFloat()
    virtual float getFloat(int arg1); // public abstract float java.nio.ByteBuffer.getFloat(int)
    virtual java::nio::ByteBuffer* putFloat(float arg1); // public abstract java.nio.ByteBuffer java.nio.ByteBuffer.putFloat(float)
    virtual java::nio::ByteBuffer* putFloat(int arg1, float arg2); // public abstract java.nio.ByteBuffer java.nio.ByteBuffer.putFloat(int,float)
    virtual double getDouble(); // public abstract double java.nio.ByteBuffer.getDouble()
    virtual double getDouble(int arg1); // public abstract double java.nio.ByteBuffer.getDouble(int)
    virtual java::nio::ByteBuffer* putDouble(double arg1); // public abstract java.nio.ByteBuffer java.nio.ByteBuffer.putDouble(double)
    virtual java::nio::ByteBuffer* putDouble(int arg1, double arg2); // public abstract java.nio.ByteBuffer java.nio.ByteBuffer.putDouble(int,double)
    virtual bool isDirect(); // public abstract boolean java.nio.ByteBuffer.isDirect()
    virtual bool hasArray(); // public final boolean java.nio.ByteBuffer.hasArray()
    virtual JavaByteArray* array(); // public final byte[] java.nio.ByteBuffer.array()
    virtual int arrayOffset(); // public final int java.nio.ByteBuffer.arrayOffset()
    virtual java::nio::ByteBuffer* wrap(JavaByteArray* arg1, int arg2, int arg3); // public static java.nio.ByteBuffer java.nio.ByteBuffer.wrap(byte[],int,int)
    virtual java::nio::ByteBuffer* wrap(JavaByteArray* arg1); // public static java.nio.ByteBuffer java.nio.ByteBuffer.wrap(byte[])
    virtual java::nio::ByteBuffer* allocate(int arg1); // public static java.nio.ByteBuffer java.nio.ByteBuffer.allocate(int)
    virtual java::nio::ByteBuffer* allocateDirect(int arg1); // public static java.nio.ByteBuffer java.nio.ByteBuffer.allocateDirect(int)
    virtual java::nio::ByteBuffer* slice(); // public abstract java.nio.ByteBuffer java.nio.ByteBuffer.slice()
    virtual java::nio::ByteBuffer* duplicate(); // public abstract java.nio.ByteBuffer java.nio.ByteBuffer.duplicate()
    virtual java::nio::ByteBuffer* asReadOnlyBuffer(); // public abstract java.nio.ByteBuffer java.nio.ByteBuffer.asReadOnlyBuffer()
    virtual java::nio::ByteBuffer* compact(); // public abstract java.nio.ByteBuffer java.nio.ByteBuffer.compact()
    virtual java::nio::ByteOrder* order(); // public final java.nio.ByteOrder java.nio.ByteBuffer.order()
    virtual java::nio::ByteBuffer* order(java::nio::ByteOrder* arg1); // public final java.nio.ByteBuffer java.nio.ByteBuffer.order(java.nio.ByteOrder)
    virtual java::nio::CharBuffer* asCharBuffer(); // public abstract java.nio.CharBuffer java.nio.ByteBuffer.asCharBuffer()
    virtual java::nio::ShortBuffer* asShortBuffer(); // public abstract java.nio.ShortBuffer java.nio.ByteBuffer.asShortBuffer()
    virtual java::nio::IntBuffer* asIntBuffer(); // public abstract java.nio.IntBuffer java.nio.ByteBuffer.asIntBuffer()
    virtual java::nio::LongBuffer* asLongBuffer(); // public abstract java.nio.LongBuffer java.nio.ByteBuffer.asLongBuffer()
    virtual java::nio::FloatBuffer* asFloatBuffer(); // public abstract java.nio.FloatBuffer java.nio.ByteBuffer.asFloatBuffer()
    virtual java::nio::DoubleBuffer* asDoubleBuffer(); // public abstract java.nio.DoubleBuffer java.nio.ByteBuffer.asDoubleBuffer()

};
}
}
#endif
