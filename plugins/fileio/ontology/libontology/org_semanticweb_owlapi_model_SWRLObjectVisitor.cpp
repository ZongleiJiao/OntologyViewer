#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_SWRLObjectVisitor.h>
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

SWRLObjectVisitor::SWRLObjectVisitor(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

SWRLObjectVisitor::SWRLObjectVisitor(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void SWRLObjectVisitor::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLObjectVisitor");
  handleJavaException(wrapperIntern);
}

void SWRLObjectVisitor::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLObjectVisitor");
  handleJavaException(wrapperIntern);
}

void SWRLObjectVisitor::visit(org::semanticweb::owlapi::model::SWRLRule* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLObjectVisitor");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/SWRLRule;)V");
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

void SWRLObjectVisitor::visit(org::semanticweb::owlapi::model::SWRLClassAtom* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLObjectVisitor");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/SWRLClassAtom;)V");
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

void SWRLObjectVisitor::visit(org::semanticweb::owlapi::model::SWRLDataRangeAtom* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLObjectVisitor");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/SWRLDataRangeAtom;)V");
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

void SWRLObjectVisitor::visit(org::semanticweb::owlapi::model::SWRLObjectPropertyAtom* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLObjectVisitor");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/SWRLObjectPropertyAtom;)V");
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

void SWRLObjectVisitor::visit(org::semanticweb::owlapi::model::SWRLDataPropertyAtom* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLObjectVisitor");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/SWRLDataPropertyAtom;)V");
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

void SWRLObjectVisitor::visit(org::semanticweb::owlapi::model::SWRLBuiltInAtom* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLObjectVisitor");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/SWRLBuiltInAtom;)V");
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

void SWRLObjectVisitor::visit(org::semanticweb::owlapi::model::SWRLVariable* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLObjectVisitor");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/SWRLVariable;)V");
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

void SWRLObjectVisitor::visit(org::semanticweb::owlapi::model::SWRLIndividualArgument* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLObjectVisitor");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/SWRLIndividualArgument;)V");
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

void SWRLObjectVisitor::visit(org::semanticweb::owlapi::model::SWRLLiteralArgument* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLObjectVisitor");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/SWRLLiteralArgument;)V");
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

void SWRLObjectVisitor::visit(org::semanticweb::owlapi::model::SWRLSameIndividualAtom* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLObjectVisitor");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/SWRLSameIndividualAtom;)V");
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

void SWRLObjectVisitor::visit(org::semanticweb::owlapi::model::SWRLDifferentIndividualsAtom* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLObjectVisitor");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/SWRLDifferentIndividualsAtom;)V");
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
