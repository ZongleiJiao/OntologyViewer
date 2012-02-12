#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLObjectOneOf.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLAnonymousClassExpression.h>
#include <java_util_Set.h>
#include <org_semanticweb_owlapi_model_OWLClassExpression.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLObjectOneOf::OWLObjectOneOf(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLObjectOneOf::OWLObjectOneOf(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLObjectOneOf::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectOneOf");
  handleJavaException(wrapperIntern);
}

void OWLObjectOneOf::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectOneOf");
  handleJavaException(wrapperIntern);
}

java::util::Set* OWLObjectOneOf::getIndividuals()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectOneOf");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getIndividuals", "()Ljava/util/Set;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::util::Set* result;
  if (jresult!=NULL) {
    result=new java::util::Set(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLClassExpression* OWLObjectOneOf::asObjectUnionOf()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectOneOf");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "asObjectUnionOf", "()Lorg/semanticweb/owlapi/model/OWLClassExpression;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLClassExpression* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLClassExpression(jresult);
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
