#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_SWRLLiteralArgument.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_SWRLDArgument.h>
#include <org_semanticweb_owlapi_model_OWLLiteral.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

SWRLLiteralArgument::SWRLLiteralArgument(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

SWRLLiteralArgument::SWRLLiteralArgument(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void SWRLLiteralArgument::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLLiteralArgument");
  handleJavaException(wrapperIntern);
}

void SWRLLiteralArgument::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLLiteralArgument");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLLiteral* SWRLLiteralArgument::getLiteral()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLLiteralArgument");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getLiteral", "()Lorg/semanticweb/owlapi/model/OWLLiteral;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLLiteral* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLLiteral(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
}
}
