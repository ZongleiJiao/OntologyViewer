#ifndef java_io_Serializable_H
#define java_io_Serializable_H
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
namespace io {
class Serializable : public java::lang::Object {
  public:
    Serializable(JavaMarker* dummy);
    Serializable(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);

};
}
}
#endif
