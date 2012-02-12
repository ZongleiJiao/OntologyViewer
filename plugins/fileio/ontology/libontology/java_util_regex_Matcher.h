#ifndef java_util_regex_Matcher_H
#define java_util_regex_Matcher_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace util {
namespace regex {
class MatchResult;
}
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
class Pattern;
}
}
}

namespace java {
namespace lang {
class StringBuffer;
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
class Matcher : public java::lang::Object {
  public:
    Matcher(JavaMarker* dummy);
    Matcher(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual const char* group(); // public java.lang.String java.util.regex.Matcher.group()
    virtual const char* group(int arg1); // public java.lang.String java.util.regex.Matcher.group(int)
    virtual const char* toString(); // public java.lang.String java.util.regex.Matcher.toString()
    virtual int end(); // public int java.util.regex.Matcher.end()
    virtual int end(int arg1); // public int java.util.regex.Matcher.end(int)
    virtual int start(); // public int java.util.regex.Matcher.start()
    virtual int start(int arg1); // public int java.util.regex.Matcher.start(int)
    virtual bool matches(); // public boolean java.util.regex.Matcher.matches()
    virtual const char* replaceFirst(const char* arg1); // public java.lang.String java.util.regex.Matcher.replaceFirst(java.lang.String)
    virtual const char* replaceAll(const char* arg1); // public java.lang.String java.util.regex.Matcher.replaceAll(java.lang.String)
    virtual const char* quoteReplacement(const char* arg1); // public static java.lang.String java.util.regex.Matcher.quoteReplacement(java.lang.String)
    virtual bool find(); // public boolean java.util.regex.Matcher.find()
    virtual bool find(int arg1); // public boolean java.util.regex.Matcher.find(int)
    virtual java::util::regex::Matcher* reset(); // public java.util.regex.Matcher java.util.regex.Matcher.reset()
    virtual java::util::regex::Matcher* reset(java::lang::CharSequence* arg1); // public java.util.regex.Matcher java.util.regex.Matcher.reset(java.lang.CharSequence)
    virtual java::util::regex::Pattern* pattern(); // public java.util.regex.Pattern java.util.regex.Matcher.pattern()
    virtual java::util::regex::Matcher* appendReplacement(java::lang::StringBuffer* arg1, const char* arg2); // public java.util.regex.Matcher java.util.regex.Matcher.appendReplacement(java.lang.StringBuffer,java.lang.String)
    virtual java::lang::StringBuffer* appendTail(java::lang::StringBuffer* arg1); // public java.lang.StringBuffer java.util.regex.Matcher.appendTail(java.lang.StringBuffer)
    virtual java::util::regex::Matcher* region(int arg1, int arg2); // public java.util.regex.Matcher java.util.regex.Matcher.region(int,int)
    virtual int groupCount(); // public int java.util.regex.Matcher.groupCount()
    virtual bool hitEnd(); // public boolean java.util.regex.Matcher.hitEnd()
    virtual bool requireEnd(); // public boolean java.util.regex.Matcher.requireEnd()
    virtual java::util::regex::MatchResult* toMatchResult(); // public java.util.regex.MatchResult java.util.regex.Matcher.toMatchResult()
    virtual java::util::regex::Matcher* usePattern(java::util::regex::Pattern* arg1); // public java.util.regex.Matcher java.util.regex.Matcher.usePattern(java.util.regex.Pattern)
    virtual bool lookingAt(); // public boolean java.util.regex.Matcher.lookingAt()
    virtual int regionStart(); // public int java.util.regex.Matcher.regionStart()
    virtual int regionEnd(); // public int java.util.regex.Matcher.regionEnd()
    virtual bool hasTransparentBounds(); // public boolean java.util.regex.Matcher.hasTransparentBounds()
    virtual java::util::regex::Matcher* useTransparentBounds(bool arg1); // public java.util.regex.Matcher java.util.regex.Matcher.useTransparentBounds(boolean)
    virtual bool hasAnchoringBounds(); // public boolean java.util.regex.Matcher.hasAnchoringBounds()
    virtual java::util::regex::Matcher* useAnchoringBounds(bool arg1); // public java.util.regex.Matcher java.util.regex.Matcher.useAnchoringBounds(boolean)

};
}
}
}
#endif
