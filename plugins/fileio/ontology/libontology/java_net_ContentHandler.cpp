#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_net_ContentHandler.h>
#include <java_lang_Object.h>
#include <java_net_URLConnection.h>
#include <java_lang_Class.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace net {

ContentHandler::ContentHandler(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

ContentHandler::ContentHandler(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

ContentHandler::ContentHandler()
  : java::lang::Object(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("java/net/ContentHandler");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "()V");
  handleJavaException(wrapperIntern);
  jobject o = javaEnv->NewObject(cls, mid);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  updateAllVariables(wrapperIntern);
}

void ContentHandler::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/net/ContentHandler");
  handleJavaException(wrapperIntern);
}

void ContentHandler::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/net/ContentHandler");
  handleJavaException(wrapperIntern);
}

java::lang::Object* ContentHandler::getContent(java::net::URLConnection* arg1)
{
  jclass    cls = javaEnv->FindClass("java/net/ContentHandler");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getContent", "(Ljava/net/URLConnection;)Ljava/lang/Object;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::Object* result;
  if (jresult!=NULL) {
    result=new java::lang::Object(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::Object* ContentHandler::getContent(java::net::URLConnection* arg1, JavaObjectArray* arg2)
{
  jclass    cls = javaEnv->FindClass("java/net/ContentHandler");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getContent", "(Ljava/net/URLConnection;[Ljava/lang/Class;)Ljava/lang/Object;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jarray jarg2;
  if (arg2!=NULL) {
    jarg2=(jarray)(arg2->getJavaObject());
  } else {
    jarg2=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  java::lang::Object* result;
  if (jresult!=NULL) {
    result=new java::lang::Object(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
