#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLOntologyLoaderListener__LoadingStartedEvent.h>
#include <org_semanticweb_owlapi_model_OWLOntologyLoaderListener__LoadingEvent.h>
#include <org_semanticweb_owlapi_model_OWLOntologyID.h>
#include <org_semanticweb_owlapi_model_IRI.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLOntologyLoaderListener__LoadingStartedEvent::OWLOntologyLoaderListener__LoadingStartedEvent(JavaMarker* dummy)
  : org::semanticweb::owlapi::model::OWLOntologyLoaderListener__LoadingEvent(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLOntologyLoaderListener__LoadingStartedEvent::OWLOntologyLoaderListener__LoadingStartedEvent(jobject obj)
  : org::semanticweb::owlapi::model::OWLOntologyLoaderListener__LoadingEvent(obj)
{
  updateAllVariables(wrapperIntern);
}

OWLOntologyLoaderListener__LoadingStartedEvent::OWLOntologyLoaderListener__LoadingStartedEvent(org::semanticweb::owlapi::model::OWLOntologyID* arg1, org::semanticweb::owlapi::model::IRI* arg2, bool arg3)
  : org::semanticweb::owlapi::model::OWLOntologyLoaderListener__LoadingEvent(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderListener$LoadingStartedEvent");
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

void OWLOntologyLoaderListener__LoadingStartedEvent::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderListener$LoadingStartedEvent");
  handleJavaException(wrapperIntern);
}

void OWLOntologyLoaderListener__LoadingStartedEvent::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderListener$LoadingStartedEvent");
  handleJavaException(wrapperIntern);
}
}
}
}
}
