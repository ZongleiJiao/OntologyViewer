#ifndef java_lang_reflect_TypeVariable_H
#define java_lang_reflect_TypeVariable_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace lang {
namespace reflect {
class Type;
}
}
}

namespace java {
namespace lang {
class String;
}
}

namespace java {
namespace lang {
namespace reflect {
class GenericDeclaration;
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
class TypeVariable : public java::lang::Object {
  public:
    TypeVariable(JavaMarker* dummy);
    TypeVariable(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual const char* getName(); // public abstract java.lang.String java.lang.reflect.TypeVariable.getName()
    virtual JavaObjectArray* getBounds(); // public abstract java.lang.reflect.Type[] java.lang.reflect.TypeVariable.getBounds()
    virtual java::lang::reflect::GenericDeclaration* getGenericDeclaration(); // public abstract java.lang.reflect.GenericDeclaration java.lang.reflect.TypeVariable.getGenericDeclaration()

};
}
}
}
#endif
