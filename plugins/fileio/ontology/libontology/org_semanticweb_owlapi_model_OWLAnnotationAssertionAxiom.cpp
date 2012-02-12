#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLAnnotationAssertionAxiom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLAnnotationAxiom.h>
#include <org_semanticweb_owlapi_model_OWLAnnotationProperty.h>
#include <org_semanticweb_owlapi_model_OWLAnnotationValue.h>
#include <org_semanticweb_owlapi_model_OWLAnnotation.h>
#include <org_semanticweb_owlapi_model_OWLAnnotationSubject.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLAnnotationAssertionAxiom::OWLAnnotationAssertionAxiom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLAnnotationAssertionAxiom::OWLAnnotationAssertionAxiom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLAnnotationAssertionAxiom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLAnnotationAssertionAxiom");
  handleJavaException(wrapperIntern);
}

void OWLAnnotationAssertionAxiom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLAnnotationAssertionAxiom");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnnotationProperty* OWLAnnotationAssertionAxiom::getProperty()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLAnnotationAssertionAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getProperty", "()Lorg/semanticweb/owlapi/model/OWLAnnotationProperty;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLAnnotationProperty* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAnnotationProperty(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnnotationValue* OWLAnnotationAssertionAxiom::getValue()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLAnnotationAssertionAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getValue", "()Lorg/semanticweb/owlapi/model/OWLAnnotationValue;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLAnnotationValue* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAnnotationValue(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnnotation* OWLAnnotationAssertionAxiom::getAnnotation()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLAnnotationAssertionAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getAnnotation", "()Lorg/semanticweb/owlapi/model/OWLAnnotation;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLAnnotation* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAnnotation(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnnotationAssertionAxiom* OWLAnnotationAssertionAxiom::getAxiomWithoutAnnotations()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLAnnotationAssertionAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getAxiomWithoutAnnotations", "()Lorg/semanticweb/owlapi/model/OWLAnnotationAssertionAxiom;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLAnnotationAssertionAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAnnotationAssertionAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnnotationSubject* OWLAnnotationAssertionAxiom::getSubject()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLAnnotationAssertionAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSubject", "()Lorg/semanticweb/owlapi/model/OWLAnnotationSubject;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLAnnotationSubject* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAnnotationSubject(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool OWLAnnotationAssertionAxiom::isDeprecatedIRIAssertion()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLAnnotationAssertionAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isDeprecatedIRIAssertion", "()Z");
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
