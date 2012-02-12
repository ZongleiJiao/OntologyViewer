#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_MissingImportEvent.h>
#include <java_lang_Object.h>
#include <java_net_URI.h>
#include <org_semanticweb_owlapi_model_OWLOntologyCreationException.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

MissingImportEvent::MissingImportEvent(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

MissingImportEvent::MissingImportEvent(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

MissingImportEvent::MissingImportEvent(java::net::URI* arg1, org::semanticweb::owlapi::model::OWLOntologyCreationException* arg2)
  : java::lang::Object(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/MissingImportEvent");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "(Ljava/net/URI;Lorg/semanticweb/owlapi/model/OWLOntologyCreationException;)V");
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

void MissingImportEvent::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/MissingImportEvent");
  handleJavaException(wrapperIntern);
}

void MissingImportEvent::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/MissingImportEvent");
  handleJavaException(wrapperIntern);
}

java::net::URI* MissingImportEvent::getImportedOntologyURI()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/MissingImportEvent");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getImportedOntologyURI", "()Ljava/net/URI;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::net::URI* result;
  if (jresult!=NULL) {
    result=new java::net::URI(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLOntologyCreationException* MissingImportEvent::getCreationException()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/MissingImportEvent");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getCreationException", "()Lorg/semanticweb/owlapi/model/OWLOntologyCreationException;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLOntologyCreationException* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLOntologyCreationException(jresult);
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
