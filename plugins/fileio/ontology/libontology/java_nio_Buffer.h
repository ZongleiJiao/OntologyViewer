#ifndef java_nio_Buffer_H
#define java_nio_Buffer_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>
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
class Buffer : public java::lang::Object {
  public:
    Buffer(JavaMarker* dummy);
    Buffer(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual int limit(); // public final int java.nio.Buffer.limit()
    virtual java::nio::Buffer* limit(int arg1); // public final java.nio.Buffer java.nio.Buffer.limit(int)
    virtual java::nio::Buffer* clear(); // public final java.nio.Buffer java.nio.Buffer.clear()
    virtual int remaining(); // public final int java.nio.Buffer.remaining()
    virtual bool isDirect(); // public abstract boolean java.nio.Buffer.isDirect()
    virtual bool hasArray(); // public abstract boolean java.nio.Buffer.hasArray()
    virtual java::lang::Object* array(); // public abstract java.lang.Object java.nio.Buffer.array()
    virtual int position(); // public final int java.nio.Buffer.position()
    virtual java::nio::Buffer* position(int arg1); // public final java.nio.Buffer java.nio.Buffer.position(int)
    virtual int arrayOffset(); // public abstract int java.nio.Buffer.arrayOffset()
    virtual int capacity(); // public final int java.nio.Buffer.capacity()
    virtual java::nio::Buffer* mark(); // public final java.nio.Buffer java.nio.Buffer.mark()
    virtual java::nio::Buffer* reset(); // public final java.nio.Buffer java.nio.Buffer.reset()
    virtual java::nio::Buffer* flip(); // public final java.nio.Buffer java.nio.Buffer.flip()
    virtual java::nio::Buffer* rewind(); // public final java.nio.Buffer java.nio.Buffer.rewind()
    virtual bool hasRemaining(); // public final boolean java.nio.Buffer.hasRemaining()
    virtual bool isReadOnly(); // public abstract boolean java.nio.Buffer.isReadOnly()

};
}
}
#endif
