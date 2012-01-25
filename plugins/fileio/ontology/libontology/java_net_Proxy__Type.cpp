#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_net_Proxy__Type.h>
#include <java_lang_Enum.h>
#include <java_lang_String.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace net {

Proxy__Type::Proxy__Type(JavaMarker* dummy)
  : java::lang::Enum(dummy)
{
  updateAllVariables(wrapperIntern);
}

Proxy__Type::Proxy__Type(jobject obj)
  : java::lang::Enum(obj)
{
  updateAllVariables(wrapperIntern);
}

void Proxy__Type::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/net/Proxy$Type");
  handleJavaException(wrapperIntern);
  jfieldID fid_DIRECT = javaEnv->GetStaticFieldID(cls, "DIRECT", "Ljava/net/Proxy$Type;");
  handleJavaException(wrapperIntern);
  jobject jresult_DIRECT = javaEnv->GetStaticObjectField(cls, fid_DIRECT);
  handleJavaException(wrapperIntern);
  java::net::Proxy__Type* result_DIRECT;
  if (jresult_DIRECT!=NULL) {
    result_DIRECT=new java::net::Proxy__Type(jresult_DIRECT);
    javaEnv->DeleteLocalRef(jresult_DIRECT);
  } else {
    result_DIRECT=NULL;
  }
  this->DIRECT = result_DIRECT;
  jfieldID fid_HTTP = javaEnv->GetStaticFieldID(cls, "HTTP", "Ljava/net/Proxy$Type;");
  handleJavaException(wrapperIntern);
  jobject jresult_HTTP = javaEnv->GetStaticObjectField(cls, fid_HTTP);
  handleJavaException(wrapperIntern);
  java::net::Proxy__Type* result_HTTP;
  if (jresult_HTTP!=NULL) {
    result_HTTP=new java::net::Proxy__Type(jresult_HTTP);
    javaEnv->DeleteLocalRef(jresult_HTTP);
  } else {
    result_HTTP=NULL;
  }
  this->HTTP = result_HTTP;
  jfieldID fid_SOCKS = javaEnv->GetStaticFieldID(cls, "SOCKS", "Ljava/net/Proxy$Type;");
  handleJavaException(wrapperIntern);
  jobject jresult_SOCKS = javaEnv->GetStaticObjectField(cls, fid_SOCKS);
  handleJavaException(wrapperIntern);
  java::net::Proxy__Type* result_SOCKS;
  if (jresult_SOCKS!=NULL) {
    result_SOCKS=new java::net::Proxy__Type(jresult_SOCKS);
    javaEnv->DeleteLocalRef(jresult_SOCKS);
  } else {
    result_SOCKS=NULL;
  }
  this->SOCKS = result_SOCKS;
}

void Proxy__Type::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/net/Proxy$Type");
  handleJavaException(wrapperIntern);
}

JavaObjectArray* Proxy__Type::values()
{
  jclass    cls = javaEnv->FindClass("java/net/Proxy$Type");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "values", "()[Ljava/net/Proxy$Type;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid);
  handleJavaException(wrapperIntern);
  JavaObjectArray* result;
  if (jresult!=NULL) {
    result=new JavaObjectArray((jarray)jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::net::Proxy__Type* Proxy__Type::valueOf(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("java/net/Proxy$Type");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/net/Proxy$Type;");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid, jarg1);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  java::net::Proxy__Type* result;
  if (jresult!=NULL) {
    result=new java::net::Proxy__Type(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
