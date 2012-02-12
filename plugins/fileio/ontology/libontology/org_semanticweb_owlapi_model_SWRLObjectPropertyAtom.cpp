#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_SWRLObjectPropertyAtom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_SWRLBinaryAtom.h>
#include <org_semanticweb_owlapi_model_OWLObjectPropertyExpression.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

SWRLObjectPropertyAtom::SWRLObjectPropertyAtom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

SWRLObjectPropertyAtom::SWRLObjectPropertyAtom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void SWRLObjectPropertyAtom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLObjectPropertyAtom");
  handleJavaException(wrapperIntern);
}

void SWRLObjectPropertyAtom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLObjectPropertyAtom");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::SWRLObjectPropertyAtom* SWRLObjectPropertyAtom::getSimplified()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLObjectPropertyAtom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSimplified", "()Lorg/semanticweb/owlapi/model/SWRLObjectPropertyAtom;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::SWRLObjectPropertyAtom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::SWRLObjectPropertyAtom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectPropertyExpression* SWRLObjectPropertyAtom::getPredicate()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLObjectPropertyAtom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getPredicate", "()Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLObjectPropertyExpression* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectPropertyExpression(jresult);
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
