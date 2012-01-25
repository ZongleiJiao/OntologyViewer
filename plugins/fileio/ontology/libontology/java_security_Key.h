#ifndef java_security_Key_H
#define java_security_Key_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace io {
class Serializable;
}
}

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
class Key : public java::lang::Object {
  public:
    Key(JavaMarker* dummy);
    Key(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual const char* getAlgorithm(); // public abstract java.lang.String java.security.Key.getAlgorithm()
    virtual JavaByteArray* getEncoded(); // public abstract byte[] java.security.Key.getEncoded()
    virtual const char* getFormat(); // public abstract java.lang.String java.security.Key.getFormat()

    long serialVersionUID; // public static final long java.security.Key.serialVersionUID
};
}
}
#endif
