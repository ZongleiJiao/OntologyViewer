#ifndef java_util_Enumeration_H
#define java_util_Enumeration_H
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
class Enumeration : public java::lang::Object {
  public:
    Enumeration(JavaMarker* dummy);
    Enumeration(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool hasMoreElements(); // public abstract boolean java.util.Enumeration.hasMoreElements()
    virtual java::lang::Object* nextElement(); // public abstract java.lang.Object java.util.Enumeration.nextElement()

};
}
}
#endif
