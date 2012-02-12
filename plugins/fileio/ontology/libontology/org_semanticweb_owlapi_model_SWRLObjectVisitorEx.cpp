#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_SWRLObjectVisitorEx.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_SWRLRule.h>
#include <org_semanticweb_owlapi_model_SWRLClassAtom.h>
#include <org_semanticweb_owlapi_model_SWRLDataRangeAtom.h>
#include <org_semanticweb_owlapi_model_SWRLObjectPropertyAtom.h>
#include <org_semanticweb_owlapi_model_SWRLDataPropertyAtom.h>
#include <org_semanticweb_owlapi_model_SWRLBuiltInAtom.h>
#include <org_semanticweb_owlapi_model_SWRLVariable.h>
#include <org_semanticweb_owlapi_model_SWRLIndividualArgument.h>
#include <org_semanticweb_owlapi_model_SWRLLiteralArgument.h>
#include <org_semanticweb_owlapi_model_SWRLSameIndividualAtom.h>
#include <org_semanticweb_owlapi_model_SWRLDifferentIndividualsAtom.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

SWRLObjectVisitorEx::SWRLObjectVisitorEx(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

SWRLObjectVisitorEx::SWRLObjectVisitorEx(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void SWRLObjectVisitorEx::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLObjectVisitorEx");
  handleJavaException(wrapperIntern);
}

void SWRLObjectVisitorEx::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLObjectVisitorEx");
  handleJavaException(wrapperIntern);
}

java::lang::Object* SWRLObjectVisitorEx::visit(org::semanticweb::owlapi::model::SWRLRule* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLObjectVisitorEx");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/SWRLRule;)Ljava/lang/Object;");
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

java::lang::Object* SWRLObjectVisitorEx::visit(org::semanticweb::owlapi::model::SWRLClassAtom* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLObjectVisitorEx");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/SWRLClassAtom;)Ljava/lang/Object;");
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

java::lang::Object* SWRLObjectVisitorEx::visit(org::semanticweb::owlapi::model::SWRLDataRangeAtom* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLObjectVisitorEx");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/SWRLDataRangeAtom;)Ljava/lang/Object;");
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

java::lang::Object* SWRLObjectVisitorEx::visit(org::semanticweb::owlapi::model::SWRLObjectPropertyAtom* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLObjectVisitorEx");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/SWRLObjectPropertyAtom;)Ljava/lang/Object;");
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

java::lang::Object* SWRLObjectVisitorEx::visit(org::semanticweb::owlapi::model::SWRLDataPropertyAtom* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLObjectVisitorEx");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/SWRLDataPropertyAtom;)Ljava/lang/Object;");
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

java::lang::Object* SWRLObjectVisitorEx::visit(org::semanticweb::owlapi::model::SWRLBuiltInAtom* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLObjectVisitorEx");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/SWRLBuiltInAtom;)Ljava/lang/Object;");
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

java::lang::Object* SWRLObjectVisitorEx::visit(org::semanticweb::owlapi::model::SWRLVariable* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLObjectVisitorEx");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/SWRLVariable;)Ljava/lang/Object;");
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

java::lang::Object* SWRLObjectVisitorEx::visit(org::semanticweb::owlapi::model::SWRLIndividualArgument* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLObjectVisitorEx");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/SWRLIndividualArgument;)Ljava/lang/Object;");
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

java::lang::Object* SWRLObjectVisitorEx::visit(org::semanticweb::owlapi::model::SWRLLiteralArgument* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLObjectVisitorEx");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/SWRLLiteralArgument;)Ljava/lang/Object;");
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

java::lang::Object* SWRLObjectVisitorEx::visit(org::semanticweb::owlapi::model::SWRLSameIndividualAtom* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLObjectVisitorEx");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/SWRLSameIndividualAtom;)Ljava/lang/Object;");
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

java::lang::Object* SWRLObjectVisitorEx::visit(org::semanticweb::owlapi::model::SWRLDifferentIndividualsAtom* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLObjectVisitorEx");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/SWRLDifferentIndividualsAtom;)Ljava/lang/Object;");
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
}
}
}
}
