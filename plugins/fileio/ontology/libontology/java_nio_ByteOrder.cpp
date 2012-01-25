#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_nio_ByteOrder.h>
#include <java_lang_Object.h>
#include <java_lang_String.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace nio {

ByteOrder::ByteOrder(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

ByteOrder::ByteOrder(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void ByteOrder::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/nio/ByteOrder");
  handleJavaException(wrapperIntern);
  jfieldID fid_BIG_ENDIAN = javaEnv->GetStaticFieldID(cls, "BIG_ENDIAN", "Ljava/nio/ByteOrder;");
  handleJavaException(wrapperIntern);
  jobject jresult_BIG_ENDIAN = javaEnv->GetStaticObjectField(cls, fid_BIG_ENDIAN);
  handleJavaException(wrapperIntern);
  java::nio::ByteOrder* result_BIG_ENDIAN;
  if (jresult_BIG_ENDIAN!=NULL) {
    result_BIG_ENDIAN=new java::nio::ByteOrder(jresult_BIG_ENDIAN);
    javaEnv->DeleteLocalRef(jresult_BIG_ENDIAN);
  } else {
    result_BIG_ENDIAN=NULL;
  }
  this->Big_ENDIAN = result_BIG_ENDIAN;
  jfieldID fid_LITTLE_ENDIAN = javaEnv->GetStaticFieldID(cls, "LITTLE_ENDIAN", "Ljava/nio/ByteOrder;");
  handleJavaException(wrapperIntern);
  jobject jresult_LITTLE_ENDIAN = javaEnv->GetStaticObjectField(cls, fid_LITTLE_ENDIAN);
  handleJavaException(wrapperIntern);
  java::nio::ByteOrder* result_LITTLE_ENDIAN;
  if (jresult_LITTLE_ENDIAN!=NULL) {
    result_LITTLE_ENDIAN=new java::nio::ByteOrder(jresult_LITTLE_ENDIAN);
    javaEnv->DeleteLocalRef(jresult_LITTLE_ENDIAN);
  } else {
    result_LITTLE_ENDIAN=NULL;
  }
  this->Little_ENDIAN = result_LITTLE_ENDIAN;
}

void ByteOrder::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/nio/ByteOrder");
  handleJavaException(wrapperIntern);
}

const char* ByteOrder::toString()
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteOrder");
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

java::nio::ByteOrder* ByteOrder::nativeOrder()
{
  jclass    cls = javaEnv->FindClass("java/nio/ByteOrder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "nativeOrder", "()Ljava/nio/ByteOrder;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid);
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
