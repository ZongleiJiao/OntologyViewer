#ifndef java_nio_charset_CodingErrorAction_H
#define java_nio_charset_CodingErrorAction_H
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
namespace nio {
namespace charset {
class CodingErrorAction : public java::lang::Object {
  public:
    CodingErrorAction(JavaMarker* dummy);
    CodingErrorAction(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual const char* toString(); // public java.lang.String java.nio.charset.CodingErrorAction.toString()

    java::nio::charset::CodingErrorAction* IGNORE; // public static final java.nio.charset.CodingErrorAction java.nio.charset.CodingErrorAction.IGNORE
    java::nio::charset::CodingErrorAction* REPLACE; // public static final java.nio.charset.CodingErrorAction java.nio.charset.CodingErrorAction.REPLACE
    java::nio::charset::CodingErrorAction* REPORT; // public static final java.nio.charset.CodingErrorAction java.nio.charset.CodingErrorAction.REPORT
};
}
}
}
#endif
