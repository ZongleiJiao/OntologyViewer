#ifndef java_io_FilenameFilter_H
#define java_io_FilenameFilter_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace io {
class File;
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
namespace io {
class FilenameFilter : public java::lang::Object {
  public:
    FilenameFilter(JavaMarker* dummy);
    FilenameFilter(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool accept(java::io::File* arg1, const char* arg2); // public abstract boolean java.io.FilenameFilter.accept(java.io.File,java.lang.String)

};
}
}
#endif
