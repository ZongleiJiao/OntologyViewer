#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLDataPropertyExpression.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLPropertyExpression.h>
#include <org_semanticweb_owlapi_model_SWRLPredicate.h>
#include <org_semanticweb_owlapi_model_OWLDataProperty.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLDataPropertyExpression::OWLDataPropertyExpression(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLDataPropertyExpression::OWLDataPropertyExpression(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLDataPropertyExpression::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataPropertyExpression");
  handleJavaException(wrapperIntern);
}

void OWLDataPropertyExpression::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataPropertyExpression");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataProperty* OWLDataPropertyExpression::asOWLDataProperty()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataPropertyExpression");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "asOWLDataProperty", "()Lorg/semanticweb/owlapi/model/OWLDataProperty;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDataProperty* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataProperty(jresult);
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
