#ifndef java_util_Date_H
#define java_util_Date_H
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
class Cloneable;
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
namespace util {
class Date : public java::lang::Object {
  public:
    Date(JavaMarker* dummy);
    Date(jobject obj);
    Date(); // public java.util.Date()
    Date(long arg1); // public java.util.Date(long)
    Date(int arg1, int arg2, int arg3); // public java.util.Date(int,int,int)
    Date(int arg1, int arg2, int arg3, int arg4, int arg5); // public java.util.Date(int,int,int,int,int)
    Date(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6); // public java.util.Date(int,int,int,int,int,int)
    Date(const char* arg1); // public java.util.Date(java.lang.String)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool equals(java::lang::Object* arg1); // public boolean java.util.Date.equals(java.lang.Object)
    virtual const char* toString(); // public java.lang.String java.util.Date.toString()
    virtual int hashCode(); // public int java.util.Date.hashCode()
    virtual java::lang::Object* clone(); // public java.lang.Object java.util.Date.clone()
    virtual int compareTo(java::util::Date* arg1); // public int java.util.Date.compareTo(java.util.Date)
    virtual int compareTo(java::lang::Object* arg1); // public int java.util.Date.compareTo(java.lang.Object)
    virtual long parse(const char* arg1); // public static long java.util.Date.parse(java.lang.String)
    virtual bool after(java::util::Date* arg1); // public boolean java.util.Date.after(java.util.Date)
    virtual bool before(java::util::Date* arg1); // public boolean java.util.Date.before(java.util.Date)
    virtual void setTime(long arg1); // public void java.util.Date.setTime(long)
    virtual long getTime(); // public long java.util.Date.getTime()
    virtual int getYear(); // public int java.util.Date.getYear()
    virtual int getMonth(); // public int java.util.Date.getMonth()
    virtual int getDate(); // public int java.util.Date.getDate()
    virtual int getHours(); // public int java.util.Date.getHours()
    virtual int getMinutes(); // public int java.util.Date.getMinutes()
    virtual int getSeconds(); // public int java.util.Date.getSeconds()
    virtual long UTC(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6); // public static long java.util.Date.UTC(int,int,int,int,int,int)
    virtual void setYear(int arg1); // public void java.util.Date.setYear(int)
    virtual void setMonth(int arg1); // public void java.util.Date.setMonth(int)
    virtual void setDate(int arg1); // public void java.util.Date.setDate(int)
    virtual int getDay(); // public int java.util.Date.getDay()
    virtual void setHours(int arg1); // public void java.util.Date.setHours(int)
    virtual void setMinutes(int arg1); // public void java.util.Date.setMinutes(int)
    virtual void setSeconds(int arg1); // public void java.util.Date.setSeconds(int)
    virtual const char* toLocaleString(); // public java.lang.String java.util.Date.toLocaleString()
    virtual const char* toGMTString(); // public java.lang.String java.util.Date.toGMTString()
    virtual int getTimezoneOffset(); // public int java.util.Date.getTimezoneOffset()

};
}
}
#endif
