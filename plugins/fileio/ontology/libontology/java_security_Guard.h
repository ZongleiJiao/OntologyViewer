#ifndef java_security_Guard_H
#define java_security_Guard_H
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
namespace security {
class Guard : public java::lang::Object {
  public:
    Guard(JavaMarker* dummy);
    Guard(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void checkGuard(java::lang::Object* arg1); // public abstract void java.security.Guard.checkGuard(java.lang.Object) throws java.lang.SecurityException

};
}
}
#endif
