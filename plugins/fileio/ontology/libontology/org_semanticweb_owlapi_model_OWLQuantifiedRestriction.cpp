#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLQuantifiedRestriction.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLRestriction.h>
#include <org_semanticweb_owlapi_model_OWLPropertyRange.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLQuantifiedRestriction::OWLQuantifiedRestriction(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLQuantifiedRestriction::OWLQuantifiedRestriction(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLQuantifiedRestriction::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLQuantifiedRestriction");
  handleJavaException(wrapperIntern);
}

void OWLQuantifiedRestriction::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLQuantifiedRestriction");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLPropertyRange* OWLQuantifiedRestriction::getFiller()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLQuantifiedRestriction");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getFiller", "()Lorg/semanticweb/owlapi/model/OWLPropertyRange;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLPropertyRange* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLPropertyRange(jresult);
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
