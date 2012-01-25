#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_nio_ShortBuffer.h>
#include <java_nio_Buffer.h>
#include <java_lang_Comparable.h>
#include <java_lang_Object.h>
#include <java_lang_String.h>
#include <java_nio_ByteOrder.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace nio {

ShortBuffer::ShortBuffer(JavaMarker* dummy)
  : java::nio::Buffer(dummy)
{
  updateAllVariables(wrapperIntern);
}

ShortBuffer::ShortBuffer(jobject obj)
  : java::nio::Buffer(obj)
{
  updateAllVariables(wrapperIntern);
}

void ShortBuffer::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/nio/ShortBuffer");
  handleJavaException(wrapperIntern);
}

void ShortBuffer::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/nio/ShortBuffer");
  handleJavaException(wrapperIntern);
}

short ShortBuffer::get()
{
  jclass    cls = javaEnv->FindClass("java/nio/ShortBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "get", "()S");
  handleJavaException(wrapperIntern);
  jshort jresult=javaEnv->CallShortMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  short result = (short)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

short ShortBuffer::get(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ShortBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "get", "(I)S");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jshort jresult=javaEnv->CallShortMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  short result = (short)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ShortBuffer* ShortBuffer::get(JavaShortArray* arg1, int arg2, int arg3)
{
  jclass    cls = javaEnv->FindClass("java/nio/ShortBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "get", "([SII)Ljava/nio/ShortBuffer;");
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

java::nio::ShortBuffer* ShortBuffer::get(JavaShortArray* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ShortBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "get", "([S)Ljava/nio/ShortBuffer;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

java::nio::ShortBuffer* ShortBuffer::put(short arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ShortBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "put", "(S)Ljava/nio/ShortBuffer;");
  handleJavaException(wrapperIntern);
  jshort jarg1 = (jshort)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

java::nio::ShortBuffer* ShortBuffer::put(int arg1, short arg2)
{
  jclass    cls = javaEnv->FindClass("java/nio/ShortBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "put", "(IS)Ljava/nio/ShortBuffer;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jshort jarg2 = (jshort)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
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

java::nio::ShortBuffer* ShortBuffer::put(java::nio::ShortBuffer* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ShortBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "put", "(Ljava/nio/ShortBuffer;)Ljava/nio/ShortBuffer;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

java::nio::ShortBuffer* ShortBuffer::put(JavaShortArray* arg1, int arg2, int arg3)
{
  jclass    cls = javaEnv->FindClass("java/nio/ShortBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "put", "([SII)Ljava/nio/ShortBuffer;");
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

java::nio::ShortBuffer* ShortBuffer::put(JavaShortArray* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ShortBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "put", "([S)Ljava/nio/ShortBuffer;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

bool ShortBuffer::equals(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ShortBuffer");
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

const char* ShortBuffer::toString()
{
  jclass    cls = javaEnv->FindClass("java/nio/ShortBuffer");
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

int ShortBuffer::hashCode()
{
  jclass    cls = javaEnv->FindClass("java/nio/ShortBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "hashCode", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int ShortBuffer::compareTo(java::nio::ShortBuffer* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ShortBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "compareTo", "(Ljava/nio/ShortBuffer;)I");
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

int ShortBuffer::compareTo(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ShortBuffer");
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

bool ShortBuffer::isDirect()
{
  jclass    cls = javaEnv->FindClass("java/nio/ShortBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isDirect", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool ShortBuffer::hasArray()
{
  jclass    cls = javaEnv->FindClass("java/nio/ShortBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "hasArray", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

JavaShortArray* ShortBuffer::array()
{
  jclass    cls = javaEnv->FindClass("java/nio/ShortBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "array", "()[S");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  JavaShortArray* result;
  if (jresult!=NULL) {
    result=new JavaShortArray((jarray)jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int ShortBuffer::arrayOffset()
{
  jclass    cls = javaEnv->FindClass("java/nio/ShortBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "arrayOffset", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ShortBuffer* ShortBuffer::wrap(JavaShortArray* arg1, int arg2, int arg3)
{
  jclass    cls = javaEnv->FindClass("java/nio/ShortBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "wrap", "([SII)Ljava/nio/ShortBuffer;");
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

java::nio::ShortBuffer* ShortBuffer::wrap(JavaShortArray* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ShortBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "wrap", "([S)Ljava/nio/ShortBuffer;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid, jarg1);
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

java::nio::ShortBuffer* ShortBuffer::allocate(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/ShortBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "allocate", "(I)Ljava/nio/ShortBuffer;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid, jarg1);
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

java::nio::ShortBuffer* ShortBuffer::slice()
{
  jclass    cls = javaEnv->FindClass("java/nio/ShortBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "slice", "()Ljava/nio/ShortBuffer;");
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

java::nio::ShortBuffer* ShortBuffer::duplicate()
{
  jclass    cls = javaEnv->FindClass("java/nio/ShortBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "duplicate", "()Ljava/nio/ShortBuffer;");
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

java::nio::ShortBuffer* ShortBuffer::asReadOnlyBuffer()
{
  jclass    cls = javaEnv->FindClass("java/nio/ShortBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "asReadOnlyBuffer", "()Ljava/nio/ShortBuffer;");
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

java::nio::ShortBuffer* ShortBuffer::compact()
{
  jclass    cls = javaEnv->FindClass("java/nio/ShortBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "compact", "()Ljava/nio/ShortBuffer;");
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

java::nio::ByteOrder* ShortBuffer::order()
{
  jclass    cls = javaEnv->FindClass("java/nio/ShortBuffer");
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
}
}
