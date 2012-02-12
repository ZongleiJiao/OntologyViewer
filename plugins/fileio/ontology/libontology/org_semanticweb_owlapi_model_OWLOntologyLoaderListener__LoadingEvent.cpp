#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLOntologyLoaderListener__LoadingEvent.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLOntologyID.h>
#include <org_semanticweb_owlapi_model_IRI.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLOntologyLoaderListener__LoadingEvent::OWLOntologyLoaderListener__LoadingEvent(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLOntologyLoaderListener__LoadingEvent::OWLOntologyLoaderListener__LoadingEvent(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

OWLOntologyLoaderListener__LoadingEvent::OWLOntologyLoaderListener__LoadingEvent(org::semanticweb::owlapi::model::OWLOntologyID* arg1, org::semanticweb::owlapi::model::IRI* arg2, bool arg3)
  : java::lang::Object(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderListener$LoadingEvent");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "(Lorg/semanticweb/owlapi/model/OWLOntologyID;Lorg/semanticweb/owlapi/model/IRI;Z)V");
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
  jboolean jarg3 = (jboolean)arg3;
  jobject o = javaEnv->NewObject(cls, mid, jarg1, jarg2, jarg3);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  updateAllVariables(wrapperIntern);
}

void OWLOntologyLoaderListener__LoadingEvent::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderListener$LoadingEvent");
  handleJavaException(wrapperIntern);
}

void OWLOntologyLoaderListener__LoadingEvent::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderListener$LoadingEvent");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLOntologyID* OWLOntologyLoaderListener__LoadingEvent::getOntologyID()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderListener$LoadingEvent");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOntologyID", "()Lorg/semanticweb/owlapi/model/OWLOntologyID;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLOntologyID* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLOntologyID(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::IRI* OWLOntologyLoaderListener__LoadingEvent::getDocumentIRI()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderListener$LoadingEvent");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getDocumentIRI", "()Lorg/semanticweb/owlapi/model/IRI;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::IRI* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::IRI(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool OWLOntologyLoaderListener__LoadingEvent::isImported()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderListener$LoadingEvent");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isImported", "()Z");
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
