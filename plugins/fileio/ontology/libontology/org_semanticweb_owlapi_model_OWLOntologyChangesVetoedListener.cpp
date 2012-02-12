#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLOntologyChangesVetoedListener.h>
#include <java_lang_Object.h>
#include <java_util_List.h>
#include <org_semanticweb_owlapi_model_OWLOntologyChangeVetoException.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLOntologyChangesVetoedListener::OWLOntologyChangesVetoedListener(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLOntologyChangesVetoedListener::OWLOntologyChangesVetoedListener(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLOntologyChangesVetoedListener::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyChangesVetoedListener");
  handleJavaException(wrapperIntern);
}

void OWLOntologyChangesVetoedListener::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyChangesVetoedListener");
  handleJavaException(wrapperIntern);
}

void OWLOntologyChangesVetoedListener::ontologyChangesVetoed(java::util::List* arg1, org::semanticweb::owlapi::model::OWLOntologyChangeVetoException* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyChangesVetoedListener");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "ontologyChangesVetoed", "(Ljava/util/List;Lorg/semanticweb/owlapi/model/OWLOntologyChangeVetoException;)V");
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
