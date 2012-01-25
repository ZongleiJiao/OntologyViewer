#ifndef java_nio_charset_Charset_H
#define java_nio_charset_Charset_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace lang {
class Comparable;
}
}

namespace java {
namespace lang {
class String;
}
}

namespace java {
namespace nio {
class CharBuffer;
}
}

namespace java {
namespace nio {
class ByteBuffer;
}
}

namespace java {
namespace util {
class Set;
}
}

namespace java {
namespace util {
class SortedMap;
}
}

namespace java {
namespace util {
class Locale;
}
}

namespace java {
namespace nio {
namespace charset {
class CharsetDecoder;
}
}
}

namespace java {
namespace nio {
namespace charset {
class CharsetEncoder;
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
namespace nio {
namespace charset {
class Charset : public java::lang::Object {
  public:
    Charset(JavaMarker* dummy);
    Charset(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual const char* name(); // public final java.lang.String java.nio.charset.Charset.name()
    virtual java::nio::charset::Charset* forName(const char* arg1); // public static java.nio.charset.Charset java.nio.charset.Charset.forName(java.lang.String)
    virtual bool equals(java::lang::Object* arg1); // public final boolean java.nio.charset.Charset.equals(java.lang.Object)
    virtual const char* toString(); // public final java.lang.String java.nio.charset.Charset.toString()
    virtual int hashCode(); // public final int java.nio.charset.Charset.hashCode()
    virtual int compareTo(java::nio::charset::Charset* arg1); // public final int java.nio.charset.Charset.compareTo(java.nio.charset.Charset)
    virtual int compareTo(java::lang::Object* arg1); // public int java.nio.charset.Charset.compareTo(java.lang.Object)
    virtual bool contains(java::nio::charset::Charset* arg1); // public abstract boolean java.nio.charset.Charset.contains(java.nio.charset.Charset)
    virtual java::nio::CharBuffer* decode(java::nio::ByteBuffer* arg1); // public final java.nio.CharBuffer java.nio.charset.Charset.decode(java.nio.ByteBuffer)
    virtual java::nio::ByteBuffer* encode(java::nio::CharBuffer* arg1); // public final java.nio.ByteBuffer java.nio.charset.Charset.encode(java.nio.CharBuffer)
    virtual java::nio::ByteBuffer* encode(const char* arg1); // public final java.nio.ByteBuffer java.nio.charset.Charset.encode(java.lang.String)
    virtual java::nio::charset::Charset* defaultCharset(); // public static java.nio.charset.Charset java.nio.charset.Charset.defaultCharset()
    virtual java::util::Set* aliases(); // public final java.util.Set java.nio.charset.Charset.aliases()
    virtual bool isSupported(const char* arg1); // public static boolean java.nio.charset.Charset.isSupported(java.lang.String)
    virtual java::util::SortedMap* availableCharsets(); // public static java.util.SortedMap java.nio.charset.Charset.availableCharsets()
    virtual const char* displayName(); // public java.lang.String java.nio.charset.Charset.displayName()
    virtual const char* displayName(java::util::Locale* arg1); // public java.lang.String java.nio.charset.Charset.displayName(java.util.Locale)
    virtual bool isRegistered(); // public final boolean java.nio.charset.Charset.isRegistered()
    virtual java::nio::charset::CharsetDecoder* newDecoder(); // public abstract java.nio.charset.CharsetDecoder java.nio.charset.Charset.newDecoder()
    virtual java::nio::charset::CharsetEncoder* newEncoder(); // public abstract java.nio.charset.CharsetEncoder java.nio.charset.Charset.newEncoder()
    virtual bool canEncode(); // public boolean java.nio.charset.Charset.canEncode()

};
}
}
}
#endif
