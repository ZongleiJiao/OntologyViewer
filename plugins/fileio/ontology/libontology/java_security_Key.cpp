#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_security_Key.h>
#include <java_lang_Object.h>
#include <java_io_Serializable.h>
#include <java_lang_String.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace security {

Key::Key(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

Key::Key(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void Key::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/security/Key");
  handleJavaException(wrapperIntern);
  jfieldID fid_serialVersionUID = javaEnv->GetStaticFieldID(cls, "serialVersionUID", "J");
  handleJavaException(wrapperIntern);
  jlong jresult_serialVersionUID = javaEnv->GetStaticLongField(cls, fid_serialVersionUID);
  handleJavaException(wrapperIntern);
  long result_serialVersionUID = (long)jresult_serialVersionUID;
  this->serialVersionUID = result_serialVersionUID;
}

void Key::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/security/Key");
  handleJavaException(wrapperIntern);
}

const char* Key::getAlgorithm()
{
  jclass    cls = javaEnv->FindClass("java/security/Key");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getAlgorithm", "()Ljava/lang/String;");
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

JavaByteArray* Key::getEncoded()
{
  jclass    cls = javaEnv->FindClass("java/security/Key");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getEncoded", "()[B");
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

const char* Key::getFormat()
{
  jclass    cls = javaEnv->FindClass("java/security/Key");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getFormat", "()Ljava/lang/String;");
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
