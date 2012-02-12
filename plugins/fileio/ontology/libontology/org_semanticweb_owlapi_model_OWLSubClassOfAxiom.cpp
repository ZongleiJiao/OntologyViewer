#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLSubClassOfAxiom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLClassAxiom.h>
#include <org_semanticweb_owlapi_model_OWLClassExpression.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLSubClassOfAxiom::OWLSubClassOfAxiom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLSubClassOfAxiom::OWLSubClassOfAxiom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLSubClassOfAxiom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSubClassOfAxiom");
  handleJavaException(wrapperIntern);
}

void OWLSubClassOfAxiom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSubClassOfAxiom");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLClassExpression* OWLSubClassOfAxiom::getSuperClass()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSubClassOfAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSuperClass", "()Lorg/semanticweb/owlapi/model/OWLClassExpression;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLClassExpression* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLClassExpression(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLSubClassOfAxiom* OWLSubClassOfAxiom::getAxiomWithoutAnnotations()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSubClassOfAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getAxiomWithoutAnnotations", "()Lorg/semanticweb/owlapi/model/OWLSubClassOfAxiom;");
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

org::semanticweb::owlapi::model::OWLClassExpression* OWLSubClassOfAxiom::getSubClass()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSubClassOfAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSubClass", "()Lorg/semanticweb/owlapi/model/OWLClassExpression;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLClassExpression* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLClassExpression(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool OWLSubClassOfAxiom::isGCI()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSubClassOfAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isGCI", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
}
}
