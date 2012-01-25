#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_net_Proxy.h>
#include <java_lang_Object.h>
#include <java_net_Proxy__Type.h>
#include <java_net_SocketAddress.h>
#include <java_lang_String.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace net {

Proxy::Proxy(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

Proxy::Proxy(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

Proxy::Proxy(java::net::Proxy__Type* arg1, java::net::SocketAddress* arg2)
  : java::lang::Object(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("java/net/Proxy");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "(Ljava/net/Proxy$Type;Ljava/net/SocketAddress;)V");
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

void Proxy::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/net/Proxy");
  handleJavaException(wrapperIntern);
  jfieldID fid_NO_PROXY = javaEnv->GetStaticFieldID(cls, "NO_PROXY", "Ljava/net/Proxy;");
  handleJavaException(wrapperIntern);
  jobject jresult_NO_PROXY = javaEnv->GetStaticObjectField(cls, fid_NO_PROXY);
  handleJavaException(wrapperIntern);
  java::net::Proxy* result_NO_PROXY;
  if (jresult_NO_PROXY!=NULL) {
    result_NO_PROXY=new java::net::Proxy(jresult_NO_PROXY);
    javaEnv->DeleteLocalRef(jresult_NO_PROXY);
  } else {
    result_NO_PROXY=NULL;
  }
  this->NO_PROXY = result_NO_PROXY;
}

void Proxy::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/net/Proxy");
  handleJavaException(wrapperIntern);
}

java::net::Proxy__Type* Proxy::type()
{
  jclass    cls = javaEnv->FindClass("java/net/Proxy");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "type", "()Ljava/net/Proxy$Type;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
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

bool Proxy::equals(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/net/Proxy");
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

const char* Proxy::toString()
{
  jclass    cls = javaEnv->FindClass("java/net/Proxy");
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

int Proxy::hashCode()
{
  jclass    cls = javaEnv->FindClass("java/net/Proxy");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "hashCode", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::net::SocketAddress* Proxy::address()
{
  jclass    cls = javaEnv->FindClass("java/net/Proxy");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "address", "()Ljava/net/SocketAddress;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::net::SocketAddress* result;
  if (jresult!=NULL) {
    result=new java::net::SocketAddress(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
