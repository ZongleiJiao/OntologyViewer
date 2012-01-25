#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_nio_ByteBuffer.h>
#include <java_nio_Buffer.h>
#include <java_lang_Comparable.h>
#include <java_lang_Object.h>
#include <java_lang_String.h>
#include <java_nio_ByteOrder.h>
#include <java_nio_CharBuffer.h>
#include <java_nio_ShortBuffer.h>
#include <java_nio_IntBuffer.h>
#include <java_nio_LongBuffer.h>
#include <java_nio_FloatBuffer.h>
#include <java_nio_DoubleBuffer.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace nio {

ByteBuffer::ByteBuffer(JavaMarker* dummy)
  : java::nio::Buffer(dummy)
{
  updateAllVariables(wrapperIntern);
}

ByteBuffer::ByteBuffer(jobject obj)
  : java::nio::Buffer(obj)
{
  updateAllVariables(wrapperIntern);
}

void ByteBuffer::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
}

void ByteBuffer::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
}

char ByteBuffer::get()
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "get", "()B");
  handleJavaException(wrapperIntern);
  jbyte jresult=javaEnv->CallByteMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  char result = (char)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

char ByteBuffer::get(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "get", "(I)B");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jbyte jresult=javaEnv->CallByteMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  char result = (char)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteBuffer* ByteBuffer::get(JavaByteArray* arg1, int arg2, int arg3)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "get", "([BII)Ljava/nio/ByteBuffer;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jint jarg2 = (jint)arg2;
  jint jarg3 = (jint)arg3;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3);
  handleJavaException(wrapperIntern);
  java::nio::ByteBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteBuffer* ByteBuffer::get(JavaByteArray* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "get", "([B)Ljava/nio/ByteBuffer;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::nio::ByteBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteBuffer* ByteBuffer::put(char arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "put", "(B)Ljava/nio/ByteBuffer;");
  handleJavaException(wrapperIntern);
  jbyte jarg1 = (jbyte)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::nio::ByteBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteBuffer* ByteBuffer::put(int arg1, char arg2)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "put", "(IB)Ljava/nio/ByteBuffer;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jbyte jarg2 = (jbyte)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  java::nio::ByteBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteBuffer* ByteBuffer::put(java::nio::ByteBuffer* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "put", "(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::nio::ByteBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteBuffer* ByteBuffer::put(JavaByteArray* arg1, int arg2, int arg3)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "put", "([BII)Ljava/nio/ByteBuffer;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jint jarg2 = (jint)arg2;
  jint jarg3 = (jint)arg3;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3);
  handleJavaException(wrapperIntern);
  java::nio::ByteBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteBuffer* ByteBuffer::put(JavaByteArray* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "put", "([B)Ljava/nio/ByteBuffer;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::nio::ByteBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool ByteBuffer::equals(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

const char* ByteBuffer::toString()
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "toString", "()Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  char* result;
  if (jresult!=NULL) {
    const char*  jresult_bytes = javaEnv->GetStringUTFChars((jstring)jresult,NULL);
    handleJavaException(wrapperIntern);
    jsize        jresult_size = javaEnv->GetStringUTFLength((jstring)jresult);
    handleJavaException(wrapperIntern);
                 result = new char[jresult_size+1];
    for (int i=0;i<jresult_size;i++) {
      result[i] = jresult_bytes[i];
    }
    result[jresult_size]=0;
    javaEnv->ReleaseStringUTFChars((jstring)jresult, jresult_bytes);
    handleJavaException(wrapperIntern);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int ByteBuffer::hashCode()
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "hashCode", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int ByteBuffer::compareTo(java::nio::ByteBuffer* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "compareTo", "(Ljava/nio/ByteBuffer;)I");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int ByteBuffer::compareTo(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "compareTo", "(Ljava/lang/Object;)I");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

short ByteBuffer::getShort()
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getShort", "()S");
  handleJavaException(wrapperIntern);
  jshort jresult=javaEnv->CallShortMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  short result = (short)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

short ByteBuffer::getShort(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getShort", "(I)S");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jshort jresult=javaEnv->CallShortMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  short result = (short)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteBuffer* ByteBuffer::putShort(short arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "putShort", "(S)Ljava/nio/ByteBuffer;");
  handleJavaException(wrapperIntern);
  jshort jarg1 = (jshort)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::nio::ByteBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteBuffer* ByteBuffer::putShort(int arg1, short arg2)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "putShort", "(IS)Ljava/nio/ByteBuffer;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jshort jarg2 = (jshort)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  java::nio::ByteBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

char ByteBuffer::getChar()
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getChar", "()C");
  handleJavaException(wrapperIntern);
  jchar jresult=javaEnv->CallCharMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  char result = (char)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

char ByteBuffer::getChar(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getChar", "(I)C");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jchar jresult=javaEnv->CallCharMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  char result = (char)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteBuffer* ByteBuffer::putChar(char arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "putChar", "(C)Ljava/nio/ByteBuffer;");
  handleJavaException(wrapperIntern);
  jchar jarg1 = (jchar)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::nio::ByteBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteBuffer* ByteBuffer::putChar(int arg1, char arg2)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "putChar", "(IC)Ljava/nio/ByteBuffer;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jchar jarg2 = (jchar)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  java::nio::ByteBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int ByteBuffer::getInt()
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getInt", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int ByteBuffer::getInt(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getInt", "(I)I");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteBuffer* ByteBuffer::putInt(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "putInt", "(I)Ljava/nio/ByteBuffer;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::nio::ByteBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteBuffer* ByteBuffer::putInt(int arg1, int arg2)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "putInt", "(II)Ljava/nio/ByteBuffer;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jint jarg2 = (jint)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  java::nio::ByteBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

long ByteBuffer::getLong()
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getLong", "()J");
  handleJavaException(wrapperIntern);
  jlong jresult=javaEnv->CallLongMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  long result = (long)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

long ByteBuffer::getLong(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getLong", "(I)J");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jlong jresult=javaEnv->CallLongMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  long result = (long)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteBuffer* ByteBuffer::putLong(long arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "putLong", "(J)Ljava/nio/ByteBuffer;");
  handleJavaException(wrapperIntern);
  jlong jarg1 = (jlong)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::nio::ByteBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteBuffer* ByteBuffer::putLong(int arg1, long arg2)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "putLong", "(IJ)Ljava/nio/ByteBuffer;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jlong jarg2 = (jlong)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  java::nio::ByteBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

float ByteBuffer::getFloat()
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getFloat", "()F");
  handleJavaException(wrapperIntern);
  jdouble jresult=javaEnv->CallFloatMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  float result = (float)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

float ByteBuffer::getFloat(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getFloat", "(I)F");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jdouble jresult=javaEnv->CallFloatMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  float result = (float)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteBuffer* ByteBuffer::putFloat(float arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "putFloat", "(F)Ljava/nio/ByteBuffer;");
  handleJavaException(wrapperIntern);
  jfloat jarg1 = (jfloat)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::nio::ByteBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteBuffer* ByteBuffer::putFloat(int arg1, float arg2)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "putFloat", "(IF)Ljava/nio/ByteBuffer;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jfloat jarg2 = (jfloat)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  java::nio::ByteBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

double ByteBuffer::getDouble()
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getDouble", "()D");
  handleJavaException(wrapperIntern);
  jdouble jresult=javaEnv->CallDoubleMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  double result = (double)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

double ByteBuffer::getDouble(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getDouble", "(I)D");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jdouble jresult=javaEnv->CallDoubleMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  double result = (double)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteBuffer* ByteBuffer::putDouble(double arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "putDouble", "(D)Ljava/nio/ByteBuffer;");
  handleJavaException(wrapperIntern);
  jdouble jarg1 = (jdouble)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::nio::ByteBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteBuffer* ByteBuffer::putDouble(int arg1, double arg2)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "putDouble", "(ID)Ljava/nio/ByteBuffer;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jdouble jarg2 = (jdouble)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  java::nio::ByteBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool ByteBuffer::isDirect()
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isDirect", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool ByteBuffer::hasArray()
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "hasArray", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

JavaByteArray* ByteBuffer::array()
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "array", "()[B");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  JavaByteArray* result;
  if (jresult!=NULL) {
    result=new JavaByteArray((jarray)jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int ByteBuffer::arrayOffset()
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "arrayOffset", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteBuffer* ByteBuffer::wrap(JavaByteArray* arg1, int arg2, int arg3)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "wrap", "([BII)Ljava/nio/ByteBuffer;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jint jarg2 = (jint)arg2;
  jint jarg3 = (jint)arg3;
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid, jarg1, jarg2, jarg3);
  handleJavaException(wrapperIntern);
  java::nio::ByteBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteBuffer* ByteBuffer::wrap(JavaByteArray* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "wrap", "([B)Ljava/nio/ByteBuffer;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid, jarg1);
  handleJavaException(wrapperIntern);
  java::nio::ByteBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteBuffer* ByteBuffer::allocate(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "allocate", "(I)Ljava/nio/ByteBuffer;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid, jarg1);
  handleJavaException(wrapperIntern);
  java::nio::ByteBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteBuffer* ByteBuffer::allocateDirect(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "allocateDirect", "(I)Ljava/nio/ByteBuffer;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid, jarg1);
  handleJavaException(wrapperIntern);
  java::nio::ByteBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteBuffer* ByteBuffer::slice()
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "slice", "()Ljava/nio/ByteBuffer;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::nio::ByteBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteBuffer* ByteBuffer::duplicate()
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "duplicate", "()Ljava/nio/ByteBuffer;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::nio::ByteBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteBuffer* ByteBuffer::asReadOnlyBuffer()
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "asReadOnlyBuffer", "()Ljava/nio/ByteBuffer;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::nio::ByteBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteBuffer* ByteBuffer::compact()
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "compact", "()Ljava/nio/ByteBuffer;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::nio::ByteBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteOrder* ByteBuffer::order()
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "order", "()Ljava/nio/ByteOrder;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::nio::ByteOrder* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteOrder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteBuffer* ByteBuffer::order(java::nio::ByteOrder* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "order", "(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::nio::ByteBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::CharBuffer* ByteBuffer::asCharBuffer()
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "asCharBuffer", "()Ljava/nio/CharBuffer;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::nio::CharBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::CharBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ShortBuffer* ByteBuffer::asShortBuffer()
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "asShortBuffer", "()Ljava/nio/ShortBuffer;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::nio::ShortBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ShortBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::IntBuffer* ByteBuffer::asIntBuffer()
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "asIntBuffer", "()Ljava/nio/IntBuffer;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::nio::IntBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::IntBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::LongBuffer* ByteBuffer::asLongBuffer()
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "asLongBuffer", "()Ljava/nio/LongBuffer;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::nio::LongBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::LongBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::FloatBuffer* ByteBuffer::asFloatBuffer()
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "asFloatBuffer", "()Ljava/nio/FloatBuffer;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::nio::FloatBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::FloatBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::DoubleBuffer* ByteBuffer::asDoubleBuffer()
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "asDoubleBuffer", "()Ljava/nio/DoubleBuffer;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::nio::DoubleBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::DoubleBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
