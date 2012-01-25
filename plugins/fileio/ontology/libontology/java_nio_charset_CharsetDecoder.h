#ifndef java_nio_charset_CharsetDecoder_H
#define java_nio_charset_CharsetDecoder_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace nio {
namespace charset {
class Charset;
}
}
}

namespace java {
namespace lang {
class String;
}
}

namespace java {
namespace nio {
namespace charset {
class CoderResult;
}
}
}

namespace java {
namespace nio {
class ByteBuffer;
}
}

namespace java {
namespace nio {
class CharBuffer;
}
}

namespace java {
namespace nio {
namespace charset {
class CodingErrorAction;
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
class CharsetDecoder : public java::lang::Object {
  public:
    CharsetDecoder(JavaMarker* dummy);
    CharsetDecoder(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::nio::charset::Charset* charset(); // public final java.nio.charset.Charset java.nio.charset.CharsetDecoder.charset()
    virtual const char* replacement(); // public final java.lang.String java.nio.charset.CharsetDecoder.replacement()
    virtual java::nio::charset::CoderResult* decode(java::nio::ByteBuffer* arg1, java::nio::CharBuffer* arg2, bool arg3); // public final java.nio.charset.CoderResult java.nio.charset.CharsetDecoder.decode(java.nio.ByteBuffer,java.nio.CharBuffer,boolean)
    virtual java::nio::CharBuffer* decode(java::nio::ByteBuffer* arg1); // public final java.nio.CharBuffer java.nio.charset.CharsetDecoder.decode(java.nio.ByteBuffer) throws java.nio.charset.CharacterCodingException
    virtual java::nio::charset::CoderResult* flush(java::nio::CharBuffer* arg1); // public final java.nio.charset.CoderResult java.nio.charset.CharsetDecoder.flush(java.nio.CharBuffer)
    virtual java::nio::charset::CharsetDecoder* reset(); // public final java.nio.charset.CharsetDecoder java.nio.charset.CharsetDecoder.reset()
    virtual java::nio::charset::CharsetDecoder* onMalformedInput(java::nio::charset::CodingErrorAction* arg1); // public final java.nio.charset.CharsetDecoder java.nio.charset.CharsetDecoder.onMalformedInput(java.nio.charset.CodingErrorAction)
    virtual java::nio::charset::CharsetDecoder* onUnmappableCharacter(java::nio::charset::CodingErrorAction* arg1); // public final java.nio.charset.CharsetDecoder java.nio.charset.CharsetDecoder.onUnmappableCharacter(java.nio.charset.CodingErrorAction)
    virtual float maxCharsPerByte(); // public final float java.nio.charset.CharsetDecoder.maxCharsPerByte()
    virtual float averageCharsPerByte(); // public final float java.nio.charset.CharsetDecoder.averageCharsPerByte()
    virtual java::nio::charset::CodingErrorAction* malformedInputAction(); // public java.nio.charset.CodingErrorAction java.nio.charset.CharsetDecoder.malformedInputAction()
    virtual java::nio::charset::CodingErrorAction* unmappableCharacterAction(); // public java.nio.charset.CodingErrorAction java.nio.charset.CharsetDecoder.unmappableCharacterAction()
    virtual java::nio::charset::CharsetDecoder* replaceWith(const char* arg1); // public final java.nio.charset.CharsetDecoder java.nio.charset.CharsetDecoder.replaceWith(java.lang.String)
    virtual bool isAutoDetecting(); // public boolean java.nio.charset.CharsetDecoder.isAutoDetecting()
    virtual bool isCharsetDetected(); // public boolean java.nio.charset.CharsetDecoder.isCharsetDetected()
    virtual java::nio::charset::Charset* detectedCharset(); // public java.nio.charset.Charset java.nio.charset.CharsetDecoder.detectedCharset()

};
}
}
}
#endif
