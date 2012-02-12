#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLDeclarationAxiom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLAxiom.h>
#include <org_semanticweb_owlapi_model_OWLEntity.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLDeclarationAxiom::OWLDeclarationAxiom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLDeclarationAxiom::OWLDeclarationAxiom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLDeclarationAxiom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDeclarationAxiom");
  handleJavaException(wrapperIntern);
}

void OWLDeclarationAxiom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDeclarationAxiom");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDeclarationAxiom* OWLDeclarationAxiom::getAxiomWithoutAnnotations()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDeclarationAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getAxiomWithoutAnnotations", "()Lorg/semanticweb/owlapi/model/OWLDeclarationAxiom;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDeclarationAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDeclarationAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLEntity* OWLDeclarationAxiom::getEntity()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDeclarationAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getEntity", "()Lorg/semanticweb/owlapi/model/OWLEntity;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLEntity* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLEntity(jresult);
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
