#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_io_Closeable.h>
#include <java_lang_Object.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace io {

Closeable::Closeable(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

Closeable::Closeable(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void Closeable::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/io/Closeable");
  handleJavaException(wrapperIntern);
}

void Closeable::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/io/Closeable");
  handleJavaException(wrapperIntern);
}

void Closeable::close()
{
  jclass    cls = javaEnv->FindClass("java/io/Closeable");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "close", "()V");
  handleJavaException(wrapperIntern);
  javaEnv->CallVoidMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
