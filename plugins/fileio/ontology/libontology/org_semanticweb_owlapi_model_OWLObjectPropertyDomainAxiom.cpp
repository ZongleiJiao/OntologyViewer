#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLObjectPropertyDomainAxiom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLPropertyDomainAxiom.h>
#include <org_semanticweb_owlapi_model_OWLObjectPropertyAxiom.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLObjectPropertyDomainAxiom::OWLObjectPropertyDomainAxiom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLObjectPropertyDomainAxiom::OWLObjectPropertyDomainAxiom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLObjectPropertyDomainAxiom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectPropertyDomainAxiom");
  handleJavaException(wrapperIntern);
}

void OWLObjectPropertyDomainAxiom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectPropertyDomainAxiom");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectPropertyDomainAxiom* OWLObjectPropertyDomainAxiom::getAxiomWithoutAnnotations()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectPropertyDomainAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getAxiomWithoutAnnotations", "()Lorg/semanticweb/owlapi/model/OWLObjectPropertyDomainAxiom;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLObjectPropertyDomainAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectPropertyDomainAxiom(jresult);
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
