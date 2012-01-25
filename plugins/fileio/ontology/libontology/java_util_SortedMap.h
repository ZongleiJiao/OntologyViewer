#ifndef java_util_SortedMap_H
#define java_util_SortedMap_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace util {
class Map;
}
}

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

namespace java {
namespace util {
class Comparator;
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
class SortedMap : public java::lang::Object {
  public:
    SortedMap(JavaMarker* dummy);
    SortedMap(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::util::Collection* values(); // public abstract java.util.Collection java.util.SortedMap.values()
    virtual java::util::Set* entrySet(); // public abstract java.util.Set java.util.SortedMap.entrySet()
    virtual java::util::Set* keySet(); // public abstract java.util.Set java.util.SortedMap.keySet()
    virtual java::lang::Object* firstKey(); // public abstract java.lang.Object java.util.SortedMap.firstKey()
    virtual java::util::Comparator* comparator(); // public abstract java.util.Comparator java.util.SortedMap.comparator()
    virtual java::util::SortedMap* subMap(java::lang::Object* arg1, java::lang::Object* arg2); // public abstract java.util.SortedMap java.util.SortedMap.subMap(java.lang.Object,java.lang.Object)
    virtual java::util::SortedMap* headMap(java::lang::Object* arg1); // public abstract java.util.SortedMap java.util.SortedMap.headMap(java.lang.Object)
    virtual java::util::SortedMap* tailMap(java::lang::Object* arg1); // public abstract java.util.SortedMap java.util.SortedMap.tailMap(java.lang.Object)
    virtual java::lang::Object* lastKey(); // public abstract java.lang.Object java.util.SortedMap.lastKey()

};
}
}
#endif
