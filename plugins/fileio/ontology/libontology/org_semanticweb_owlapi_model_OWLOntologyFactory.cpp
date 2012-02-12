#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLOntologyFactory.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLOntologyManager.h>
#include <org_semanticweb_owlapi_model_OWLOntology.h>
#include <org_semanticweb_owlapi_model_OWLOntologyID.h>
#include <org_semanticweb_owlapi_model_IRI.h>
#include <org_semanticweb_owlapi_model_OWLOntologyFactory__OWLOntologyCreationHandler.h>
#include <org_semanticweb_owlapi_io_OWLOntologyDocumentSource.h>
#include <org_semanticweb_owlapi_model_OWLOntologyLoaderConfiguration.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLOntologyFactory::OWLOntologyFactory(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLOntologyFactory::OWLOntologyFactory(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLOntologyFactory::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyFactory");
  handleJavaException(wrapperIntern);
}

void OWLOntologyFactory::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyFactory");
  handleJavaException(wrapperIntern);
}

void OWLOntologyFactory::setOWLOntologyManager(org::semanticweb::owlapi::model::OWLOntologyManager* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "setOWLOntologyManager", "(Lorg/semanticweb/owlapi/model/OWLOntologyManager;)V");
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

org::semanticweb::owlapi::model::OWLOntology* OWLOntologyFactory::createOWLOntology(org::semanticweb::owlapi::model::OWLOntologyID* arg1, org::semanticweb::owlapi::model::IRI* arg2, org::semanticweb::owlapi::model::OWLOntologyFactory__OWLOntologyCreationHandler* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "createOWLOntology", "(Lorg/semanticweb/owlapi/model/OWLOntologyID;Lorg/semanticweb/owlapi/model/IRI;Lorg/semanticweb/owlapi/model/OWLOntologyFactory$OWLOntologyCreationHandler;)Lorg/semanticweb/owlapi/model/OWLOntology;");
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
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3);
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

org::semanticweb::owlapi::model::OWLOntology* OWLOntologyFactory::loadOWLOntology(org::semanticweb::owlapi::io::OWLOntologyDocumentSource* arg1, org::semanticweb::owlapi::model::OWLOntologyFactory__OWLOntologyCreationHandler* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "loadOWLOntology", "(Lorg/semanticweb/owlapi/io/OWLOntologyDocumentSource;Lorg/semanticweb/owlapi/model/OWLOntologyFactory$OWLOntologyCreationHandler;)Lorg/semanticweb/owlapi/model/OWLOntology;");
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
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
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

org::semanticweb::owlapi::model::OWLOntology* OWLOntologyFactory::loadOWLOntology(org::semanticweb::owlapi::io::OWLOntologyDocumentSource* arg1, org::semanticweb::owlapi::model::OWLOntologyFactory__OWLOntologyCreationHandler* arg2, org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "loadOWLOntology", "(Lorg/semanticweb/owlapi/io/OWLOntologyDocumentSource;Lorg/semanticweb/owlapi/model/OWLOntologyFactory$OWLOntologyCreationHandler;Lorg/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration;)Lorg/semanticweb/owlapi/model/OWLOntology;");
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
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3);
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

bool OWLOntologyFactory::canCreateFromDocumentIRI(org::semanticweb::owlapi::model::IRI* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "canCreateFromDocumentIRI", "(Lorg/semanticweb/owlapi/model/IRI;)Z");
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

bool OWLOntologyFactory::canLoad(org::semanticweb::owlapi::io::OWLOntologyDocumentSource* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "canLoad", "(Lorg/semanticweb/owlapi/io/OWLOntologyDocumentSource;)Z");
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
}
}
}
}
