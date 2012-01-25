#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_nio_FloatBuffer.h>
#include <java_nio_Buffer.h>
#include <java_lang_Comparable.h>
#include <java_lang_Object.h>
#include <java_lang_String.h>
#include <java_nio_ByteOrder.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace nio {

FloatBuffer::FloatBuffer(JavaMarker* dummy)
  : java::nio::Buffer(dummy)
{
  updateAllVariables(wrapperIntern);
}

FloatBuffer::FloatBuffer(jobject obj)
  : java::nio::Buffer(obj)
{
  updateAllVariables(wrapperIntern);
}

void FloatBuffer::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/nio/FloatBuffer");
  handleJavaException(wrapperIntern);
}

void FloatBuffer::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/nio/FloatBuffer");
  handleJavaException(wrapperIntern);
}

float FloatBuffer::get()
{
  jclass    cls = javaEnv->FindClass("java/nio/FloatBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "get", "()F");
  handleJavaException(wrapperIntern);
  jdouble jresult=javaEnv->CallFloatMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  float result = (float)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

float FloatBuffer::get(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/FloatBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "get", "(I)F");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jdouble jresult=javaEnv->CallFloatMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  float result = (float)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::FloatBuffer* FloatBuffer::get(JavaFloatArray* arg1, int arg2, int arg3)
{
  jclass    cls = javaEnv->FindClass("java/nio/FloatBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "get", "([FII)Ljava/nio/FloatBuffer;");
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

java::nio::FloatBuffer* FloatBuffer::get(JavaFloatArray* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/FloatBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "get", "([F)Ljava/nio/FloatBuffer;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

java::nio::FloatBuffer* FloatBuffer::put(float arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/FloatBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "put", "(F)Ljava/nio/FloatBuffer;");
  handleJavaException(wrapperIntern);
  jfloat jarg1 = (jfloat)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

java::nio::FloatBuffer* FloatBuffer::put(int arg1, float arg2)
{
  jclass    cls = javaEnv->FindClass("java/nio/FloatBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "put", "(IF)Ljava/nio/FloatBuffer;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jfloat jarg2 = (jfloat)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
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

java::nio::FloatBuffer* FloatBuffer::put(java::nio::FloatBuffer* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/FloatBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "put", "(Ljava/nio/FloatBuffer;)Ljava/nio/FloatBuffer;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

java::nio::FloatBuffer* FloatBuffer::put(JavaFloatArray* arg1, int arg2, int arg3)
{
  jclass    cls = javaEnv->FindClass("java/nio/FloatBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "put", "([FII)Ljava/nio/FloatBuffer;");
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

java::nio::FloatBuffer* FloatBuffer::put(JavaFloatArray* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/FloatBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "put", "([F)Ljava/nio/FloatBuffer;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

bool FloatBuffer::equals(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/FloatBuffer");
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

const char* FloatBuffer::toString()
{
  jclass    cls = javaEnv->FindClass("java/nio/FloatBuffer");
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

int FloatBuffer::hashCode()
{
  jclass    cls = javaEnv->FindClass("java/nio/FloatBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "hashCode", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int FloatBuffer::compareTo(java::nio::FloatBuffer* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/FloatBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "compareTo", "(Ljava/nio/FloatBuffer;)I");
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

int FloatBuffer::compareTo(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/FloatBuffer");
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

bool FloatBuffer::isDirect()
{
  jclass    cls = javaEnv->FindClass("java/nio/FloatBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isDirect", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool FloatBuffer::hasArray()
{
  jclass    cls = javaEnv->FindClass("java/nio/FloatBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "hasArray", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

JavaFloatArray* FloatBuffer::array()
{
  jclass    cls = javaEnv->FindClass("java/nio/FloatBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "array", "()[F");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  JavaFloatArray* result;
  if (jresult!=NULL) {
    result=new JavaFloatArray((jarray)jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int FloatBuffer::arrayOffset()
{
  jclass    cls = javaEnv->FindClass("java/nio/FloatBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "arrayOffset", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::FloatBuffer* FloatBuffer::wrap(JavaFloatArray* arg1, int arg2, int arg3)
{
  jclass    cls = javaEnv->FindClass("java/nio/FloatBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "wrap", "([FII)Ljava/nio/FloatBuffer;");
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

java::nio::FloatBuffer* FloatBuffer::wrap(JavaFloatArray* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/FloatBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "wrap", "([F)Ljava/nio/FloatBuffer;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid, jarg1);
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

java::nio::FloatBuffer* FloatBuffer::allocate(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/FloatBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "allocate", "(I)Ljava/nio/FloatBuffer;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid, jarg1);
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

java::nio::FloatBuffer* FloatBuffer::slice()
{
  jclass    cls = javaEnv->FindClass("java/nio/FloatBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "slice", "()Ljava/nio/FloatBuffer;");
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

java::nio::FloatBuffer* FloatBuffer::duplicate()
{
  jclass    cls = javaEnv->FindClass("java/nio/FloatBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "duplicate", "()Ljava/nio/FloatBuffer;");
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

java::nio::FloatBuffer* FloatBuffer::asReadOnlyBuffer()
{
  jclass    cls = javaEnv->FindClass("java/nio/FloatBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "asReadOnlyBuffer", "()Ljava/nio/FloatBuffer;");
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

java::nio::FloatBuffer* FloatBuffer::compact()
{
  jclass    cls = javaEnv->FindClass("java/nio/FloatBuffer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "compact", "()Ljava/nio/FloatBuffer;");
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

java::nio::ByteOrder* FloatBuffer::order()
{
  jclass    cls = javaEnv->FindClass("java/nio/FloatBuffer");
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
