#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_SWRLDataPropertyAtom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_SWRLBinaryAtom.h>
#include <org_semanticweb_owlapi_model_OWLDataPropertyExpression.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

SWRLDataPropertyAtom::SWRLDataPropertyAtom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

SWRLDataPropertyAtom::SWRLDataPropertyAtom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void SWRLDataPropertyAtom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLDataPropertyAtom");
  handleJavaException(wrapperIntern);
}

void SWRLDataPropertyAtom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLDataPropertyAtom");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataPropertyExpression* SWRLDataPropertyAtom::getPredicate()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLDataPropertyAtom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getPredicate", "()Lorg/semanticweb/owlapi/model/OWLDataPropertyExpression;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDataPropertyExpression* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataPropertyExpression(jresult);
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
