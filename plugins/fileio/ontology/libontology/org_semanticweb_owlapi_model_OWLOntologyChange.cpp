#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLOntologyChange.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLOntology.h>
#include <org_semanticweb_owlapi_model_OWLOntologyChangeVisitor.h>
#include <org_semanticweb_owlapi_model_OWLOntologyChangeVisitorEx.h>
#include <org_semanticweb_owlapi_model_OWLAxiom.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLOntologyChange::OWLOntologyChange(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLOntologyChange::OWLOntologyChange(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

OWLOntologyChange::OWLOntologyChange(org::semanticweb::owlapi::model::OWLOntology* arg1)
  : java::lang::Object(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyChange");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "(Lorg/semanticweb/owlapi/model/OWLOntology;)V");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject o = javaEnv->NewObject(cls, mid, jarg1);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  updateAllVariables(wrapperIntern);
}

void OWLOntologyChange::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyChange");
  handleJavaException(wrapperIntern);
}

void OWLOntologyChange::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyChange");
  handleJavaException(wrapperIntern);
}

void OWLOntologyChange::accept(org::semanticweb::owlapi::model::OWLOntologyChangeVisitor* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyChange");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "accept", "(Lorg/semanticweb/owlapi/model/OWLOntologyChangeVisitor;)V");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::Object* OWLOntologyChange::accept(org::semanticweb::owlapi::model::OWLOntologyChangeVisitorEx* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyChange");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "accept", "(Lorg/semanticweb/owlapi/model/OWLOntologyChangeVisitorEx;)Ljava/lang/Object;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::Object* result;
  if (jresult!=NULL) {
    result=new java::lang::Object(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLOntology* OWLOntologyChange::getOntology()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyChange");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOntology", "()Lorg/semanticweb/owlapi/model/OWLOntology;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLOntology* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLOntology(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool OWLOntologyChange::isAxiomChange()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyChange");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isAxiomChange", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAxiom* OWLOntologyChange::getAxiom()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyChange");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getAxiom", "()Lorg/semanticweb/owlapi/model/OWLAxiom;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool OWLOntologyChange::isImportChange()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyChange");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isImportChange", "()Z");
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
