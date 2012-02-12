#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLDataComplementOf.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLDataRange.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLDataComplementOf::OWLDataComplementOf(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLDataComplementOf::OWLDataComplementOf(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLDataComplementOf::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataComplementOf");
  handleJavaException(wrapperIntern);
}

void OWLDataComplementOf::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataComplementOf");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataRange* OWLDataComplementOf::getDataRange()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataComplementOf");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getDataRange", "()Lorg/semanticweb/owlapi/model/OWLDataRange;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDataRange* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataRange(jresult);
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
