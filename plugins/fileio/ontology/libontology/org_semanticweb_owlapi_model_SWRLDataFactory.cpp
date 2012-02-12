#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_SWRLDataFactory.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_SWRLRule.h>
#include <org_semanticweb_owlapi_model_IRI.h>
#include <java_util_Set.h>
#include <org_semanticweb_owlapi_model_NodeID.h>
#include <org_semanticweb_owlapi_model_SWRLClassAtom.h>
#include <org_semanticweb_owlapi_model_OWLClassExpression.h>
#include <org_semanticweb_owlapi_model_SWRLIArgument.h>
#include <org_semanticweb_owlapi_model_SWRLDataRangeAtom.h>
#include <org_semanticweb_owlapi_model_OWLDataRange.h>
#include <org_semanticweb_owlapi_model_SWRLDArgument.h>
#include <org_semanticweb_owlapi_model_SWRLObjectPropertyAtom.h>
#include <org_semanticweb_owlapi_model_OWLObjectPropertyExpression.h>
#include <org_semanticweb_owlapi_model_SWRLDataPropertyAtom.h>
#include <org_semanticweb_owlapi_model_OWLDataPropertyExpression.h>
#include <org_semanticweb_owlapi_model_SWRLBuiltInAtom.h>
#include <java_util_List.h>
#include <org_semanticweb_owlapi_model_SWRLVariable.h>
#include <org_semanticweb_owlapi_model_SWRLIndividualArgument.h>
#include <org_semanticweb_owlapi_model_OWLIndividual.h>
#include <org_semanticweb_owlapi_model_SWRLLiteralArgument.h>
#include <org_semanticweb_owlapi_model_OWLLiteral.h>
#include <org_semanticweb_owlapi_model_SWRLSameIndividualAtom.h>
#include <org_semanticweb_owlapi_model_SWRLDifferentIndividualsAtom.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

