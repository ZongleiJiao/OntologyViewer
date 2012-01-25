#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_lang_Object.h>
#include <java_lang_String.h>
#include <java_lang_Class.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace lang {

Object::Object(JavaMarker* dummy)
  : JavaBaseClass(dummy)
{
  updateAllVariables(wrapperIntern);
}

Object::Object(jobject obj)
  : JavaBaseClass(obj)
{
  updateAllVariables(wrapperIntern);
}

Object::Object()
  : JavaBaseClass(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("java/lang/Object");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "()V");
  handleJavaException(wrapperIntern);
  jobject o = javaEnv->NewObject(cls, mid);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  updateAllVariables(wrapperIntern);
}

void Object::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/lang/Object");
  handleJavaException(wrapperIntern);
}

void Object::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/lang/Object");
  handleJavaException(wrapperIntern);
}

void Object::wait(long arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/Object");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "wait", "(J)V");
  handleJavaException(wrapperIntern);
  jlong jarg1 = (jlong)arg1;
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

void Object::wait(long arg1, int arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/Object");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "wait", "(JI)V");
  handleJavaException(wrapperIntern);
  jlong jarg1 = (jlong)arg1;
  jint jarg2 = (jint)arg2;
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

void Object::wait()
{
  jclass    cls = javaEnv->FindClass("java/lang/Object");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "wait", "()V");
  handleJavaException(wrapperIntern);
  javaEnv->CallVoidMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

bool Object::equals(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/Object");
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

const char* Object::toString()
{
  jclass    cls = javaEnv->FindClass("java/lang/Object");
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

int Object::hashCode()
{
  jclass    cls = javaEnv->FindClass("java/lang/Object");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "hashCode", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::Class* Object::getClass()
{
  jclass    cls = javaEnv->FindClass("java/lang/Object");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getClass", "()Ljava/lang/Class;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
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

void Object::notify()
{
  jclass    cls = javaEnv->FindClass("java/lang/Object");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "notify", "()V");
  handleJavaException(wrapperIntern);
  javaEnv->CallVoidMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

void Object::notifyAll()
{
  jclass    cls = javaEnv->FindClass("java/lang/Object");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "notifyAll", "()V");
  handleJavaException(wrapperIntern);
  javaEnv->CallVoidMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
