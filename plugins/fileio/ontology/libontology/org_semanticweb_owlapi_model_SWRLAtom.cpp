#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_SWRLAtom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_SWRLObject.h>
#include <org_semanticweb_owlapi_model_SWRLPredicate.h>
#include <java_util_Collection.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

SWRLAtom::SWRLAtom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

SWRLAtom::SWRLAtom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void SWRLAtom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLAtom");
  handleJavaException(wrapperIntern);
}

void SWRLAtom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLAtom");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::SWRLPredicate* SWRLAtom::getPredicate()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLAtom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getPredicate", "()Lorg/semanticweb/owlapi/model/SWRLPredicate;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::SWRLPredicate* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::SWRLPredicate(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::util::Collection* SWRLAtom::getAllArguments()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLAtom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getAllArguments", "()Ljava/util/Collection;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::util::Collection* result;
  if (jresult!=NULL) {
    result=new java::util::Collection(jresult);
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
