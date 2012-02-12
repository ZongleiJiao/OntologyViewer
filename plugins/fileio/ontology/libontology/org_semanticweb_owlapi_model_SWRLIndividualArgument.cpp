#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_SWRLIndividualArgument.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_SWRLIArgument.h>
#include <org_semanticweb_owlapi_model_OWLIndividual.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

SWRLIndividualArgument::SWRLIndividualArgument(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

SWRLIndividualArgument::SWRLIndividualArgument(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void SWRLIndividualArgument::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLIndividualArgument");
  handleJavaException(wrapperIntern);
}

void SWRLIndividualArgument::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLIndividualArgument");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLIndividual* SWRLIndividualArgument::getIndividual()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLIndividualArgument");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getIndividual", "()Lorg/semanticweb/owlapi/model/OWLIndividual;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLIndividual* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLIndividual(jresult);
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
