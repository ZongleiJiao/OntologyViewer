#ifndef java_lang_annotation_Annotation_H
#define java_lang_annotation_Annotation_H
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
namespace annotation {
class Annotation : public java::lang::Object {
  public:
    Annotation(JavaMarker* dummy);
    Annotation(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool equals(java::lang::Object* arg1); // public abstract boolean java.lang.annotation.Annotation.equals(java.lang.Object)
    virtual const char* toString(); // public abstract java.lang.String java.lang.annotation.Annotation.toString()
    virtual int hashCode(); // public abstract int java.lang.annotation.Annotation.hashCode()
    virtual java::lang::Class* annotationType(); // public abstract java.lang.Class java.lang.annotation.Annotation.annotationType()

};
}
}
}
#endif
