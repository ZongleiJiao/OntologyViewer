#ifndef java_lang_CharSequence_H
#define java_lang_CharSequence_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace lang {
class String;
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
class CharSequence : public java::lang::Object {
  public:
    CharSequence(JavaMarker* dummy);
    CharSequence(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual const char* toString(); // public abstract java.lang.String java.lang.CharSequence.toString()
    virtual int length(); // public abstract int java.lang.CharSequence.length()
    virtual char charAt(int arg1); // public abstract char java.lang.CharSequence.charAt(int)
    virtual java::lang::CharSequence* subSequence(int arg1, int arg2); // public abstract java.lang.CharSequence java.lang.CharSequence.subSequence(int,int)

};
}
}
#endif
