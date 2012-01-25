#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_util_Enumeration.h>
#include <java_lang_Object.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace util {

Enumeration::Enumeration(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

Enumeration::Enumeration(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void Enumeration::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/util/Enumeration");
  handleJavaException(wrapperIntern);
}

void Enumeration::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/util/Enumeration");
  handleJavaException(wrapperIntern);
}

bool Enumeration::hasMoreElements()
{
  jclass    cls = javaEnv->FindClass("java/util/Enumeration");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "hasMoreElements", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::Object* Enumeration::nextElement()
{
  jclass    cls = javaEnv->FindClass("java/util/Enumeration");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "nextElement", "()Ljava/lang/Object;");
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
}
}
