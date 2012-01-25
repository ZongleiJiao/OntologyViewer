#ifndef java_lang_Object_H
#define java_lang_Object_H
#include <jni.h>
#include <java_marker.h>

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
#include <java_base_class.h>
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
class Object : public JavaBaseClass {
  public:
    Object(JavaMarker* dummy);
    Object(jobject obj);
    Object(); // public java.lang.Object()

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void wait(long arg1); // public final native void java.lang.Object.wait(long) throws java.lang.InterruptedException
    virtual void wait(long arg1, int arg2); // public final void java.lang.Object.wait(long,int) throws java.lang.InterruptedException
    virtual void wait(); // public final void java.lang.Object.wait() throws java.lang.InterruptedException
    virtual bool equals(java::lang::Object* arg1); // public boolean java.lang.Object.equals(java.lang.Object)
    virtual const char* toString(); // public java.lang.String java.lang.Object.toString()
    virtual int hashCode(); // public native int java.lang.Object.hashCode()
    virtual java::lang::Class* getClass(); // public final native java.lang.Class java.lang.Object.getClass()
    virtual void notify(); // public final native void java.lang.Object.notify()
    virtual void notifyAll(); // public final native void java.lang.Object.notifyAll()

};
}
}
#endif
