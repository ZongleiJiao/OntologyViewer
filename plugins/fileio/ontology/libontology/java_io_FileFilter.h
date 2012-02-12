#ifndef java_io_FileFilter_H
#define java_io_FileFilter_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace io {
class File;
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
class FileFilter : public java::lang::Object {
  public:
    FileFilter(JavaMarker* dummy);
    FileFilter(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool accept(java::io::File* arg1); // public abstract boolean java.io.FileFilter.accept(java.io.File)

};
}
}
#endif
