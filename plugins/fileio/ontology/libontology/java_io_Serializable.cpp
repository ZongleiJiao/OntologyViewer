#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_io_Serializable.h>
#include <java_lang_Object.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace io {

Serializable::Serializable(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

Serializable::Serializable(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void Serializable::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/io/Serializable");
  handleJavaException(wrapperIntern);
}

void Serializable::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/io/Serializable");
  handleJavaException(wrapperIntern);
}
}
}
