#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLOntologyChangeProgressListener.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLOntologyChange.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLOntologyChangeProgressListener::OWLOntologyChangeProgressListener(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLOntologyChangeProgressListener::OWLOntologyChangeProgressListener(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLOntologyChangeProgressListener::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyChangeProgressListener");
  handleJavaException(wrapperIntern);
}

void OWLOntologyChangeProgressListener::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyChangeProgressListener");
  handleJavaException(wrapperIntern);
}

void OWLOntologyChangeProgressListener::end()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyChangeProgressListener");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "end", "()V");
  handleJavaException(wrapperIntern);
  javaEnv->CallVoidMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

void OWLOntologyChangeProgressListener::begin(int arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyChangeProgressListener");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "begin", "(I)V");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

void OWLOntologyChangeProgressListener::appliedChange(org::semanticweb::owlapi::model::OWLOntologyChange* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyChangeProgressListener");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "appliedChange", "(Lorg/semanticweb/owlapi/model/OWLOntologyChange;)V");
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
