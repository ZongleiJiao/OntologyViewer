#ifndef java_lang_Comparable_H
#define java_lang_Comparable_H
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
class Comparable : public java::lang::Object {
  public:
    Comparable(JavaMarker* dummy);
    Comparable(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual int compareTo(java::lang::Object* arg1); // public abstract int java.lang.Comparable.compareTo(java.lang.Object)

};
}
}
#endif
