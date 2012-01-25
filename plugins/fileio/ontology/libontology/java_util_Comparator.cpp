#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_util_Comparator.h>
#include <java_lang_Object.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace util {

Comparator::Comparator(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

Comparator::Comparator(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void Comparator::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/util/Comparator");
  handleJavaException(wrapperIntern);
}

void Comparator::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/util/Comparator");
  handleJavaException(wrapperIntern);
}

bool Comparator::equals(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/Comparator");
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

int Comparator::compare(java::lang::Object* arg1, java::lang::Object* arg2)
{
  jclass    cls = javaEnv->FindClass("java/util/Comparator");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "compare", "(Ljava/lang/Object;Ljava/lang/Object;)I");
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
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
