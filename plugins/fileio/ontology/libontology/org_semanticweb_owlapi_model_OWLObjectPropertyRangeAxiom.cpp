#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLObjectPropertyRangeAxiom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLPropertyRangeAxiom.h>
#include <org_semanticweb_owlapi_model_OWLObjectPropertyAxiom.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLObjectPropertyRangeAxiom::OWLObjectPropertyRangeAxiom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLObjectPropertyRangeAxiom::OWLObjectPropertyRangeAxiom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLObjectPropertyRangeAxiom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectPropertyRangeAxiom");
  handleJavaException(wrapperIntern);
}

void OWLObjectPropertyRangeAxiom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectPropertyRangeAxiom");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectPropertyRangeAxiom* OWLObjectPropertyRangeAxiom::getAxiomWithoutAnnotations()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectPropertyRangeAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getAxiomWithoutAnnotations", "()Lorg/semanticweb/owlapi/model/OWLObjectPropertyRangeAxiom;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLObjectPropertyRangeAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectPropertyRangeAxiom(jresult);
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
