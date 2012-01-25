#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_net_ContentHandlerFactory.h>
#include <java_lang_Object.h>
#include <java_net_ContentHandler.h>
#include <java_lang_String.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace net {

ContentHandlerFactory::ContentHandlerFactory(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

ContentHandlerFactory::ContentHandlerFactory(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void ContentHandlerFactory::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/net/ContentHandlerFactory");
  handleJavaException(wrapperIntern);
}

void ContentHandlerFactory::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/net/ContentHandlerFactory");
  handleJavaException(wrapperIntern);
}

java::net::ContentHandler* ContentHandlerFactory::createContentHandler(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("java/net/ContentHandlerFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "createContentHandler", "(Ljava/lang/String;)Ljava/net/ContentHandler;");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  java::net::ContentHandler* result;
  if (jresult!=NULL) {
    result=new java::net::ContentHandler(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
