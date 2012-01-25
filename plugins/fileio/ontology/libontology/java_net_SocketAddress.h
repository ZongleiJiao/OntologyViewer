#ifndef java_net_SocketAddress_H
#define java_net_SocketAddress_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace io {
class Serializable;
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
namespace net {
class SocketAddress : public java::lang::Object {
  public:
    SocketAddress(JavaMarker* dummy);
    SocketAddress(jobject obj);
    SocketAddress(); // public java.net.SocketAddress()

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);

};
}
}
#endif
