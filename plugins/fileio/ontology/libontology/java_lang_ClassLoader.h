#ifndef java_lang_ClassLoader_H
#define java_lang_ClassLoader_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace lang {
class Class;
}
}

namespace java {
namespace lang {
class String;
}
}

namespace java {
namespace io {
class InputStream;
}
}

namespace java {
namespace net {
class URL;
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
namespace lang {
class ClassLoader : public java::lang::Object {
  public:
    ClassLoader(JavaMarker* dummy);
    ClassLoader(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::lang::Class* loadClass(const char* arg1); // public java.lang.Class java.lang.ClassLoader.loadClass(java.lang.String) throws java.lang.ClassNotFoundException
    virtual java::lang::ClassLoader* getSystemClassLoader(); // public static java.lang.ClassLoader java.lang.ClassLoader.getSystemClassLoader()
    virtual java::io::InputStream* getResourceAsStream(const char* arg1); // public java.io.InputStream java.lang.ClassLoader.getResourceAsStream(java.lang.String)
    virtual java::net::URL* getResource(const char* arg1); // public java.net.URL java.lang.ClassLoader.getResource(java.lang.String)
    virtual java::io::InputStream* getSystemResourceAsStream(const char* arg1); // public static java.io.InputStream java.lang.ClassLoader.getSystemResourceAsStream(java.lang.String)
    virtual java::net::URL* getSystemResource(const char* arg1); // public static java.net.URL java.lang.ClassLoader.getSystemResource(java.lang.String)
    virtual java::util::Enumeration* getResources(const char* arg1); // public java.util.Enumeration java.lang.ClassLoader.getResources(java.lang.String) throws java.io.IOException
    virtual java::util::Enumeration* getSystemResources(const char* arg1); // public static java.util.Enumeration java.lang.ClassLoader.getSystemResources(java.lang.String) throws java.io.IOException
    virtual java::lang::ClassLoader* getParent(); // public final java.lang.ClassLoader java.lang.ClassLoader.getParent()
    virtual void setDefaultAssertionStatus(bool arg1); // public synchronized void java.lang.ClassLoader.setDefaultAssertionStatus(boolean)
    virtual void setPackageAssertionStatus(const char* arg1, bool arg2); // public synchronized void java.lang.ClassLoader.setPackageAssertionStatus(java.lang.String,boolean)
    virtual void setClassAssertionStatus(const char* arg1, bool arg2); // public synchronized void java.lang.ClassLoader.setClassAssertionStatus(java.lang.String,boolean)
    virtual void clearAssertionStatus(); // public synchronized void java.lang.ClassLoader.clearAssertionStatus()

};
}
}
#endif
