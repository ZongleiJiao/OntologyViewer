#ifndef java_lang_Package_H
#define java_lang_Package_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace lang {
namespace reflect {
class AnnotatedElement;
}
}
}

namespace java {
namespace lang {
class String;
}
}

namespace java {
namespace lang {
namespace annotation {
class Annotation;
}
}
}

namespace java {
namespace lang {
class Class;
}
}

namespace java {
namespace net {
class URL;
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
class Package : public java::lang::Object {
  public:
    Package(JavaMarker* dummy);
    Package(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual const char* toString(); // public java.lang.String java.lang.Package.toString()
    virtual int hashCode(); // public int java.lang.Package.hashCode()
    virtual const char* getName(); // public java.lang.String java.lang.Package.getName()
    virtual java::lang::Package* getPackage(const char* arg1); // public static java.lang.Package java.lang.Package.getPackage(java.lang.String)
    virtual java::lang::annotation::Annotation* getAnnotation(java::lang::Class* arg1); // public java.lang.annotation.Annotation java.lang.Package.getAnnotation(java.lang.Class)
    virtual bool isAnnotationPresent(java::lang::Class* arg1); // public boolean java.lang.Package.isAnnotationPresent(java.lang.Class)
    virtual JavaObjectArray* getAnnotations(); // public java.lang.annotation.Annotation[] java.lang.Package.getAnnotations()
    virtual JavaObjectArray* getDeclaredAnnotations(); // public java.lang.annotation.Annotation[] java.lang.Package.getDeclaredAnnotations()
    virtual JavaObjectArray* getPackages(); // public static java.lang.Package[] java.lang.Package.getPackages()
    virtual bool isSealed(); // public boolean java.lang.Package.isSealed()
    virtual bool isSealed(java::net::URL* arg1); // public boolean java.lang.Package.isSealed(java.net.URL)
    virtual bool isCompatibleWith(const char* arg1); // public boolean java.lang.Package.isCompatibleWith(java.lang.String) throws java.lang.NumberFormatException
    virtual const char* getSpecificationTitle(); // public java.lang.String java.lang.Package.getSpecificationTitle()
    virtual const char* getSpecificationVersion(); // public java.lang.String java.lang.Package.getSpecificationVersion()
    virtual const char* getSpecificationVendor(); // public java.lang.String java.lang.Package.getSpecificationVendor()
    virtual const char* getImplementationTitle(); // public java.lang.String java.lang.Package.getImplementationTitle()
    virtual const char* getImplementationVersion(); // public java.lang.String java.lang.Package.getImplementationVersion()
    virtual const char* getImplementationVendor(); // public java.lang.String java.lang.Package.getImplementationVendor()

};
}
}
#endif
