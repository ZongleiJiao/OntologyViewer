#ifndef java_security_PermissionCollection_H
#define java_security_PermissionCollection_H
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
class Permission;
}
}

namespace java {
namespace lang {
class String;
}
}

namespace java {
namespace util {
class Enumeration;
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
class PermissionCollection : public java::lang::Object {
  public:
    PermissionCollection(JavaMarker* dummy);
    PermissionCollection(jobject obj);
    PermissionCollection(); // public java.security.PermissionCollection()

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void add(java::security::Permission* arg1); // public abstract void java.security.PermissionCollection.add(java.security.Permission)
    virtual const char* toString(); // public java.lang.String java.security.PermissionCollection.toString()
    virtual bool implies(java::security::Permission* arg1); // public abstract boolean java.security.PermissionCollection.implies(java.security.Permission)
    virtual void setReadOnly(); // public void java.security.PermissionCollection.setReadOnly()
    virtual java::util::Enumeration* elements(); // public abstract java.util.Enumeration java.security.PermissionCollection.elements()
    virtual bool isReadOnly(); // public boolean java.security.PermissionCollection.isReadOnly()

};
}
}
#endif
