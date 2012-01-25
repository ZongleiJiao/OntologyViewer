#ifndef java_security_Principal_H
#define java_security_Principal_H
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
namespace security {
class Principal : public java::lang::Object {
  public:
    Principal(JavaMarker* dummy);
    Principal(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool equals(java::lang::Object* arg1); // public abstract boolean java.security.Principal.equals(java.lang.Object)
    virtual const char* toString(); // public abstract java.lang.String java.security.Principal.toString()
    virtual int hashCode(); // public abstract int java.security.Principal.hashCode()
    virtual const char* getName(); // public abstract java.lang.String java.security.Principal.getName()

};
}
}
#endif
