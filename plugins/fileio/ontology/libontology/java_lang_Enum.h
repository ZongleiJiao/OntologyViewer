#ifndef java_lang_Enum_H
#define java_lang_Enum_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace lang {
class Comparable;
}
}

namespace java {
namespace io {
class Serializable;
}
}

namespace java {
namespace lang {
class String;
}
}

namespace java {
namespace lang {
class Class;
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
class Enum : public java::lang::Object {
  public:
    Enum(JavaMarker* dummy);
    Enum(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual const char* name(); // public final java.lang.String java.lang.Enum.name()
    virtual bool equals(java::lang::Object* arg1); // public final boolean java.lang.Enum.equals(java.lang.Object)
    virtual const char* toString(); // public java.lang.String java.lang.Enum.toString()
    virtual int hashCode(); // public final int java.lang.Enum.hashCode()
    virtual int compareTo(java::lang::Enum* arg1); // public final int java.lang.Enum.compareTo(java.lang.Enum)
    virtual int compareTo(java::lang::Object* arg1); // public int java.lang.Enum.compareTo(java.lang.Object)
    virtual java::lang::Enum* valueOf(java::lang::Class* arg1, const char* arg2); // public static java.lang.Enum java.lang.Enum.valueOf(java.lang.Class,java.lang.String)
    virtual java::lang::Class* getDeclaringClass(); // public final java.lang.Class java.lang.Enum.getDeclaringClass()
    virtual int ordinal(); // public final int java.lang.Enum.ordinal()

};
}
}
#endif
