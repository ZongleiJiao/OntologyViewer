#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_security_Timestamp.h>
#include <java_lang_Object.h>
#include <java_io_Serializable.h>
#include <java_util_Date.h>
#include <java_security_cert_CertPath.h>
#include <java_lang_String.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace security {

Timestamp::Timestamp(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

Timestamp::Timestamp(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

Timestamp::Timestamp(java::util::Date* arg1, java::security::cert::CertPath* arg2)
  : java::lang::Object(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("java/security/Timestamp");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "(Ljava/util/Date;Ljava/security/cert/CertPath;)V");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject o = javaEnv->NewObject(cls, mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  updateAllVariables(wrapperIntern);
}

void Timestamp::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/security/Timestamp");
  handleJavaException(wrapperIntern);
}

void Timestamp::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/security/Timestamp");
  handleJavaException(wrapperIntern);
}

bool Timestamp::equals(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/security/Timestamp");
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

const char* Timestamp::toString()
{
  jclass    cls = javaEnv->FindClass("java/security/Timestamp");
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

int Timestamp::hashCode()
{
  jclass    cls = javaEnv->FindClass("java/security/Timestamp");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "hashCode", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::security::cert::CertPath* Timestamp::getSignerCertPath()
{
  jclass    cls = javaEnv->FindClass("java/security/Timestamp");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSignerCertPath", "()Ljava/security/cert/CertPath;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::security::cert::CertPath* result;
  if (jresult!=NULL) {
    result=new java::security::cert::CertPath(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::util::Date* Timestamp::getTimestamp()
{
  jclass    cls = javaEnv->FindClass("java/security/Timestamp");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getTimestamp", "()Ljava/util/Date;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::util::Date* result;
  if (jresult!=NULL) {
    result=new java::util::Date(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
