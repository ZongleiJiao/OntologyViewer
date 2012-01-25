#ifndef java_util_Collection_H
#define java_util_Collection_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace lang {
class Iterable;
}
}

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
class Collection : public java::lang::Object {
  public:
    Collection(JavaMarker* dummy);
    Collection(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool add(java::lang::Object* arg1); // public abstract boolean java.util.Collection.add(java.lang.Object)
    virtual bool equals(java::lang::Object* arg1); // public abstract boolean java.util.Collection.equals(java.lang.Object)
    virtual int hashCode(); // public abstract int java.util.Collection.hashCode()
    virtual void clear(); // public abstract void java.util.Collection.clear()
    virtual int size(); // public abstract int java.util.Collection.size()
    virtual bool isEmpty(); // public abstract boolean java.util.Collection.isEmpty()
    virtual bool contains(java::lang::Object* arg1); // public abstract boolean java.util.Collection.contains(java.lang.Object)
    virtual bool addAll(java::util::Collection* arg1); // public abstract boolean java.util.Collection.addAll(java.util.Collection)
    virtual JavaObjectArray* toArray(); // public abstract java.lang.Object[] java.util.Collection.toArray()
    virtual JavaObjectArray* toArray(JavaObjectArray* arg1); // public abstract java.lang.Object[] java.util.Collection.toArray(java.lang.Object[])
    virtual java::util::Iterator* iterator(); // public abstract java.util.Iterator java.util.Collection.iterator()
    virtual bool remove(java::lang::Object* arg1); // public abstract boolean java.util.Collection.remove(java.lang.Object)
    virtual bool removeAll(java::util::Collection* arg1); // public abstract boolean java.util.Collection.removeAll(java.util.Collection)
    virtual bool containsAll(java::util::Collection* arg1); // public abstract boolean java.util.Collection.containsAll(java.util.Collection)
    virtual bool retainAll(java::util::Collection* arg1); // public abstract boolean java.util.Collection.retainAll(java.util.Collection)

};
}
}
#endif
