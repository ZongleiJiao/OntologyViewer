#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLDisjointDataPropertiesAxiom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLNaryPropertyAxiom.h>
#include <org_semanticweb_owlapi_model_OWLDataPropertyAxiom.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLDisjointDataPropertiesAxiom::OWLDisjointDataPropertiesAxiom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLDisjointDataPropertiesAxiom::OWLDisjointDataPropertiesAxiom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLDisjointDataPropertiesAxiom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDisjointDataPropertiesAxiom");
  handleJavaException(wrapperIntern);
}

void OWLDisjointDataPropertiesAxiom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDisjointDataPropertiesAxiom");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDisjointDataPropertiesAxiom* OWLDisjointDataPropertiesAxiom::getAxiomWithoutAnnotations()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDisjointDataPropertiesAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getAxiomWithoutAnnotations", "()Lorg/semanticweb/owlapi/model/OWLDisjointDataPropertiesAxiom;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDisjointDataPropertiesAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDisjointDataPropertiesAxiom(jresult);
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
