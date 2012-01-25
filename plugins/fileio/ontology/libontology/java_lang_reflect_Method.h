#ifndef java_lang_reflect_Method_H
#define java_lang_reflect_Method_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_reflect_AccessibleObject.h>

namespace java {
namespace lang {
namespace reflect {
class GenericDeclaration;
}
}
}

namespace java {
namespace lang {
namespace reflect {
class Member;
}
}
}

namespace java {
namespace lang {
class Object;
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
class TypeVariable;
}
}
}

namespace java {
namespace lang {
class Class;
}
}

namespace java {
namespace lang {
namespace annotation {
class Annotation;
}
}
}

namespace java {
namespace lang {
namespace reflect {
class Type;
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
class Method : public java::lang::reflect::AccessibleObject {
  public:
    Method(JavaMarker* dummy);
    Method(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::lang::Object* invoke(java::lang::Object* arg1, JavaObjectArray* arg2); // public java.lang.Object java.lang.reflect.Method.invoke(java.lang.Object,java.lang.Object[]) throws java.lang.IllegalAccessException,java.lang.IllegalArgumentException,java.lang.reflect.InvocationTargetException
    virtual bool equals(java::lang::Object* arg1); // public boolean java.lang.reflect.Method.equals(java.lang.Object)
    virtual const char* toString(); // public java.lang.String java.lang.reflect.Method.toString()
    virtual int hashCode(); // public int java.lang.reflect.Method.hashCode()
    virtual int getModifiers(); // public int java.lang.reflect.Method.getModifiers()
    virtual const char* getName(); // public java.lang.String java.lang.reflect.Method.getName()
    virtual bool isSynthetic(); // public boolean java.lang.reflect.Method.isSynthetic()
    virtual JavaObjectArray* getTypeParameters(); // public java.lang.reflect.TypeVariable[] java.lang.reflect.Method.getTypeParameters()
    virtual java::lang::Class* getDeclaringClass(); // public java.lang.Class java.lang.reflect.Method.getDeclaringClass()
    virtual java::lang::annotation::Annotation* getAnnotation(java::lang::Class* arg1); // public java.lang.annotation.Annotation java.lang.reflect.Method.getAnnotation(java.lang.Class)
    virtual JavaObjectArray* getDeclaredAnnotations(); // public java.lang.annotation.Annotation[] java.lang.reflect.Method.getDeclaredAnnotations()
    virtual java::lang::Class* getReturnType(); // public java.lang.Class java.lang.reflect.Method.getReturnType()
    virtual JavaObjectArray* getParameterTypes(); // public java.lang.Class[] java.lang.reflect.Method.getParameterTypes()
    virtual const char* toGenericString(); // public java.lang.String java.lang.reflect.Method.toGenericString()
    virtual java::lang::reflect::Type* getGenericReturnType(); // public java.lang.reflect.Type java.lang.reflect.Method.getGenericReturnType()
    virtual JavaObjectArray* getGenericParameterTypes(); // public java.lang.reflect.Type[] java.lang.reflect.Method.getGenericParameterTypes()
    virtual JavaObjectArray* getExceptionTypes(); // public java.lang.Class[] java.lang.reflect.Method.getExceptionTypes()
    virtual JavaObjectArray* getGenericExceptionTypes(); // public java.lang.reflect.Type[] java.lang.reflect.Method.getGenericExceptionTypes()
    virtual bool isBridge(); // public boolean java.lang.reflect.Method.isBridge()
    virtual bool isVarArgs(); // public boolean java.lang.reflect.Method.isVarArgs()
    virtual java::lang::Object* getDefaultValue(); // public java.lang.Object java.lang.reflect.Method.getDefaultValue()
    virtual JavaObjectArray* getParameterAnnotations(); // public java.lang.annotation.Annotation[][] java.lang.reflect.Method.getParameterAnnotations()

};
}
}
}
#endif
