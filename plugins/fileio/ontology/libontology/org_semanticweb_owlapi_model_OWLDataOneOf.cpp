#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLDataOneOf.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLDataRange.h>
#include <java_util_Set.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLDataOneOf::OWLDataOneOf(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLDataOneOf::OWLDataOneOf(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLDataOneOf::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataOneOf");
  handleJavaException(wrapperIntern);
}

void OWLDataOneOf::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataOneOf");
  handleJavaException(wrapperIntern);
}

java::util::Set* OWLDataOneOf::getValues()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataOneOf");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getValues", "()Ljava/util/Set;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::util::Set* result;
  if (jresult!=NULL) {
    result=new java::util::Set(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
}
}
