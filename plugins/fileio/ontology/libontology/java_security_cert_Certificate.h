#ifndef java_security_cert_Certificate_H
#define java_security_cert_Certificate_H
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
namespace security {
class PublicKey;
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
namespace cert {
class Certificate : public java::lang::Object {
  public:
    Certificate(JavaMarker* dummy);
    Certificate(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool equals(java::lang::Object* arg1); // public boolean java.security.cert.Certificate.equals(java.lang.Object)
    virtual const char* toString(); // public abstract java.lang.String java.security.cert.Certificate.toString()
    virtual int hashCode(); // public int java.security.cert.Certificate.hashCode()
    virtual const char* getType(); // public final java.lang.String java.security.cert.Certificate.getType()
    virtual void verify(java::security::PublicKey* arg1); // public abstract void java.security.cert.Certificate.verify(java.security.PublicKey) throws java.security.cert.CertificateException,java.security.NoSuchAlgorithmException,java.security.InvalidKeyException,java.security.NoSuchProviderException,java.security.SignatureException
    virtual void verify(java::security::PublicKey* arg1, const char* arg2); // public abstract void java.security.cert.Certificate.verify(java.security.PublicKey,java.lang.String) throws java.security.cert.CertificateException,java.security.NoSuchAlgorithmException,java.security.InvalidKeyException,java.security.NoSuchProviderException,java.security.SignatureException
    virtual JavaByteArray* getEncoded(); // public abstract byte[] java.security.cert.Certificate.getEncoded() throws java.security.cert.CertificateEncodingException
    virtual java::security::PublicKey* getPublicKey(); // public abstract java.security.PublicKey java.security.cert.Certificate.getPublicKey()

};
}
}
}
#endif
