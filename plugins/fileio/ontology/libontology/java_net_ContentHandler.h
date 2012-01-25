#ifndef java_net_ContentHandler_H
#define java_net_ContentHandler_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace net {
class URLConnection;
}
}

namespace java {
namespace lang {
class Class;
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
class ContentHandler : public java::lang::Object {
  public:
    ContentHandler(JavaMarker* dummy);
    ContentHandler(jobject obj);
    ContentHandler(); // public java.net.ContentHandler()

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::lang::Object* getContent(java::net::URLConnection* arg1); // public abstract java.lang.Object java.net.ContentHandler.getContent(java.net.URLConnection) throws java.io.IOException
    virtual java::lang::Object* getContent(java::net::URLConnection* arg1, JavaObjectArray* arg2); // public java.lang.Object java.net.ContentHandler.getContent(java.net.URLConnection,java.lang.Class[]) throws java.io.IOException

};
}
}
#endif
