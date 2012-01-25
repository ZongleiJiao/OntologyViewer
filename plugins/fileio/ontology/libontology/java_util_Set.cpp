#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_util_Set.h>
#include <java_lang_Object.h>
#include <java_util_Collection.h>
#include <java_util_Iterator.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace util {

Set::Set(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

Set::Set(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void Set::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/util/Set");
  handleJavaException(wrapperIntern);
}

void Set::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/util/Set");
  handleJavaException(wrapperIntern);
}

bool Set::add(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/Set");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "add", "(Ljava/lang/Object;)Z");
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

bool Set::equals(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/Set");
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

int Set::hashCode()
{
  jclass    cls = javaEnv->FindClass("java/util/Set");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "hashCode", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

void Set::clear()
{
  jclass    cls = javaEnv->FindClass("java/util/Set");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "clear", "()V");
  handleJavaException(wrapperIntern);
  javaEnv->CallVoidMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

int Set::size()
{
  jclass    cls = javaEnv->FindClass("java/util/Set");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "size", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool Set::isEmpty()
{
  jclass    cls = javaEnv->FindClass("java/util/Set");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isEmpty", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool Set::contains(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/Set");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
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

bool Set::addAll(java::util::Collection* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/Set");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
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

JavaObjectArray* Set::toArray()
{
  jclass    cls = javaEnv->FindClass("java/util/Set");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "toArray", "()[Ljava/lang/Object;");
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

JavaObjectArray* Set::toArray(JavaObjectArray* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/Set");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

java::util::Iterator* Set::iterator()
{
  jclass    cls = javaEnv->FindClass("java/util/Set");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "iterator", "()Ljava/util/Iterator;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::util::Iterator* result;
  if (jresult!=NULL) {
    result=new java::util::Iterator(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool Set::remove(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/Set");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
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

bool Set::removeAll(java::util::Collection* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/Set");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
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

bool Set::containsAll(java::util::Collection* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/Set");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "containsAll", "(Ljava/util/Collection;)Z");
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

bool Set::retainAll(java::util::Collection* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/Set");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
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
