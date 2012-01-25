#ifndef java_lang_reflect_AnnotatedElement_H
#define java_lang_reflect_AnnotatedElement_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

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
class AnnotatedElement : public java::lang::Object {
  public:
    AnnotatedElement(JavaMarker* dummy);
    AnnotatedElement(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::lang::annotation::Annotation* getAnnotation(java::lang::Class* arg1); // public abstract java.lang.annotation.Annotation java.lang.reflect.AnnotatedElement.getAnnotation(java.lang.Class)
    virtual bool isAnnotationPresent(java::lang::Class* arg1); // public abstract boolean java.lang.reflect.AnnotatedElement.isAnnotationPresent(java.lang.Class)
    virtual JavaObjectArray* getAnnotations(); // public abstract java.lang.annotation.Annotation[] java.lang.reflect.AnnotatedElement.getAnnotations()
    virtual JavaObjectArray* getDeclaredAnnotations(); // public abstract java.lang.annotation.Annotation[] java.lang.reflect.AnnotatedElement.getDeclaredAnnotations()

};
}
}
}
#endif
