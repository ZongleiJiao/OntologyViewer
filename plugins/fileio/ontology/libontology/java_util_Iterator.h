#ifndef java_util_Iterator_H
#define java_util_Iterator_H
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
namespace util {
class Iterator : public java::lang::Object {
  public:
    Iterator(JavaMarker* dummy);
    Iterator(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool hasNext(); // public abstract boolean java.util.Iterator.hasNext()
    virtual java::lang::Object* next(); // public abstract java.lang.Object java.util.Iterator.next()
    virtual void remove(); // public abstract void java.util.Iterator.remove()

};
}
}
#endif
