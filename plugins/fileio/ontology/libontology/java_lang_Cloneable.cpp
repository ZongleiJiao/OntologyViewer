#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_lang_Cloneable.h>
#include <java_lang_Object.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace lang {

Cloneable::Cloneable(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

Cloneable::Cloneable(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void Cloneable::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/lang/Cloneable");
  handleJavaException(wrapperIntern);
}

void Cloneable::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/lang/Cloneable");
  handleJavaException(wrapperIntern);
}
}
}
