#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLFacetRestriction.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLObject.h>
#include <org_semanticweb_owlapi_model_OWLDataVisitor.h>
#include <org_semanticweb_owlapi_model_OWLDataVisitorEx.h>
#include <org_semanticweb_owlapi_vocab_OWLFacet.h>
#include <org_semanticweb_owlapi_model_OWLLiteral.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLFacetRestriction::OWLFacetRestriction(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLFacetRestriction::OWLFacetRestriction(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLFacetRestriction::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLFacetRestriction");
  handleJavaException(wrapperIntern);
}

void OWLFacetRestriction::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLFacetRestriction");
  handleJavaException(wrapperIntern);
}

void OWLFacetRestriction::accept(org::semanticweb::owlapi::model::OWLDataVisitor* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLFacetRestriction");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "accept", "(Lorg/semanticweb/owlapi/model/OWLDataVisitor;)V");
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

java::lang::Object* OWLFacetRestriction::accept(org::semanticweb::owlapi::model::OWLDataVisitorEx* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLFacetRestriction");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "accept", "(Lorg/semanticweb/owlapi/model/OWLDataVisitorEx;)Ljava/lang/Object;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::Object* result;
  if (jresult!=NULL) {
    result=new java::lang::Object(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::vocab::OWLFacet* OWLFacetRestriction::getFacet()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLFacetRestriction");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getFacet", "()Lorg/semanticweb/owlapi/vocab/OWLFacet;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLFacet* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::vocab::OWLFacet(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLLiteral* OWLFacetRestriction::getFacetValue()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLFacetRestriction");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getFacetValue", "()Lorg/semanticweb/owlapi/model/OWLLiteral;");
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
