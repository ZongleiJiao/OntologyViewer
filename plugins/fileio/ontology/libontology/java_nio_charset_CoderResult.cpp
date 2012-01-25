#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_nio_charset_CoderResult.h>
#include <java_lang_Object.h>
#include <java_lang_String.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace nio {
namespace charset {

CoderResult::CoderResult(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

CoderResult::CoderResult(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void CoderResult::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/nio/charset/CoderResult");
  handleJavaException(wrapperIntern);
  jfieldID fid_UNDERFLOW = javaEnv->GetStaticFieldID(cls, "UNDERFLOW", "Ljava/nio/charset/CoderResult;");
  handleJavaException(wrapperIntern);
  jobject jresult_UNDERFLOW = javaEnv->GetStaticObjectField(cls, fid_UNDERFLOW);
  handleJavaException(wrapperIntern);
  java::nio::charset::CoderResult* result_UNDERFLOW;
  if (jresult_UNDERFLOW!=NULL) {
    result_UNDERFLOW=new java::nio::charset::CoderResult(jresult_UNDERFLOW);
    javaEnv->DeleteLocalRef(jresult_UNDERFLOW);
  } else {
    result_UNDERFLOW=NULL;
  }
  this->UnderFLOW = result_UNDERFLOW;
  jfieldID fid_OVERFLOW = javaEnv->GetStaticFieldID(cls, "OVERFLOW", "Ljava/nio/charset/CoderResult;");
  handleJavaException(wrapperIntern);
  jobject jresult_OVERFLOW = javaEnv->GetStaticObjectField(cls, fid_OVERFLOW);
  handleJavaException(wrapperIntern);
  java::nio::charset::CoderResult* result_OVERFLOW;
  if (jresult_OVERFLOW!=NULL) {
    result_OVERFLOW=new java::nio::charset::CoderResult(jresult_OVERFLOW);
    javaEnv->DeleteLocalRef(jresult_OVERFLOW);
  } else {
    result_OVERFLOW=NULL;
  }
  this->OverFLOW = result_OVERFLOW;
}

void CoderResult::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/nio/charset/CoderResult");
  handleJavaException(wrapperIntern);
}

const char* CoderResult::toString()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CoderResult");
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

int CoderResult::length()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CoderResult");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "length", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

void CoderResult::throwException()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CoderResult");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "throwException", "()V");
  handleJavaException(wrapperIntern);
  javaEnv->CallVoidMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

bool CoderResult::isUnderflow()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CoderResult");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isUnderflow", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::charset::CoderResult* CoderResult::malformedForLength(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CoderResult");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "malformedForLength", "(I)Ljava/nio/charset/CoderResult;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid, jarg1);
  handleJavaException(wrapperIntern);
  java::nio::charset::CoderResult* result;
  if (jresult!=NULL) {
    result=new java::nio::charset::CoderResult(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool CoderResult::isOverflow()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CoderResult");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isOverflow", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool CoderResult::isMalformed()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CoderResult");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isMalformed", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool CoderResult::isUnmappable()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CoderResult");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isUnmappable", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool CoderResult::isError()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CoderResult");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isError", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::charset::CoderResult* CoderResult::unmappableForLength(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CoderResult");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "unmappableForLength", "(I)Ljava/nio/charset/CoderResult;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid, jarg1);
  handleJavaException(wrapperIntern);
  java::nio::charset::CoderResult* result;
  if (jresult!=NULL) {
    result=new java::nio::charset::CoderResult(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
}
