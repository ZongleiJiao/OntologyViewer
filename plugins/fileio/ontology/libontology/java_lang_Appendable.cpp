#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_lang_Appendable.h>
#include <java_lang_Object.h>
#include <java_lang_CharSequence.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace lang {

Appendable::Appendable(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

Appendable::Appendable(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void Appendable::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/lang/Appendable");
  handleJavaException(wrapperIntern);
}

void Appendable::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/lang/Appendable");
  handleJavaException(wrapperIntern);
}

java::lang::Appendable* Appendable::append(java::lang::CharSequence* arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/Appendable");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::Appendable* result;
  if (jresult!=NULL) {
    result=new java::lang::Appendable(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::Appendable* Appendable::append(java::lang::CharSequence* arg1, int arg2, int arg3)
{
  jclass    cls = javaEnv->FindClass("java/lang/Appendable");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jint jarg2 = (jint)arg2;
  jint jarg3 = (jint)arg3;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3);
  handleJavaException(wrapperIntern);
  java::lang::Appendable* result;
  if (jresult!=NULL) {
    result=new java::lang::Appendable(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::Appendable* Appendable::append(char arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/Appendable");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "(C)Ljava/lang/Appendable;");
  handleJavaException(wrapperIntern);
  jchar jarg1 = (jchar)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::Appendable* result;
  if (jresult!=NULL) {
    result=new java::lang::Appendable(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
