#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLOntologyChangeBroadcastStrategy.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLOntologyChangeListener.h>
#include <java_util_List.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLOntologyChangeBroadcastStrategy::OWLOntologyChangeBroadcastStrategy(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLOntologyChangeBroadcastStrategy::OWLOntologyChangeBroadcastStrategy(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLOntologyChangeBroadcastStrategy::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyChangeBroadcastStrategy");
  handleJavaException(wrapperIntern);
}

void OWLOntologyChangeBroadcastStrategy::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyChangeBroadcastStrategy");
  handleJavaException(wrapperIntern);
}

void OWLOntologyChangeBroadcastStrategy::broadcastChanges(org::semanticweb::owlapi::model::OWLOntologyChangeListener* arg1, java::util::List* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyChangeBroadcastStrategy");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "broadcastChanges", "(Lorg/semanticweb/owlapi/model/OWLOntologyChangeListener;Ljava/util/List;)V");
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
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
}
}
