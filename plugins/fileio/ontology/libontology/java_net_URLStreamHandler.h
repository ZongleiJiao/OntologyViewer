#ifndef java_net_URLStreamHandler_H
#define java_net_URLStreamHandler_H
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
namespace net {
class URLStreamHandler : public java::lang::Object {
  public:
    URLStreamHandler(JavaMarker* dummy);
    URLStreamHandler(jobject obj);
    URLStreamHandler(); // public java.net.URLStreamHandler()

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);

};
}
}
#endif
