#ifndef java_util_Locale_H
#define java_util_Locale_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace lang {
class Cloneable;
}
}

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
class Locale : public java::lang::Object {
  public:
    Locale(JavaMarker* dummy);
    Locale(jobject obj);
    Locale(const char* arg1, const char* arg2, const char* arg3); // public java.util.Locale(java.lang.String,java.lang.String,java.lang.String)
    Locale(const char* arg1, const char* arg2); // public java.util.Locale(java.lang.String,java.lang.String)
    Locale(const char* arg1); // public java.util.Locale(java.lang.String)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool equals(java::lang::Object* arg1); // public boolean java.util.Locale.equals(java.lang.Object)
    virtual const char* toString(); // public final java.lang.String java.util.Locale.toString()
    virtual int hashCode(); // public int java.util.Locale.hashCode()
    virtual java::lang::Object* clone(); // public java.lang.Object java.util.Locale.clone()
    virtual const char* getLanguage(); // public java.lang.String java.util.Locale.getLanguage()
    virtual java::util::Locale* getDefault(); // public static java.util.Locale java.util.Locale.getDefault()
    virtual void setDefault(java::util::Locale* arg1); // public static synchronized void java.util.Locale.setDefault(java.util.Locale)
    virtual JavaObjectArray* getAvailableLocales(); // public static java.util.Locale[] java.util.Locale.getAvailableLocales()
    virtual JavaObjectArray* getISOCountries(); // public static java.lang.String[] java.util.Locale.getISOCountries()
    virtual JavaObjectArray* getISOLanguages(); // public static java.lang.String[] java.util.Locale.getISOLanguages()
    virtual const char* getCountry(); // public java.lang.String java.util.Locale.getCountry()
    virtual const char* getVariant(); // public java.lang.String java.util.Locale.getVariant()
    virtual const char* getISO3Language(); // public java.lang.String java.util.Locale.getISO3Language() throws java.util.MissingResourceException
    virtual const char* getISO3Country(); // public java.lang.String java.util.Locale.getISO3Country() throws java.util.MissingResourceException
    virtual const char* getDisplayLanguage(); // public final java.lang.String java.util.Locale.getDisplayLanguage()
    virtual const char* getDisplayLanguage(java::util::Locale* arg1); // public java.lang.String java.util.Locale.getDisplayLanguage(java.util.Locale)
    virtual const char* getDisplayCountry(); // public final java.lang.String java.util.Locale.getDisplayCountry()
    virtual const char* getDisplayCountry(java::util::Locale* arg1); // public java.lang.String java.util.Locale.getDisplayCountry(java.util.Locale)
    virtual const char* getDisplayVariant(); // public final java.lang.String java.util.Locale.getDisplayVariant()
    virtual const char* getDisplayVariant(java::util::Locale* arg1); // public java.lang.String java.util.Locale.getDisplayVariant(java.util.Locale)
    virtual const char* getDisplayName(); // public final java.lang.String java.util.Locale.getDisplayName()
    virtual const char* getDisplayName(java::util::Locale* arg1); // public java.lang.String java.util.Locale.getDisplayName(java.util.Locale)

    java::util::Locale* ENGLISH; // public static final java.util.Locale java.util.Locale.ENGLISH
    java::util::Locale* FRENCH; // public static final java.util.Locale java.util.Locale.FRENCH
    java::util::Locale* GERMAN; // public static final java.util.Locale java.util.Locale.GERMAN
    java::util::Locale* ITALIAN; // public static final java.util.Locale java.util.Locale.ITALIAN
    java::util::Locale* JAPANESE; // public static final java.util.Locale java.util.Locale.JAPANESE
    java::util::Locale* KOREAN; // public static final java.util.Locale java.util.Locale.KOREAN
    java::util::Locale* CHINESE; // public static final java.util.Locale java.util.Locale.CHINESE
    java::util::Locale* SIMPLIFIED_CHINESE; // public static final java.util.Locale java.util.Locale.SIMPLIFIED_CHINESE
    java::util::Locale* TRADITIONAL_CHINESE; // public static final java.util.Locale java.util.Locale.TRADITIONAL_CHINESE
    java::util::Locale* FRANCE; // public static final java.util.Locale java.util.Locale.FRANCE
    java::util::Locale* GERMANY; // public static final java.util.Locale java.util.Locale.GERMANY
    java::util::Locale* ITALY; // public static final java.util.Locale java.util.Locale.ITALY
    java::util::Locale* JAPAN; // public static final java.util.Locale java.util.Locale.JAPAN
    java::util::Locale* KOREA; // public static final java.util.Locale java.util.Locale.KOREA
    java::util::Locale* CHINA; // public static final java.util.Locale java.util.Locale.CHINA
    java::util::Locale* PRC; // public static final java.util.Locale java.util.Locale.PRC
    java::util::Locale* TAIWAN; // public static final java.util.Locale java.util.Locale.TAIWAN
    java::util::Locale* UK; // public static final java.util.Locale java.util.Locale.UK
    java::util::Locale* US; // public static final java.util.Locale java.util.Locale.US
    java::util::Locale* CANADA; // public static final java.util.Locale java.util.Locale.CANADA
    java::util::Locale* CANADA_FRENCH; // public static final java.util.Locale java.util.Locale.CANADA_FRENCH
    java::util::Locale* ROOT; // public static final java.util.Locale java.util.Locale.ROOT
};
}
}
#endif
