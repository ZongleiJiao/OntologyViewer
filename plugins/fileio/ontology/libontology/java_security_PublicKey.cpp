#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_security_PublicKey.h>
#include <java_lang_Object.h>
#include <java_security_Key.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace security {

PublicKey::PublicKey(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

PublicKey::PublicKey(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void PublicKey::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/security/PublicKey");
  handleJavaException(wrapperIntern);
  jfieldID fid_serialVersionUID = javaEnv->GetStaticFieldID(cls, "serialVersionUID", "J");
  handleJavaException(wrapperIntern);
  jlong jresult_serialVersionUID = javaEnv->GetStaticLongField(cls, fid_serialVersionUID);
  handleJavaException(wrapperIntern);
  long result_serialVersionUID = (long)jresult_serialVersionUID;
  this->serialVersionUID = result_serialVersionUID;
}

void PublicKey::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/security/PublicKey");
  handleJavaException(wrapperIntern);
}
}
}
