#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_security_Guard.h>
#include <java_lang_Object.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace security {

Guard::Guard(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

Guard::Guard(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void Guard::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/security/Guard");
  handleJavaException(wrapperIntern);
}

void Guard::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/security/Guard");
  handleJavaException(wrapperIntern);
}

void Guard::checkGuard(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/security/Guard");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "checkGuard", "(Ljava/lang/Object;)V");
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
}
}
