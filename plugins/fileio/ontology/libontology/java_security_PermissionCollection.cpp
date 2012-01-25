#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_security_PermissionCollection.h>
#include <java_lang_Object.h>
#include <java_io_Serializable.h>
#include <java_security_Permission.h>
#include <java_lang_String.h>
#include <java_util_Enumeration.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace security {

PermissionCollection::PermissionCollection(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

PermissionCollection::PermissionCollection(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

PermissionCollection::PermissionCollection()
  : java::lang::Object(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("java/security/PermissionCollection");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "()V");
  handleJavaException(wrapperIntern);
  jobject o = javaEnv->NewObject(cls, mid);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  updateAllVariables(wrapperIntern);
}

void PermissionCollection::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/security/PermissionCollection");
  handleJavaException(wrapperIntern);
}

void PermissionCollection::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/security/PermissionCollection");
  handleJavaException(wrapperIntern);
}

void PermissionCollection::add(java::security::Permission* arg1)
{
  jclass    cls = javaEnv->FindClass("java/security/PermissionCollection");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "add", "(Ljava/security/Permission;)V");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

const char* PermissionCollection::toString()
{
  jclass    cls = javaEnv->FindClass("java/security/PermissionCollection");
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

bool PermissionCollection::implies(java::security::Permission* arg1)
{
  jclass    cls = javaEnv->FindClass("java/security/PermissionCollection");
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

void PermissionCollection::setReadOnly()
{
  jclass    cls = javaEnv->FindClass("java/security/PermissionCollection");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "setReadOnly", "()V");
  handleJavaException(wrapperIntern);
  javaEnv->CallVoidMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

java::util::Enumeration* PermissionCollection::elements()
{
  jclass    cls = javaEnv->FindClass("java/security/PermissionCollection");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "elements", "()Ljava/util/Enumeration;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
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

bool PermissionCollection::isReadOnly()
{
  jclass    cls = javaEnv->FindClass("java/security/PermissionCollection");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isReadOnly", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
