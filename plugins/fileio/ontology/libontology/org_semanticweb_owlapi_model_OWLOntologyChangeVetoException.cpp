#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLOntologyChangeVetoException.h>
#include <org_semanticweb_owlapi_model_OWLOntologyChangeException.h>
#include <org_semanticweb_owlapi_model_OWLOntologyChange.h>
#include <java_lang_String.h>
#include <java_lang_Throwable.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLOntologyChangeVetoException::OWLOntologyChangeVetoException(JavaMarker* dummy)
  : org::semanticweb::owlapi::model::OWLOntologyChangeException(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLOntologyChangeVetoException::OWLOntologyChangeVetoException(jobject obj)
  : org::semanticweb::owlapi::model::OWLOntologyChangeException(obj)
{
  updateAllVariables(wrapperIntern);
}

OWLOntologyChangeVetoException::OWLOntologyChangeVetoException(org::semanticweb::owlapi::model::OWLOntologyChange* arg1, const char* arg2)
  : org::semanticweb::owlapi::model::OWLOntologyChangeException(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyChangeVetoException");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "(Lorg/semanticweb/owlapi/model/OWLOntologyChange;Ljava/lang/String;)V");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jstring jarg2;
  if (arg2!=NULL) {
    jarg2 = javaEnv->NewStringUTF(arg2);
  } else {
    jarg2=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject o = javaEnv->NewObject(cls, mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  if (jarg2!=NULL) {
    javaEnv->DeleteLocalRef(jarg2);
  }
  updateAllVariables(wrapperIntern);
}

OWLOntologyChangeVetoException::OWLOntologyChangeVetoException(org::semanticweb::owlapi::model::OWLOntologyChange* arg1, const char* arg2, java::lang::Throwable* arg3)
  : org::semanticweb::owlapi::model::OWLOntologyChangeException(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyChangeVetoException");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "(Lorg/semanticweb/owlapi/model/OWLOntologyChange;Ljava/lang/String;Ljava/lang/Throwable;)V");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jstring jarg2;
  if (arg2!=NULL) {
    jarg2 = javaEnv->NewStringUTF(arg2);
  } else {
    jarg2=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject jarg3;
  if (arg3!=NULL) {
    jarg3=arg3->getJavaObject();
  } else {
    jarg3=NULL;
  }
  jobject o = javaEnv->NewObject(cls, mid, jarg1, jarg2, jarg3);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  if (jarg2!=NULL) {
    javaEnv->DeleteLocalRef(jarg2);
  }
  updateAllVariables(wrapperIntern);
}

OWLOntologyChangeVetoException::OWLOntologyChangeVetoException(org::semanticweb::owlapi::model::OWLOntologyChange* arg1, java::lang::Throwable* arg2)
  : org::semanticweb::owlapi::model::OWLOntologyChangeException(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyChangeVetoException");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "(Lorg/semanticweb/owlapi/model/OWLOntologyChange;Ljava/lang/Throwable;)V");
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

void OWLOntologyChangeVetoException::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyChangeVetoException");
  handleJavaException(wrapperIntern);
}

void OWLOntologyChangeVetoException::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyChangeVetoException");
  handleJavaException(wrapperIntern);
}
}
}
}
}
