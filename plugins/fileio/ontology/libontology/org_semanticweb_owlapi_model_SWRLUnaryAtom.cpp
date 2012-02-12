#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_SWRLUnaryAtom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_SWRLAtom.h>
#include <org_semanticweb_owlapi_model_SWRLArgument.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

SWRLUnaryAtom::SWRLUnaryAtom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

SWRLUnaryAtom::SWRLUnaryAtom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void SWRLUnaryAtom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLUnaryAtom");
  handleJavaException(wrapperIntern);
}

void SWRLUnaryAtom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLUnaryAtom");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::SWRLArgument* SWRLUnaryAtom::getArgument()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLUnaryAtom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getArgument", "()Lorg/semanticweb/owlapi/model/SWRLArgument;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::SWRLArgument* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::SWRLArgument(jresult);
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
