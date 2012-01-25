#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_nio_charset_CodingErrorAction.h>
#include <java_lang_Object.h>
#include <java_lang_String.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace nio {
namespace charset {

CodingErrorAction::CodingErrorAction(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

CodingErrorAction::CodingErrorAction(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void CodingErrorAction::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/nio/charset/CodingErrorAction");
  handleJavaException(wrapperIntern);
  jfieldID fid_IGNORE = javaEnv->GetStaticFieldID(cls, "IGNORE", "Ljava/nio/charset/CodingErrorAction;");
  handleJavaException(wrapperIntern);
  jobject jresult_IGNORE = javaEnv->GetStaticObjectField(cls, fid_IGNORE);
  handleJavaException(wrapperIntern);
  java::nio::charset::CodingErrorAction* result_IGNORE;
  if (jresult_IGNORE!=NULL) {
    result_IGNORE=new java::nio::charset::CodingErrorAction(jresult_IGNORE);
    javaEnv->DeleteLocalRef(jresult_IGNORE);
  } else {
    result_IGNORE=NULL;
  }
  this->IGNORE = result_IGNORE;
  jfieldID fid_REPLACE = javaEnv->GetStaticFieldID(cls, "REPLACE", "Ljava/nio/charset/CodingErrorAction;");
  handleJavaException(wrapperIntern);
  jobject jresult_REPLACE = javaEnv->GetStaticObjectField(cls, fid_REPLACE);
  handleJavaException(wrapperIntern);
  java::nio::charset::CodingErrorAction* result_REPLACE;
  if (jresult_REPLACE!=NULL) {
    result_REPLACE=new java::nio::charset::CodingErrorAction(jresult_REPLACE);
    javaEnv->DeleteLocalRef(jresult_REPLACE);
  } else {
    result_REPLACE=NULL;
  }
  this->REPLACE = result_REPLACE;
  jfieldID fid_REPORT = javaEnv->GetStaticFieldID(cls, "REPORT", "Ljava/nio/charset/CodingErrorAction;");
  handleJavaException(wrapperIntern);
  jobject jresult_REPORT = javaEnv->GetStaticObjectField(cls, fid_REPORT);
  handleJavaException(wrapperIntern);
  java::nio::charset::CodingErrorAction* result_REPORT;
  if (jresult_REPORT!=NULL) {
    result_REPORT=new java::nio::charset::CodingErrorAction(jresult_REPORT);
    javaEnv->DeleteLocalRef(jresult_REPORT);
  } else {
    result_REPORT=NULL;
  }
  this->REPORT = result_REPORT;
}

void CodingErrorAction::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/nio/charset/CodingErrorAction");
  handleJavaException(wrapperIntern);
}

const char* CodingErrorAction::toString()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CodingErrorAction");
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
}
}
}
