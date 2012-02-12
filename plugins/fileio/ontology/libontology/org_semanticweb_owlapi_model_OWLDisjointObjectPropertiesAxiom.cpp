#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLDisjointObjectPropertiesAxiom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLNaryPropertyAxiom.h>
#include <org_semanticweb_owlapi_model_OWLObjectPropertyAxiom.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLDisjointObjectPropertiesAxiom::OWLDisjointObjectPropertiesAxiom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLDisjointObjectPropertiesAxiom::OWLDisjointObjectPropertiesAxiom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLDisjointObjectPropertiesAxiom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDisjointObjectPropertiesAxiom");
  handleJavaException(wrapperIntern);
}

void OWLDisjointObjectPropertiesAxiom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDisjointObjectPropertiesAxiom");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDisjointObjectPropertiesAxiom* OWLDisjointObjectPropertiesAxiom::getAxiomWithoutAnnotations()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDisjointObjectPropertiesAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getAxiomWithoutAnnotations", "()Lorg/semanticweb/owlapi/model/OWLDisjointObjectPropertiesAxiom;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDisjointObjectPropertiesAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDisjointObjectPropertiesAxiom(jresult);
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
