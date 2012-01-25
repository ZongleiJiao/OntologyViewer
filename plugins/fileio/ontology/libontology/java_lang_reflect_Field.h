#ifndef java_lang_reflect_Field_H
#define java_lang_reflect_Field_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_reflect_AccessibleObject.h>

namespace java {
namespace lang {
namespace reflect {
class Member;
}
}
}

namespace java {
namespace lang {
class Object;
}
}

namespace java {
namespace lang {
class String;
}
}

namespace java {
namespace lang {
class Class;
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
namespace reflect {
class Type;
}
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
namespace reflect {
class Field : public java::lang::reflect::AccessibleObject {
  public:
    Field(JavaMarker* dummy);
    Field(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::lang::Object* get(java::lang::Object* arg1); // public java.lang.Object java.lang.reflect.Field.get(java.lang.Object) throws java.lang.IllegalArgumentException,java.lang.IllegalAccessException
    virtual bool equals(java::lang::Object* arg1); // public boolean java.lang.reflect.Field.equals(java.lang.Object)
    virtual const char* toString(); // public java.lang.String java.lang.reflect.Field.toString()
    virtual int hashCode(); // public int java.lang.reflect.Field.hashCode()
    virtual int getModifiers(); // public int java.lang.reflect.Field.getModifiers()
    virtual bool getBoolean(java::lang::Object* arg1); // public boolean java.lang.reflect.Field.getBoolean(java.lang.Object) throws java.lang.IllegalArgumentException,java.lang.IllegalAccessException
    virtual char getByte(java::lang::Object* arg1); // public byte java.lang.reflect.Field.getByte(java.lang.Object) throws java.lang.IllegalArgumentException,java.lang.IllegalAccessException
    virtual short getShort(java::lang::Object* arg1); // public short java.lang.reflect.Field.getShort(java.lang.Object) throws java.lang.IllegalArgumentException,java.lang.IllegalAccessException
    virtual char getChar(java::lang::Object* arg1); // public char java.lang.reflect.Field.getChar(java.lang.Object) throws java.lang.IllegalArgumentException,java.lang.IllegalAccessException
    virtual int getInt(java::lang::Object* arg1); // public int java.lang.reflect.Field.getInt(java.lang.Object) throws java.lang.IllegalArgumentException,java.lang.IllegalAccessException
    virtual long getLong(java::lang::Object* arg1); // public long java.lang.reflect.Field.getLong(java.lang.Object) throws java.lang.IllegalArgumentException,java.lang.IllegalAccessException
    virtual float getFloat(java::lang::Object* arg1); // public float java.lang.reflect.Field.getFloat(java.lang.Object) throws java.lang.IllegalArgumentException,java.lang.IllegalAccessException
    virtual double getDouble(java::lang::Object* arg1); // public double java.lang.reflect.Field.getDouble(java.lang.Object) throws java.lang.IllegalArgumentException,java.lang.IllegalAccessException
    virtual const char* getName(); // public java.lang.String java.lang.reflect.Field.getName()
    virtual bool isSynthetic(); // public boolean java.lang.reflect.Field.isSynthetic()
    virtual java::lang::Class* getDeclaringClass(); // public java.lang.Class java.lang.reflect.Field.getDeclaringClass()
    virtual java::lang::annotation::Annotation* getAnnotation(java::lang::Class* arg1); // public java.lang.annotation.Annotation java.lang.reflect.Field.getAnnotation(java.lang.Class)
    virtual JavaObjectArray* getDeclaredAnnotations(); // public java.lang.annotation.Annotation[] java.lang.reflect.Field.getDeclaredAnnotations()
    virtual bool isEnumConstant(); // public boolean java.lang.reflect.Field.isEnumConstant()
    virtual java::lang::Class* getType(); // public java.lang.Class java.lang.reflect.Field.getType()
    virtual java::lang::reflect::Type* getGenericType(); // public java.lang.reflect.Type java.lang.reflect.Field.getGenericType()
    virtual const char* toGenericString(); // public java.lang.String java.lang.reflect.Field.toGenericString()
    virtual void set(java::lang::Object* arg1, java::lang::Object* arg2); // public void java.lang.reflect.Field.set(java.lang.Object,java.lang.Object) throws java.lang.IllegalArgumentException,java.lang.IllegalAccessException
    virtual void setBoolean(java::lang::Object* arg1, bool arg2); // public void java.lang.reflect.Field.setBoolean(java.lang.Object,boolean) throws java.lang.IllegalArgumentException,java.lang.IllegalAccessException
    virtual void setByte(java::lang::Object* arg1, char arg2); // public void java.lang.reflect.Field.setByte(java.lang.Object,byte) throws java.lang.IllegalArgumentException,java.lang.IllegalAccessException
    virtual void setChar(java::lang::Object* arg1, char arg2); // public void java.lang.reflect.Field.setChar(java.lang.Object,char) throws java.lang.IllegalArgumentException,java.lang.IllegalAccessException
    virtual void setShort(java::lang::Object* arg1, short arg2); // public void java.lang.reflect.Field.setShort(java.lang.Object,short) throws java.lang.IllegalArgumentException,java.lang.IllegalAccessException
    virtual void setInt(java::lang::Object* arg1, int arg2); // public void java.lang.reflect.Field.setInt(java.lang.Object,int) throws java.lang.IllegalArgumentException,java.lang.IllegalAccessException
    virtual void setLong(java::lang::Object* arg1, long arg2); // public void java.lang.reflect.Field.setLong(java.lang.Object,long) throws java.lang.IllegalArgumentException,java.lang.IllegalAccessException
    virtual void setFloat(java::lang::Object* arg1, float arg2); // public void java.lang.reflect.Field.setFloat(java.lang.Object,float) throws java.lang.IllegalArgumentException,java.lang.IllegalAccessException
    virtual void setDouble(java::lang::Object* arg1, double arg2); // public void java.lang.reflect.Field.setDouble(java.lang.Object,double) throws java.lang.IllegalArgumentException,java.lang.IllegalAccessException

};
}
}
}
#endif
