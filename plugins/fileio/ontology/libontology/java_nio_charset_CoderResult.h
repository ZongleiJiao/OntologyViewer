#ifndef java_nio_charset_CoderResult_H
#define java_nio_charset_CoderResult_H
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
class CoderResult : public java::lang::Object {
  public:
    CoderResult(JavaMarker* dummy);
    CoderResult(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual const char* toString(); // public java.lang.String java.nio.charset.CoderResult.toString()
    virtual int length(); // public int java.nio.charset.CoderResult.length()
    virtual void throwException(); // public void java.nio.charset.CoderResult.throwException() throws java.nio.charset.CharacterCodingException
    virtual bool isUnderflow(); // public boolean java.nio.charset.CoderResult.isUnderflow()
    virtual java::nio::charset::CoderResult* malformedForLength(int arg1); // public static java.nio.charset.CoderResult java.nio.charset.CoderResult.malformedForLength(int)
    virtual bool isOverflow(); // public boolean java.nio.charset.CoderResult.isOverflow()
    virtual bool isMalformed(); // public boolean java.nio.charset.CoderResult.isMalformed()
    virtual bool isUnmappable(); // public boolean java.nio.charset.CoderResult.isUnmappable()
    virtual bool isError(); // public boolean java.nio.charset.CoderResult.isError()
    virtual java::nio::charset::CoderResult* unmappableForLength(int arg1); // public static java.nio.charset.CoderResult java.nio.charset.CoderResult.unmappableForLength(int)

    java::nio::charset::CoderResult* UnderFLOW; // public static final java.nio.charset.CoderResult java.nio.charset.CoderResult.UNDERFLOW
    java::nio::charset::CoderResult* OverFLOW; // public static final java.nio.charset.CoderResult java.nio.charset.CoderResult.OVERFLOW
};
}
}
}
#endif
