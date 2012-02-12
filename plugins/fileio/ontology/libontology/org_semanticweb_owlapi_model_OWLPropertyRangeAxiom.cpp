#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLPropertyRangeAxiom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLUnaryPropertyAxiom.h>
#include <org_semanticweb_owlapi_model_OWLSubClassOfAxiomShortCut.h>
#include <org_semanticweb_owlapi_model_OWLPropertyRange.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLPropertyRangeAxiom::OWLPropertyRangeAxiom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLPropertyRangeAxiom::OWLPropertyRangeAxiom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLPropertyRangeAxiom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLPropertyRangeAxiom");
  handleJavaException(wrapperIntern);
}

void OWLPropertyRangeAxiom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLPropertyRangeAxiom");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLPropertyRange* OWLPropertyRangeAxiom::getRange()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLPropertyRangeAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getRange", "()Lorg/semanticweb/owlapi/model/OWLPropertyRange;");
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
