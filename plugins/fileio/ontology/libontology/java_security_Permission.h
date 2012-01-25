#ifndef java_security_Permission_H
#define java_security_Permission_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace security {
class Guard;
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

namespace java {
namespace security {
class PermissionCollection;
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
class Permission : public java::lang::Object {
  public:
    Permission(JavaMarker* dummy);
    Permission(jobject obj);
    Permission(const char* arg1); // public java.security.Permission(java.lang.String)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool equals(java::lang::Object* arg1); // public abstract boolean java.security.Permission.equals(java.lang.Object)
    virtual const char* toString(); // public java.lang.String java.security.Permission.toString()
    virtual int hashCode(); // public abstract int java.security.Permission.hashCode()
    virtual const char* getName(); // public final java.lang.String java.security.Permission.getName()
    virtual bool implies(java::security::Permission* arg1); // public abstract boolean java.security.Permission.implies(java.security.Permission)
    virtual const char* getActions(); // public abstract java.lang.String java.security.Permission.getActions()
    virtual java::security::PermissionCollection* newPermissionCollection(); // public java.security.PermissionCollection java.security.Permission.newPermissionCollection()
    virtual void checkGuard(java::lang::Object* arg1); // public void java.security.Permission.checkGuard(java.lang.Object) throws java.lang.SecurityException

};
}
}
#endif
