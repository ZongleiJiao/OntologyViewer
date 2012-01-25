#ifndef java_nio_charset_CharsetEncoder_H
#define java_nio_charset_CharsetEncoder_H
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
namespace nio {
namespace charset {
class CoderResult;
}
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
namespace lang {
class CharSequence;
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
class CharsetEncoder : public java::lang::Object {
  public:
    CharsetEncoder(JavaMarker* dummy);
    CharsetEncoder(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::nio::charset::Charset* charset(); // public final java.nio.charset.Charset java.nio.charset.CharsetEncoder.charset()
    virtual JavaByteArray* replacement(); // public final byte[] java.nio.charset.CharsetEncoder.replacement()
    virtual java::nio::charset::CoderResult* encode(java::nio::CharBuffer* arg1, java::nio::ByteBuffer* arg2, bool arg3); // public final java.nio.charset.CoderResult java.nio.charset.CharsetEncoder.encode(java.nio.CharBuffer,java.nio.ByteBuffer,boolean)
    virtual java::nio::ByteBuffer* encode(java::nio::CharBuffer* arg1); // public final java.nio.ByteBuffer java.nio.charset.CharsetEncoder.encode(java.nio.CharBuffer) throws java.nio.charset.CharacterCodingException
    virtual java::nio::charset::CoderResult* flush(java::nio::ByteBuffer* arg1); // public final java.nio.charset.CoderResult java.nio.charset.CharsetEncoder.flush(java.nio.ByteBuffer)
    virtual java::nio::charset::CharsetEncoder* reset(); // public final java.nio.charset.CharsetEncoder java.nio.charset.CharsetEncoder.reset()
    virtual bool canEncode(char arg1); // public boolean java.nio.charset.CharsetEncoder.canEncode(char)
    virtual bool canEncode(java::lang::CharSequence* arg1); // public boolean java.nio.charset.CharsetEncoder.canEncode(java.lang.CharSequence)
    virtual java::nio::charset::CharsetEncoder* onMalformedInput(java::nio::charset::CodingErrorAction* arg1); // public final java.nio.charset.CharsetEncoder java.nio.charset.CharsetEncoder.onMalformedInput(java.nio.charset.CodingErrorAction)
    virtual java::nio::charset::CharsetEncoder* onUnmappableCharacter(java::nio::charset::CodingErrorAction* arg1); // public final java.nio.charset.CharsetEncoder java.nio.charset.CharsetEncoder.onUnmappableCharacter(java.nio.charset.CodingErrorAction)
    virtual java::nio::charset::CodingErrorAction* malformedInputAction(); // public java.nio.charset.CodingErrorAction java.nio.charset.CharsetEncoder.malformedInputAction()
    virtual java::nio::charset::CodingErrorAction* unmappableCharacterAction(); // public java.nio.charset.CodingErrorAction java.nio.charset.CharsetEncoder.unmappableCharacterAction()
    virtual java::nio::charset::CharsetEncoder* replaceWith(JavaByteArray* arg1); // public final java.nio.charset.CharsetEncoder java.nio.charset.CharsetEncoder.replaceWith(byte[])
    virtual bool isLegalReplacement(JavaByteArray* arg1); // public boolean java.nio.charset.CharsetEncoder.isLegalReplacement(byte[])
    virtual float averageBytesPerChar(); // public final float java.nio.charset.CharsetEncoder.averageBytesPerChar()
    virtual float maxBytesPerChar(); // public final float java.nio.charset.CharsetEncoder.maxBytesPerChar()

};
}
}
}
#endif
