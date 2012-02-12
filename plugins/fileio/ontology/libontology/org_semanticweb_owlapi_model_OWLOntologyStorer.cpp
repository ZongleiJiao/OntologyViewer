#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLOntologyStorer.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLOntologyFormat.h>
#include <org_semanticweb_owlapi_model_OWLOntologyManager.h>
#include <org_semanticweb_owlapi_model_OWLOntology.h>
#include <org_semanticweb_owlapi_model_IRI.h>
#include <org_semanticweb_owlapi_io_OWLOntologyDocumentTarget.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLOntologyStorer::OWLOntologyStorer(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLOntologyStorer::OWLOntologyStorer(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLOntologyStorer::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyStorer");
  handleJavaException(wrapperIntern);
}

void OWLOntologyStorer::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyStorer");
  handleJavaException(wrapperIntern);
}

bool OWLOntologyStorer::canStoreOntology(org::semanticweb::owlapi::model::OWLOntologyFormat* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyStorer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "canStoreOntology", "(Lorg/semanticweb/owlapi/model/OWLOntologyFormat;)Z");
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

void OWLOntologyStorer::storeOntology(org::semanticweb::owlapi::model::OWLOntologyManager* arg1, org::semanticweb::owlapi::model::OWLOntology* arg2, org::semanticweb::owlapi::model::IRI* arg3, org::semanticweb::owlapi::model::OWLOntologyFormat* arg4)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyStorer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "storeOntology", "(Lorg/semanticweb/owlapi/model/OWLOntologyManager;Lorg/semanticweb/owlapi/model/OWLOntology;Lorg/semanticweb/owlapi/model/IRI;Lorg/semanticweb/owlapi/model/OWLOntologyFormat;)V");
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
  jobject jarg3;
  if (arg3!=NULL) {
    jarg3=arg3->getJavaObject();
  } else {
    jarg3=NULL;
  }
  jobject jarg4;
  if (arg4!=NULL) {
    jarg4=arg4->getJavaObject();
  } else {
    jarg4=NULL;
  }
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3, jarg4);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

void OWLOntologyStorer::storeOntology(org::semanticweb::owlapi::model::OWLOntologyManager* arg1, org::semanticweb::owlapi::model::OWLOntology* arg2, org::semanticweb::owlapi::io::OWLOntologyDocumentTarget* arg3, org::semanticweb::owlapi::model::OWLOntologyFormat* arg4)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyStorer");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "storeOntology", "(Lorg/semanticweb/owlapi/model/OWLOntologyManager;Lorg/semanticweb/owlapi/model/OWLOntology;Lorg/semanticweb/owlapi/io/OWLOntologyDocumentTarget;Lorg/semanticweb/owlapi/model/OWLOntologyFormat;)V");
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
  jobject jarg3;
  if (arg3!=NULL) {
    jarg3=arg3->getJavaObject();
  } else {
    jarg3=NULL;
  }
  jobject jarg4;
  if (arg4!=NULL) {
    jarg4=arg4->getJavaObject();
  } else {
    jarg4=NULL;
  }
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3, jarg4);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
}
}
