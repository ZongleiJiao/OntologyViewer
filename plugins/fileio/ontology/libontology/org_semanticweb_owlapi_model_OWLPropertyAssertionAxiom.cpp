#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLPropertyAssertionAxiom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLIndividualAxiom.h>
#include <org_semanticweb_owlapi_model_OWLSubClassOfAxiomShortCut.h>
#include <org_semanticweb_owlapi_model_OWLPropertyExpression.h>
#include <org_semanticweb_owlapi_model_OWLPropertyAssertionObject.h>
#include <org_semanticweb_owlapi_model_OWLIndividual.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLPropertyAssertionAxiom::OWLPropertyAssertionAxiom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLPropertyAssertionAxiom::OWLPropertyAssertionAxiom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLPropertyAssertionAxiom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLPropertyAssertionAxiom");
  handleJavaException(wrapperIntern);
}

void OWLPropertyAssertionAxiom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLPropertyAssertionAxiom");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLPropertyExpression* OWLPropertyAssertionAxiom::getProperty()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLPropertyAssertionAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getProperty", "()Lorg/semanticweb/owlapi/model/OWLPropertyExpression;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLPropertyExpression* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLPropertyExpression(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLPropertyAssertionObject* OWLPropertyAssertionAxiom::getObject()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLPropertyAssertionAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getObject", "()Lorg/semanticweb/owlapi/model/OWLPropertyAssertionObject;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLPropertyAssertionObject* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLPropertyAssertionObject(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLIndividual* OWLPropertyAssertionAxiom::getSubject()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLPropertyAssertionAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSubject", "()Lorg/semanticweb/owlapi/model/OWLIndividual;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLIndividual* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLIndividual(jresult);
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
