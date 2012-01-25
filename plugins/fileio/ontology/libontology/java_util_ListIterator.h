#ifndef java_util_ListIterator_H
#define java_util_ListIterator_H
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
namespace util {
class ListIterator : public java::lang::Object {
  public:
    ListIterator(JavaMarker* dummy);
    ListIterator(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void add(java::lang::Object* arg1); // public abstract void java.util.ListIterator.add(java.lang.Object)
    virtual bool hasNext(); // public abstract boolean java.util.ListIterator.hasNext()
    virtual java::lang::Object* next(); // public abstract java.lang.Object java.util.ListIterator.next()
    virtual void remove(); // public abstract void java.util.ListIterator.remove()
    virtual void set(java::lang::Object* arg1); // public abstract void java.util.ListIterator.set(java.lang.Object)
    virtual int previousIndex(); // public abstract int java.util.ListIterator.previousIndex()
    virtual bool hasPrevious(); // public abstract boolean java.util.ListIterator.hasPrevious()
    virtual java::lang::Object* previous(); // public abstract java.lang.Object java.util.ListIterator.previous()
    virtual int nextIndex(); // public abstract int java.util.ListIterator.nextIndex()

};
}
}
#endif
