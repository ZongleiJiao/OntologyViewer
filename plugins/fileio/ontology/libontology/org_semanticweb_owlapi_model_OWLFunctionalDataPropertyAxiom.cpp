#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLFunctionalDataPropertyAxiom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLDataPropertyCharacteristicAxiom.h>
#include <org_semanticweb_owlapi_model_OWLSubClassOfAxiomShortCut.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLFunctionalDataPropertyAxiom::OWLFunctionalDataPropertyAxiom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLFunctionalDataPropertyAxiom::OWLFunctionalDataPropertyAxiom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLFunctionalDataPropertyAxiom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLFunctionalDataPropertyAxiom");
  handleJavaException(wrapperIntern);
}

void OWLFunctionalDataPropertyAxiom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLFunctionalDataPropertyAxiom");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLFunctionalDataPropertyAxiom* OWLFunctionalDataPropertyAxiom::getAxiomWithoutAnnotations()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLFunctionalDataPropertyAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getAxiomWithoutAnnotations", "()Lorg/semanticweb/owlapi/model/OWLFunctionalDataPropertyAxiom;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLFunctionalDataPropertyAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLFunctionalDataPropertyAxiom(jresult);
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
