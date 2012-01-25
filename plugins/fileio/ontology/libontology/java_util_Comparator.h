#ifndef java_util_Comparator_H
#define java_util_Comparator_H
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
namespace util {
class Comparator : public java::lang::Object {
  public:
    Comparator(JavaMarker* dummy);
    Comparator(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool equals(java::lang::Object* arg1); // public abstract boolean java.util.Comparator.equals(java.lang.Object)
    virtual int compare(java::lang::Object* arg1, java::lang::Object* arg2); // public abstract int java.util.Comparator.compare(java.lang.Object,java.lang.Object)

};
}
}
#endif
