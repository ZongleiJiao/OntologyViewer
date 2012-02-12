#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLOntologyLoaderListener.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLOntologyLoaderListener__LoadingStartedEvent.h>
#include <org_semanticweb_owlapi_model_OWLOntologyLoaderListener__LoadingFinishedEvent.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLOntologyLoaderListener::OWLOntologyLoaderListener(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLOntologyLoaderListener::OWLOntologyLoaderListener(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLOntologyLoaderListener::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderListener");
  handleJavaException(wrapperIntern);
}

void OWLOntologyLoaderListener::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderListener");
  handleJavaException(wrapperIntern);
}

void OWLOntologyLoaderListener::startedLoadingOntology(org::semanticweb::owlapi::model::OWLOntologyLoaderListener__LoadingStartedEvent* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderListener");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "startedLoadingOntology", "(Lorg/semanticweb/owlapi/model/OWLOntologyLoaderListener$LoadingStartedEvent;)V");
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

void OWLOntologyLoaderListener::finishedLoadingOntology(org::semanticweb::owlapi::model::OWLOntologyLoaderListener__LoadingFinishedEvent* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderListener");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "finishedLoadingOntology", "(Lorg/semanticweb/owlapi/model/OWLOntologyLoaderListener$LoadingFinishedEvent;)V");
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
}
}
}
}
