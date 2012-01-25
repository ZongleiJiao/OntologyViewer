#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_util_List.h>
#include <java_lang_Object.h>
#include <java_util_Collection.h>
#include <java_util_Iterator.h>
#include <java_util_ListIterator.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace util {

List::List(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

List::List(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void List::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/util/List");
  handleJavaException(wrapperIntern);
}

void List::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/util/List");
  handleJavaException(wrapperIntern);
}

bool List::add(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/List");
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

void List::add(int arg1, java::lang::Object* arg2)
{
  jclass    cls = javaEnv->FindClass("java/util/List");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "add", "(ILjava/lang/Object;)V");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::Object* List::get(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/List");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "get", "(I)Ljava/lang/Object;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
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

bool List::equals(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/List");
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

int List::hashCode()
{
  jclass    cls = javaEnv->FindClass("java/util/List");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "hashCode", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int List::indexOf(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/List");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "indexOf", "(Ljava/lang/Object;)I");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

void List::clear()
{
  jclass    cls = javaEnv->FindClass("java/util/List");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "clear", "()V");
  handleJavaException(wrapperIntern);
  javaEnv->CallVoidMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

int List::size()
{
  jclass    cls = javaEnv->FindClass("java/util/List");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "size", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool List::isEmpty()
{
  jclass    cls = javaEnv->FindClass("java/util/List");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isEmpty", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int List::lastIndexOf(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/List");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "lastIndexOf", "(Ljava/lang/Object;)I");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool List::contains(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/List");
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

bool List::addAll(java::util::Collection* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/List");
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

bool List::addAll(int arg1, java::util::Collection* arg2)
{
  jclass    cls = javaEnv->FindClass("java/util/List");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "addAll", "(ILjava/util/Collection;)Z");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

JavaObjectArray* List::toArray()
{
  jclass    cls = javaEnv->FindClass("java/util/List");
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

JavaObjectArray* List::toArray(JavaObjectArray* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/List");
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

java::util::Iterator* List::iterator()
{
  jclass    cls = javaEnv->FindClass("java/util/List");
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

bool List::remove(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/List");
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

java::lang::Object* List::remove(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/List");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "remove", "(I)Ljava/lang/Object;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
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

java::lang::Object* List::set(int arg1, java::lang::Object* arg2)
{
  jclass    cls = javaEnv->FindClass("java/util/List");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "set", "(ILjava/lang/Object;)Ljava/lang/Object;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
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

bool List::removeAll(java::util::Collection* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/List");
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

bool List::containsAll(java::util::Collection* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/List");
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

bool List::retainAll(java::util::Collection* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/List");
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

java::util::List* List::subList(int arg1, int arg2)
{
  jclass    cls = javaEnv->FindClass("java/util/List");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "subList", "(II)Ljava/util/List;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jint jarg2 = (jint)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  java::util::List* result;
  if (jresult!=NULL) {
    result=new java::util::List(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::util::ListIterator* List::listIterator()
{
  jclass    cls = javaEnv->FindClass("java/util/List");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "listIterator", "()Ljava/util/ListIterator;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::util::ListIterator* result;
  if (jresult!=NULL) {
    result=new java::util::ListIterator(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::util::ListIterator* List::listIterator(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/List");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "listIterator", "(I)Ljava/util/ListIterator;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::util::ListIterator* result;
  if (jresult!=NULL) {
    result=new java::util::ListIterator(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
