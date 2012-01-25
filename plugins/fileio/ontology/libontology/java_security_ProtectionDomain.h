#ifndef java_security_ProtectionDomain_H
#define java_security_ProtectionDomain_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace security {
class CodeSource;
}
}

namespace java {
namespace security {
class PermissionCollection;
}
}

namespace java {
namespace lang {
class ClassLoader;
}
}

namespace java {
namespace security {
class Principal;
}
}

namespace java {
namespace lang {
class String;
}
}

namespace java {
namespace security {
class Permission;
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
class ProtectionDomain : public java::lang::Object {
  public:
    ProtectionDomain(JavaMarker* dummy);
    ProtectionDomain(jobject obj);
    ProtectionDomain(java::security::CodeSource* arg1, java::security::PermissionCollection* arg2); // public java.security.ProtectionDomain(java.security.CodeSource,java.security.PermissionCollection)
    ProtectionDomain(java::security::CodeSource* arg1, java::security::PermissionCollection* arg2, java::lang::ClassLoader* arg3, JavaObjectArray* arg4); // public java.security.ProtectionDomain(java.security.CodeSource,java.security.PermissionCollection,java.lang.ClassLoader,java.security.Principal[])

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual const char* toString(); // public java.lang.String java.security.ProtectionDomain.toString()
    virtual java::lang::ClassLoader* getClassLoader(); // public final java.lang.ClassLoader java.security.ProtectionDomain.getClassLoader()
    virtual java::security::CodeSource* getCodeSource(); // public final java.security.CodeSource java.security.ProtectionDomain.getCodeSource()
    virtual JavaObjectArray* getPrincipals(); // public final java.security.Principal[] java.security.ProtectionDomain.getPrincipals()
    virtual java::security::PermissionCollection* getPermissions(); // public final java.security.PermissionCollection java.security.ProtectionDomain.getPermissions()
    virtual bool implies(java::security::Permission* arg1); // public boolean java.security.ProtectionDomain.implies(java.security.Permission)

};
}
}
#endif
