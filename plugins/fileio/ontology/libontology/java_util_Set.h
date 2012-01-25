#ifndef java_util_Set_H
#define java_util_Set_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace util {
class Collection;
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
class Set : public java::lang::Object {
  public:
    Set(JavaMarker* dummy);
    Set(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool add(java::lang::Object* arg1); // public abstract boolean java.util.Set.add(java.lang.Object)
    virtual bool equals(java::lang::Object* arg1); // public abstract boolean java.util.Set.equals(java.lang.Object)
    virtual int hashCode(); // public abstract int java.util.Set.hashCode()
    virtual void clear(); // public abstract void java.util.Set.clear()
    virtual int size(); // public abstract int java.util.Set.size()
    virtual bool isEmpty(); // public abstract boolean java.util.Set.isEmpty()
    virtual bool contains(java::lang::Object* arg1); // public abstract boolean java.util.Set.contains(java.lang.Object)
    virtual bool addAll(java::util::Collection* arg1); // public abstract boolean java.util.Set.addAll(java.util.Collection)
    virtual JavaObjectArray* toArray(); // public abstract java.lang.Object[] java.util.Set.toArray()
    virtual JavaObjectArray* toArray(JavaObjectArray* arg1); // public abstract java.lang.Object[] java.util.Set.toArray(java.lang.Object[])
    virtual java::util::Iterator* iterator(); // public abstract java.util.Iterator java.util.Set.iterator()
    virtual bool remove(java::lang::Object* arg1); // public abstract boolean java.util.Set.remove(java.lang.Object)
    virtual bool removeAll(java::util::Collection* arg1); // public abstract boolean java.util.Set.removeAll(java.util.Collection)
    virtual bool containsAll(java::util::Collection* arg1); // public abstract boolean java.util.Set.containsAll(java.util.Collection)
    virtual bool retainAll(java::util::Collection* arg1); // public abstract boolean java.util.Set.retainAll(java.util.Collection)

};
}
}
#endif
