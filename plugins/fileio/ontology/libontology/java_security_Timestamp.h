#ifndef java_security_Timestamp_H
#define java_security_Timestamp_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace io {
class Serializable;
}
}

namespace java {
namespace util {
class Date;
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
class Timestamp : public java::lang::Object {
  public:
    Timestamp(JavaMarker* dummy);
    Timestamp(jobject obj);
    Timestamp(java::util::Date* arg1, java::security::cert::CertPath* arg2); // public java.security.Timestamp(java.util.Date,java.security.cert.CertPath)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool equals(java::lang::Object* arg1); // public boolean java.security.Timestamp.equals(java.lang.Object)
    virtual const char* toString(); // public java.lang.String java.security.Timestamp.toString()
    virtual int hashCode(); // public int java.security.Timestamp.hashCode()
    virtual java::security::cert::CertPath* getSignerCertPath(); // public java.security.cert.CertPath java.security.Timestamp.getSignerCertPath()
    virtual java::util::Date* getTimestamp(); // public java.util.Date java.security.Timestamp.getTimestamp()

};
}
}
#endif
