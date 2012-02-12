#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_SWRLBinaryAtom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_SWRLAtom.h>
#include <org_semanticweb_owlapi_model_SWRLArgument.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

SWRLBinaryAtom::SWRLBinaryAtom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

SWRLBinaryAtom::SWRLBinaryAtom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void SWRLBinaryAtom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLBinaryAtom");
  handleJavaException(wrapperIntern);
}

void SWRLBinaryAtom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLBinaryAtom");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::SWRLArgument* SWRLBinaryAtom::getFirstArgument()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLBinaryAtom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getFirstArgument", "()Lorg/semanticweb/owlapi/model/SWRLArgument;");
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

org::semanticweb::owlapi::model::SWRLArgument* SWRLBinaryAtom::getSecondArgument()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLBinaryAtom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSecondArgument", "()Lorg/semanticweb/owlapi/model/SWRLArgument;");
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
