#ifndef java_net_URLStreamHandlerFactory_H
#define java_net_URLStreamHandlerFactory_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace net {
class URLStreamHandler;
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
class URLStreamHandlerFactory : public java::lang::Object {
  public:
    URLStreamHandlerFactory(JavaMarker* dummy);
    URLStreamHandlerFactory(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::net::URLStreamHandler* createURLStreamHandler(const char* arg1); // public abstract java.net.URLStreamHandler java.net.URLStreamHandlerFactory.createURLStreamHandler(java.lang.String)

};
}
}
#endif
