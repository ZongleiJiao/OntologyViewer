#ifndef java_net_Proxy__Type_H
#define java_net_Proxy__Type_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Enum.h>

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
class Proxy__Type : public java::lang::Enum {
  public:
    Proxy__Type(JavaMarker* dummy);
    Proxy__Type(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual JavaObjectArray* values(); // public static java.net.Proxy$Type[] java.net.Proxy$Type.values()
    virtual java::net::Proxy__Type* valueOf(const char* arg1); // public static java.net.Proxy$Type java.net.Proxy$Type.valueOf(java.lang.String)

    java::net::Proxy__Type* DIRECT; // public static final java.net.Proxy$Type java.net.Proxy$Type.DIRECT
    java::net::Proxy__Type* HTTP; // public static final java.net.Proxy$Type java.net.Proxy$Type.HTTP
    java::net::Proxy__Type* SOCKS; // public static final java.net.Proxy$Type java.net.Proxy$Type.SOCKS
};
}
}
#endif
