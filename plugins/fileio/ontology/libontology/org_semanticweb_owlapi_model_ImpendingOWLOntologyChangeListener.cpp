#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_ImpendingOWLOntologyChangeListener.h>
#include <java_lang_Object.h>
#include <java_util_List.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

ImpendingOWLOntologyChangeListener::ImpendingOWLOntologyChangeListener(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

ImpendingOWLOntologyChangeListener::ImpendingOWLOntologyChangeListener(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void ImpendingOWLOntologyChangeListener::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/ImpendingOWLOntologyChangeListener");
  handleJavaException(wrapperIntern);
}

void ImpendingOWLOntologyChangeListener::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/ImpendingOWLOntologyChangeListener");
  handleJavaException(wrapperIntern);
}

void ImpendingOWLOntologyChangeListener::handleImpendingOntologyChanges(java::util::List* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/ImpendingOWLOntologyChangeListener");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "handleImpendingOntologyChanges", "(Ljava/util/List;)V");
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
