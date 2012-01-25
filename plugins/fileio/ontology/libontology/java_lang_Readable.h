#ifndef java_lang_Readable_H
#define java_lang_Readable_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace nio {
class CharBuffer;
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
class Readable : public java::lang::Object {
  public:
    Readable(JavaMarker* dummy);
    Readable(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual int read(java::nio::CharBuffer* arg1); // public abstract int java.lang.Readable.read(java.nio.CharBuffer) throws java.io.IOException

};
}
}
#endif
