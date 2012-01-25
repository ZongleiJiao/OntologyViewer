#ifndef java_security_CodeSource_H
#define java_security_CodeSource_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace io {
class Serializable;
}
}

namespace java {
namespace net {
class URL;
}
}

namespace java {
namespace security {
namespace cert {
class Certificate;
}
}
}

namespace java {
namespace security {
class CodeSigner;
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
namespace security {
class CodeSource : public java::lang::Object {
  public:
    CodeSource(JavaMarker* dummy);
    CodeSource(jobject obj);
    CodeSource(java::net::URL* arg1, JavaObjectArray* arg2); // public java.security.CodeSource(java.net.URL,java.security.cert.Certificate[])

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool equals(java::lang::Object* arg1); // public boolean java.security.CodeSource.equals(java.lang.Object)
    virtual const char* toString(); // public java.lang.String java.security.CodeSource.toString()
    virtual int hashCode(); // public int java.security.CodeSource.hashCode()
    virtual java::net::URL* getLocation(); // public final java.net.URL java.security.CodeSource.getLocation()
    virtual JavaObjectArray* getCertificates(); // public final java.security.cert.Certificate[] java.security.CodeSource.getCertificates()
    virtual bool implies(java::security::CodeSource* arg1); // public boolean java.security.CodeSource.implies(java.security.CodeSource)
    virtual JavaObjectArray* getCodeSigners(); // public final java.security.CodeSigner[] java.security.CodeSource.getCodeSigners()

};
}
}
#endif
