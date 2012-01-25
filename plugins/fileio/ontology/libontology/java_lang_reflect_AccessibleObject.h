#ifndef java_lang_reflect_AccessibleObject_H
#define java_lang_reflect_AccessibleObject_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace lang {
namespace reflect {
class AnnotatedElement;
}
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
class AccessibleObject : public java::lang::Object {
  public:
    AccessibleObject(JavaMarker* dummy);
    AccessibleObject(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::lang::annotation::Annotation* getAnnotation(java::lang::Class* arg1); // public java.lang.annotation.Annotation java.lang.reflect.AccessibleObject.getAnnotation(java.lang.Class)
    virtual bool isAnnotationPresent(java::lang::Class* arg1); // public boolean java.lang.reflect.AccessibleObject.isAnnotationPresent(java.lang.Class)
    virtual JavaObjectArray* getAnnotations(); // public java.lang.annotation.Annotation[] java.lang.reflect.AccessibleObject.getAnnotations()
    virtual JavaObjectArray* getDeclaredAnnotations(); // public java.lang.annotation.Annotation[] java.lang.reflect.AccessibleObject.getDeclaredAnnotations()
    virtual void setAccessible(JavaObjectArray* arg1, bool arg2); // public static void java.lang.reflect.AccessibleObject.setAccessible(java.lang.reflect.AccessibleObject[],boolean) throws java.lang.SecurityException
    virtual void setAccessible(bool arg1); // public void java.lang.reflect.AccessibleObject.setAccessible(boolean) throws java.lang.SecurityException
    virtual bool isAccessible(); // public boolean java.lang.reflect.AccessibleObject.isAccessible()

};
}
}
}
#endif
