#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLSubClassOfAxiomShortCut.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLSubClassOfAxiom.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLSubClassOfAxiomShortCut::OWLSubClassOfAxiomShortCut(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLSubClassOfAxiomShortCut::OWLSubClassOfAxiomShortCut(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLSubClassOfAxiomShortCut::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSubClassOfAxiomShortCut");
  handleJavaException(wrapperIntern);
}

void OWLSubClassOfAxiomShortCut::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSubClassOfAxiomShortCut");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLSubClassOfAxiom* OWLSubClassOfAxiomShortCut::asOWLSubClassOfAxiom()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSubClassOfAxiomShortCut");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "asOWLSubClassOfAxiom", "()Lorg/semanticweb/owlapi/model/OWLSubClassOfAxiom;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLSubClassOfAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLSubClassOfAxiom(jresult);
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
