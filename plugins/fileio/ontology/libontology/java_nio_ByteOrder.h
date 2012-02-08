#ifndef java_nio_ByteOrder_H
#define java_nio_ByteOrder_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace lang {
class String;
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
class ByteOrder : public java::lang::Object {
  public:
    ByteOrder(JavaMarker* dummy);
    ByteOrder(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual const char* toString(); // public java.lang.String java.nio.ByteOrder.toString()
    virtual java::nio::ByteOrder* nativeOrder(); // public static java.nio.ByteOrder java.nio.ByteOrder.nativeOrder()

    java::nio::ByteOrder* Big_ENDIAN; // public static final java.nio.ByteOrder java.nio.ByteOrder.BIG_ENDIAN
    java::nio::ByteOrder* Little_ENDIAN; // public static final java.nio.ByteOrder java.nio.ByteOrder.LITTLE_ENDIAN
};
}
}
#endif
