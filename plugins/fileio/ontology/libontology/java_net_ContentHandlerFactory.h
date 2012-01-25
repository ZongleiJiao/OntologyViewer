#ifndef java_net_ContentHandlerFactory_H
#define java_net_ContentHandlerFactory_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace net {
class ContentHandler;
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
class ContentHandlerFactory : public java::lang::Object {
  public:
    ContentHandlerFactory(JavaMarker* dummy);
    ContentHandlerFactory(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::net::ContentHandler* createContentHandler(const char* arg1); // public abstract java.net.ContentHandler java.net.ContentHandlerFactory.createContentHandler(java.lang.String)

};
}
}
#endif
