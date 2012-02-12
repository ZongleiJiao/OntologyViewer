#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLObjectComplementOf.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLBooleanClassExpression.h>
#include <org_semanticweb_owlapi_model_OWLClassExpression.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLObjectComplementOf::OWLObjectComplementOf(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLObjectComplementOf::OWLObjectComplementOf(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLObjectComplementOf::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectComplementOf");
  handleJavaException(wrapperIntern);
}

void OWLObjectComplementOf::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectComplementOf");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLClassExpression* OWLObjectComplementOf::getOperand()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectComplementOf");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOperand", "()Lorg/semanticweb/owlapi/model/OWLClassExpression;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLClassExpression* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLClassExpression(jresult);
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
