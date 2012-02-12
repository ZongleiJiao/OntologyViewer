#ifndef java_util_regex_MatchResult_H
#define java_util_regex_MatchResult_H
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
namespace util {
namespace regex {
class MatchResult : public java::lang::Object {
  public:
    MatchResult(JavaMarker* dummy);
    MatchResult(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual const char* group(); // public abstract java.lang.String java.util.regex.MatchResult.group()
    virtual const char* group(int arg1); // public abstract java.lang.String java.util.regex.MatchResult.group(int)
    virtual int end(); // public abstract int java.util.regex.MatchResult.end()
    virtual int end(int arg1); // public abstract int java.util.regex.MatchResult.end(int)
    virtual int start(); // public abstract int java.util.regex.MatchResult.start()
    virtual int start(int arg1); // public abstract int java.util.regex.MatchResult.start(int)
    virtual int groupCount(); // public abstract int java.util.regex.MatchResult.groupCount()

};
}
}
}
#endif
