#ifndef java_lang_Class_H
#define java_lang_Class_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace io {
class Serializable;
}
}

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
class Type;
}
}
}

namespace java {
namespace lang {
namespace reflect {
class AnnotatedElement;
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
class ClassLoader;
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
class Package;
}
}

namespace java {
namespace lang {
namespace reflect {
class Method;
}
}
}

namespace java {
namespace lang {
namespace reflect {
class Constructor;
}
}
}

namespace java {
namespace lang {
namespace reflect {
class Field;
}
}
}

namespace java {
namespace io {
class InputStream;
}
}

namespace java {
namespace net {
class URL;
}
}

namespace java {
namespace security {
class ProtectionDomain;
}
}

namespace java {
namespace lang {
namespace annotation {
class Annotation;
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
class Class : public java::lang::Object {
  public:
    Class(JavaMarker* dummy);
    Class(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::lang::Class* forName(const char* arg1); // public static java.lang.Class java.lang.Class.forName(java.lang.String) throws java.lang.ClassNotFoundException
    virtual java::lang::Class* forName(const char* arg1, bool arg2, java::lang::ClassLoader* arg3); // public static java.lang.Class java.lang.Class.forName(java.lang.String,boolean,java.lang.ClassLoader) throws java.lang.ClassNotFoundException
    virtual const char* toString(); // public java.lang.String java.lang.Class.toString()
    virtual bool isAssignableFrom(java::lang::Class* arg1); // public native boolean java.lang.Class.isAssignableFrom(java.lang.Class)
    virtual bool isInstance(java::lang::Object* arg1); // public native boolean java.lang.Class.isInstance(java.lang.Object)
    virtual int getModifiers(); // public native int java.lang.Class.getModifiers()
    virtual bool isInterface(); // public native boolean java.lang.Class.isInterface()
    virtual bool isArray(); // public native boolean java.lang.Class.isArray()
    virtual bool isPrimitive(); // public native boolean java.lang.Class.isPrimitive()
    virtual java::lang::Class* getSuperclass(); // public native java.lang.Class java.lang.Class.getSuperclass()
    virtual java::lang::Class* getComponentType(); // public native java.lang.Class java.lang.Class.getComponentType()
    virtual const char* getName(); // public java.lang.String java.lang.Class.getName()
    virtual java::lang::Object* newInstance(); // public java.lang.Object java.lang.Class.newInstance() throws java.lang.InstantiationException,java.lang.IllegalAccessException
    virtual bool isAnnotation(); // public boolean java.lang.Class.isAnnotation()
    virtual bool isSynthetic(); // public boolean java.lang.Class.isSynthetic()
    virtual java::lang::ClassLoader* getClassLoader(); // public java.lang.ClassLoader java.lang.Class.getClassLoader()
    virtual JavaObjectArray* getTypeParameters(); // public java.lang.reflect.TypeVariable[] java.lang.Class.getTypeParameters()
    virtual java::lang::reflect::Type* getGenericSuperclass(); // public java.lang.reflect.Type java.lang.Class.getGenericSuperclass()
    virtual java::lang::Package* getPackage(); // public java.lang.Package java.lang.Class.getPackage()
    virtual JavaObjectArray* getInterfaces(); // public native java.lang.Class[] java.lang.Class.getInterfaces()
    virtual JavaObjectArray* getGenericInterfaces(); // public java.lang.reflect.Type[] java.lang.Class.getGenericInterfaces()
    virtual JavaObjectArray* getSigners(); // public native java.lang.Object[] java.lang.Class.getSigners()
    virtual java::lang::reflect::Method* getEnclosingMethod(); // public java.lang.reflect.Method java.lang.Class.getEnclosingMethod()
    virtual java::lang::reflect::Constructor* getEnclosingConstructor(); // public java.lang.reflect.Constructor java.lang.Class.getEnclosingConstructor()
    virtual java::lang::Class* getDeclaringClass(); // public native java.lang.Class java.lang.Class.getDeclaringClass()
    virtual java::lang::Class* getEnclosingClass(); // public java.lang.Class java.lang.Class.getEnclosingClass()
    virtual const char* getSimpleName(); // public java.lang.String java.lang.Class.getSimpleName()
    virtual const char* getCanonicalName(); // public java.lang.String java.lang.Class.getCanonicalName()
    virtual bool isAnonymousClass(); // public boolean java.lang.Class.isAnonymousClass()
    virtual bool isLocalClass(); // public boolean java.lang.Class.isLocalClass()
    virtual bool isMemberClass(); // public boolean java.lang.Class.isMemberClass()
    virtual JavaObjectArray* getClasses(); // public java.lang.Class[] java.lang.Class.getClasses()
    virtual JavaObjectArray* getFields(); // public java.lang.reflect.Field[] java.lang.Class.getFields() throws java.lang.SecurityException
    virtual JavaObjectArray* getMethods(); // public java.lang.reflect.Method[] java.lang.Class.getMethods() throws java.lang.SecurityException
    virtual JavaObjectArray* getConstructors(); // public java.lang.reflect.Constructor[] java.lang.Class.getConstructors() throws java.lang.SecurityException
    virtual java::lang::reflect::Field* getField(const char* arg1); // public java.lang.reflect.Field java.lang.Class.getField(java.lang.String) throws java.lang.NoSuchFieldException,java.lang.SecurityException
    virtual java::lang::reflect::Method* getMethod(const char* arg1, JavaObjectArray* arg2); // public java.lang.reflect.Method java.lang.Class.getMethod(java.lang.String,java.lang.Class[]) throws java.lang.NoSuchMethodException,java.lang.SecurityException
    virtual java::lang::reflect::Constructor* getConstructor(JavaObjectArray* arg1); // public java.lang.reflect.Constructor java.lang.Class.getConstructor(java.lang.Class[]) throws java.lang.NoSuchMethodException,java.lang.SecurityException
    virtual JavaObjectArray* getDeclaredClasses(); // public java.lang.Class[] java.lang.Class.getDeclaredClasses() throws java.lang.SecurityException
    virtual JavaObjectArray* getDeclaredFields(); // public java.lang.reflect.Field[] java.lang.Class.getDeclaredFields() throws java.lang.SecurityException
    virtual JavaObjectArray* getDeclaredMethods(); // public java.lang.reflect.Method[] java.lang.Class.getDeclaredMethods() throws java.lang.SecurityException
    virtual JavaObjectArray* getDeclaredConstructors(); // public java.lang.reflect.Constructor[] java.lang.Class.getDeclaredConstructors() throws java.lang.SecurityException
    virtual java::lang::reflect::Field* getDeclaredField(const char* arg1); // public java.lang.reflect.Field java.lang.Class.getDeclaredField(java.lang.String) throws java.lang.NoSuchFieldException,java.lang.SecurityException
    virtual java::lang::reflect::Method* getDeclaredMethod(const char* arg1, JavaObjectArray* arg2); // public java.lang.reflect.Method java.lang.Class.getDeclaredMethod(java.lang.String,java.lang.Class[]) throws java.lang.NoSuchMethodException,java.lang.SecurityException
    virtual java::lang::reflect::Constructor* getDeclaredConstructor(JavaObjectArray* arg1); // public java.lang.reflect.Constructor java.lang.Class.getDeclaredConstructor(java.lang.Class[]) throws java.lang.NoSuchMethodException,java.lang.SecurityException
    virtual java::io::InputStream* getResourceAsStream(const char* arg1); // public java.io.InputStream java.lang.Class.getResourceAsStream(java.lang.String)
    virtual java::net::URL* getResource(const char* arg1); // public java.net.URL java.lang.Class.getResource(java.lang.String)
    virtual java::security::ProtectionDomain* getProtectionDomain(); // public java.security.ProtectionDomain java.lang.Class.getProtectionDomain()
    virtual bool desiredAssertionStatus(); // public boolean java.lang.Class.desiredAssertionStatus()
    virtual bool isEnum(); // public boolean java.lang.Class.isEnum()
    virtual JavaObjectArray* getEnumConstants(); // public java.lang.Object[] java.lang.Class.getEnumConstants()
    virtual java::lang::Object* cast(java::lang::Object* arg1); // public java.lang.Object java.lang.Class.cast(java.lang.Object)
    virtual java::lang::Class* asSubclass(java::lang::Class* arg1); // public java.lang.Class java.lang.Class.asSubclass(java.lang.Class)
    virtual java::lang::annotation::Annotation* getAnnotation(java::lang::Class* arg1); // public java.lang.annotation.Annotation java.lang.Class.getAnnotation(java.lang.Class)
    virtual bool isAnnotationPresent(java::lang::Class* arg1); // public boolean java.lang.Class.isAnnotationPresent(java.lang.Class)
    virtual JavaObjectArray* getAnnotations(); // public java.lang.annotation.Annotation[] java.lang.Class.getAnnotations()
    virtual JavaObjectArray* getDeclaredAnnotations(); // public java.lang.annotation.Annotation[] java.lang.Class.getDeclaredAnnotations()

};
}
}
#endif
