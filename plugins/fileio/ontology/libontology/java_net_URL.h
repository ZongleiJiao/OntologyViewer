#ifndef java_net_URL_H
#define java_net_URL_H
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
namespace net {
class URLStreamHandler;
}
}

namespace java {
namespace io {
class InputStream;
}
}

namespace java {
namespace net {
class URI;
}
}

namespace java {
namespace net {
class URLConnection;
}
}

namespace java {
namespace net {
class Proxy;
}
}

namespace java {
namespace lang {
class Class;
}
}

namespace java {
namespace net {
class URLStreamHandlerFactory;
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
class URL : public java::lang::Object {
  public:
    URL(JavaMarker* dummy);
    URL(jobject obj);
    URL(const char* arg1, const char* arg2, int arg3, const char* arg4); // public java.net.URL(java.lang.String,java.lang.String,int,java.lang.String) throws java.net.MalformedURLException
    URL(const char* arg1, const char* arg2, const char* arg3); // public java.net.URL(java.lang.String,java.lang.String,java.lang.String) throws java.net.MalformedURLException
    URL(const char* arg1, const char* arg2, int arg3, const char* arg4, java::net::URLStreamHandler* arg5); // public java.net.URL(java.lang.String,java.lang.String,int,java.lang.String,java.net.URLStreamHandler) throws java.net.MalformedURLException
    URL(const char* arg1); // public java.net.URL(java.lang.String) throws java.net.MalformedURLException
    URL(java::net::URL* arg1, const char* arg2); // public java.net.URL(java.net.URL,java.lang.String) throws java.net.MalformedURLException
    URL(java::net::URL* arg1, const char* arg2, java::net::URLStreamHandler* arg3); // public java.net.URL(java.net.URL,java.lang.String,java.net.URLStreamHandler) throws java.net.MalformedURLException

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool equals(java::lang::Object* arg1); // public boolean java.net.URL.equals(java.lang.Object)
    virtual const char* toString(); // public java.lang.String java.net.URL.toString()
    virtual int hashCode(); // public synchronized int java.net.URL.hashCode()
    virtual java::io::InputStream* openStream(); // public final java.io.InputStream java.net.URL.openStream() throws java.io.IOException
    virtual const char* getPath(); // public java.lang.String java.net.URL.getPath()
    virtual java::net::URI* toURI(); // public java.net.URI java.net.URL.toURI() throws java.net.URISyntaxException
    virtual const char* getAuthority(); // public java.lang.String java.net.URL.getAuthority()
    virtual const char* getQuery(); // public java.lang.String java.net.URL.getQuery()
    virtual java::net::URLConnection* openConnection(); // public java.net.URLConnection java.net.URL.openConnection() throws java.io.IOException
    virtual java::net::URLConnection* openConnection(java::net::Proxy* arg1); // public java.net.URLConnection java.net.URL.openConnection(java.net.Proxy) throws java.io.IOException
    virtual const char* getProtocol(); // public java.lang.String java.net.URL.getProtocol()
    virtual const char* getFile(); // public java.lang.String java.net.URL.getFile()
    virtual const char* getHost(); // public java.lang.String java.net.URL.getHost()
    virtual const char* getRef(); // public java.lang.String java.net.URL.getRef()
    virtual const char* getUserInfo(); // public java.lang.String java.net.URL.getUserInfo()
    virtual int getPort(); // public int java.net.URL.getPort()
    virtual int getDefaultPort(); // public int java.net.URL.getDefaultPort()
    virtual bool sameFile(java::net::URL* arg1); // public boolean java.net.URL.sameFile(java.net.URL)
    virtual const char* toExternalForm(); // public java.lang.String java.net.URL.toExternalForm()
    virtual java::lang::Object* getContent(); // public final java.lang.Object java.net.URL.getContent() throws java.io.IOException
    virtual java::lang::Object* getContent(JavaObjectArray* arg1); // public final java.lang.Object java.net.URL.getContent(java.lang.Class[]) throws java.io.IOException
    virtual void setURLStreamHandlerFactory(java::net::URLStreamHandlerFactory* arg1); // public static void java.net.URL.setURLStreamHandlerFactory(java.net.URLStreamHandlerFactory)

};
}
}
#endif
