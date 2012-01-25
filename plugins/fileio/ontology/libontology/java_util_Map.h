#ifndef java_util_Map_H
#define java_util_Map_H
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
class Set;
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
class Map : public java::lang::Object {
  public:
    Map(JavaMarker* dummy);
    Map(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::lang::Object* get(java::lang::Object* arg1); // public abstract java.lang.Object java.util.Map.get(java.lang.Object)
    virtual java::lang::Object* put(java::lang::Object* arg1, java::lang::Object* arg2); // public abstract java.lang.Object java.util.Map.put(java.lang.Object,java.lang.Object)
    virtual bool equals(java::lang::Object* arg1); // public abstract boolean java.util.Map.equals(java.lang.Object)
    virtual java::util::Collection* values(); // public abstract java.util.Collection java.util.Map.values()
    virtual int hashCode(); // public abstract int java.util.Map.hashCode()
    virtual void clear(); // public abstract void java.util.Map.clear()
    virtual int size(); // public abstract int java.util.Map.size()
    virtual bool isEmpty(); // public abstract boolean java.util.Map.isEmpty()
    virtual java::util::Set* entrySet(); // public abstract java.util.Set java.util.Map.entrySet()
    virtual void putAll(java::util::Map* arg1); // public abstract void java.util.Map.putAll(java.util.Map)
    virtual java::lang::Object* remove(java::lang::Object* arg1); // public abstract java.lang.Object java.util.Map.remove(java.lang.Object)
    virtual java::util::Set* keySet(); // public abstract java.util.Set java.util.Map.keySet()
    virtual bool containsValue(java::lang::Object* arg1); // public abstract boolean java.util.Map.containsValue(java.lang.Object)
    virtual bool containsKey(java::lang::Object* arg1); // public abstract boolean java.util.Map.containsKey(java.lang.Object)

};
}
}
#endif
