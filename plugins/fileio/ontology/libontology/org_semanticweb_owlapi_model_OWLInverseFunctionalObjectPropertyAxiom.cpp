#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLInverseFunctionalObjectPropertyAxiom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLObjectPropertyCharacteristicAxiom.h>
#include <org_semanticweb_owlapi_model_OWLSubClassOfAxiomShortCut.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLInverseFunctionalObjectPropertyAxiom::OWLInverseFunctionalObjectPropertyAxiom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLInverseFunctionalObjectPropertyAxiom::OWLInverseFunctionalObjectPropertyAxiom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLInverseFunctionalObjectPropertyAxiom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLInverseFunctionalObjectPropertyAxiom");
  handleJavaException(wrapperIntern);
}

void OWLInverseFunctionalObjectPropertyAxiom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLInverseFunctionalObjectPropertyAxiom");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLInverseFunctionalObjectPropertyAxiom* OWLInverseFunctionalObjectPropertyAxiom::getAxiomWithoutAnnotations()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLInverseFunctionalObjectPropertyAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getAxiomWithoutAnnotations", "()Lorg/semanticweb/owlapi/model/OWLInverseFunctionalObjectPropertyAxiom;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLInverseFunctionalObjectPropertyAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLInverseFunctionalObjectPropertyAxiom(jresult);
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
