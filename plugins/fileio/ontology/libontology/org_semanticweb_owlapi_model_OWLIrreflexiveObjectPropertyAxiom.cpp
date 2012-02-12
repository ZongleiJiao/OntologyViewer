#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLIrreflexiveObjectPropertyAxiom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLObjectPropertyCharacteristicAxiom.h>
#include <org_semanticweb_owlapi_model_OWLSubClassOfAxiomShortCut.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLIrreflexiveObjectPropertyAxiom::OWLIrreflexiveObjectPropertyAxiom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLIrreflexiveObjectPropertyAxiom::OWLIrreflexiveObjectPropertyAxiom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLIrreflexiveObjectPropertyAxiom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLIrreflexiveObjectPropertyAxiom");
  handleJavaException(wrapperIntern);
}

void OWLIrreflexiveObjectPropertyAxiom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLIrreflexiveObjectPropertyAxiom");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLIrreflexiveObjectPropertyAxiom* OWLIrreflexiveObjectPropertyAxiom::getAxiomWithoutAnnotations()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLIrreflexiveObjectPropertyAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getAxiomWithoutAnnotations", "()Lorg/semanticweb/owlapi/model/OWLIrreflexiveObjectPropertyAxiom;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLIrreflexiveObjectPropertyAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLIrreflexiveObjectPropertyAxiom(jresult);
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
