#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_net_URLStreamHandlerFactory.h>
#include <java_lang_Object.h>
#include <java_net_URLStreamHandler.h>
#include <java_lang_String.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace net {

URLStreamHandlerFactory::URLStreamHandlerFactory(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

URLStreamHandlerFactory::URLStreamHandlerFactory(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void URLStreamHandlerFactory::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/net/URLStreamHandlerFactory");
  handleJavaException(wrapperIntern);
}

void URLStreamHandlerFactory::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/net/URLStreamHandlerFactory");
  handleJavaException(wrapperIntern);
}

java::net::URLStreamHandler* URLStreamHandlerFactory::createURLStreamHandler(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("java/net/URLStreamHandlerFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "createURLStreamHandler", "(Ljava/lang/String;)Ljava/net/URLStreamHandler;");
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
  java::net::URLStreamHandler* result;
  if (jresult!=NULL) {
    result=new java::net::URLStreamHandler(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
