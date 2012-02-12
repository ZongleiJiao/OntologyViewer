#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLAnonymousIndividual.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLIndividual.h>
#include <org_semanticweb_owlapi_model_OWLAnnotationValue.h>
#include <org_semanticweb_owlapi_model_OWLAnnotationSubject.h>
#include <org_semanticweb_owlapi_model_NodeID.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLAnonymousIndividual::OWLAnonymousIndividual(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLAnonymousIndividual::OWLAnonymousIndividual(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLAnonymousIndividual::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLAnonymousIndividual");
  handleJavaException(wrapperIntern);
}

void OWLAnonymousIndividual::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLAnonymousIndividual");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::NodeID* OWLAnonymousIndividual::getID()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLAnonymousIndividual");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getID", "()Lorg/semanticweb/owlapi/model/NodeID;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::NodeID* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::NodeID(jresult);
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
