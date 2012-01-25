#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_net_URL.h>
#include <java_lang_Object.h>
#include <java_io_Serializable.h>
#include <java_lang_String.h>
#include <java_net_URLStreamHandler.h>
#include <java_io_InputStream.h>
#include <java_net_URI.h>
#include <java_net_URLConnection.h>
#include <java_net_Proxy.h>
#include <java_lang_Class.h>
#include <java_net_URLStreamHandlerFactory.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace net {

URL::URL(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

URL::URL(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

URL::URL(const char* arg1, const char* arg2, int arg3, const char* arg4)
  : java::lang::Object(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("java/net/URL");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jstring jarg2;
  if (arg2!=NULL) {
    jarg2 = javaEnv->NewStringUTF(arg2);
  } else {
    jarg2=NULL;
  }
  handleJavaException(wrapperIntern);
  jint jarg3 = (jint)arg3;
  jstring jarg4;
  if (arg4!=NULL) {
    jarg4 = javaEnv->NewStringUTF(arg4);
  } else {
    jarg4=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject o = javaEnv->NewObject(cls, mid, jarg1, jarg2, jarg3, jarg4);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  if (jarg2!=NULL) {
    javaEnv->DeleteLocalRef(jarg2);
  }
  if (jarg4!=NULL) {
    javaEnv->DeleteLocalRef(jarg4);
  }
  updateAllVariables(wrapperIntern);
}

URL::URL(const char* arg1, const char* arg2, const char* arg3)
  : java::lang::Object(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("java/net/URL");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jstring jarg2;
  if (arg2!=NULL) {
    jarg2 = javaEnv->NewStringUTF(arg2);
  } else {
    jarg2=NULL;
  }
  handleJavaException(wrapperIntern);
  jstring jarg3;
  if (arg3!=NULL) {
    jarg3 = javaEnv->NewStringUTF(arg3);
  } else {
    jarg3=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject o = javaEnv->NewObject(cls, mid, jarg1, jarg2, jarg3);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  if (jarg2!=NULL) {
    javaEnv->DeleteLocalRef(jarg2);
  }
  if (jarg3!=NULL) {
    javaEnv->DeleteLocalRef(jarg3);
  }
  updateAllVariables(wrapperIntern);
}

URL::URL(const char* arg1, const char* arg2, int arg3, const char* arg4, java::net::URLStreamHandler* arg5)
  : java::lang::Object(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("java/net/URL");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/net/URLStreamHandler;)V");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jstring jarg2;
  if (arg2!=NULL) {
    jarg2 = javaEnv->NewStringUTF(arg2);
  } else {
    jarg2=NULL;
  }
  handleJavaException(wrapperIntern);
  jint jarg3 = (jint)arg3;
  jstring jarg4;
  if (arg4!=NULL) {
    jarg4 = javaEnv->NewStringUTF(arg4);
  } else {
    jarg4=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject jarg5;
  if (arg5!=NULL) {
    jarg5=arg5->getJavaObject();
  } else {
    jarg5=NULL;
  }
  jobject o = javaEnv->NewObject(cls, mid, jarg1, jarg2, jarg3, jarg4, jarg5);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  if (jarg2!=NULL) {
    javaEnv->DeleteLocalRef(jarg2);
  }
  if (jarg4!=NULL) {
    javaEnv->DeleteLocalRef(jarg4);
  }
  updateAllVariables(wrapperIntern);
}

URL::URL(const char* arg1)
  : java::lang::Object(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("java/net/URL");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "(Ljava/lang/String;)V");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject o = javaEnv->NewObject(cls, mid, jarg1);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  updateAllVariables(wrapperIntern);
}

URL::URL(java::net::URL* arg1, const char* arg2)
  : java::lang::Object(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("java/net/URL");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "(Ljava/net/URL;Ljava/lang/String;)V");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jstring jarg2;
  if (arg2!=NULL) {
    jarg2 = javaEnv->NewStringUTF(arg2);
  } else {
    jarg2=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject o = javaEnv->NewObject(cls, mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  if (jarg2!=NULL) {
    javaEnv->DeleteLocalRef(jarg2);
  }
  updateAllVariables(wrapperIntern);
}

URL::URL(java::net::URL* arg1, const char* arg2, java::net::URLStreamHandler* arg3)
  : java::lang::Object(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("java/net/URL");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "(Ljava/net/URL;Ljava/lang/String;Ljava/net/URLStreamHandler;)V");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jstring jarg2;
  if (arg2!=NULL) {
    jarg2 = javaEnv->NewStringUTF(arg2);
  } else {
    jarg2=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject jarg3;
  if (arg3!=NULL) {
    jarg3=arg3->getJavaObject();
  } else {
    jarg3=NULL;
  }
  jobject o = javaEnv->NewObject(cls, mid, jarg1, jarg2, jarg3);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  if (jarg2!=NULL) {
    javaEnv->DeleteLocalRef(jarg2);
  }
  updateAllVariables(wrapperIntern);
}

void URL::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/net/URL");
  handleJavaException(wrapperIntern);
}

void URL::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/net/URL");
  handleJavaException(wrapperIntern);
}

bool URL::equals(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/net/URL");
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

const char* URL::toString()
{
  jclass    cls = javaEnv->FindClass("java/net/URL");
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

int URL::hashCode()
{
  jclass    cls = javaEnv->FindClass("java/net/URL");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "hashCode", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::io::InputStream* URL::openStream()
{
  jclass    cls = javaEnv->FindClass("java/net/URL");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "openStream", "()Ljava/io/InputStream;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::io::InputStream* result;
  if (jresult!=NULL) {
    result=new java::io::InputStream(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

const char* URL::getPath()
{
  jclass    cls = javaEnv->FindClass("java/net/URL");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getPath", "()Ljava/lang/String;");
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

java::net::URI* URL::toURI()
{
  jclass    cls = javaEnv->FindClass("java/net/URL");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "toURI", "()Ljava/net/URI;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::net::URI* result;
  if (jresult!=NULL) {
    result=new java::net::URI(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

const char* URL::getAuthority()
{
  jclass    cls = javaEnv->FindClass("java/net/URL");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getAuthority", "()Ljava/lang/String;");
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

const char* URL::getQuery()
{
  jclass    cls = javaEnv->FindClass("java/net/URL");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getQuery", "()Ljava/lang/String;");
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

java::net::URLConnection* URL::openConnection()
{
  jclass    cls = javaEnv->FindClass("java/net/URL");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "openConnection", "()Ljava/net/URLConnection;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::net::URLConnection* result;
  if (jresult!=NULL) {
    result=new java::net::URLConnection(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::net::URLConnection* URL::openConnection(java::net::Proxy* arg1)
{
  jclass    cls = javaEnv->FindClass("java/net/URL");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "openConnection", "(Ljava/net/Proxy;)Ljava/net/URLConnection;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::net::URLConnection* result;
  if (jresult!=NULL) {
    result=new java::net::URLConnection(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

const char* URL::getProtocol()
{
  jclass    cls = javaEnv->FindClass("java/net/URL");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getProtocol", "()Ljava/lang/String;");
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

const char* URL::getFile()
{
  jclass    cls = javaEnv->FindClass("java/net/URL");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getFile", "()Ljava/lang/String;");
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

const char* URL::getHost()
{
  jclass    cls = javaEnv->FindClass("java/net/URL");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getHost", "()Ljava/lang/String;");
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

const char* URL::getRef()
{
  jclass    cls = javaEnv->FindClass("java/net/URL");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getRef", "()Ljava/lang/String;");
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

const char* URL::getUserInfo()
{
  jclass    cls = javaEnv->FindClass("java/net/URL");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getUserInfo", "()Ljava/lang/String;");
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

int URL::getPort()
{
  jclass    cls = javaEnv->FindClass("java/net/URL");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getPort", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int URL::getDefaultPort()
{
  jclass    cls = javaEnv->FindClass("java/net/URL");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getDefaultPort", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool URL::sameFile(java::net::URL* arg1)
{
  jclass    cls = javaEnv->FindClass("java/net/URL");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "sameFile", "(Ljava/net/URL;)Z");
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

const char* URL::toExternalForm()
{
  jclass    cls = javaEnv->FindClass("java/net/URL");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "toExternalForm", "()Ljava/lang/String;");
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

java::lang::Object* URL::getContent()
{
  jclass    cls = javaEnv->FindClass("java/net/URL");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getContent", "()Ljava/lang/Object;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
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

java::lang::Object* URL::getContent(JavaObjectArray* arg1)
{
  jclass    cls = javaEnv->FindClass("java/net/URL");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getContent", "([Ljava/lang/Class;)Ljava/lang/Object;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
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

void URL::setURLStreamHandlerFactory(java::net::URLStreamHandlerFactory* arg1)
{
  jclass    cls = javaEnv->FindClass("java/net/URL");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "setURLStreamHandlerFactory", "(Ljava/net/URLStreamHandlerFactory;)V");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  javaEnv->CallStaticVoidMethod(cls, mid, jarg1);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