SWRLDataFactory::SWRLDataFactory(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

SWRLDataFactory::SWRLDataFactory(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void SWRLDataFactory::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLDataFactory");
  handleJavaException(wrapperIntern);
}

void SWRLDataFactory::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLDataFactory");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::SWRLRule* SWRLDataFactory::getSWRLRule(org::semanticweb::owlapi::model::IRI* arg1, java::util::Set* arg2, java::util::Set* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSWRLRule", "(Lorg/semanticweb/owlapi/model/IRI;Ljava/util/Set;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/SWRLRule;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject jarg3;
  if (arg3!=NULL) {
    jarg3=arg3->getJavaObject();
  } else {
    jarg3=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::SWRLRule* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::SWRLRule(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::SWRLRule* SWRLDataFactory::getSWRLRule(org::semanticweb::owlapi::model::NodeID* arg1, java::util::Set* arg2, java::util::Set* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSWRLRule", "(Lorg/semanticweb/owlapi/model/NodeID;Ljava/util/Set;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/SWRLRule;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject jarg3;
  if (arg3!=NULL) {
    jarg3=arg3->getJavaObject();
  } else {
    jarg3=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::SWRLRule* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::SWRLRule(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::SWRLRule* SWRLDataFactory::getSWRLRule(java::util::Set* arg1, java::util::Set* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSWRLRule", "(Ljava/util/Set;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/SWRLRule;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::SWRLRule* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::SWRLRule(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::SWRLRule* SWRLDataFactory::getSWRLRule(java::util::Set* arg1, java::util::Set* arg2, java::util::Set* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSWRLRule", "(Ljava/util/Set;Ljava/util/Set;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/SWRLRule;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject jarg3;
  if (arg3!=NULL) {
    jarg3=arg3->getJavaObject();
  } else {
    jarg3=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::SWRLRule* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::SWRLRule(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::SWRLClassAtom* SWRLDataFactory::getSWRLClassAtom(org::semanticweb::owlapi::model::OWLClassExpression* arg1, org::semanticweb::owlapi::model::SWRLIArgument* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSWRLClassAtom", "(Lorg/semanticweb/owlapi/model/OWLClassExpression;Lorg/semanticweb/owlapi/model/SWRLIArgument;)Lorg/semanticweb/owlapi/model/SWRLClassAtom;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::SWRLClassAtom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::SWRLClassAtom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::SWRLDataRangeAtom* SWRLDataFactory::getSWRLDataRangeAtom(org::semanticweb::owlapi::model::OWLDataRange* arg1, org::semanticweb::owlapi::model::SWRLDArgument* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSWRLDataRangeAtom", "(Lorg/semanticweb/owlapi/model/OWLDataRange;Lorg/semanticweb/owlapi/model/SWRLDArgument;)Lorg/semanticweb/owlapi/model/SWRLDataRangeAtom;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::SWRLDataRangeAtom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::SWRLDataRangeAtom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::SWRLObjectPropertyAtom* SWRLDataFactory::getSWRLObjectPropertyAtom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::SWRLIArgument* arg2, org::semanticweb::owlapi::model::SWRLIArgument* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSWRLObjectPropertyAtom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Lorg/semanticweb/owlapi/model/SWRLIArgument;Lorg/semanticweb/owlapi/model/SWRLIArgument;)Lorg/semanticweb/owlapi/model/SWRLObjectPropertyAtom;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject jarg3;
  if (arg3!=NULL) {
    jarg3=arg3->getJavaObject();
  } else {
    jarg3=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3);
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

org::semanticweb::owlapi::model::SWRLDataPropertyAtom* SWRLDataFactory::getSWRLDataPropertyAtom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::SWRLIArgument* arg2, org::semanticweb::owlapi::model::SWRLDArgument* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSWRLDataPropertyAtom", "(Lorg/semanticweb/owlapi/model/OWLDataPropertyExpression;Lorg/semanticweb/owlapi/model/SWRLIArgument;Lorg/semanticweb/owlapi/model/SWRLDArgument;)Lorg/semanticweb/owlapi/model/SWRLDataPropertyAtom;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject jarg3;
  if (arg3!=NULL) {
    jarg3=arg3->getJavaObject();
  } else {
    jarg3=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::SWRLDataPropertyAtom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::SWRLDataPropertyAtom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::SWRLBuiltInAtom* SWRLDataFactory::getSWRLBuiltInAtom(org::semanticweb::owlapi::model::IRI* arg1, java::util::List* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSWRLBuiltInAtom", "(Lorg/semanticweb/owlapi/model/IRI;Ljava/util/List;)Lorg/semanticweb/owlapi/model/SWRLBuiltInAtom;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::SWRLBuiltInAtom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::SWRLBuiltInAtom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::SWRLVariable* SWRLDataFactory::getSWRLVariable(org::semanticweb::owlapi::model::IRI* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSWRLVariable", "(Lorg/semanticweb/owlapi/model/IRI;)Lorg/semanticweb/owlapi/model/SWRLVariable;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::SWRLVariable* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::SWRLVariable(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::SWRLIndividualArgument* SWRLDataFactory::getSWRLIndividualArgument(org::semanticweb::owlapi::model::OWLIndividual* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSWRLIndividualArgument", "(Lorg/semanticweb/owlapi/model/OWLIndividual;)Lorg/semanticweb/owlapi/model/SWRLIndividualArgument;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::SWRLIndividualArgument* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::SWRLIndividualArgument(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::SWRLLiteralArgument* SWRLDataFactory::getSWRLLiteralArgument(org::semanticweb::owlapi::model::OWLLiteral* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSWRLLiteralArgument", "(Lorg/semanticweb/owlapi/model/OWLLiteral;)Lorg/semanticweb/owlapi/model/SWRLLiteralArgument;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::SWRLLiteralArgument* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::SWRLLiteralArgument(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::SWRLSameIndividualAtom* SWRLDataFactory::getSWRLSameIndividualAtom(org::semanticweb::owlapi::model::SWRLIArgument* arg1, org::semanticweb::owlapi::model::SWRLIArgument* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSWRLSameIndividualAtom", "(Lorg/semanticweb/owlapi/model/SWRLIArgument;Lorg/semanticweb/owlapi/model/SWRLIArgument;)Lorg/semanticweb/owlapi/model/SWRLSameIndividualAtom;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::SWRLSameIndividualAtom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::SWRLSameIndividualAtom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::SWRLDifferentIndividualsAtom* SWRLDataFactory::getSWRLDifferentIndividualsAtom(org::semanticweb::owlapi::model::SWRLIArgument* arg1, org::semanticweb::owlapi::model::SWRLIArgument* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSWRLDifferentIndividualsAtom", "(Lorg/semanticweb/owlapi/model/SWRLIArgument;Lorg/semanticweb/owlapi/model/SWRLIArgument;)Lorg/semanticweb/owlapi/model/SWRLDifferentIndividualsAtom;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::SWRLDifferentIndividualsAtom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::SWRLDifferentIndividualsAtom(jresult);
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
