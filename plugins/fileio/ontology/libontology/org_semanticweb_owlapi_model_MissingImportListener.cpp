#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_MissingImportListener.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_MissingImportEvent.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

MissingImportListener::MissingImportListener(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

MissingImportListener::MissingImportListener(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void MissingImportListener::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/MissingImportListener");
  handleJavaException(wrapperIntern);
}

void MissingImportListener::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/MissingImportListener");
  handleJavaException(wrapperIntern);
}

void MissingImportListener::importMissing(org::semanticweb::owlapi::model::MissingImportEvent* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/MissingImportListener");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "importMissing", "(Lorg/semanticweb/owlapi/model/MissingImportEvent;)V");
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
