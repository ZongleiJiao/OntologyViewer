#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLRestriction.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLAnonymousClassExpression.h>
#include <org_semanticweb_owlapi_model_OWLPropertyExpression.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLRestriction::OWLRestriction(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLRestriction::OWLRestriction(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLRestriction::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLRestriction");
  handleJavaException(wrapperIntern);
}

void OWLRestriction::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLRestriction");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLPropertyExpression* OWLRestriction::getProperty()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLRestriction");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getProperty", "()Lorg/semanticweb/owlapi/model/OWLPropertyExpression;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLPropertyExpression* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLPropertyExpression(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool OWLRestriction::isObjectRestriction()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLRestriction");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isObjectRestriction", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool OWLRestriction::isDataRestriction()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLRestriction");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isDataRestriction", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
}
}
