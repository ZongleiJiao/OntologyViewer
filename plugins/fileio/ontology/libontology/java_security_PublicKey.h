#ifndef java_security_PublicKey_H
#define java_security_PublicKey_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace security {
class Key;
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
class PublicKey : public java::lang::Object {
  public:
    PublicKey(JavaMarker* dummy);
    PublicKey(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);

    long serialVersionUID; // public static final long java.security.PublicKey.serialVersionUID
};
}
}
#endif
