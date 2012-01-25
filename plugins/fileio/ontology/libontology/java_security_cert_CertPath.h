#ifndef java_security_cert_CertPath_H
#define java_security_cert_CertPath_H
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
namespace util {
class List;
}
}

namespace java {
namespace util {
class Iterator;
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
class CertPath : public java::lang::Object {
  public:
    CertPath(JavaMarker* dummy);
    CertPath(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool equals(java::lang::Object* arg1); // public boolean java.security.cert.CertPath.equals(java.lang.Object)
    virtual const char* toString(); // public java.lang.String java.security.cert.CertPath.toString()
    virtual int hashCode(); // public int java.security.cert.CertPath.hashCode()
    virtual java::util::List* getCertificates(); // public abstract java.util.List java.security.cert.CertPath.getCertificates()
    virtual const char* getType(); // public java.lang.String java.security.cert.CertPath.getType()
    virtual JavaByteArray* getEncoded(); // public abstract byte[] java.security.cert.CertPath.getEncoded() throws java.security.cert.CertificateEncodingException
    virtual JavaByteArray* getEncoded(const char* arg1); // public abstract byte[] java.security.cert.CertPath.getEncoded(java.lang.String) throws java.security.cert.CertificateEncodingException
    virtual java::util::Iterator* getEncodings(); // public abstract java.util.Iterator java.security.cert.CertPath.getEncodings()

};
}
}
}
#endif
