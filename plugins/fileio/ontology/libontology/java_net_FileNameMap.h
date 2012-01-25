#ifndef java_net_FileNameMap_H
#define java_net_FileNameMap_H
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
namespace net {
class FileNameMap : public java::lang::Object {
  public:
    FileNameMap(JavaMarker* dummy);
    FileNameMap(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual const char* getContentTypeFor(const char* arg1); // public abstract java.lang.String java.net.FileNameMap.getContentTypeFor(java.lang.String)

};
}
}
#endif
