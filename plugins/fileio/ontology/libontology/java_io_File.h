#ifndef java_io_File_H
#define java_io_File_H
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
class Comparable;
}
}

namespace java {
namespace lang {
class String;
}
}

namespace java {
namespace net {
class URI;
}
}

namespace java {
namespace io {
class FilenameFilter;
}
}

namespace java {
namespace net {
class URL;
}
}

namespace java {
namespace io {
class FileFilter;
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
namespace io {
class File : public java::lang::Object {
  public:
    File(JavaMarker* dummy);
    File(jobject obj);
    File(const char* arg1); // public java.io.File(java.lang.String)
    File(const char* arg1, const char* arg2); // public java.io.File(java.lang.String,java.lang.String)
    File(java::io::File* arg1, const char* arg2); // public java.io.File(java.io.File,java.lang.String)
    File(java::net::URI* arg1); // public java.io.File(java.net.URI)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool equals(java::lang::Object* arg1); // public boolean java.io.File.equals(java.lang.Object)
    virtual const char* toString(); // public java.lang.String java.io.File.toString()
    virtual int hashCode(); // public int java.io.File.hashCode()
    virtual int compareTo(java::io::File* arg1); // public int java.io.File.compareTo(java.io.File)
    virtual int compareTo(java::lang::Object* arg1); // public int java.io.File.compareTo(java.lang.Object)
    virtual const char* getName(); // public java.lang.String java.io.File.getName()
    virtual long length(); // public long java.io.File.length()
    virtual const char* getParent(); // public java.lang.String java.io.File.getParent()
    virtual bool isAbsolute(); // public boolean java.io.File.isAbsolute()
    virtual bool exists(); // public boolean java.io.File.exists()
    virtual const char* getCanonicalPath(); // public java.lang.String java.io.File.getCanonicalPath() throws java.io.IOException
    virtual bool setReadOnly(); // public boolean java.io.File.setReadOnly()
    virtual JavaObjectArray* list(); // public java.lang.String[] java.io.File.list()
    virtual JavaObjectArray* list(java::io::FilenameFilter* arg1); // public java.lang.String[] java.io.File.list(java.io.FilenameFilter)
    virtual bool delete_(); // public boolean java.io.File.delete()
    virtual const char* getPath(); // public java.lang.String java.io.File.getPath()
    virtual java::io::File* getParentFile(); // public java.io.File java.io.File.getParentFile()
    virtual const char* getAbsolutePath(); // public java.lang.String java.io.File.getAbsolutePath()
    virtual java::io::File* getAbsoluteFile(); // public java.io.File java.io.File.getAbsoluteFile()
    virtual java::io::File* getCanonicalFile(); // public java.io.File java.io.File.getCanonicalFile() throws java.io.IOException
    virtual bool isDirectory(); // public boolean java.io.File.isDirectory()
    virtual java::net::URL* toURL(); // public java.net.URL java.io.File.toURL() throws java.net.MalformedURLException
    virtual java::net::URI* toURI(); // public java.net.URI java.io.File.toURI()
    virtual bool canRead(); // public boolean java.io.File.canRead()
    virtual bool canWrite(); // public boolean java.io.File.canWrite()
    virtual bool isFile(); // public boolean java.io.File.isFile()
    virtual bool isHidden(); // public boolean java.io.File.isHidden()
    virtual long lastModified(); // public long java.io.File.lastModified()
    virtual bool createNewFile(); // public boolean java.io.File.createNewFile() throws java.io.IOException
    virtual void deleteOnExit(); // public void java.io.File.deleteOnExit()
    virtual JavaObjectArray* listFiles(); // public java.io.File[] java.io.File.listFiles()
    virtual JavaObjectArray* listFiles(java::io::FilenameFilter* arg1); // public java.io.File[] java.io.File.listFiles(java.io.FilenameFilter)
    virtual JavaObjectArray* listFiles(java::io::FileFilter* arg1); // public java.io.File[] java.io.File.listFiles(java.io.FileFilter)
    virtual bool mkdir(); // public boolean java.io.File.mkdir()
    virtual bool mkdirs(); // public boolean java.io.File.mkdirs()
    virtual bool renameTo(java::io::File* arg1); // public boolean java.io.File.renameTo(java.io.File)
    virtual bool setLastModified(long arg1); // public boolean java.io.File.setLastModified(long)
    virtual bool setWritable(bool arg1, bool arg2); // public boolean java.io.File.setWritable(boolean,boolean)
    virtual bool setWritable(bool arg1); // public boolean java.io.File.setWritable(boolean)
    virtual bool setReadable(bool arg1, bool arg2); // public boolean java.io.File.setReadable(boolean,boolean)
    virtual bool setReadable(bool arg1); // public boolean java.io.File.setReadable(boolean)
    virtual bool setExecutable(bool arg1, bool arg2); // public boolean java.io.File.setExecutable(boolean,boolean)
    virtual bool setExecutable(bool arg1); // public boolean java.io.File.setExecutable(boolean)
    virtual bool canExecute(); // public boolean java.io.File.canExecute()
    virtual JavaObjectArray* listRoots(); // public static java.io.File[] java.io.File.listRoots()
    virtual long getTotalSpace(); // public long java.io.File.getTotalSpace()
    virtual long getFreeSpace(); // public long java.io.File.getFreeSpace()
    virtual long getUsableSpace(); // public long java.io.File.getUsableSpace()
    virtual java::io::File* createTempFile(const char* arg1, const char* arg2, java::io::File* arg3); // public static java.io.File java.io.File.createTempFile(java.lang.String,java.lang.String,java.io.File) throws java.io.IOException
    virtual java::io::File* createTempFile(const char* arg1, const char* arg2); // public static java.io.File java.io.File.createTempFile(java.lang.String,java.lang.String) throws java.io.IOException

    char separatorChar; // public static final char java.io.File.separatorChar
    const char* separator; // public static final java.lang.String java.io.File.separator
    char pathSeparatorChar; // public static final char java.io.File.pathSeparatorChar
    const char* pathSeparator; // public static final java.lang.String java.io.File.pathSeparator
};
}
}
#endif
