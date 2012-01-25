#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_security_ProtectionDomain.h>
#include <java_lang_Object.h>
#include <java_security_CodeSource.h>
#include <java_security_PermissionCollection.h>
#include <java_lang_ClassLoader.h>
#include <java_security_Principal.h>
#include <java_lang_String.h>
#include <java_security_Permission.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace security {

ProtectionDomain::ProtectionDomain(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

ProtectionDomain::ProtectionDomain(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

ProtectionDomain::ProtectionDomain(java::security::CodeSource* arg1, java::security::PermissionCollection* arg2)
  : java::lang::Object(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("java/security/ProtectionDomain");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "(Ljava/security/CodeSource;Ljava/security/PermissionCollection;)V");
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

ProtectionDomain::ProtectionDomain(java::security::CodeSource* arg1, java::security::PermissionCollection* arg2, java::lang::ClassLoader* arg3, JavaObjectArray* arg4)
  : java::lang::Object(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("java/security/ProtectionDomain");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "(Ljava/security/CodeSource;Ljava/security/PermissionCollection;Ljava/lang/ClassLoader;[Ljava/security/Principal;)V");
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
  jobject jarg3;
  if (arg3!=NULL) {
    jarg3=arg3->getJavaObject();
  } else {
    jarg3=NULL;
  }
  jarray jarg4;
  if (arg4!=NULL) {
    jarg4=(jarray)(arg4->getJavaObject());
  } else {
    jarg4=NULL;
  }
  jobject o = javaEnv->NewObject(cls, mid, jarg1, jarg2, jarg3, jarg4);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  updateAllVariables(wrapperIntern);
}

void ProtectionDomain::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/security/ProtectionDomain");
  handleJavaException(wrapperIntern);
}

void ProtectionDomain::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/security/ProtectionDomain");
  handleJavaException(wrapperIntern);
}

const char* ProtectionDomain::toString()
{
  jclass    cls = javaEnv->FindClass("java/security/ProtectionDomain");
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

java::lang::ClassLoader* ProtectionDomain::getClassLoader()
{
  jclass    cls = javaEnv->FindClass("java/security/ProtectionDomain");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getClassLoader", "()Ljava/lang/ClassLoader;");
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

java::security::CodeSource* ProtectionDomain::getCodeSource()
{
  jclass    cls = javaEnv->FindClass("java/security/ProtectionDomain");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getCodeSource", "()Ljava/security/CodeSource;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::security::CodeSource* result;
  if (jresult!=NULL) {
    result=new java::security::CodeSource(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

JavaObjectArray* ProtectionDomain::getPrincipals()
{
  jclass    cls = javaEnv->FindClass("java/security/ProtectionDomain");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getPrincipals", "()[Ljava/security/Principal;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
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

java::security::PermissionCollection* ProtectionDomain::getPermissions()
{
  jclass    cls = javaEnv->FindClass("java/security/ProtectionDomain");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getPermissions", "()Ljava/security/PermissionCollection;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::security::PermissionCollection* result;
  if (jresult!=NULL) {
    result=new java::security::PermissionCollection(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool ProtectionDomain::implies(java::security::Permission* arg1)
{
  jclass    cls = javaEnv->FindClass("java/security/ProtectionDomain");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "implies", "(Ljava/security/Permission;)Z");
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
}
}
