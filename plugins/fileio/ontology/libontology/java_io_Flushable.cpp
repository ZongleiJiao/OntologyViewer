#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_io_Flushable.h>
#include <java_lang_Object.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace io {

Flushable::Flushable(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

Flushable::Flushable(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void Flushable::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/io/Flushable");
  handleJavaException(wrapperIntern);
}

void Flushable::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/io/Flushable");
  handleJavaException(wrapperIntern);
}

void Flushable::flush()
{
  jclass    cls = javaEnv->FindClass("java/io/Flushable");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "flush", "()V");
  handleJavaException(wrapperIntern);
  javaEnv->CallVoidMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
