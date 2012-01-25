#ifndef java_lang_reflect_Member_H
#define java_lang_reflect_Member_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

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
namespace reflect {
class Member : public java::lang::Object {
  public:
    Member(JavaMarker* dummy);
    Member(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual int getModifiers(); // public abstract int java.lang.reflect.Member.getModifiers()
    virtual const char* getName(); // public abstract java.lang.String java.lang.reflect.Member.getName()
    virtual bool isSynthetic(); // public abstract boolean java.lang.reflect.Member.isSynthetic()
    virtual java::lang::Class* getDeclaringClass(); // public abstract java.lang.Class java.lang.reflect.Member.getDeclaringClass()

    int PUBLIC; // public static final int java.lang.reflect.Member.PUBLIC
    int DECLARED; // public static final int java.lang.reflect.Member.DECLARED
};
}
}
}
#endif
