#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_RemoveOntologyAnnotation.h>
#include <org_semanticweb_owlapi_model_OWLOntologyChange.h>
#include <org_semanticweb_owlapi_model_OWLOntology.h>
#include <org_semanticweb_owlapi_model_OWLAnnotation.h>
#include <java_lang_Object.h>
#include <java_lang_String.h>
#include <org_semanticweb_owlapi_model_OWLOntologyChangeVisitor.h>
#include <org_semanticweb_owlapi_model_OWLOntologyChangeVisitorEx.h>
#include <org_semanticweb_owlapi_model_OWLAxiom.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

RemoveOntologyAnnotation::RemoveOntologyAnnotation(JavaMarker* dummy)
  : org::semanticweb::owlapi::model::OWLOntologyChange(dummy)
{
  updateAllVariables(wrapperIntern);
}

RemoveOntologyAnnotation::RemoveOntologyAnnotation(jobject obj)
  : org::semanticweb::owlapi::model::OWLOntologyChange(obj)
{
  updateAllVariables(wrapperIntern);
}

RemoveOntologyAnnotation::RemoveOntologyAnnotation(org::semanticweb::owlapi::model::OWLOntology* arg1, org::semanticweb::owlapi::model::OWLAnnotation* arg2)
  : org::semanticweb::owlapi::model::OWLOntologyChange(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/RemoveOntologyAnnotation");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "(Lorg/semanticweb/owlapi/model/OWLOntology;Lorg/semanticweb/owlapi/model/OWLAnnotation;)V");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject o = javaEnv->NewObject(cls, mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  updateAllVariables(wrapperIntern);
}

void RemoveOntologyAnnotation::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/RemoveOntologyAnnotation");
  handleJavaException(wrapperIntern);
}

void RemoveOntologyAnnotation::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/RemoveOntologyAnnotation");
  handleJavaException(wrapperIntern);
}

bool RemoveOntologyAnnotation::equals(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/RemoveOntologyAnnotation");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

const char* RemoveOntologyAnnotation::toString()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/RemoveOntologyAnnotation");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "toString", "()Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  char* result;
  if (jresult!=NULL) {
    const char*  jresult_bytes = javaEnv->GetStringUTFChars((jstring)jresult,NULL);
    handleJavaException(wrapperIntern);
    jsize        jresult_size = javaEnv->GetStringUTFLength((jstring)jresult);
    handleJavaException(wrapperIntern);
                 result = new char[jresult_size+1];
    for (int i=0;i<jresult_size;i++) {
      result[i] = jresult_bytes[i];
    }
    result[jresult_size]=0;
    javaEnv->ReleaseStringUTFChars((jstring)jresult, jresult_bytes);
    handleJavaException(wrapperIntern);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int RemoveOntologyAnnotation::hashCode()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/RemoveOntologyAnnotation");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "hashCode", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnnotation* RemoveOntologyAnnotation::getAnnotation()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/RemoveOntologyAnnotation");
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

void RemoveOntologyAnnotation::accept(org::semanticweb::owlapi::model::OWLOntologyChangeVisitor* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/RemoveOntologyAnnotation");
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

java::lang::Object* RemoveOntologyAnnotation::accept(org::semanticweb::owlapi::model::OWLOntologyChangeVisitorEx* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/RemoveOntologyAnnotation");
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

bool RemoveOntologyAnnotation::isAxiomChange()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/RemoveOntologyAnnotation");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isAxiomChange", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAxiom* RemoveOntologyAnnotation::getAxiom()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/RemoveOntologyAnnotation");
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

bool RemoveOntologyAnnotation::isImportChange()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/RemoveOntologyAnnotation");
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
