#ifndef java_util_regex_Pattern_H
#define java_util_regex_Pattern_H
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
class String;
}
}

namespace java {
namespace lang {
class CharSequence;
}
}

namespace java {
namespace util {
namespace regex {
class Matcher;
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
namespace util {
namespace regex {
class Pattern : public java::lang::Object {
  public:
    Pattern(JavaMarker* dummy);
    Pattern(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual const char* toString(); // public java.lang.String java.util.regex.Pattern.toString()
    virtual int flags(); // public int java.util.regex.Pattern.flags()
    virtual bool matches(const char* arg1, java::lang::CharSequence* arg2); // public static boolean java.util.regex.Pattern.matches(java.lang.String,java.lang.CharSequence)
    virtual JavaObjectArray* split(java::lang::CharSequence* arg1, int arg2); // public java.lang.String[] java.util.regex.Pattern.split(java.lang.CharSequence,int)
    virtual JavaObjectArray* split(java::lang::CharSequence* arg1); // public java.lang.String[] java.util.regex.Pattern.split(java.lang.CharSequence)
    virtual java::util::regex::Pattern* compile(const char* arg1); // public static java.util.regex.Pattern java.util.regex.Pattern.compile(java.lang.String)
    virtual java::util::regex::Pattern* compile(const char* arg1, int arg2); // public static java.util.regex.Pattern java.util.regex.Pattern.compile(java.lang.String,int)
    virtual java::util::regex::Matcher* matcher(java::lang::CharSequence* arg1); // public java.util.regex.Matcher java.util.regex.Pattern.matcher(java.lang.CharSequence)
    virtual const char* pattern(); // public java.lang.String java.util.regex.Pattern.pattern()
    virtual const char* quote(const char* arg1); // public static java.lang.String java.util.regex.Pattern.quote(java.lang.String)

    int UNIX_LINES; // public static final int java.util.regex.Pattern.UNIX_LINES
    int CASE_INSENSITIVE; // public static final int java.util.regex.Pattern.CASE_INSENSITIVE
    int COMMENTS; // public static final int java.util.regex.Pattern.COMMENTS
    int MULTILINE; // public static final int java.util.regex.Pattern.MULTILINE
    int LITERAL; // public static final int java.util.regex.Pattern.LITERAL
    int DOTALL; // public static final int java.util.regex.Pattern.DOTALL
    int UNICODE_CASE; // public static final int java.util.regex.Pattern.UNICODE_CASE
    int CANON_EQ; // public static final int java.util.regex.Pattern.CANON_EQ
};
}
}
}
#endif
