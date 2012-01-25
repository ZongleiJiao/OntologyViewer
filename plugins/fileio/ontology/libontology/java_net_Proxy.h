#ifndef java_net_Proxy_H
#define java_net_Proxy_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace net {
class Proxy__Type;
}
}

namespace java {
namespace net {
class SocketAddress;
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
namespace net {
class Proxy : public java::lang::Object {
  public:
    Proxy(JavaMarker* dummy);
    Proxy(jobject obj);
    Proxy(java::net::Proxy__Type* arg1, java::net::SocketAddress* arg2); // public java.net.Proxy(java.net.Proxy$Type,java.net.SocketAddress)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::net::Proxy__Type* type(); // public java.net.Proxy$Type java.net.Proxy.type()
    virtual bool equals(java::lang::Object* arg1); // public final boolean java.net.Proxy.equals(java.lang.Object)
    virtual const char* toString(); // public java.lang.String java.net.Proxy.toString()
    virtual int hashCode(); // public final int java.net.Proxy.hashCode()
    virtual java::net::SocketAddress* address(); // public java.net.SocketAddress java.net.Proxy.address()

    java::net::Proxy* NO_PROXY; // public static final java.net.Proxy java.net.Proxy.NO_PROXY
};
}
}
#endif
