#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_SWRLBuiltInAtom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_SWRLAtom.h>
#include <org_semanticweb_owlapi_model_IRI.h>
#include <java_util_List.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

SWRLBuiltInAtom::SWRLBuiltInAtom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

SWRLBuiltInAtom::SWRLBuiltInAtom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void SWRLBuiltInAtom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLBuiltInAtom");
  handleJavaException(wrapperIntern);
}

void SWRLBuiltInAtom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLBuiltInAtom");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::IRI* SWRLBuiltInAtom::getPredicate()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLBuiltInAtom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getPredicate", "()Lorg/semanticweb/owlapi/model/IRI;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::IRI* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::IRI(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::util::List* SWRLBuiltInAtom::getArguments()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLBuiltInAtom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getArguments", "()Ljava/util/List;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::util::List* result;
  if (jresult!=NULL) {
    result=new java::util::List(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool SWRLBuiltInAtom::isCoreBuiltIn()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLBuiltInAtom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isCoreBuiltIn", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
}
}
