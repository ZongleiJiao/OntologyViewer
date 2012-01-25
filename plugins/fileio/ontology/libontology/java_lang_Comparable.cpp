#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_lang_Comparable.h>
#include <java_lang_Object.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace lang {

Comparable::Comparable(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

Comparable::Comparable(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void Comparable::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/lang/Comparable");
  handleJavaException(wrapperIntern);
}

void Comparable::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/lang/Comparable");
  handleJavaException(wrapperIntern);
}

int Comparable::compareTo(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/Comparable");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "compareTo", "(Ljava/lang/Object;)I");
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
}
}
