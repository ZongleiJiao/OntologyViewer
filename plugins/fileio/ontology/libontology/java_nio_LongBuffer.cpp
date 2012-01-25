#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_nio_LongBuffer.h>
#include <java_nio_Buffer.h>
#include <java_lang_Comparable.h>
#include <java_lang_Object.h>
#include <java_lang_String.h>
#include <java_nio_ByteOrder.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace nio {

LongBuffer::LongBuffer(JavaMarker* dummy)
  : java::nio::Buffer(dummy)
{
  updateAllVariables(wrapperIntern);
}

LongBuffer::LongBuffer(jobject obj)
  : java::nio::Buffer(obj)
{
  updateAllVariables(wrapperIntern);
}

void LongBuffer::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/nio/LongBuffer");
  handleJavaException(wrapperIntern);
}

void LongBuffer::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/nio/LongBuffer");
  handleJavaException(wrapperIntern);
}

long LongBuffer::get()
{
  jclass    cls = javaEnv->FindClass("java/nio/LongBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "get", "()J");
  handleJavaException(wrapperIntern);
  jlong jresult=javaEnv->CallLongMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  long result = (long)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

long LongBuffer::get(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/LongBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "get", "(I)J");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jlong jresult=javaEnv->CallLongMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  long result = (long)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::LongBuffer* LongBuffer::get(JavaLongArray* arg1, int arg2, int arg3)
{
  jclass    cls = javaEnv->FindClass("java/nio/LongBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "get", "([JII)Ljava/nio/LongBuffer;");
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

java::nio::LongBuffer* LongBuffer::get(JavaLongArray* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/LongBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "get", "([J)Ljava/nio/LongBuffer;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

java::nio::LongBuffer* LongBuffer::put(long arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/LongBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "put", "(J)Ljava/nio/LongBuffer;");
  handleJavaException(wrapperIntern);
  jlong jarg1 = (jlong)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

java::nio::LongBuffer* LongBuffer::put(int arg1, long arg2)
{
  jclass    cls = javaEnv->FindClass("java/nio/LongBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "put", "(IJ)Ljava/nio/LongBuffer;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jlong jarg2 = (jlong)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
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

java::nio::LongBuffer* LongBuffer::put(java::nio::LongBuffer* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/LongBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "put", "(Ljava/nio/LongBuffer;)Ljava/nio/LongBuffer;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

java::nio::LongBuffer* LongBuffer::put(JavaLongArray* arg1, int arg2, int arg3)
{
  jclass    cls = javaEnv->FindClass("java/nio/LongBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "put", "([JII)Ljava/nio/LongBuffer;");
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

java::nio::LongBuffer* LongBuffer::put(JavaLongArray* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/LongBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "put", "([J)Ljava/nio/LongBuffer;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

bool LongBuffer::equals(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/LongBuffer");
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

const char* LongBuffer::toString()
{
  jclass    cls = javaEnv->FindClass("java/nio/LongBuffer");
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

int LongBuffer::hashCode()
{
  jclass    cls = javaEnv->FindClass("java/nio/LongBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "hashCode", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int LongBuffer::compareTo(java::nio::LongBuffer* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/LongBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "compareTo", "(Ljava/nio/LongBuffer;)I");
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

int LongBuffer::compareTo(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/LongBuffer");
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

bool LongBuffer::isDirect()
{
  jclass    cls = javaEnv->FindClass("java/nio/LongBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isDirect", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool LongBuffer::hasArray()
{
  jclass    cls = javaEnv->FindClass("java/nio/LongBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "hasArray", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

JavaLongArray* LongBuffer::array()
{
  jclass    cls = javaEnv->FindClass("java/nio/LongBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "array", "()[J");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  JavaLongArray* result;
  if (jresult!=NULL) {
    result=new JavaLongArray((jarray)jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int LongBuffer::arrayOffset()
{
  jclass    cls = javaEnv->FindClass("java/nio/LongBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "arrayOffset", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::LongBuffer* LongBuffer::wrap(JavaLongArray* arg1, int arg2, int arg3)
{
  jclass    cls = javaEnv->FindClass("java/nio/LongBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "wrap", "([JII)Ljava/nio/LongBuffer;");
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

java::nio::LongBuffer* LongBuffer::wrap(JavaLongArray* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/LongBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "wrap", "([J)Ljava/nio/LongBuffer;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid, jarg1);
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

java::nio::LongBuffer* LongBuffer::allocate(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/LongBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "allocate", "(I)Ljava/nio/LongBuffer;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid, jarg1);
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

java::nio::LongBuffer* LongBuffer::slice()
{
  jclass    cls = javaEnv->FindClass("java/nio/LongBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "slice", "()Ljava/nio/LongBuffer;");
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

java::nio::LongBuffer* LongBuffer::duplicate()
{
  jclass    cls = javaEnv->FindClass("java/nio/LongBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "duplicate", "()Ljava/nio/LongBuffer;");
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

java::nio::LongBuffer* LongBuffer::asReadOnlyBuffer()
{
  jclass    cls = javaEnv->FindClass("java/nio/LongBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "asReadOnlyBuffer", "()Ljava/nio/LongBuffer;");
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

java::nio::LongBuffer* LongBuffer::compact()
{
  jclass    cls = javaEnv->FindClass("java/nio/LongBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "compact", "()Ljava/nio/LongBuffer;");
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

java::nio::ByteOrder* LongBuffer::order()
{
  jclass    cls = javaEnv->FindClass("java/nio/LongBuffer");
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
