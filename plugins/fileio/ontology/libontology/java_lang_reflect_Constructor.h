#ifndef java_lang_reflect_Constructor_H
#define java_lang_reflect_Constructor_H
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
class Constructor : public java::lang::reflect::AccessibleObject {
  public:
    Constructor(JavaMarker* dummy);
    Constructor(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool equals(java::lang::Object* arg1); // public boolean java.lang.reflect.Constructor.equals(java.lang.Object)
    virtual const char* toString(); // public java.lang.String java.lang.reflect.Constructor.toString()
    virtual int hashCode(); // public int java.lang.reflect.Constructor.hashCode()
    virtual int getModifiers(); // public int java.lang.reflect.Constructor.getModifiers()
    virtual const char* getName(); // public java.lang.String java.lang.reflect.Constructor.getName()
    virtual java::lang::Object* newInstance(JavaObjectArray* arg1); // public java.lang.Object java.lang.reflect.Constructor.newInstance(java.lang.Object[]) throws java.lang.InstantiationException,java.lang.IllegalAccessException,java.lang.IllegalArgumentException,java.lang.reflect.InvocationTargetException
    virtual bool isSynthetic(); // public boolean java.lang.reflect.Constructor.isSynthetic()
    virtual JavaObjectArray* getTypeParameters(); // public java.lang.reflect.TypeVariable[] java.lang.reflect.Constructor.getTypeParameters()
    virtual java::lang::Class* getDeclaringClass(); // public java.lang.Class java.lang.reflect.Constructor.getDeclaringClass()
    virtual java::lang::annotation::Annotation* getAnnotation(java::lang::Class* arg1); // public java.lang.annotation.Annotation java.lang.reflect.Constructor.getAnnotation(java.lang.Class)
    virtual JavaObjectArray* getDeclaredAnnotations(); // public java.lang.annotation.Annotation[] java.lang.reflect.Constructor.getDeclaredAnnotations()
    virtual JavaObjectArray* getParameterTypes(); // public java.lang.Class[] java.lang.reflect.Constructor.getParameterTypes()
    virtual const char* toGenericString(); // public java.lang.String java.lang.reflect.Constructor.toGenericString()
    virtual JavaObjectArray* getGenericParameterTypes(); // public java.lang.reflect.Type[] java.lang.reflect.Constructor.getGenericParameterTypes()
    virtual JavaObjectArray* getExceptionTypes(); // public java.lang.Class[] java.lang.reflect.Constructor.getExceptionTypes()
    virtual JavaObjectArray* getGenericExceptionTypes(); // public java.lang.reflect.Type[] java.lang.reflect.Constructor.getGenericExceptionTypes()
    virtual bool isVarArgs(); // public boolean java.lang.reflect.Constructor.isVarArgs()
    virtual JavaObjectArray* getParameterAnnotations(); // public java.lang.annotation.Annotation[][] java.lang.reflect.Constructor.getParameterAnnotations()

};
}
}
}
#endif
