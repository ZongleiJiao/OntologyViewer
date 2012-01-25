#ifndef java_net_URI_H
#define java_net_URI_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace lang {
class Comparable;
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
namespace net {
class URI : public java::lang::Object {
  public:
    URI(JavaMarker* dummy);
    URI(jobject obj);
    URI(const char* arg1); // public java.net.URI(java.lang.String) throws java.net.URISyntaxException
    URI(const char* arg1, const char* arg2, const char* arg3, int arg4, const char* arg5, const char* arg6, const char* arg7); // public java.net.URI(java.lang.String,java.lang.String,java.lang.String,int,java.lang.String,java.lang.String,java.lang.String) throws java.net.URISyntaxException
    URI(const char* arg1, const char* arg2, const char* arg3, const char* arg4, const char* arg5); // public java.net.URI(java.lang.String,java.lang.String,java.lang.String,java.lang.String,java.lang.String) throws java.net.URISyntaxException
    URI(const char* arg1, const char* arg2, const char* arg3, const char* arg4); // public java.net.URI(java.lang.String,java.lang.String,java.lang.String,java.lang.String) throws java.net.URISyntaxException
    URI(const char* arg1, const char* arg2, const char* arg3); // public java.net.URI(java.lang.String,java.lang.String,java.lang.String) throws java.net.URISyntaxException

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool equals(java::lang::Object* arg1); // public boolean java.net.URI.equals(java.lang.Object)
    virtual const char* toString(); // public java.lang.String java.net.URI.toString()
    virtual int hashCode(); // public int java.net.URI.hashCode()
    virtual int compareTo(java::net::URI* arg1); // public int java.net.URI.compareTo(java.net.URI)
    virtual int compareTo(java::lang::Object* arg1); // public int java.net.URI.compareTo(java.lang.Object)
    virtual java::net::URI* resolve(java::net::URI* arg1); // public java.net.URI java.net.URI.resolve(java.net.URI)
    virtual java::net::URI* resolve(const char* arg1); // public java.net.URI java.net.URI.resolve(java.lang.String)
    virtual bool isAbsolute(); // public boolean java.net.URI.isAbsolute()
    virtual java::net::URI* create(const char* arg1); // public static java.net.URI java.net.URI.create(java.lang.String)
    virtual const char* getPath(); // public java.lang.String java.net.URI.getPath()
    virtual java::net::URL* toURL(); // public java.net.URL java.net.URI.toURL() throws java.net.MalformedURLException
    virtual java::net::URI* normalize(); // public java.net.URI java.net.URI.normalize()
    virtual bool isOpaque(); // public boolean java.net.URI.isOpaque()
    virtual const char* getScheme(); // public java.lang.String java.net.URI.getScheme()
    virtual const char* getAuthority(); // public java.lang.String java.net.URI.getAuthority()
    virtual const char* getFragment(); // public java.lang.String java.net.URI.getFragment()
    virtual const char* getQuery(); // public java.lang.String java.net.URI.getQuery()
    virtual const char* getHost(); // public java.lang.String java.net.URI.getHost()
    virtual const char* getUserInfo(); // public java.lang.String java.net.URI.getUserInfo()
    virtual int getPort(); // public int java.net.URI.getPort()
    virtual java::net::URI* parseServerAuthority(); // public java.net.URI java.net.URI.parseServerAuthority() throws java.net.URISyntaxException
    virtual java::net::URI* relativize(java::net::URI* arg1); // public java.net.URI java.net.URI.relativize(java.net.URI)
    virtual const char* getRawSchemeSpecificPart(); // public java.lang.String java.net.URI.getRawSchemeSpecificPart()
    virtual const char* getSchemeSpecificPart(); // public java.lang.String java.net.URI.getSchemeSpecificPart()
    virtual const char* getRawAuthority(); // public java.lang.String java.net.URI.getRawAuthority()
    virtual const char* getRawUserInfo(); // public java.lang.String java.net.URI.getRawUserInfo()
    virtual const char* getRawPath(); // public java.lang.String java.net.URI.getRawPath()
    virtual const char* getRawQuery(); // public java.lang.String java.net.URI.getRawQuery()
    virtual const char* getRawFragment(); // public java.lang.String java.net.URI.getRawFragment()
    virtual const char* toASCIIString(); // public java.lang.String java.net.URI.toASCIIString()

};
}
}
#endif
