#ifndef java_util_List_H
#define java_util_List_H
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

namespace java {
namespace util {
class ListIterator;
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
class List : public java::lang::Object {
  public:
    List(JavaMarker* dummy);
    List(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool add(java::lang::Object* arg1); // public abstract boolean java.util.List.add(java.lang.Object)
    virtual void add(int arg1, java::lang::Object* arg2); // public abstract void java.util.List.add(int,java.lang.Object)
    virtual java::lang::Object* get(int arg1); // public abstract java.lang.Object java.util.List.get(int)
    virtual bool equals(java::lang::Object* arg1); // public abstract boolean java.util.List.equals(java.lang.Object)
    virtual int hashCode(); // public abstract int java.util.List.hashCode()
    virtual int indexOf(java::lang::Object* arg1); // public abstract int java.util.List.indexOf(java.lang.Object)
    virtual void clear(); // public abstract void java.util.List.clear()
    virtual int size(); // public abstract int java.util.List.size()
    virtual bool isEmpty(); // public abstract boolean java.util.List.isEmpty()
    virtual int lastIndexOf(java::lang::Object* arg1); // public abstract int java.util.List.lastIndexOf(java.lang.Object)
    virtual bool contains(java::lang::Object* arg1); // public abstract boolean java.util.List.contains(java.lang.Object)
    virtual bool addAll(java::util::Collection* arg1); // public abstract boolean java.util.List.addAll(java.util.Collection)
    virtual bool addAll(int arg1, java::util::Collection* arg2); // public abstract boolean java.util.List.addAll(int,java.util.Collection)
    virtual JavaObjectArray* toArray(); // public abstract java.lang.Object[] java.util.List.toArray()
    virtual JavaObjectArray* toArray(JavaObjectArray* arg1); // public abstract java.lang.Object[] java.util.List.toArray(java.lang.Object[])
    virtual java::util::Iterator* iterator(); // public abstract java.util.Iterator java.util.List.iterator()
    virtual bool remove(java::lang::Object* arg1); // public abstract boolean java.util.List.remove(java.lang.Object)
    virtual java::lang::Object* remove(int arg1); // public abstract java.lang.Object java.util.List.remove(int)
    virtual java::lang::Object* set(int arg1, java::lang::Object* arg2); // public abstract java.lang.Object java.util.List.set(int,java.lang.Object)
    virtual bool removeAll(java::util::Collection* arg1); // public abstract boolean java.util.List.removeAll(java.util.Collection)
    virtual bool containsAll(java::util::Collection* arg1); // public abstract boolean java.util.List.containsAll(java.util.Collection)
    virtual bool retainAll(java::util::Collection* arg1); // public abstract boolean java.util.List.retainAll(java.util.Collection)
    virtual java::util::List* subList(int arg1, int arg2); // public abstract java.util.List java.util.List.subList(int,int)
    virtual java::util::ListIterator* listIterator(); // public abstract java.util.ListIterator java.util.List.listIterator()
    virtual java::util::ListIterator* listIterator(int arg1); // public abstract java.util.ListIterator java.util.List.listIterator(int)

};
}
}
#endif
