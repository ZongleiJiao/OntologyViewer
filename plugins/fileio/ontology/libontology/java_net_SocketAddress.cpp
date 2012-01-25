#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_net_SocketAddress.h>
#include <java_lang_Object.h>
#include <java_io_Serializable.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace net {

SocketAddress::SocketAddress(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

SocketAddress::SocketAddress(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

SocketAddress::SocketAddress()
  : java::lang::Object(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("java/net/SocketAddress");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "()V");
  handleJavaException(wrapperIntern);
  jobject o = javaEnv->NewObject(cls, mid);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  updateAllVariables(wrapperIntern);
}

void SocketAddress::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/net/SocketAddress");
  handleJavaException(wrapperIntern);
}

void SocketAddress::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/net/SocketAddress");
  handleJavaException(wrapperIntern);
}
}
}
