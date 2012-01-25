#ifndef java_security_CodeSigner_H
#define java_security_CodeSigner_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace io {
class Serializable;
}
}

namespace java {
namespace security {
namespace cert {
class CertPath;
}
}
}

namespace java {
namespace security {
class Timestamp;
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
class CodeSigner : public java::lang::Object {
  public:
    CodeSigner(JavaMarker* dummy);
    CodeSigner(jobject obj);
    CodeSigner(java::security::cert::CertPath* arg1, java::security::Timestamp* arg2); // public java.security.CodeSigner(java.security.cert.CertPath,java.security.Timestamp)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool equals(java::lang::Object* arg1); // public boolean java.security.CodeSigner.equals(java.lang.Object)
    virtual const char* toString(); // public java.lang.String java.security.CodeSigner.toString()
    virtual int hashCode(); // public int java.security.CodeSigner.hashCode()
    virtual java::security::cert::CertPath* getSignerCertPath(); // public java.security.cert.CertPath java.security.CodeSigner.getSignerCertPath()
    virtual java::security::Timestamp* getTimestamp(); // public java.security.Timestamp java.security.CodeSigner.getTimestamp()

};
}
}
#endif
