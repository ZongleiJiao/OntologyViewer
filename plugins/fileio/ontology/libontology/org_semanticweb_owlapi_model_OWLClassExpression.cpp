#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLClassExpression.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLObject.h>
#include <org_semanticweb_owlapi_model_OWLPropertyRange.h>
#include <org_semanticweb_owlapi_model_SWRLPredicate.h>
#include <org_semanticweb_owlapi_model_OWLClassExpressionVisitor.h>
#include <org_semanticweb_owlapi_model_OWLClassExpressionVisitorEx.h>
#include <org_semanticweb_owlapi_model_OWLClass.h>
#include <org_semanticweb_owlapi_model_ClassExpressionType.h>
#include <java_util_Set.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLClassExpression::OWLClassExpression(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLClassExpression::OWLClassExpression(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLClassExpression::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLClassExpression");
  handleJavaException(wrapperIntern);
}

void OWLClassExpression::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLClassExpression");
  handleJavaException(wrapperIntern);
}

void OWLClassExpression::accept(org::semanticweb::owlapi::model::OWLClassExpressionVisitor* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLClassExpression");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "accept", "(Lorg/semanticweb/owlapi/model/OWLClassExpressionVisitor;)V");
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

java::lang::Object* OWLClassExpression::accept(org::semanticweb::owlapi::model::OWLClassExpressionVisitorEx* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLClassExpression");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "accept", "(Lorg/semanticweb/owlapi/model/OWLClassExpressionVisitorEx;)Ljava/lang/Object;");
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

bool OWLClassExpression::isAnonymous()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLClassExpression");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isAnonymous", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLClass* OWLClassExpression::asOWLClass()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLClassExpression");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "asOWLClass", "()Lorg/semanticweb/owlapi/model/OWLClass;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLClass* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLClass(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::ClassExpressionType* OWLClassExpression::getClassExpressionType()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLClassExpression");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getClassExpressionType", "()Lorg/semanticweb/owlapi/model/ClassExpressionType;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::ClassExpressionType* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::ClassExpressionType(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool OWLClassExpression::isClassExpressionLiteral()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLClassExpression");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isClassExpressionLiteral", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool OWLClassExpression::isOWLThing()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLClassExpression");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isOWLThing", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool OWLClassExpression::isOWLNothing()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLClassExpression");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isOWLNothing", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLClassExpression* OWLClassExpression::getNNF()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLClassExpression");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getNNF", "()Lorg/semanticweb/owlapi/model/OWLClassExpression;");
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

org::semanticweb::owlapi::model::OWLClassExpression* OWLClassExpression::getComplementNNF()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLClassExpression");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getComplementNNF", "()Lorg/semanticweb/owlapi/model/OWLClassExpression;");
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

org::semanticweb::owlapi::model::OWLClassExpression* OWLClassExpression::getObjectComplementOf()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLClassExpression");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getObjectComplementOf", "()Lorg/semanticweb/owlapi/model/OWLClassExpression;");
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

java::util::Set* OWLClassExpression::asConjunctSet()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLClassExpression");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "asConjunctSet", "()Ljava/util/Set;");
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

bool OWLClassExpression::containsConjunct(org::semanticweb::owlapi::model::OWLClassExpression* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLClassExpression");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "containsConjunct", "(Lorg/semanticweb/owlapi/model/OWLClassExpression;)Z");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::util::Set* OWLClassExpression::asDisjunctSet()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLClassExpression");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "asDisjunctSet", "()Ljava/util/Set;");
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
}
}
}
}
