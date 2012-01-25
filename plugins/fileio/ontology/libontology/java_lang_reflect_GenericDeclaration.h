#ifndef java_lang_reflect_GenericDeclaration_H
#define java_lang_reflect_GenericDeclaration_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace lang {
namespace reflect {
class TypeVariable;
}
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
class GenericDeclaration : public java::lang::Object {
  public:
    GenericDeclaration(JavaMarker* dummy);
    GenericDeclaration(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual JavaObjectArray* getTypeParameters(); // public abstract java.lang.reflect.TypeVariable[] java.lang.reflect.GenericDeclaration.getTypeParameters()

};
}
}
}
#endif
