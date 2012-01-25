#ifndef java_net_URLConnection_H
#define java_net_URLConnection_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

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

namespace java {
namespace security {
class Permission;
}
}

namespace java {
namespace lang {
class Class;
}
}

namespace java {
namespace io {
class InputStream;
}
}

namespace java {
namespace net {
class FileNameMap;
}
}

namespace java {
namespace util {
class Map;
}
}

namespace java {
namespace io {
class OutputStream;
}
}

namespace java {
namespace net {
class ContentHandlerFactory;
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
class URLConnection : public java::lang::Object {
  public:
    URLConnection(JavaMarker* dummy);
    URLConnection(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual const char* toString(); // public java.lang.String java.net.URLConnection.toString()
    virtual java::net::URL* getURL(); // public java.net.URL java.net.URLConnection.getURL()
    virtual java::security::Permission* getPermission(); // public java.security.Permission java.net.URLConnection.getPermission() throws java.io.IOException
    virtual java::lang::Object* getContent(); // public java.lang.Object java.net.URLConnection.getContent() throws java.io.IOException
    virtual java::lang::Object* getContent(JavaObjectArray* arg1); // public java.lang.Object java.net.URLConnection.getContent(java.lang.Class[]) throws java.io.IOException
    virtual java::io::InputStream* getInputStream(); // public java.io.InputStream java.net.URLConnection.getInputStream() throws java.io.IOException
    virtual void connect(); // public abstract void java.net.URLConnection.connect() throws java.io.IOException
    virtual void setRequestProperty(const char* arg1, const char* arg2); // public void java.net.URLConnection.setRequestProperty(java.lang.String,java.lang.String)
    virtual long getDate(); // public long java.net.URLConnection.getDate()
    virtual int getContentLength(); // public int java.net.URLConnection.getContentLength()
    virtual const char* getHeaderField(const char* arg1); // public java.lang.String java.net.URLConnection.getHeaderField(java.lang.String)
    virtual const char* getHeaderField(int arg1); // public java.lang.String java.net.URLConnection.getHeaderField(int)
    virtual const char* getHeaderFieldKey(int arg1); // public java.lang.String java.net.URLConnection.getHeaderFieldKey(int)
    virtual long getLastModified(); // public long java.net.URLConnection.getLastModified()
    virtual java::net::FileNameMap* getFileNameMap(); // public static synchronized java.net.FileNameMap java.net.URLConnection.getFileNameMap()
    virtual void addRequestProperty(const char* arg1, const char* arg2); // public void java.net.URLConnection.addRequestProperty(java.lang.String,java.lang.String)
    virtual const char* getRequestProperty(const char* arg1); // public java.lang.String java.net.URLConnection.getRequestProperty(java.lang.String)
    virtual java::util::Map* getRequestProperties(); // public java.util.Map java.net.URLConnection.getRequestProperties()
    virtual const char* getContentType(); // public java.lang.String java.net.URLConnection.getContentType()
    virtual const char* guessContentTypeFromStream(java::io::InputStream* arg1); // public static java.lang.String java.net.URLConnection.guessContentTypeFromStream(java.io.InputStream) throws java.io.IOException
    virtual const char* guessContentTypeFromName(const char* arg1); // public static java.lang.String java.net.URLConnection.guessContentTypeFromName(java.lang.String)
    virtual void setFileNameMap(java::net::FileNameMap* arg1); // public static void java.net.URLConnection.setFileNameMap(java.net.FileNameMap)
    virtual void setConnectTimeout(int arg1); // public void java.net.URLConnection.setConnectTimeout(int)
    virtual int getConnectTimeout(); // public int java.net.URLConnection.getConnectTimeout()
    virtual void setReadTimeout(int arg1); // public void java.net.URLConnection.setReadTimeout(int)
    virtual int getReadTimeout(); // public int java.net.URLConnection.getReadTimeout()
    virtual const char* getContentEncoding(); // public java.lang.String java.net.URLConnection.getContentEncoding()
    virtual long getExpiration(); // public long java.net.URLConnection.getExpiration()
    virtual java::util::Map* getHeaderFields(); // public java.util.Map java.net.URLConnection.getHeaderFields()
    virtual int getHeaderFieldInt(const char* arg1, int arg2); // public int java.net.URLConnection.getHeaderFieldInt(java.lang.String,int)
    virtual long getHeaderFieldDate(const char* arg1, long arg2); // public long java.net.URLConnection.getHeaderFieldDate(java.lang.String,long)
    virtual java::io::OutputStream* getOutputStream(); // public java.io.OutputStream java.net.URLConnection.getOutputStream() throws java.io.IOException
    virtual void setDoInput(bool arg1); // public void java.net.URLConnection.setDoInput(boolean)
    virtual bool getDoInput(); // public boolean java.net.URLConnection.getDoInput()
    virtual void setDoOutput(bool arg1); // public void java.net.URLConnection.setDoOutput(boolean)
    virtual bool getDoOutput(); // public boolean java.net.URLConnection.getDoOutput()
    virtual void setAllowUserInteraction(bool arg1); // public void java.net.URLConnection.setAllowUserInteraction(boolean)
    virtual bool getAllowUserInteraction(); // public boolean java.net.URLConnection.getAllowUserInteraction()
    virtual void setDefaultAllowUserInteraction(bool arg1); // public static void java.net.URLConnection.setDefaultAllowUserInteraction(boolean)
    virtual bool getDefaultAllowUserInteraction(); // public static boolean java.net.URLConnection.getDefaultAllowUserInteraction()
    virtual void setUseCaches(bool arg1); // public void java.net.URLConnection.setUseCaches(boolean)
    virtual bool getUseCaches(); // public boolean java.net.URLConnection.getUseCaches()
    virtual void setIfModifiedSince(long arg1); // public void java.net.URLConnection.setIfModifiedSince(long)
    virtual long getIfModifiedSince(); // public long java.net.URLConnection.getIfModifiedSince()
    virtual bool getDefaultUseCaches(); // public boolean java.net.URLConnection.getDefaultUseCaches()
    virtual void setDefaultUseCaches(bool arg1); // public void java.net.URLConnection.setDefaultUseCaches(boolean)
    virtual void setDefaultRequestProperty(const char* arg1, const char* arg2); // public static void java.net.URLConnection.setDefaultRequestProperty(java.lang.String,java.lang.String)
    virtual const char* getDefaultRequestProperty(const char* arg1); // public static java.lang.String java.net.URLConnection.getDefaultRequestProperty(java.lang.String)
    virtual void setContentHandlerFactory(java::net::ContentHandlerFactory* arg1); // public static synchronized void java.net.URLConnection.setContentHandlerFactory(java.net.ContentHandlerFactory)

};
}
}
#endif
