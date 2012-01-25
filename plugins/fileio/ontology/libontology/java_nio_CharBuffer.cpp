#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_nio_CharBuffer.h>
#include <java_nio_Buffer.h>
#include <java_lang_Comparable.h>
#include <java_lang_Appendable.h>
#include <java_lang_CharSequence.h>
#include <java_lang_Readable.h>
#include <java_lang_String.h>
#include <java_lang_Object.h>
#include <java_nio_ByteOrder.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace nio {

CharBuffer::CharBuffer(JavaMarker* dummy)
  : java::nio::Buffer(dummy)
{
  updateAllVariables(wrapperIntern);
}

CharBuffer::CharBuffer(jobject obj)
  : java::nio::Buffer(obj)
{
  updateAllVariables(wrapperIntern);
}

void CharBuffer::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
}

void CharBuffer::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
}

char CharBuffer::get()
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "get", "()C");
  handleJavaException(wrapperIntern);
  jchar jresult=javaEnv->CallCharMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  char result = (char)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

char CharBuffer::get(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "get", "(I)C");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jchar jresult=javaEnv->CallCharMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  char result = (char)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::CharBuffer* CharBuffer::get(JavaCharArray* arg1, int arg2, int arg3)
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "get", "([CII)Ljava/nio/CharBuffer;");
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

java::nio::CharBuffer* CharBuffer::get(JavaCharArray* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "get", "([C)Ljava/nio/CharBuffer;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

java::nio::CharBuffer* CharBuffer::put(char arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "put", "(C)Ljava/nio/CharBuffer;");
  handleJavaException(wrapperIntern);
  jchar jarg1 = (jchar)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

java::nio::CharBuffer* CharBuffer::put(int arg1, char arg2)
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "put", "(IC)Ljava/nio/CharBuffer;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jchar jarg2 = (jchar)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
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

java::nio::CharBuffer* CharBuffer::put(java::nio::CharBuffer* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "put", "(Ljava/nio/CharBuffer;)Ljava/nio/CharBuffer;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

java::nio::CharBuffer* CharBuffer::put(JavaCharArray* arg1, int arg2, int arg3)
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "put", "([CII)Ljava/nio/CharBuffer;");
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

java::nio::CharBuffer* CharBuffer::put(JavaCharArray* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "put", "([C)Ljava/nio/CharBuffer;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

java::nio::CharBuffer* CharBuffer::put(const char* arg1, int arg2, int arg3)
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "put", "(Ljava/lang/String;II)Ljava/nio/CharBuffer;");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jint jarg2 = (jint)arg2;
  jint jarg3 = (jint)arg3;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
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

java::nio::CharBuffer* CharBuffer::put(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "put", "(Ljava/lang/String;)Ljava/nio/CharBuffer;");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
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

bool CharBuffer::equals(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
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

const char* CharBuffer::toString()
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
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

java::nio::CharBuffer* CharBuffer::append(java::lang::CharSequence* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/nio/CharBuffer;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

java::nio::CharBuffer* CharBuffer::append(java::lang::CharSequence* arg1, int arg2, int arg3)
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/nio/CharBuffer;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jint jarg2 = (jint)arg2;
  jint jarg3 = (jint)arg3;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3);
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

java::nio::CharBuffer* CharBuffer::append(char arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "(C)Ljava/nio/CharBuffer;");
  handleJavaException(wrapperIntern);
  jchar jarg1 = (jchar)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

int CharBuffer::hashCode()
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "hashCode", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int CharBuffer::compareTo(java::nio::CharBuffer* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "compareTo", "(Ljava/nio/CharBuffer;)I");
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

int CharBuffer::compareTo(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
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

int CharBuffer::length()
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "length", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

char CharBuffer::charAt(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "charAt", "(I)C");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jchar jresult=javaEnv->CallCharMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  char result = (char)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::CharSequence* CharBuffer::subSequence(int arg1, int arg2)
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "subSequence", "(II)Ljava/lang/CharSequence;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jint jarg2 = (jint)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  java::lang::CharSequence* result;
  if (jresult!=NULL) {
    result=new java::lang::CharSequence(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool CharBuffer::isDirect()
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isDirect", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool CharBuffer::hasArray()
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "hasArray", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

JavaCharArray* CharBuffer::array()
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "array", "()[C");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  JavaCharArray* result;
  if (jresult!=NULL) {
    result=new JavaCharArray((jarray)jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int CharBuffer::arrayOffset()
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "arrayOffset", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::CharBuffer* CharBuffer::wrap(JavaCharArray* arg1, int arg2, int arg3)
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "wrap", "([CII)Ljava/nio/CharBuffer;");
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

java::nio::CharBuffer* CharBuffer::wrap(JavaCharArray* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "wrap", "([C)Ljava/nio/CharBuffer;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid, jarg1);
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

java::nio::CharBuffer* CharBuffer::wrap(java::lang::CharSequence* arg1, int arg2, int arg3)
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "wrap", "(Ljava/lang/CharSequence;II)Ljava/nio/CharBuffer;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jint jarg2 = (jint)arg2;
  jint jarg3 = (jint)arg3;
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid, jarg1, jarg2, jarg3);
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

java::nio::CharBuffer* CharBuffer::wrap(java::lang::CharSequence* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "wrap", "(Ljava/lang/CharSequence;)Ljava/nio/CharBuffer;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid, jarg1);
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

java::nio::CharBuffer* CharBuffer::allocate(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "allocate", "(I)Ljava/nio/CharBuffer;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid, jarg1);
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

java::nio::CharBuffer* CharBuffer::slice()
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "slice", "()Ljava/nio/CharBuffer;");
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

java::nio::CharBuffer* CharBuffer::duplicate()
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "duplicate", "()Ljava/nio/CharBuffer;");
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

java::nio::CharBuffer* CharBuffer::asReadOnlyBuffer()
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "asReadOnlyBuffer", "()Ljava/nio/CharBuffer;");
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

java::nio::CharBuffer* CharBuffer::compact()
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "compact", "()Ljava/nio/CharBuffer;");
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

java::nio::ByteOrder* CharBuffer::order()
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
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

int CharBuffer::read(java::nio::CharBuffer* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/CharBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "read", "(Ljava/nio/CharBuffer;)I");
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
}
}
