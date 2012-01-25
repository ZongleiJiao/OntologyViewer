#ifndef java_lang_Cloneable_H
#define java_lang_Cloneable_H
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
namespace lang {
class Cloneable : public java::lang::Object {
  public:
    Cloneable(JavaMarker* dummy);
    Cloneable(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);

};
}
}
#endif
