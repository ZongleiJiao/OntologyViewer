#ifndef java_lang_Appendable_H
#define java_lang_Appendable_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace lang {
class CharSequence;
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
class Appendable : public java::lang::Object {
  public:
    Appendable(JavaMarker* dummy);
    Appendable(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::lang::Appendable* append(java::lang::CharSequence* arg1); // public abstract java.lang.Appendable java.lang.Appendable.append(java.lang.CharSequence) throws java.io.IOException
    virtual java::lang::Appendable* append(java::lang::CharSequence* arg1, int arg2, int arg3); // public abstract java.lang.Appendable java.lang.Appendable.append(java.lang.CharSequence,int,int) throws java.io.IOException
    virtual java::lang::Appendable* append(char arg1); // public abstract java.lang.Appendable java.lang.Appendable.append(char) throws java.io.IOException

};
}
}
#endif
