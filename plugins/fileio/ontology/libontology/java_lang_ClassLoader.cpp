#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_lang_ClassLoader.h>
#include <java_lang_Object.h>
#include <java_lang_Class.h>
#include <java_lang_String.h>
#include <java_io_InputStream.h>
#include <java_net_URL.h>
#include <java_util_Enumeration.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace lang {

ClassLoader::ClassLoader(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

ClassLoader::ClassLoader(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void ClassLoader::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/lang/ClassLoader");
  handleJavaException(wrapperIntern);
}

void ClassLoader::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/lang/ClassLoader");
  handleJavaException(wrapperIntern);
}

java::lang::Class* ClassLoader::loadClass(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/ClassLoader");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "loadClass", "(Ljava/lang/String;)Ljava/lang/Class;");
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
  java::lang::Class* result;
  if (jresult!=NULL) {
    result=new java::lang::Class(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::ClassLoader* ClassLoader::getSystemClassLoader()
{
  jclass    cls = javaEnv->FindClass("java/lang/ClassLoader");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "getSystemClassLoader", "()Ljava/lang/ClassLoader;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid);
  handleJavaException(wrapperIntern);
  java::lang::ClassLoader* result;
  if (jresult!=NULL) {
    result=new java::lang::ClassLoader(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::io::InputStream* ClassLoader::getResourceAsStream(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/ClassLoader");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;");
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

java::net::URL* ClassLoader::getResource(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/ClassLoader");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getResource", "(Ljava/lang/String;)Ljava/net/URL;");
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
  java::net::URL* result;
  if (jresult!=NULL) {
    result=new java::net::URL(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::io::InputStream* ClassLoader::getSystemResourceAsStream(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/ClassLoader");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "getSystemResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;");
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

java::net::URL* ClassLoader::getSystemResource(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/ClassLoader");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "getSystemResource", "(Ljava/lang/String;)Ljava/net/URL;");
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
  java::net::URL* result;
  if (jresult!=NULL) {
    result=new java::net::URL(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::util::Enumeration* ClassLoader::getResources(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/ClassLoader");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getResources", "(Ljava/lang/String;)Ljava/util/Enumeration;");
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
  java::util::Enumeration* result;
  if (jresult!=NULL) {
    result=new java::util::Enumeration(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::util::Enumeration* ClassLoader::getSystemResources(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/ClassLoader");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "getSystemResources", "(Ljava/lang/String;)Ljava/util/Enumeration;");
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
  java::util::Enumeration* result;
  if (jresult!=NULL) {
    result=new java::util::Enumeration(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::ClassLoader* ClassLoader::getParent()
{
  jclass    cls = javaEnv->FindClass("java/lang/ClassLoader");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getParent", "()Ljava/lang/ClassLoader;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::lang::ClassLoader* result;
  if (jresult!=NULL) {
    result=new java::lang::ClassLoader(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

void ClassLoader::setDefaultAssertionStatus(bool arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/ClassLoader");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "setDefaultAssertionStatus", "(Z)V");
  handleJavaException(wrapperIntern);
  jboolean jarg1 = (jboolean)arg1;
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

void ClassLoader::setPackageAssertionStatus(const char* arg1, bool arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/ClassLoader");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "setPackageAssertionStatus", "(Ljava/lang/String;Z)V");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jboolean jarg2 = (jboolean)arg2;
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  updateAllNonFinalVariables(wrapperIntern);
}

void ClassLoader::setClassAssertionStatus(const char* arg1, bool arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/ClassLoader");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "setClassAssertionStatus", "(Ljava/lang/String;Z)V");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jboolean jarg2 = (jboolean)arg2;
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  updateAllNonFinalVariables(wrapperIntern);
}

void ClassLoader::clearAssertionStatus()
{
  jclass    cls = javaEnv->FindClass("java/lang/ClassLoader");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "clearAssertionStatus", "()V");
  handleJavaException(wrapperIntern);
  javaEnv->CallVoidMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
