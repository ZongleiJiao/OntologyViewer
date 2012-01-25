#ifndef java_lang_Iterable_H
#define java_lang_Iterable_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace util {
class Iterator;
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
namespace lang {
class Iterable : public java::lang::Object {
  public:
    Iterable(JavaMarker* dummy);
    Iterable(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::util::Iterator* iterator(); // public abstract java.util.Iterator java.lang.Iterable.iterator()

};
}
}
#endif
