#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLDataFactory.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_SWRLDataFactory.h>
#include <org_semanticweb_owlapi_model_OWLClass.h>
#include <org_semanticweb_owlapi_model_IRI.h>
#include <java_lang_String.h>
#include <org_semanticweb_owlapi_model_PrefixManager.h>
#include <org_semanticweb_owlapi_model_OWLEquivalentClassesAxiom.h>
#include <java_util_Set.h>
#include <org_semanticweb_owlapi_model_OWLClassExpression.h>
#include <org_semanticweb_owlapi_model_OWLDataProperty.h>
#include <org_semanticweb_owlapi_model_OWLObjectProperty.h>
#include <org_semanticweb_owlapi_model_OWLEntity.h>
#include <org_semanticweb_owlapi_model_EntityType.h>
#include <org_semanticweb_owlapi_model_OWLDatatype.h>
#include <org_semanticweb_owlapi_model_OWLObjectInverseOf.h>
#include <org_semanticweb_owlapi_model_OWLObjectPropertyExpression.h>
#include <org_semanticweb_owlapi_model_OWLNamedIndividual.h>
#include <org_semanticweb_owlapi_model_OWLAnonymousIndividual.h>
#include <org_semanticweb_owlapi_model_OWLAnnotationProperty.h>
#include <org_semanticweb_owlapi_model_OWLLiteral.h>
#include <org_semanticweb_owlapi_vocab_OWL2Datatype.h>
#include <org_semanticweb_owlapi_model_OWLDataOneOf.h>
#include <org_semanticweb_owlapi_model_OWLDataComplementOf.h>
#include <org_semanticweb_owlapi_model_OWLDataRange.h>
#include <org_semanticweb_owlapi_model_OWLDatatypeRestriction.h>
#include <org_semanticweb_owlapi_vocab_OWLFacet.h>
#include <org_semanticweb_owlapi_model_OWLFacetRestriction.h>
#include <org_semanticweb_owlapi_model_OWLDataUnionOf.h>
#include <org_semanticweb_owlapi_model_OWLDataIntersectionOf.h>
#include <org_semanticweb_owlapi_model_OWLObjectIntersectionOf.h>
#include <org_semanticweb_owlapi_model_OWLDataSomeValuesFrom.h>
#include <org_semanticweb_owlapi_model_OWLDataPropertyExpression.h>
#include <org_semanticweb_owlapi_model_OWLDataAllValuesFrom.h>
#include <org_semanticweb_owlapi_model_OWLDataExactCardinality.h>
#include <org_semanticweb_owlapi_model_OWLDataMaxCardinality.h>
#include <org_semanticweb_owlapi_model_OWLDataMinCardinality.h>
#include <org_semanticweb_owlapi_model_OWLDataHasValue.h>
#include <org_semanticweb_owlapi_model_OWLObjectComplementOf.h>
#include <org_semanticweb_owlapi_model_OWLObjectOneOf.h>
#include <org_semanticweb_owlapi_model_OWLIndividual.h>
#include <org_semanticweb_owlapi_model_OWLObjectAllValuesFrom.h>
#include <org_semanticweb_owlapi_model_OWLObjectSomeValuesFrom.h>
#include <org_semanticweb_owlapi_model_OWLObjectExactCardinality.h>
#include <org_semanticweb_owlapi_model_OWLObjectMinCardinality.h>
#include <org_semanticweb_owlapi_model_OWLObjectMaxCardinality.h>
#include <org_semanticweb_owlapi_model_OWLObjectHasSelf.h>
#include <org_semanticweb_owlapi_model_OWLObjectHasValue.h>
#include <org_semanticweb_owlapi_model_OWLObjectUnionOf.h>
#include <org_semanticweb_owlapi_model_OWLDeclarationAxiom.h>
#include <org_semanticweb_owlapi_model_OWLSubClassOfAxiom.h>
#include <org_semanticweb_owlapi_model_OWLDisjointClassesAxiom.h>
#include <org_semanticweb_owlapi_model_OWLDisjointUnionAxiom.h>
#include <org_semanticweb_owlapi_model_OWLSubObjectPropertyOfAxiom.h>
#include <org_semanticweb_owlapi_model_OWLSubPropertyChainOfAxiom.h>
#include <java_util_List.h>
#include <org_semanticweb_owlapi_model_OWLEquivalentObjectPropertiesAxiom.h>
#include <org_semanticweb_owlapi_model_OWLDisjointObjectPropertiesAxiom.h>
#include <org_semanticweb_owlapi_model_OWLInverseObjectPropertiesAxiom.h>
#include <org_semanticweb_owlapi_model_OWLObjectPropertyDomainAxiom.h>
#include <org_semanticweb_owlapi_model_OWLObjectPropertyRangeAxiom.h>
#include <org_semanticweb_owlapi_model_OWLFunctionalObjectPropertyAxiom.h>
#include <org_semanticweb_owlapi_model_OWLInverseFunctionalObjectPropertyAxiom.h>
#include <org_semanticweb_owlapi_model_OWLReflexiveObjectPropertyAxiom.h>
#include <org_semanticweb_owlapi_model_OWLIrreflexiveObjectPropertyAxiom.h>
#include <org_semanticweb_owlapi_model_OWLSymmetricObjectPropertyAxiom.h>
#include <org_semanticweb_owlapi_model_OWLAsymmetricObjectPropertyAxiom.h>
#include <org_semanticweb_owlapi_model_OWLTransitiveObjectPropertyAxiom.h>
#include <org_semanticweb_owlapi_model_OWLSubDataPropertyOfAxiom.h>
#include <org_semanticweb_owlapi_model_OWLEquivalentDataPropertiesAxiom.h>
#include <org_semanticweb_owlapi_model_OWLDisjointDataPropertiesAxiom.h>
#include <org_semanticweb_owlapi_model_OWLDataPropertyDomainAxiom.h>
#include <org_semanticweb_owlapi_model_OWLDataPropertyRangeAxiom.h>
#include <org_semanticweb_owlapi_model_OWLFunctionalDataPropertyAxiom.h>
#include <org_semanticweb_owlapi_model_OWLHasKeyAxiom.h>
#include <org_semanticweb_owlapi_model_OWLPropertyExpression.h>
#include <org_semanticweb_owlapi_model_OWLDatatypeDefinitionAxiom.h>
#include <org_semanticweb_owlapi_model_OWLSameIndividualAxiom.h>
#include <org_semanticweb_owlapi_model_OWLDifferentIndividualsAxiom.h>
#include <org_semanticweb_owlapi_model_OWLClassAssertionAxiom.h>
#include <org_semanticweb_owlapi_model_OWLObjectPropertyAssertionAxiom.h>
#include <org_semanticweb_owlapi_model_OWLNegativeObjectPropertyAssertionAxiom.h>
#include <org_semanticweb_owlapi_model_OWLDataPropertyAssertionAxiom.h>
#include <org_semanticweb_owlapi_model_OWLNegativeDataPropertyAssertionAxiom.h>
#include <org_semanticweb_owlapi_model_OWLAnnotation.h>
#include <org_semanticweb_owlapi_model_OWLAnnotationValue.h>
#include <org_semanticweb_owlapi_model_OWLAnnotationAssertionAxiom.h>
#include <org_semanticweb_owlapi_model_OWLAnnotationSubject.h>
#include <org_semanticweb_owlapi_model_OWLImportsDeclaration.h>
#include <org_semanticweb_owlapi_model_OWLAnnotationPropertyDomainAxiom.h>
#include <org_semanticweb_owlapi_model_OWLAnnotationPropertyRangeAxiom.h>
#include <org_semanticweb_owlapi_model_OWLSubAnnotationPropertyOfAxiom.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLDataFactory::OWLDataFactory(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLDataFactory::OWLDataFactory(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLDataFactory::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
}

void OWLDataFactory::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLClass* OWLDataFactory::getOWLClass(org::semanticweb::owlapi::model::IRI* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLClass", "(Lorg/semanticweb/owlapi/model/IRI;)Lorg/semanticweb/owlapi/model/OWLClass;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

org::semanticweb::owlapi::model::OWLClass* OWLDataFactory::getOWLClass(const char* arg1, org::semanticweb::owlapi::model::PrefixManager* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLClass", "(Ljava/lang/String;Lorg/semanticweb/owlapi/model/PrefixManager;)Lorg/semanticweb/owlapi/model/OWLClass;");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
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

org::semanticweb::owlapi::model::OWLEquivalentClassesAxiom* OWLDataFactory::getOWLEquivalentClassesAxiom(java::util::Set* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLEquivalentClassesAxiom", "(Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLEquivalentClassesAxiom;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLEquivalentClassesAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLEquivalentClassesAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLEquivalentClassesAxiom* OWLDataFactory::getOWLEquivalentClassesAxiom(java::util::Set* arg1, java::util::Set* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLEquivalentClassesAxiom", "(Ljava/util/Set;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLEquivalentClassesAxiom;");
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
  org::semanticweb::owlapi::model::OWLEquivalentClassesAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLEquivalentClassesAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLEquivalentClassesAxiom* OWLDataFactory::getOWLEquivalentClassesAxiom(JavaObjectArray* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLEquivalentClassesAxiom", "([Lorg/semanticweb/owlapi/model/OWLClassExpression;)Lorg/semanticweb/owlapi/model/OWLEquivalentClassesAxiom;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLEquivalentClassesAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLEquivalentClassesAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLEquivalentClassesAxiom* OWLDataFactory::getOWLEquivalentClassesAxiom(org::semanticweb::owlapi::model::OWLClassExpression* arg1, org::semanticweb::owlapi::model::OWLClassExpression* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLEquivalentClassesAxiom", "(Lorg/semanticweb/owlapi/model/OWLClassExpression;Lorg/semanticweb/owlapi/model/OWLClassExpression;)Lorg/semanticweb/owlapi/model/OWLEquivalentClassesAxiom;");
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
  org::semanticweb::owlapi::model::OWLEquivalentClassesAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLEquivalentClassesAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLEquivalentClassesAxiom* OWLDataFactory::getOWLEquivalentClassesAxiom(org::semanticweb::owlapi::model::OWLClassExpression* arg1, org::semanticweb::owlapi::model::OWLClassExpression* arg2, java::util::Set* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLEquivalentClassesAxiom", "(Lorg/semanticweb/owlapi/model/OWLClassExpression;Lorg/semanticweb/owlapi/model/OWLClassExpression;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLEquivalentClassesAxiom;");
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
  org::semanticweb::owlapi::model::OWLEquivalentClassesAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLEquivalentClassesAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataProperty* OWLDataFactory::getOWLDataProperty(org::semanticweb::owlapi::model::IRI* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDataProperty", "(Lorg/semanticweb/owlapi/model/IRI;)Lorg/semanticweb/owlapi/model/OWLDataProperty;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDataProperty* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataProperty(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataProperty* OWLDataFactory::getOWLDataProperty(const char* arg1, org::semanticweb::owlapi::model::PrefixManager* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDataProperty", "(Ljava/lang/String;Lorg/semanticweb/owlapi/model/PrefixManager;)Lorg/semanticweb/owlapi/model/OWLDataProperty;");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  org::semanticweb::owlapi::model::OWLDataProperty* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataProperty(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectProperty* OWLDataFactory::getOWLObjectProperty(org::semanticweb::owlapi::model::IRI* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLObjectProperty", "(Lorg/semanticweb/owlapi/model/IRI;)Lorg/semanticweb/owlapi/model/OWLObjectProperty;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLObjectProperty* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectProperty(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectProperty* OWLDataFactory::getOWLObjectProperty(const char* arg1, org::semanticweb::owlapi::model::PrefixManager* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLObjectProperty", "(Ljava/lang/String;Lorg/semanticweb/owlapi/model/PrefixManager;)Lorg/semanticweb/owlapi/model/OWLObjectProperty;");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  org::semanticweb::owlapi::model::OWLObjectProperty* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectProperty(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLEntity* OWLDataFactory::getOWLEntity(org::semanticweb::owlapi::model::EntityType* arg1, org::semanticweb::owlapi::model::IRI* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLEntity", "(Lorg/semanticweb/owlapi/model/EntityType;Lorg/semanticweb/owlapi/model/IRI;)Lorg/semanticweb/owlapi/model/OWLEntity;");
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
  org::semanticweb::owlapi::model::OWLEntity* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLEntity(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLClass* OWLDataFactory::getOWLThing()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLThing", "()Lorg/semanticweb/owlapi/model/OWLClass;");
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

org::semanticweb::owlapi::model::OWLClass* OWLDataFactory::getOWLNothing()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLNothing", "()Lorg/semanticweb/owlapi/model/OWLClass;");
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

org::semanticweb::owlapi::model::OWLObjectProperty* OWLDataFactory::getOWLTopObjectProperty()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLTopObjectProperty", "()Lorg/semanticweb/owlapi/model/OWLObjectProperty;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLObjectProperty* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectProperty(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataProperty* OWLDataFactory::getOWLTopDataProperty()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLTopDataProperty", "()Lorg/semanticweb/owlapi/model/OWLDataProperty;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDataProperty* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataProperty(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectProperty* OWLDataFactory::getOWLBottomObjectProperty()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLBottomObjectProperty", "()Lorg/semanticweb/owlapi/model/OWLObjectProperty;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLObjectProperty* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectProperty(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataProperty* OWLDataFactory::getOWLBottomDataProperty()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLBottomDataProperty", "()Lorg/semanticweb/owlapi/model/OWLDataProperty;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDataProperty* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataProperty(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDatatype* OWLDataFactory::getTopDatatype()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getTopDatatype", "()Lorg/semanticweb/owlapi/model/OWLDatatype;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDatatype* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDatatype(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectInverseOf* OWLDataFactory::getOWLObjectInverseOf(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLObjectInverseOf", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;)Lorg/semanticweb/owlapi/model/OWLObjectInverseOf;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLObjectInverseOf* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectInverseOf(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLNamedIndividual* OWLDataFactory::getOWLNamedIndividual(org::semanticweb::owlapi::model::IRI* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLNamedIndividual", "(Lorg/semanticweb/owlapi/model/IRI;)Lorg/semanticweb/owlapi/model/OWLNamedIndividual;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLNamedIndividual* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLNamedIndividual(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLNamedIndividual* OWLDataFactory::getOWLNamedIndividual(const char* arg1, org::semanticweb::owlapi::model::PrefixManager* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLNamedIndividual", "(Ljava/lang/String;Lorg/semanticweb/owlapi/model/PrefixManager;)Lorg/semanticweb/owlapi/model/OWLNamedIndividual;");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  org::semanticweb::owlapi::model::OWLNamedIndividual* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLNamedIndividual(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnonymousIndividual* OWLDataFactory::getOWLAnonymousIndividual(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLAnonymousIndividual", "(Ljava/lang/String;)Lorg/semanticweb/owlapi/model/OWLAnonymousIndividual;");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  org::semanticweb::owlapi::model::OWLAnonymousIndividual* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAnonymousIndividual(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnonymousIndividual* OWLDataFactory::getOWLAnonymousIndividual()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLAnonymousIndividual", "()Lorg/semanticweb/owlapi/model/OWLAnonymousIndividual;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLAnonymousIndividual* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAnonymousIndividual(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnnotationProperty* OWLDataFactory::getOWLAnnotationProperty(org::semanticweb::owlapi::model::IRI* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLAnnotationProperty", "(Lorg/semanticweb/owlapi/model/IRI;)Lorg/semanticweb/owlapi/model/OWLAnnotationProperty;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLAnnotationProperty* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAnnotationProperty(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnnotationProperty* OWLDataFactory::getOWLAnnotationProperty(const char* arg1, org::semanticweb::owlapi::model::PrefixManager* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLAnnotationProperty", "(Ljava/lang/String;Lorg/semanticweb/owlapi/model/PrefixManager;)Lorg/semanticweb/owlapi/model/OWLAnnotationProperty;");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  org::semanticweb::owlapi::model::OWLAnnotationProperty* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAnnotationProperty(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnnotationProperty* OWLDataFactory::getRDFSLabel()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getRDFSLabel", "()Lorg/semanticweb/owlapi/model/OWLAnnotationProperty;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLAnnotationProperty* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAnnotationProperty(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnnotationProperty* OWLDataFactory::getRDFSComment()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getRDFSComment", "()Lorg/semanticweb/owlapi/model/OWLAnnotationProperty;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLAnnotationProperty* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAnnotationProperty(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnnotationProperty* OWLDataFactory::getRDFSSeeAlso()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getRDFSSeeAlso", "()Lorg/semanticweb/owlapi/model/OWLAnnotationProperty;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLAnnotationProperty* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAnnotationProperty(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnnotationProperty* OWLDataFactory::getRDFSIsDefinedBy()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getRDFSIsDefinedBy", "()Lorg/semanticweb/owlapi/model/OWLAnnotationProperty;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLAnnotationProperty* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAnnotationProperty(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnnotationProperty* OWLDataFactory::getOWLVersionInfo()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLVersionInfo", "()Lorg/semanticweb/owlapi/model/OWLAnnotationProperty;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLAnnotationProperty* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAnnotationProperty(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnnotationProperty* OWLDataFactory::getOWLBackwardCompatibleWith()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLBackwardCompatibleWith", "()Lorg/semanticweb/owlapi/model/OWLAnnotationProperty;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLAnnotationProperty* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAnnotationProperty(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnnotationProperty* OWLDataFactory::getOWLIncompatibleWith()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLIncompatibleWith", "()Lorg/semanticweb/owlapi/model/OWLAnnotationProperty;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLAnnotationProperty* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAnnotationProperty(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnnotationProperty* OWLDataFactory::getOWLDeprecated()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDeprecated", "()Lorg/semanticweb/owlapi/model/OWLAnnotationProperty;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLAnnotationProperty* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAnnotationProperty(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDatatype* OWLDataFactory::getRDFPlainLiteral()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getRDFPlainLiteral", "()Lorg/semanticweb/owlapi/model/OWLDatatype;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDatatype* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDatatype(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDatatype* OWLDataFactory::getOWLDatatype(org::semanticweb::owlapi::model::IRI* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDatatype", "(Lorg/semanticweb/owlapi/model/IRI;)Lorg/semanticweb/owlapi/model/OWLDatatype;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDatatype* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDatatype(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDatatype* OWLDataFactory::getOWLDatatype(const char* arg1, org::semanticweb::owlapi::model::PrefixManager* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDatatype", "(Ljava/lang/String;Lorg/semanticweb/owlapi/model/PrefixManager;)Lorg/semanticweb/owlapi/model/OWLDatatype;");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  org::semanticweb::owlapi::model::OWLDatatype* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDatatype(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDatatype* OWLDataFactory::getIntegerOWLDatatype()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getIntegerOWLDatatype", "()Lorg/semanticweb/owlapi/model/OWLDatatype;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDatatype* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDatatype(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDatatype* OWLDataFactory::getFloatOWLDatatype()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getFloatOWLDatatype", "()Lorg/semanticweb/owlapi/model/OWLDatatype;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDatatype* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDatatype(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDatatype* OWLDataFactory::getDoubleOWLDatatype()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getDoubleOWLDatatype", "()Lorg/semanticweb/owlapi/model/OWLDatatype;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDatatype* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDatatype(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDatatype* OWLDataFactory::getBooleanOWLDatatype()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getBooleanOWLDatatype", "()Lorg/semanticweb/owlapi/model/OWLDatatype;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDatatype* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDatatype(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLLiteral* OWLDataFactory::getOWLLiteral(const char* arg1, org::semanticweb::owlapi::model::OWLDatatype* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLLiteral", "(Ljava/lang/String;Lorg/semanticweb/owlapi/model/OWLDatatype;)Lorg/semanticweb/owlapi/model/OWLLiteral;");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
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

org::semanticweb::owlapi::model::OWLLiteral* OWLDataFactory::getOWLLiteral(const char* arg1, org::semanticweb::owlapi::vocab::OWL2Datatype* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLLiteral", "(Ljava/lang/String;Lorg/semanticweb/owlapi/vocab/OWL2Datatype;)Lorg/semanticweb/owlapi/model/OWLLiteral;");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
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

org::semanticweb::owlapi::model::OWLLiteral* OWLDataFactory::getOWLLiteral(int arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLLiteral", "(I)Lorg/semanticweb/owlapi/model/OWLLiteral;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

org::semanticweb::owlapi::model::OWLLiteral* OWLDataFactory::getOWLLiteral(double arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLLiteral", "(D)Lorg/semanticweb/owlapi/model/OWLLiteral;");
  handleJavaException(wrapperIntern);
  jdouble jarg1 = (jdouble)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

org::semanticweb::owlapi::model::OWLLiteral* OWLDataFactory::getOWLLiteral(bool arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLLiteral", "(Z)Lorg/semanticweb/owlapi/model/OWLLiteral;");
  handleJavaException(wrapperIntern);
  jboolean jarg1 = (jboolean)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

org::semanticweb::owlapi::model::OWLLiteral* OWLDataFactory::getOWLLiteral(float arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLLiteral", "(F)Lorg/semanticweb/owlapi/model/OWLLiteral;");
  handleJavaException(wrapperIntern);
  jfloat jarg1 = (jfloat)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

org::semanticweb::owlapi::model::OWLLiteral* OWLDataFactory::getOWLLiteral(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLLiteral", "(Ljava/lang/String;)Lorg/semanticweb/owlapi/model/OWLLiteral;");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
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

org::semanticweb::owlapi::model::OWLLiteral* OWLDataFactory::getOWLLiteral(const char* arg1, const char* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLLiteral", "(Ljava/lang/String;Ljava/lang/String;)Lorg/semanticweb/owlapi/model/OWLLiteral;");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jstring jarg2;
  if (arg2!=NULL) {
    jarg2 = javaEnv->NewStringUTF(arg2);
  } else {
    jarg2=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  if (jarg2!=NULL) {
    javaEnv->DeleteLocalRef(jarg2);
  }
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

org::semanticweb::owlapi::model::OWLLiteral* OWLDataFactory::getOWLTypedLiteral(const char* arg1, org::semanticweb::owlapi::model::OWLDatatype* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLTypedLiteral", "(Ljava/lang/String;Lorg/semanticweb/owlapi/model/OWLDatatype;)Lorg/semanticweb/owlapi/model/OWLLiteral;");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
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

org::semanticweb::owlapi::model::OWLLiteral* OWLDataFactory::getOWLTypedLiteral(const char* arg1, org::semanticweb::owlapi::vocab::OWL2Datatype* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLTypedLiteral", "(Ljava/lang/String;Lorg/semanticweb/owlapi/vocab/OWL2Datatype;)Lorg/semanticweb/owlapi/model/OWLLiteral;");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
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

org::semanticweb::owlapi::model::OWLLiteral* OWLDataFactory::getOWLTypedLiteral(int arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLTypedLiteral", "(I)Lorg/semanticweb/owlapi/model/OWLLiteral;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

org::semanticweb::owlapi::model::OWLLiteral* OWLDataFactory::getOWLTypedLiteral(double arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLTypedLiteral", "(D)Lorg/semanticweb/owlapi/model/OWLLiteral;");
  handleJavaException(wrapperIntern);
  jdouble jarg1 = (jdouble)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

org::semanticweb::owlapi::model::OWLLiteral* OWLDataFactory::getOWLTypedLiteral(bool arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLTypedLiteral", "(Z)Lorg/semanticweb/owlapi/model/OWLLiteral;");
  handleJavaException(wrapperIntern);
  jboolean jarg1 = (jboolean)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

org::semanticweb::owlapi::model::OWLLiteral* OWLDataFactory::getOWLTypedLiteral(float arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLTypedLiteral", "(F)Lorg/semanticweb/owlapi/model/OWLLiteral;");
  handleJavaException(wrapperIntern);
  jfloat jarg1 = (jfloat)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

org::semanticweb::owlapi::model::OWLLiteral* OWLDataFactory::getOWLTypedLiteral(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLTypedLiteral", "(Ljava/lang/String;)Lorg/semanticweb/owlapi/model/OWLLiteral;");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
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

org::semanticweb::owlapi::model::OWLLiteral* OWLDataFactory::getOWLStringLiteral(const char* arg1, const char* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLStringLiteral", "(Ljava/lang/String;Ljava/lang/String;)Lorg/semanticweb/owlapi/model/OWLLiteral;");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jstring jarg2;
  if (arg2!=NULL) {
    jarg2 = javaEnv->NewStringUTF(arg2);
  } else {
    jarg2=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  if (jarg2!=NULL) {
    javaEnv->DeleteLocalRef(jarg2);
  }
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

org::semanticweb::owlapi::model::OWLLiteral* OWLDataFactory::getOWLStringLiteral(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLStringLiteral", "(Ljava/lang/String;)Lorg/semanticweb/owlapi/model/OWLLiteral;");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
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

org::semanticweb::owlapi::model::OWLDataOneOf* OWLDataFactory::getOWLDataOneOf(java::util::Set* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDataOneOf", "(Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLDataOneOf;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDataOneOf* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataOneOf(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataOneOf* OWLDataFactory::getOWLDataOneOf(JavaObjectArray* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDataOneOf", "([Lorg/semanticweb/owlapi/model/OWLLiteral;)Lorg/semanticweb/owlapi/model/OWLDataOneOf;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDataOneOf* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataOneOf(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataComplementOf* OWLDataFactory::getOWLDataComplementOf(org::semanticweb::owlapi::model::OWLDataRange* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDataComplementOf", "(Lorg/semanticweb/owlapi/model/OWLDataRange;)Lorg/semanticweb/owlapi/model/OWLDataComplementOf;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDataComplementOf* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataComplementOf(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDatatypeRestriction* OWLDataFactory::getOWLDatatypeRestriction(org::semanticweb::owlapi::model::OWLDatatype* arg1, java::util::Set* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDatatypeRestriction", "(Lorg/semanticweb/owlapi/model/OWLDatatype;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLDatatypeRestriction;");
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
  org::semanticweb::owlapi::model::OWLDatatypeRestriction* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDatatypeRestriction(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDatatypeRestriction* OWLDataFactory::getOWLDatatypeRestriction(org::semanticweb::owlapi::model::OWLDatatype* arg1, org::semanticweb::owlapi::vocab::OWLFacet* arg2, org::semanticweb::owlapi::model::OWLLiteral* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDatatypeRestriction", "(Lorg/semanticweb/owlapi/model/OWLDatatype;Lorg/semanticweb/owlapi/vocab/OWLFacet;Lorg/semanticweb/owlapi/model/OWLLiteral;)Lorg/semanticweb/owlapi/model/OWLDatatypeRestriction;");
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
  org::semanticweb::owlapi::model::OWLDatatypeRestriction* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDatatypeRestriction(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDatatypeRestriction* OWLDataFactory::getOWLDatatypeRestriction(org::semanticweb::owlapi::model::OWLDatatype* arg1, JavaObjectArray* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDatatypeRestriction", "(Lorg/semanticweb/owlapi/model/OWLDatatype;[Lorg/semanticweb/owlapi/model/OWLFacetRestriction;)Lorg/semanticweb/owlapi/model/OWLDatatypeRestriction;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jarray jarg2;
  if (arg2!=NULL) {
    jarg2=(jarray)(arg2->getJavaObject());
  } else {
    jarg2=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDatatypeRestriction* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDatatypeRestriction(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDatatypeRestriction* OWLDataFactory::getOWLDatatypeMinInclusiveRestriction(int arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDatatypeMinInclusiveRestriction", "(I)Lorg/semanticweb/owlapi/model/OWLDatatypeRestriction;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDatatypeRestriction* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDatatypeRestriction(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDatatypeRestriction* OWLDataFactory::getOWLDatatypeMinInclusiveRestriction(double arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDatatypeMinInclusiveRestriction", "(D)Lorg/semanticweb/owlapi/model/OWLDatatypeRestriction;");
  handleJavaException(wrapperIntern);
  jdouble jarg1 = (jdouble)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDatatypeRestriction* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDatatypeRestriction(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDatatypeRestriction* OWLDataFactory::getOWLDatatypeMaxInclusiveRestriction(int arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDatatypeMaxInclusiveRestriction", "(I)Lorg/semanticweb/owlapi/model/OWLDatatypeRestriction;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDatatypeRestriction* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDatatypeRestriction(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDatatypeRestriction* OWLDataFactory::getOWLDatatypeMaxInclusiveRestriction(double arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDatatypeMaxInclusiveRestriction", "(D)Lorg/semanticweb/owlapi/model/OWLDatatypeRestriction;");
  handleJavaException(wrapperIntern);
  jdouble jarg1 = (jdouble)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDatatypeRestriction* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDatatypeRestriction(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDatatypeRestriction* OWLDataFactory::getOWLDatatypeMinMaxInclusiveRestriction(int arg1, int arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDatatypeMinMaxInclusiveRestriction", "(II)Lorg/semanticweb/owlapi/model/OWLDatatypeRestriction;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jint jarg2 = (jint)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDatatypeRestriction* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDatatypeRestriction(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDatatypeRestriction* OWLDataFactory::getOWLDatatypeMinMaxInclusiveRestriction(double arg1, double arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDatatypeMinMaxInclusiveRestriction", "(DD)Lorg/semanticweb/owlapi/model/OWLDatatypeRestriction;");
  handleJavaException(wrapperIntern);
  jdouble jarg1 = (jdouble)arg1;
  jdouble jarg2 = (jdouble)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDatatypeRestriction* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDatatypeRestriction(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDatatypeRestriction* OWLDataFactory::getOWLDatatypeMinExclusiveRestriction(int arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDatatypeMinExclusiveRestriction", "(I)Lorg/semanticweb/owlapi/model/OWLDatatypeRestriction;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDatatypeRestriction* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDatatypeRestriction(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDatatypeRestriction* OWLDataFactory::getOWLDatatypeMinExclusiveRestriction(double arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDatatypeMinExclusiveRestriction", "(D)Lorg/semanticweb/owlapi/model/OWLDatatypeRestriction;");
  handleJavaException(wrapperIntern);
  jdouble jarg1 = (jdouble)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDatatypeRestriction* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDatatypeRestriction(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDatatypeRestriction* OWLDataFactory::getOWLDatatypeMaxExclusiveRestriction(int arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDatatypeMaxExclusiveRestriction", "(I)Lorg/semanticweb/owlapi/model/OWLDatatypeRestriction;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDatatypeRestriction* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDatatypeRestriction(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDatatypeRestriction* OWLDataFactory::getOWLDatatypeMaxExclusiveRestriction(double arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDatatypeMaxExclusiveRestriction", "(D)Lorg/semanticweb/owlapi/model/OWLDatatypeRestriction;");
  handleJavaException(wrapperIntern);
  jdouble jarg1 = (jdouble)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDatatypeRestriction* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDatatypeRestriction(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDatatypeRestriction* OWLDataFactory::getOWLDatatypeMinMaxExclusiveRestriction(int arg1, int arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDatatypeMinMaxExclusiveRestriction", "(II)Lorg/semanticweb/owlapi/model/OWLDatatypeRestriction;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jint jarg2 = (jint)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDatatypeRestriction* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDatatypeRestriction(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDatatypeRestriction* OWLDataFactory::getOWLDatatypeMinMaxExclusiveRestriction(double arg1, double arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDatatypeMinMaxExclusiveRestriction", "(DD)Lorg/semanticweb/owlapi/model/OWLDatatypeRestriction;");
  handleJavaException(wrapperIntern);
  jdouble jarg1 = (jdouble)arg1;
  jdouble jarg2 = (jdouble)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDatatypeRestriction* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDatatypeRestriction(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLFacetRestriction* OWLDataFactory::getOWLFacetRestriction(org::semanticweb::owlapi::vocab::OWLFacet* arg1, org::semanticweb::owlapi::model::OWLLiteral* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLFacetRestriction", "(Lorg/semanticweb/owlapi/vocab/OWLFacet;Lorg/semanticweb/owlapi/model/OWLLiteral;)Lorg/semanticweb/owlapi/model/OWLFacetRestriction;");
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
  org::semanticweb::owlapi::model::OWLFacetRestriction* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLFacetRestriction(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLFacetRestriction* OWLDataFactory::getOWLFacetRestriction(org::semanticweb::owlapi::vocab::OWLFacet* arg1, int arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLFacetRestriction", "(Lorg/semanticweb/owlapi/vocab/OWLFacet;I)Lorg/semanticweb/owlapi/model/OWLFacetRestriction;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jint jarg2 = (jint)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLFacetRestriction* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLFacetRestriction(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLFacetRestriction* OWLDataFactory::getOWLFacetRestriction(org::semanticweb::owlapi::vocab::OWLFacet* arg1, double arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLFacetRestriction", "(Lorg/semanticweb/owlapi/vocab/OWLFacet;D)Lorg/semanticweb/owlapi/model/OWLFacetRestriction;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jdouble jarg2 = (jdouble)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLFacetRestriction* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLFacetRestriction(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLFacetRestriction* OWLDataFactory::getOWLFacetRestriction(org::semanticweb::owlapi::vocab::OWLFacet* arg1, float arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLFacetRestriction", "(Lorg/semanticweb/owlapi/vocab/OWLFacet;F)Lorg/semanticweb/owlapi/model/OWLFacetRestriction;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jfloat jarg2 = (jfloat)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLFacetRestriction* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLFacetRestriction(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataUnionOf* OWLDataFactory::getOWLDataUnionOf(java::util::Set* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDataUnionOf", "(Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLDataUnionOf;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDataUnionOf* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataUnionOf(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataUnionOf* OWLDataFactory::getOWLDataUnionOf(JavaObjectArray* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDataUnionOf", "([Lorg/semanticweb/owlapi/model/OWLDataRange;)Lorg/semanticweb/owlapi/model/OWLDataUnionOf;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDataUnionOf* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataUnionOf(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataIntersectionOf* OWLDataFactory::getOWLDataIntersectionOf(java::util::Set* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDataIntersectionOf", "(Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLDataIntersectionOf;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDataIntersectionOf* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataIntersectionOf(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataIntersectionOf* OWLDataFactory::getOWLDataIntersectionOf(JavaObjectArray* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDataIntersectionOf", "([Lorg/semanticweb/owlapi/model/OWLDataRange;)Lorg/semanticweb/owlapi/model/OWLDataIntersectionOf;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDataIntersectionOf* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataIntersectionOf(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectIntersectionOf* OWLDataFactory::getOWLObjectIntersectionOf(java::util::Set* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLObjectIntersectionOf", "(Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLObjectIntersectionOf;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLObjectIntersectionOf* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectIntersectionOf(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectIntersectionOf* OWLDataFactory::getOWLObjectIntersectionOf(JavaObjectArray* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLObjectIntersectionOf", "([Lorg/semanticweb/owlapi/model/OWLClassExpression;)Lorg/semanticweb/owlapi/model/OWLObjectIntersectionOf;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLObjectIntersectionOf* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectIntersectionOf(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataSomeValuesFrom* OWLDataFactory::getOWLDataSomeValuesFrom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLDataRange* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDataSomeValuesFrom", "(Lorg/semanticweb/owlapi/model/OWLDataPropertyExpression;Lorg/semanticweb/owlapi/model/OWLDataRange;)Lorg/semanticweb/owlapi/model/OWLDataSomeValuesFrom;");
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
  org::semanticweb::owlapi::model::OWLDataSomeValuesFrom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataSomeValuesFrom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataAllValuesFrom* OWLDataFactory::getOWLDataAllValuesFrom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLDataRange* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDataAllValuesFrom", "(Lorg/semanticweb/owlapi/model/OWLDataPropertyExpression;Lorg/semanticweb/owlapi/model/OWLDataRange;)Lorg/semanticweb/owlapi/model/OWLDataAllValuesFrom;");
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
  org::semanticweb::owlapi::model::OWLDataAllValuesFrom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataAllValuesFrom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataExactCardinality* OWLDataFactory::getOWLDataExactCardinality(int arg1, org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDataExactCardinality", "(ILorg/semanticweb/owlapi/model/OWLDataPropertyExpression;)Lorg/semanticweb/owlapi/model/OWLDataExactCardinality;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDataExactCardinality* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataExactCardinality(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataExactCardinality* OWLDataFactory::getOWLDataExactCardinality(int arg1, org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg2, org::semanticweb::owlapi::model::OWLDataRange* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDataExactCardinality", "(ILorg/semanticweb/owlapi/model/OWLDataPropertyExpression;Lorg/semanticweb/owlapi/model/OWLDataRange;)Lorg/semanticweb/owlapi/model/OWLDataExactCardinality;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
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
  org::semanticweb::owlapi::model::OWLDataExactCardinality* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataExactCardinality(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataMaxCardinality* OWLDataFactory::getOWLDataMaxCardinality(int arg1, org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDataMaxCardinality", "(ILorg/semanticweb/owlapi/model/OWLDataPropertyExpression;)Lorg/semanticweb/owlapi/model/OWLDataMaxCardinality;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDataMaxCardinality* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataMaxCardinality(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataMaxCardinality* OWLDataFactory::getOWLDataMaxCardinality(int arg1, org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg2, org::semanticweb::owlapi::model::OWLDataRange* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDataMaxCardinality", "(ILorg/semanticweb/owlapi/model/OWLDataPropertyExpression;Lorg/semanticweb/owlapi/model/OWLDataRange;)Lorg/semanticweb/owlapi/model/OWLDataMaxCardinality;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
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
  org::semanticweb::owlapi::model::OWLDataMaxCardinality* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataMaxCardinality(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataMinCardinality* OWLDataFactory::getOWLDataMinCardinality(int arg1, org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDataMinCardinality", "(ILorg/semanticweb/owlapi/model/OWLDataPropertyExpression;)Lorg/semanticweb/owlapi/model/OWLDataMinCardinality;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDataMinCardinality* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataMinCardinality(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataMinCardinality* OWLDataFactory::getOWLDataMinCardinality(int arg1, org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg2, org::semanticweb::owlapi::model::OWLDataRange* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDataMinCardinality", "(ILorg/semanticweb/owlapi/model/OWLDataPropertyExpression;Lorg/semanticweb/owlapi/model/OWLDataRange;)Lorg/semanticweb/owlapi/model/OWLDataMinCardinality;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
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
  org::semanticweb::owlapi::model::OWLDataMinCardinality* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataMinCardinality(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataHasValue* OWLDataFactory::getOWLDataHasValue(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLLiteral* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDataHasValue", "(Lorg/semanticweb/owlapi/model/OWLDataPropertyExpression;Lorg/semanticweb/owlapi/model/OWLLiteral;)Lorg/semanticweb/owlapi/model/OWLDataHasValue;");
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
  org::semanticweb::owlapi::model::OWLDataHasValue* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataHasValue(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectComplementOf* OWLDataFactory::getOWLObjectComplementOf(org::semanticweb::owlapi::model::OWLClassExpression* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLObjectComplementOf", "(Lorg/semanticweb/owlapi/model/OWLClassExpression;)Lorg/semanticweb/owlapi/model/OWLObjectComplementOf;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLObjectComplementOf* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectComplementOf(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectOneOf* OWLDataFactory::getOWLObjectOneOf(java::util::Set* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLObjectOneOf", "(Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLObjectOneOf;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLObjectOneOf* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectOneOf(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectOneOf* OWLDataFactory::getOWLObjectOneOf(JavaObjectArray* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLObjectOneOf", "([Lorg/semanticweb/owlapi/model/OWLIndividual;)Lorg/semanticweb/owlapi/model/OWLObjectOneOf;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLObjectOneOf* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectOneOf(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectAllValuesFrom* OWLDataFactory::getOWLObjectAllValuesFrom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLClassExpression* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLObjectAllValuesFrom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Lorg/semanticweb/owlapi/model/OWLClassExpression;)Lorg/semanticweb/owlapi/model/OWLObjectAllValuesFrom;");
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
  org::semanticweb::owlapi::model::OWLObjectAllValuesFrom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectAllValuesFrom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectSomeValuesFrom* OWLDataFactory::getOWLObjectSomeValuesFrom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLClassExpression* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLObjectSomeValuesFrom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Lorg/semanticweb/owlapi/model/OWLClassExpression;)Lorg/semanticweb/owlapi/model/OWLObjectSomeValuesFrom;");
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
  org::semanticweb::owlapi::model::OWLObjectSomeValuesFrom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectSomeValuesFrom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectExactCardinality* OWLDataFactory::getOWLObjectExactCardinality(int arg1, org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLObjectExactCardinality", "(ILorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;)Lorg/semanticweb/owlapi/model/OWLObjectExactCardinality;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLObjectExactCardinality* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectExactCardinality(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectExactCardinality* OWLDataFactory::getOWLObjectExactCardinality(int arg1, org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg2, org::semanticweb::owlapi::model::OWLClassExpression* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLObjectExactCardinality", "(ILorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Lorg/semanticweb/owlapi/model/OWLClassExpression;)Lorg/semanticweb/owlapi/model/OWLObjectExactCardinality;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
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
  org::semanticweb::owlapi::model::OWLObjectExactCardinality* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectExactCardinality(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectMinCardinality* OWLDataFactory::getOWLObjectMinCardinality(int arg1, org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLObjectMinCardinality", "(ILorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;)Lorg/semanticweb/owlapi/model/OWLObjectMinCardinality;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLObjectMinCardinality* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectMinCardinality(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectMinCardinality* OWLDataFactory::getOWLObjectMinCardinality(int arg1, org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg2, org::semanticweb::owlapi::model::OWLClassExpression* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLObjectMinCardinality", "(ILorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Lorg/semanticweb/owlapi/model/OWLClassExpression;)Lorg/semanticweb/owlapi/model/OWLObjectMinCardinality;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
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
  org::semanticweb::owlapi::model::OWLObjectMinCardinality* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectMinCardinality(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectMaxCardinality* OWLDataFactory::getOWLObjectMaxCardinality(int arg1, org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLObjectMaxCardinality", "(ILorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;)Lorg/semanticweb/owlapi/model/OWLObjectMaxCardinality;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLObjectMaxCardinality* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectMaxCardinality(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectMaxCardinality* OWLDataFactory::getOWLObjectMaxCardinality(int arg1, org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg2, org::semanticweb::owlapi::model::OWLClassExpression* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLObjectMaxCardinality", "(ILorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Lorg/semanticweb/owlapi/model/OWLClassExpression;)Lorg/semanticweb/owlapi/model/OWLObjectMaxCardinality;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
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
  org::semanticweb::owlapi::model::OWLObjectMaxCardinality* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectMaxCardinality(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectHasSelf* OWLDataFactory::getOWLObjectHasSelf(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLObjectHasSelf", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;)Lorg/semanticweb/owlapi/model/OWLObjectHasSelf;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLObjectHasSelf* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectHasSelf(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectHasValue* OWLDataFactory::getOWLObjectHasValue(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLObjectHasValue", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Lorg/semanticweb/owlapi/model/OWLIndividual;)Lorg/semanticweb/owlapi/model/OWLObjectHasValue;");
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
  org::semanticweb::owlapi::model::OWLObjectHasValue* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectHasValue(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectUnionOf* OWLDataFactory::getOWLObjectUnionOf(java::util::Set* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLObjectUnionOf", "(Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLObjectUnionOf;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLObjectUnionOf* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectUnionOf(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectUnionOf* OWLDataFactory::getOWLObjectUnionOf(JavaObjectArray* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLObjectUnionOf", "([Lorg/semanticweb/owlapi/model/OWLClassExpression;)Lorg/semanticweb/owlapi/model/OWLObjectUnionOf;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLObjectUnionOf* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectUnionOf(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDeclarationAxiom* OWLDataFactory::getOWLDeclarationAxiom(org::semanticweb::owlapi::model::OWLEntity* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDeclarationAxiom", "(Lorg/semanticweb/owlapi/model/OWLEntity;)Lorg/semanticweb/owlapi/model/OWLDeclarationAxiom;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDeclarationAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDeclarationAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDeclarationAxiom* OWLDataFactory::getOWLDeclarationAxiom(org::semanticweb::owlapi::model::OWLEntity* arg1, java::util::Set* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDeclarationAxiom", "(Lorg/semanticweb/owlapi/model/OWLEntity;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLDeclarationAxiom;");
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
  org::semanticweb::owlapi::model::OWLDeclarationAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDeclarationAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLSubClassOfAxiom* OWLDataFactory::getOWLSubClassOfAxiom(org::semanticweb::owlapi::model::OWLClassExpression* arg1, org::semanticweb::owlapi::model::OWLClassExpression* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLSubClassOfAxiom", "(Lorg/semanticweb/owlapi/model/OWLClassExpression;Lorg/semanticweb/owlapi/model/OWLClassExpression;)Lorg/semanticweb/owlapi/model/OWLSubClassOfAxiom;");
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
  org::semanticweb::owlapi::model::OWLSubClassOfAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLSubClassOfAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLSubClassOfAxiom* OWLDataFactory::getOWLSubClassOfAxiom(org::semanticweb::owlapi::model::OWLClassExpression* arg1, org::semanticweb::owlapi::model::OWLClassExpression* arg2, java::util::Set* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLSubClassOfAxiom", "(Lorg/semanticweb/owlapi/model/OWLClassExpression;Lorg/semanticweb/owlapi/model/OWLClassExpression;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLSubClassOfAxiom;");
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
  org::semanticweb::owlapi::model::OWLSubClassOfAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLSubClassOfAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDisjointClassesAxiom* OWLDataFactory::getOWLDisjointClassesAxiom(java::util::Set* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDisjointClassesAxiom", "(Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLDisjointClassesAxiom;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDisjointClassesAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDisjointClassesAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDisjointClassesAxiom* OWLDataFactory::getOWLDisjointClassesAxiom(JavaObjectArray* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDisjointClassesAxiom", "([Lorg/semanticweb/owlapi/model/OWLClassExpression;)Lorg/semanticweb/owlapi/model/OWLDisjointClassesAxiom;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDisjointClassesAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDisjointClassesAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDisjointClassesAxiom* OWLDataFactory::getOWLDisjointClassesAxiom(java::util::Set* arg1, java::util::Set* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDisjointClassesAxiom", "(Ljava/util/Set;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLDisjointClassesAxiom;");
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
  org::semanticweb::owlapi::model::OWLDisjointClassesAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDisjointClassesAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDisjointUnionAxiom* OWLDataFactory::getOWLDisjointUnionAxiom(org::semanticweb::owlapi::model::OWLClass* arg1, java::util::Set* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDisjointUnionAxiom", "(Lorg/semanticweb/owlapi/model/OWLClass;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLDisjointUnionAxiom;");
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
  org::semanticweb::owlapi::model::OWLDisjointUnionAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDisjointUnionAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDisjointUnionAxiom* OWLDataFactory::getOWLDisjointUnionAxiom(org::semanticweb::owlapi::model::OWLClass* arg1, java::util::Set* arg2, java::util::Set* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDisjointUnionAxiom", "(Lorg/semanticweb/owlapi/model/OWLClass;Ljava/util/Set;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLDisjointUnionAxiom;");
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
  org::semanticweb::owlapi::model::OWLDisjointUnionAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDisjointUnionAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLSubObjectPropertyOfAxiom* OWLDataFactory::getOWLSubObjectPropertyOfAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLSubObjectPropertyOfAxiom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;)Lorg/semanticweb/owlapi/model/OWLSubObjectPropertyOfAxiom;");
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
  org::semanticweb::owlapi::model::OWLSubObjectPropertyOfAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLSubObjectPropertyOfAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLSubObjectPropertyOfAxiom* OWLDataFactory::getOWLSubObjectPropertyOfAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg2, java::util::Set* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLSubObjectPropertyOfAxiom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLSubObjectPropertyOfAxiom;");
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
  org::semanticweb::owlapi::model::OWLSubObjectPropertyOfAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLSubObjectPropertyOfAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLSubPropertyChainOfAxiom* OWLDataFactory::getOWLSubPropertyChainOfAxiom(java::util::List* arg1, org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLSubPropertyChainOfAxiom", "(Ljava/util/List;Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;)Lorg/semanticweb/owlapi/model/OWLSubPropertyChainOfAxiom;");
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
  org::semanticweb::owlapi::model::OWLSubPropertyChainOfAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLSubPropertyChainOfAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLSubPropertyChainOfAxiom* OWLDataFactory::getOWLSubPropertyChainOfAxiom(java::util::List* arg1, org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg2, java::util::Set* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLSubPropertyChainOfAxiom", "(Ljava/util/List;Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLSubPropertyChainOfAxiom;");
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
  org::semanticweb::owlapi::model::OWLSubPropertyChainOfAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLSubPropertyChainOfAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLEquivalentObjectPropertiesAxiom* OWLDataFactory::getOWLEquivalentObjectPropertiesAxiom(java::util::Set* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLEquivalentObjectPropertiesAxiom", "(Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLEquivalentObjectPropertiesAxiom;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLEquivalentObjectPropertiesAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLEquivalentObjectPropertiesAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLEquivalentObjectPropertiesAxiom* OWLDataFactory::getOWLEquivalentObjectPropertiesAxiom(java::util::Set* arg1, java::util::Set* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLEquivalentObjectPropertiesAxiom", "(Ljava/util/Set;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLEquivalentObjectPropertiesAxiom;");
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
  org::semanticweb::owlapi::model::OWLEquivalentObjectPropertiesAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLEquivalentObjectPropertiesAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLEquivalentObjectPropertiesAxiom* OWLDataFactory::getOWLEquivalentObjectPropertiesAxiom(JavaObjectArray* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLEquivalentObjectPropertiesAxiom", "([Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;)Lorg/semanticweb/owlapi/model/OWLEquivalentObjectPropertiesAxiom;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLEquivalentObjectPropertiesAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLEquivalentObjectPropertiesAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLEquivalentObjectPropertiesAxiom* OWLDataFactory::getOWLEquivalentObjectPropertiesAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLEquivalentObjectPropertiesAxiom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;)Lorg/semanticweb/owlapi/model/OWLEquivalentObjectPropertiesAxiom;");
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
  org::semanticweb::owlapi::model::OWLEquivalentObjectPropertiesAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLEquivalentObjectPropertiesAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLEquivalentObjectPropertiesAxiom* OWLDataFactory::getOWLEquivalentObjectPropertiesAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg2, java::util::Set* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLEquivalentObjectPropertiesAxiom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLEquivalentObjectPropertiesAxiom;");
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
  org::semanticweb::owlapi::model::OWLEquivalentObjectPropertiesAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLEquivalentObjectPropertiesAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDisjointObjectPropertiesAxiom* OWLDataFactory::getOWLDisjointObjectPropertiesAxiom(java::util::Set* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDisjointObjectPropertiesAxiom", "(Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLDisjointObjectPropertiesAxiom;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDisjointObjectPropertiesAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDisjointObjectPropertiesAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDisjointObjectPropertiesAxiom* OWLDataFactory::getOWLDisjointObjectPropertiesAxiom(JavaObjectArray* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDisjointObjectPropertiesAxiom", "([Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;)Lorg/semanticweb/owlapi/model/OWLDisjointObjectPropertiesAxiom;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDisjointObjectPropertiesAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDisjointObjectPropertiesAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDisjointObjectPropertiesAxiom* OWLDataFactory::getOWLDisjointObjectPropertiesAxiom(java::util::Set* arg1, java::util::Set* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDisjointObjectPropertiesAxiom", "(Ljava/util/Set;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLDisjointObjectPropertiesAxiom;");
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
  org::semanticweb::owlapi::model::OWLDisjointObjectPropertiesAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDisjointObjectPropertiesAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLInverseObjectPropertiesAxiom* OWLDataFactory::getOWLInverseObjectPropertiesAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLInverseObjectPropertiesAxiom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;)Lorg/semanticweb/owlapi/model/OWLInverseObjectPropertiesAxiom;");
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
  org::semanticweb::owlapi::model::OWLInverseObjectPropertiesAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLInverseObjectPropertiesAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLInverseObjectPropertiesAxiom* OWLDataFactory::getOWLInverseObjectPropertiesAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg2, java::util::Set* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLInverseObjectPropertiesAxiom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLInverseObjectPropertiesAxiom;");
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
  org::semanticweb::owlapi::model::OWLInverseObjectPropertiesAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLInverseObjectPropertiesAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectPropertyDomainAxiom* OWLDataFactory::getOWLObjectPropertyDomainAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLClassExpression* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLObjectPropertyDomainAxiom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Lorg/semanticweb/owlapi/model/OWLClassExpression;)Lorg/semanticweb/owlapi/model/OWLObjectPropertyDomainAxiom;");
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
  org::semanticweb::owlapi::model::OWLObjectPropertyDomainAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectPropertyDomainAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectPropertyDomainAxiom* OWLDataFactory::getOWLObjectPropertyDomainAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLClassExpression* arg2, java::util::Set* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLObjectPropertyDomainAxiom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Lorg/semanticweb/owlapi/model/OWLClassExpression;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLObjectPropertyDomainAxiom;");
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
  org::semanticweb::owlapi::model::OWLObjectPropertyDomainAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectPropertyDomainAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectPropertyRangeAxiom* OWLDataFactory::getOWLObjectPropertyRangeAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLClassExpression* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLObjectPropertyRangeAxiom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Lorg/semanticweb/owlapi/model/OWLClassExpression;)Lorg/semanticweb/owlapi/model/OWLObjectPropertyRangeAxiom;");
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
  org::semanticweb::owlapi::model::OWLObjectPropertyRangeAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectPropertyRangeAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectPropertyRangeAxiom* OWLDataFactory::getOWLObjectPropertyRangeAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLClassExpression* arg2, java::util::Set* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLObjectPropertyRangeAxiom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Lorg/semanticweb/owlapi/model/OWLClassExpression;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLObjectPropertyRangeAxiom;");
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
  org::semanticweb::owlapi::model::OWLObjectPropertyRangeAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectPropertyRangeAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLFunctionalObjectPropertyAxiom* OWLDataFactory::getOWLFunctionalObjectPropertyAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLFunctionalObjectPropertyAxiom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;)Lorg/semanticweb/owlapi/model/OWLFunctionalObjectPropertyAxiom;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLFunctionalObjectPropertyAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLFunctionalObjectPropertyAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLFunctionalObjectPropertyAxiom* OWLDataFactory::getOWLFunctionalObjectPropertyAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, java::util::Set* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLFunctionalObjectPropertyAxiom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLFunctionalObjectPropertyAxiom;");
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
  org::semanticweb::owlapi::model::OWLFunctionalObjectPropertyAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLFunctionalObjectPropertyAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLInverseFunctionalObjectPropertyAxiom* OWLDataFactory::getOWLInverseFunctionalObjectPropertyAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLInverseFunctionalObjectPropertyAxiom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;)Lorg/semanticweb/owlapi/model/OWLInverseFunctionalObjectPropertyAxiom;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLInverseFunctionalObjectPropertyAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLInverseFunctionalObjectPropertyAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLInverseFunctionalObjectPropertyAxiom* OWLDataFactory::getOWLInverseFunctionalObjectPropertyAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, java::util::Set* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLInverseFunctionalObjectPropertyAxiom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLInverseFunctionalObjectPropertyAxiom;");
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
  org::semanticweb::owlapi::model::OWLInverseFunctionalObjectPropertyAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLInverseFunctionalObjectPropertyAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLReflexiveObjectPropertyAxiom* OWLDataFactory::getOWLReflexiveObjectPropertyAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLReflexiveObjectPropertyAxiom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;)Lorg/semanticweb/owlapi/model/OWLReflexiveObjectPropertyAxiom;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLReflexiveObjectPropertyAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLReflexiveObjectPropertyAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLReflexiveObjectPropertyAxiom* OWLDataFactory::getOWLReflexiveObjectPropertyAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, java::util::Set* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLReflexiveObjectPropertyAxiom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLReflexiveObjectPropertyAxiom;");
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
  org::semanticweb::owlapi::model::OWLReflexiveObjectPropertyAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLReflexiveObjectPropertyAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLIrreflexiveObjectPropertyAxiom* OWLDataFactory::getOWLIrreflexiveObjectPropertyAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLIrreflexiveObjectPropertyAxiom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;)Lorg/semanticweb/owlapi/model/OWLIrreflexiveObjectPropertyAxiom;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLIrreflexiveObjectPropertyAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLIrreflexiveObjectPropertyAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLIrreflexiveObjectPropertyAxiom* OWLDataFactory::getOWLIrreflexiveObjectPropertyAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, java::util::Set* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLIrreflexiveObjectPropertyAxiom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLIrreflexiveObjectPropertyAxiom;");
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
  org::semanticweb::owlapi::model::OWLIrreflexiveObjectPropertyAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLIrreflexiveObjectPropertyAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLSymmetricObjectPropertyAxiom* OWLDataFactory::getOWLSymmetricObjectPropertyAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLSymmetricObjectPropertyAxiom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;)Lorg/semanticweb/owlapi/model/OWLSymmetricObjectPropertyAxiom;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLSymmetricObjectPropertyAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLSymmetricObjectPropertyAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLSymmetricObjectPropertyAxiom* OWLDataFactory::getOWLSymmetricObjectPropertyAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, java::util::Set* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLSymmetricObjectPropertyAxiom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLSymmetricObjectPropertyAxiom;");
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
  org::semanticweb::owlapi::model::OWLSymmetricObjectPropertyAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLSymmetricObjectPropertyAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAsymmetricObjectPropertyAxiom* OWLDataFactory::getOWLAsymmetricObjectPropertyAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLAsymmetricObjectPropertyAxiom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;)Lorg/semanticweb/owlapi/model/OWLAsymmetricObjectPropertyAxiom;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLAsymmetricObjectPropertyAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAsymmetricObjectPropertyAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAsymmetricObjectPropertyAxiom* OWLDataFactory::getOWLAsymmetricObjectPropertyAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, java::util::Set* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLAsymmetricObjectPropertyAxiom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLAsymmetricObjectPropertyAxiom;");
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
  org::semanticweb::owlapi::model::OWLAsymmetricObjectPropertyAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAsymmetricObjectPropertyAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLTransitiveObjectPropertyAxiom* OWLDataFactory::getOWLTransitiveObjectPropertyAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLTransitiveObjectPropertyAxiom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;)Lorg/semanticweb/owlapi/model/OWLTransitiveObjectPropertyAxiom;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLTransitiveObjectPropertyAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLTransitiveObjectPropertyAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLTransitiveObjectPropertyAxiom* OWLDataFactory::getOWLTransitiveObjectPropertyAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, java::util::Set* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLTransitiveObjectPropertyAxiom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLTransitiveObjectPropertyAxiom;");
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
  org::semanticweb::owlapi::model::OWLTransitiveObjectPropertyAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLTransitiveObjectPropertyAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLSubDataPropertyOfAxiom* OWLDataFactory::getOWLSubDataPropertyOfAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLSubDataPropertyOfAxiom", "(Lorg/semanticweb/owlapi/model/OWLDataPropertyExpression;Lorg/semanticweb/owlapi/model/OWLDataPropertyExpression;)Lorg/semanticweb/owlapi/model/OWLSubDataPropertyOfAxiom;");
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
  org::semanticweb::owlapi::model::OWLSubDataPropertyOfAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLSubDataPropertyOfAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLSubDataPropertyOfAxiom* OWLDataFactory::getOWLSubDataPropertyOfAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg2, java::util::Set* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLSubDataPropertyOfAxiom", "(Lorg/semanticweb/owlapi/model/OWLDataPropertyExpression;Lorg/semanticweb/owlapi/model/OWLDataPropertyExpression;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLSubDataPropertyOfAxiom;");
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
  org::semanticweb::owlapi::model::OWLSubDataPropertyOfAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLSubDataPropertyOfAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLEquivalentDataPropertiesAxiom* OWLDataFactory::getOWLEquivalentDataPropertiesAxiom(java::util::Set* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLEquivalentDataPropertiesAxiom", "(Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLEquivalentDataPropertiesAxiom;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLEquivalentDataPropertiesAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLEquivalentDataPropertiesAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLEquivalentDataPropertiesAxiom* OWLDataFactory::getOWLEquivalentDataPropertiesAxiom(java::util::Set* arg1, java::util::Set* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLEquivalentDataPropertiesAxiom", "(Ljava/util/Set;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLEquivalentDataPropertiesAxiom;");
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
  org::semanticweb::owlapi::model::OWLEquivalentDataPropertiesAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLEquivalentDataPropertiesAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLEquivalentDataPropertiesAxiom* OWLDataFactory::getOWLEquivalentDataPropertiesAxiom(JavaObjectArray* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLEquivalentDataPropertiesAxiom", "([Lorg/semanticweb/owlapi/model/OWLDataPropertyExpression;)Lorg/semanticweb/owlapi/model/OWLEquivalentDataPropertiesAxiom;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLEquivalentDataPropertiesAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLEquivalentDataPropertiesAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLEquivalentDataPropertiesAxiom* OWLDataFactory::getOWLEquivalentDataPropertiesAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLEquivalentDataPropertiesAxiom", "(Lorg/semanticweb/owlapi/model/OWLDataPropertyExpression;Lorg/semanticweb/owlapi/model/OWLDataPropertyExpression;)Lorg/semanticweb/owlapi/model/OWLEquivalentDataPropertiesAxiom;");
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
  org::semanticweb::owlapi::model::OWLEquivalentDataPropertiesAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLEquivalentDataPropertiesAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLEquivalentDataPropertiesAxiom* OWLDataFactory::getOWLEquivalentDataPropertiesAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg2, java::util::Set* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLEquivalentDataPropertiesAxiom", "(Lorg/semanticweb/owlapi/model/OWLDataPropertyExpression;Lorg/semanticweb/owlapi/model/OWLDataPropertyExpression;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLEquivalentDataPropertiesAxiom;");
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
  org::semanticweb::owlapi::model::OWLEquivalentDataPropertiesAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLEquivalentDataPropertiesAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDisjointDataPropertiesAxiom* OWLDataFactory::getOWLDisjointDataPropertiesAxiom(JavaObjectArray* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDisjointDataPropertiesAxiom", "([Lorg/semanticweb/owlapi/model/OWLDataPropertyExpression;)Lorg/semanticweb/owlapi/model/OWLDisjointDataPropertiesAxiom;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDisjointDataPropertiesAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDisjointDataPropertiesAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDisjointDataPropertiesAxiom* OWLDataFactory::getOWLDisjointDataPropertiesAxiom(java::util::Set* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDisjointDataPropertiesAxiom", "(Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLDisjointDataPropertiesAxiom;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDisjointDataPropertiesAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDisjointDataPropertiesAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDisjointDataPropertiesAxiom* OWLDataFactory::getOWLDisjointDataPropertiesAxiom(java::util::Set* arg1, java::util::Set* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDisjointDataPropertiesAxiom", "(Ljava/util/Set;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLDisjointDataPropertiesAxiom;");
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
  org::semanticweb::owlapi::model::OWLDisjointDataPropertiesAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDisjointDataPropertiesAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataPropertyDomainAxiom* OWLDataFactory::getOWLDataPropertyDomainAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLClassExpression* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDataPropertyDomainAxiom", "(Lorg/semanticweb/owlapi/model/OWLDataPropertyExpression;Lorg/semanticweb/owlapi/model/OWLClassExpression;)Lorg/semanticweb/owlapi/model/OWLDataPropertyDomainAxiom;");
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
  org::semanticweb::owlapi::model::OWLDataPropertyDomainAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataPropertyDomainAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataPropertyDomainAxiom* OWLDataFactory::getOWLDataPropertyDomainAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLClassExpression* arg2, java::util::Set* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDataPropertyDomainAxiom", "(Lorg/semanticweb/owlapi/model/OWLDataPropertyExpression;Lorg/semanticweb/owlapi/model/OWLClassExpression;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLDataPropertyDomainAxiom;");
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
  org::semanticweb::owlapi::model::OWLDataPropertyDomainAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataPropertyDomainAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataPropertyRangeAxiom* OWLDataFactory::getOWLDataPropertyRangeAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLDataRange* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDataPropertyRangeAxiom", "(Lorg/semanticweb/owlapi/model/OWLDataPropertyExpression;Lorg/semanticweb/owlapi/model/OWLDataRange;)Lorg/semanticweb/owlapi/model/OWLDataPropertyRangeAxiom;");
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
  org::semanticweb::owlapi::model::OWLDataPropertyRangeAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataPropertyRangeAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataPropertyRangeAxiom* OWLDataFactory::getOWLDataPropertyRangeAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLDataRange* arg2, java::util::Set* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDataPropertyRangeAxiom", "(Lorg/semanticweb/owlapi/model/OWLDataPropertyExpression;Lorg/semanticweb/owlapi/model/OWLDataRange;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLDataPropertyRangeAxiom;");
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
  org::semanticweb::owlapi::model::OWLDataPropertyRangeAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataPropertyRangeAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLFunctionalDataPropertyAxiom* OWLDataFactory::getOWLFunctionalDataPropertyAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLFunctionalDataPropertyAxiom", "(Lorg/semanticweb/owlapi/model/OWLDataPropertyExpression;)Lorg/semanticweb/owlapi/model/OWLFunctionalDataPropertyAxiom;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLFunctionalDataPropertyAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLFunctionalDataPropertyAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLFunctionalDataPropertyAxiom* OWLDataFactory::getOWLFunctionalDataPropertyAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, java::util::Set* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLFunctionalDataPropertyAxiom", "(Lorg/semanticweb/owlapi/model/OWLDataPropertyExpression;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLFunctionalDataPropertyAxiom;");
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
  org::semanticweb::owlapi::model::OWLFunctionalDataPropertyAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLFunctionalDataPropertyAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLHasKeyAxiom* OWLDataFactory::getOWLHasKeyAxiom(org::semanticweb::owlapi::model::OWLClassExpression* arg1, java::util::Set* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLHasKeyAxiom", "(Lorg/semanticweb/owlapi/model/OWLClassExpression;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLHasKeyAxiom;");
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
  org::semanticweb::owlapi::model::OWLHasKeyAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLHasKeyAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLHasKeyAxiom* OWLDataFactory::getOWLHasKeyAxiom(org::semanticweb::owlapi::model::OWLClassExpression* arg1, JavaObjectArray* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLHasKeyAxiom", "(Lorg/semanticweb/owlapi/model/OWLClassExpression;[Lorg/semanticweb/owlapi/model/OWLPropertyExpression;)Lorg/semanticweb/owlapi/model/OWLHasKeyAxiom;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jarray jarg2;
  if (arg2!=NULL) {
    jarg2=(jarray)(arg2->getJavaObject());
  } else {
    jarg2=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLHasKeyAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLHasKeyAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLHasKeyAxiom* OWLDataFactory::getOWLHasKeyAxiom(org::semanticweb::owlapi::model::OWLClassExpression* arg1, java::util::Set* arg2, java::util::Set* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLHasKeyAxiom", "(Lorg/semanticweb/owlapi/model/OWLClassExpression;Ljava/util/Set;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLHasKeyAxiom;");
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
  org::semanticweb::owlapi::model::OWLHasKeyAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLHasKeyAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDatatypeDefinitionAxiom* OWLDataFactory::getOWLDatatypeDefinitionAxiom(org::semanticweb::owlapi::model::OWLDatatype* arg1, org::semanticweb::owlapi::model::OWLDataRange* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDatatypeDefinitionAxiom", "(Lorg/semanticweb/owlapi/model/OWLDatatype;Lorg/semanticweb/owlapi/model/OWLDataRange;)Lorg/semanticweb/owlapi/model/OWLDatatypeDefinitionAxiom;");
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
  org::semanticweb::owlapi::model::OWLDatatypeDefinitionAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDatatypeDefinitionAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDatatypeDefinitionAxiom* OWLDataFactory::getOWLDatatypeDefinitionAxiom(org::semanticweb::owlapi::model::OWLDatatype* arg1, org::semanticweb::owlapi::model::OWLDataRange* arg2, java::util::Set* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDatatypeDefinitionAxiom", "(Lorg/semanticweb/owlapi/model/OWLDatatype;Lorg/semanticweb/owlapi/model/OWLDataRange;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLDatatypeDefinitionAxiom;");
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
  org::semanticweb::owlapi::model::OWLDatatypeDefinitionAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDatatypeDefinitionAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLSameIndividualAxiom* OWLDataFactory::getOWLSameIndividualAxiom(java::util::Set* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLSameIndividualAxiom", "(Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLSameIndividualAxiom;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLSameIndividualAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLSameIndividualAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLSameIndividualAxiom* OWLDataFactory::getOWLSameIndividualAxiom(JavaObjectArray* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLSameIndividualAxiom", "([Lorg/semanticweb/owlapi/model/OWLIndividual;)Lorg/semanticweb/owlapi/model/OWLSameIndividualAxiom;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLSameIndividualAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLSameIndividualAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLSameIndividualAxiom* OWLDataFactory::getOWLSameIndividualAxiom(java::util::Set* arg1, java::util::Set* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLSameIndividualAxiom", "(Ljava/util/Set;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLSameIndividualAxiom;");
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
  org::semanticweb::owlapi::model::OWLSameIndividualAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLSameIndividualAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDifferentIndividualsAxiom* OWLDataFactory::getOWLDifferentIndividualsAxiom(java::util::Set* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDifferentIndividualsAxiom", "(Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLDifferentIndividualsAxiom;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDifferentIndividualsAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDifferentIndividualsAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDifferentIndividualsAxiom* OWLDataFactory::getOWLDifferentIndividualsAxiom(JavaObjectArray* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDifferentIndividualsAxiom", "([Lorg/semanticweb/owlapi/model/OWLIndividual;)Lorg/semanticweb/owlapi/model/OWLDifferentIndividualsAxiom;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDifferentIndividualsAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDifferentIndividualsAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDifferentIndividualsAxiom* OWLDataFactory::getOWLDifferentIndividualsAxiom(java::util::Set* arg1, java::util::Set* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDifferentIndividualsAxiom", "(Ljava/util/Set;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLDifferentIndividualsAxiom;");
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
  org::semanticweb::owlapi::model::OWLDifferentIndividualsAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDifferentIndividualsAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLClassAssertionAxiom* OWLDataFactory::getOWLClassAssertionAxiom(org::semanticweb::owlapi::model::OWLClassExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLClassAssertionAxiom", "(Lorg/semanticweb/owlapi/model/OWLClassExpression;Lorg/semanticweb/owlapi/model/OWLIndividual;)Lorg/semanticweb/owlapi/model/OWLClassAssertionAxiom;");
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
  org::semanticweb::owlapi::model::OWLClassAssertionAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLClassAssertionAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLClassAssertionAxiom* OWLDataFactory::getOWLClassAssertionAxiom(org::semanticweb::owlapi::model::OWLClassExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2, java::util::Set* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLClassAssertionAxiom", "(Lorg/semanticweb/owlapi/model/OWLClassExpression;Lorg/semanticweb/owlapi/model/OWLIndividual;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLClassAssertionAxiom;");
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
  org::semanticweb::owlapi::model::OWLClassAssertionAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLClassAssertionAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectPropertyAssertionAxiom* OWLDataFactory::getOWLObjectPropertyAssertionAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2, org::semanticweb::owlapi::model::OWLIndividual* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLObjectPropertyAssertionAxiom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Lorg/semanticweb/owlapi/model/OWLIndividual;Lorg/semanticweb/owlapi/model/OWLIndividual;)Lorg/semanticweb/owlapi/model/OWLObjectPropertyAssertionAxiom;");
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
  org::semanticweb::owlapi::model::OWLObjectPropertyAssertionAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectPropertyAssertionAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectPropertyAssertionAxiom* OWLDataFactory::getOWLObjectPropertyAssertionAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2, org::semanticweb::owlapi::model::OWLIndividual* arg3, java::util::Set* arg4)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLObjectPropertyAssertionAxiom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Lorg/semanticweb/owlapi/model/OWLIndividual;Lorg/semanticweb/owlapi/model/OWLIndividual;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLObjectPropertyAssertionAxiom;");
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
  jobject jarg4;
  if (arg4!=NULL) {
    jarg4=arg4->getJavaObject();
  } else {
    jarg4=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3, jarg4);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLObjectPropertyAssertionAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectPropertyAssertionAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLNegativeObjectPropertyAssertionAxiom* OWLDataFactory::getOWLNegativeObjectPropertyAssertionAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2, org::semanticweb::owlapi::model::OWLIndividual* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLNegativeObjectPropertyAssertionAxiom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Lorg/semanticweb/owlapi/model/OWLIndividual;Lorg/semanticweb/owlapi/model/OWLIndividual;)Lorg/semanticweb/owlapi/model/OWLNegativeObjectPropertyAssertionAxiom;");
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
  org::semanticweb::owlapi::model::OWLNegativeObjectPropertyAssertionAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLNegativeObjectPropertyAssertionAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLNegativeObjectPropertyAssertionAxiom* OWLDataFactory::getOWLNegativeObjectPropertyAssertionAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2, org::semanticweb::owlapi::model::OWLIndividual* arg3, java::util::Set* arg4)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLNegativeObjectPropertyAssertionAxiom", "(Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;Lorg/semanticweb/owlapi/model/OWLIndividual;Lorg/semanticweb/owlapi/model/OWLIndividual;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLNegativeObjectPropertyAssertionAxiom;");
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
  jobject jarg4;
  if (arg4!=NULL) {
    jarg4=arg4->getJavaObject();
  } else {
    jarg4=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3, jarg4);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLNegativeObjectPropertyAssertionAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLNegativeObjectPropertyAssertionAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataPropertyAssertionAxiom* OWLDataFactory::getOWLDataPropertyAssertionAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2, org::semanticweb::owlapi::model::OWLLiteral* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDataPropertyAssertionAxiom", "(Lorg/semanticweb/owlapi/model/OWLDataPropertyExpression;Lorg/semanticweb/owlapi/model/OWLIndividual;Lorg/semanticweb/owlapi/model/OWLLiteral;)Lorg/semanticweb/owlapi/model/OWLDataPropertyAssertionAxiom;");
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
  org::semanticweb::owlapi::model::OWLDataPropertyAssertionAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataPropertyAssertionAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataPropertyAssertionAxiom* OWLDataFactory::getOWLDataPropertyAssertionAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2, org::semanticweb::owlapi::model::OWLLiteral* arg3, java::util::Set* arg4)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDataPropertyAssertionAxiom", "(Lorg/semanticweb/owlapi/model/OWLDataPropertyExpression;Lorg/semanticweb/owlapi/model/OWLIndividual;Lorg/semanticweb/owlapi/model/OWLLiteral;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLDataPropertyAssertionAxiom;");
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
  jobject jarg4;
  if (arg4!=NULL) {
    jarg4=arg4->getJavaObject();
  } else {
    jarg4=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3, jarg4);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDataPropertyAssertionAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataPropertyAssertionAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataPropertyAssertionAxiom* OWLDataFactory::getOWLDataPropertyAssertionAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2, int arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDataPropertyAssertionAxiom", "(Lorg/semanticweb/owlapi/model/OWLDataPropertyExpression;Lorg/semanticweb/owlapi/model/OWLIndividual;I)Lorg/semanticweb/owlapi/model/OWLDataPropertyAssertionAxiom;");
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
  jint jarg3 = (jint)arg3;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDataPropertyAssertionAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataPropertyAssertionAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataPropertyAssertionAxiom* OWLDataFactory::getOWLDataPropertyAssertionAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2, double arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDataPropertyAssertionAxiom", "(Lorg/semanticweb/owlapi/model/OWLDataPropertyExpression;Lorg/semanticweb/owlapi/model/OWLIndividual;D)Lorg/semanticweb/owlapi/model/OWLDataPropertyAssertionAxiom;");
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
  jdouble jarg3 = (jdouble)arg3;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDataPropertyAssertionAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataPropertyAssertionAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataPropertyAssertionAxiom* OWLDataFactory::getOWLDataPropertyAssertionAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2, float arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDataPropertyAssertionAxiom", "(Lorg/semanticweb/owlapi/model/OWLDataPropertyExpression;Lorg/semanticweb/owlapi/model/OWLIndividual;F)Lorg/semanticweb/owlapi/model/OWLDataPropertyAssertionAxiom;");
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
  jfloat jarg3 = (jfloat)arg3;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDataPropertyAssertionAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataPropertyAssertionAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataPropertyAssertionAxiom* OWLDataFactory::getOWLDataPropertyAssertionAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2, bool arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDataPropertyAssertionAxiom", "(Lorg/semanticweb/owlapi/model/OWLDataPropertyExpression;Lorg/semanticweb/owlapi/model/OWLIndividual;Z)Lorg/semanticweb/owlapi/model/OWLDataPropertyAssertionAxiom;");
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
  jboolean jarg3 = (jboolean)arg3;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDataPropertyAssertionAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataPropertyAssertionAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDataPropertyAssertionAxiom* OWLDataFactory::getOWLDataPropertyAssertionAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2, const char* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLDataPropertyAssertionAxiom", "(Lorg/semanticweb/owlapi/model/OWLDataPropertyExpression;Lorg/semanticweb/owlapi/model/OWLIndividual;Ljava/lang/String;)Lorg/semanticweb/owlapi/model/OWLDataPropertyAssertionAxiom;");
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
  jstring jarg3;
  if (arg3!=NULL) {
    jarg3 = javaEnv->NewStringUTF(arg3);
  } else {
    jarg3=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3);
  handleJavaException(wrapperIntern);
  if (jarg3!=NULL) {
    javaEnv->DeleteLocalRef(jarg3);
  }
  org::semanticweb::owlapi::model::OWLDataPropertyAssertionAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDataPropertyAssertionAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLNegativeDataPropertyAssertionAxiom* OWLDataFactory::getOWLNegativeDataPropertyAssertionAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2, org::semanticweb::owlapi::model::OWLLiteral* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLNegativeDataPropertyAssertionAxiom", "(Lorg/semanticweb/owlapi/model/OWLDataPropertyExpression;Lorg/semanticweb/owlapi/model/OWLIndividual;Lorg/semanticweb/owlapi/model/OWLLiteral;)Lorg/semanticweb/owlapi/model/OWLNegativeDataPropertyAssertionAxiom;");
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
  org::semanticweb::owlapi::model::OWLNegativeDataPropertyAssertionAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLNegativeDataPropertyAssertionAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLNegativeDataPropertyAssertionAxiom* OWLDataFactory::getOWLNegativeDataPropertyAssertionAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2, org::semanticweb::owlapi::model::OWLLiteral* arg3, java::util::Set* arg4)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLNegativeDataPropertyAssertionAxiom", "(Lorg/semanticweb/owlapi/model/OWLDataPropertyExpression;Lorg/semanticweb/owlapi/model/OWLIndividual;Lorg/semanticweb/owlapi/model/OWLLiteral;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLNegativeDataPropertyAssertionAxiom;");
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
  jobject jarg4;
  if (arg4!=NULL) {
    jarg4=arg4->getJavaObject();
  } else {
    jarg4=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3, jarg4);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLNegativeDataPropertyAssertionAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLNegativeDataPropertyAssertionAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnnotation* OWLDataFactory::getOWLAnnotation(org::semanticweb::owlapi::model::OWLAnnotationProperty* arg1, org::semanticweb::owlapi::model::OWLAnnotationValue* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLAnnotation", "(Lorg/semanticweb/owlapi/model/OWLAnnotationProperty;Lorg/semanticweb/owlapi/model/OWLAnnotationValue;)Lorg/semanticweb/owlapi/model/OWLAnnotation;");
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
  org::semanticweb::owlapi::model::OWLAnnotation* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAnnotation(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnnotation* OWLDataFactory::getOWLAnnotation(org::semanticweb::owlapi::model::OWLAnnotationProperty* arg1, org::semanticweb::owlapi::model::OWLAnnotationValue* arg2, java::util::Set* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLAnnotation", "(Lorg/semanticweb/owlapi/model/OWLAnnotationProperty;Lorg/semanticweb/owlapi/model/OWLAnnotationValue;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLAnnotation;");
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
  org::semanticweb::owlapi::model::OWLAnnotation* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAnnotation(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnnotationAssertionAxiom* OWLDataFactory::getOWLAnnotationAssertionAxiom(org::semanticweb::owlapi::model::OWLAnnotationProperty* arg1, org::semanticweb::owlapi::model::OWLAnnotationSubject* arg2, org::semanticweb::owlapi::model::OWLAnnotationValue* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLAnnotationAssertionAxiom", "(Lorg/semanticweb/owlapi/model/OWLAnnotationProperty;Lorg/semanticweb/owlapi/model/OWLAnnotationSubject;Lorg/semanticweb/owlapi/model/OWLAnnotationValue;)Lorg/semanticweb/owlapi/model/OWLAnnotationAssertionAxiom;");
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
  org::semanticweb::owlapi::model::OWLAnnotationAssertionAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAnnotationAssertionAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnnotationAssertionAxiom* OWLDataFactory::getOWLAnnotationAssertionAxiom(org::semanticweb::owlapi::model::OWLAnnotationSubject* arg1, org::semanticweb::owlapi::model::OWLAnnotation* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLAnnotationAssertionAxiom", "(Lorg/semanticweb/owlapi/model/OWLAnnotationSubject;Lorg/semanticweb/owlapi/model/OWLAnnotation;)Lorg/semanticweb/owlapi/model/OWLAnnotationAssertionAxiom;");
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
  org::semanticweb::owlapi::model::OWLAnnotationAssertionAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAnnotationAssertionAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnnotationAssertionAxiom* OWLDataFactory::getOWLAnnotationAssertionAxiom(org::semanticweb::owlapi::model::OWLAnnotationProperty* arg1, org::semanticweb::owlapi::model::OWLAnnotationSubject* arg2, org::semanticweb::owlapi::model::OWLAnnotationValue* arg3, java::util::Set* arg4)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLAnnotationAssertionAxiom", "(Lorg/semanticweb/owlapi/model/OWLAnnotationProperty;Lorg/semanticweb/owlapi/model/OWLAnnotationSubject;Lorg/semanticweb/owlapi/model/OWLAnnotationValue;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLAnnotationAssertionAxiom;");
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
  jobject jarg4;
  if (arg4!=NULL) {
    jarg4=arg4->getJavaObject();
  } else {
    jarg4=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3, jarg4);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLAnnotationAssertionAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAnnotationAssertionAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnnotationAssertionAxiom* OWLDataFactory::getOWLAnnotationAssertionAxiom(org::semanticweb::owlapi::model::OWLAnnotationSubject* arg1, org::semanticweb::owlapi::model::OWLAnnotation* arg2, java::util::Set* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLAnnotationAssertionAxiom", "(Lorg/semanticweb/owlapi/model/OWLAnnotationSubject;Lorg/semanticweb/owlapi/model/OWLAnnotation;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLAnnotationAssertionAxiom;");
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
  org::semanticweb::owlapi::model::OWLAnnotationAssertionAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAnnotationAssertionAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnnotationAssertionAxiom* OWLDataFactory::getDeprecatedOWLAnnotationAssertionAxiom(org::semanticweb::owlapi::model::IRI* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getDeprecatedOWLAnnotationAssertionAxiom", "(Lorg/semanticweb/owlapi/model/IRI;)Lorg/semanticweb/owlapi/model/OWLAnnotationAssertionAxiom;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLAnnotationAssertionAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAnnotationAssertionAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLImportsDeclaration* OWLDataFactory::getOWLImportsDeclaration(org::semanticweb::owlapi::model::IRI* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLImportsDeclaration", "(Lorg/semanticweb/owlapi/model/IRI;)Lorg/semanticweb/owlapi/model/OWLImportsDeclaration;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLImportsDeclaration* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLImportsDeclaration(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnnotationPropertyDomainAxiom* OWLDataFactory::getOWLAnnotationPropertyDomainAxiom(org::semanticweb::owlapi::model::OWLAnnotationProperty* arg1, org::semanticweb::owlapi::model::IRI* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLAnnotationPropertyDomainAxiom", "(Lorg/semanticweb/owlapi/model/OWLAnnotationProperty;Lorg/semanticweb/owlapi/model/IRI;)Lorg/semanticweb/owlapi/model/OWLAnnotationPropertyDomainAxiom;");
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
  org::semanticweb::owlapi::model::OWLAnnotationPropertyDomainAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAnnotationPropertyDomainAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnnotationPropertyDomainAxiom* OWLDataFactory::getOWLAnnotationPropertyDomainAxiom(org::semanticweb::owlapi::model::OWLAnnotationProperty* arg1, org::semanticweb::owlapi::model::IRI* arg2, java::util::Set* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLAnnotationPropertyDomainAxiom", "(Lorg/semanticweb/owlapi/model/OWLAnnotationProperty;Lorg/semanticweb/owlapi/model/IRI;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLAnnotationPropertyDomainAxiom;");
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
  org::semanticweb::owlapi::model::OWLAnnotationPropertyDomainAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAnnotationPropertyDomainAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnnotationPropertyRangeAxiom* OWLDataFactory::getOWLAnnotationPropertyRangeAxiom(org::semanticweb::owlapi::model::OWLAnnotationProperty* arg1, org::semanticweb::owlapi::model::IRI* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLAnnotationPropertyRangeAxiom", "(Lorg/semanticweb/owlapi/model/OWLAnnotationProperty;Lorg/semanticweb/owlapi/model/IRI;)Lorg/semanticweb/owlapi/model/OWLAnnotationPropertyRangeAxiom;");
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
  org::semanticweb::owlapi::model::OWLAnnotationPropertyRangeAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAnnotationPropertyRangeAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnnotationPropertyRangeAxiom* OWLDataFactory::getOWLAnnotationPropertyRangeAxiom(org::semanticweb::owlapi::model::OWLAnnotationProperty* arg1, org::semanticweb::owlapi::model::IRI* arg2, java::util::Set* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLAnnotationPropertyRangeAxiom", "(Lorg/semanticweb/owlapi/model/OWLAnnotationProperty;Lorg/semanticweb/owlapi/model/IRI;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLAnnotationPropertyRangeAxiom;");
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
  org::semanticweb::owlapi::model::OWLAnnotationPropertyRangeAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAnnotationPropertyRangeAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLSubAnnotationPropertyOfAxiom* OWLDataFactory::getOWLSubAnnotationPropertyOfAxiom(org::semanticweb::owlapi::model::OWLAnnotationProperty* arg1, org::semanticweb::owlapi::model::OWLAnnotationProperty* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLSubAnnotationPropertyOfAxiom", "(Lorg/semanticweb/owlapi/model/OWLAnnotationProperty;Lorg/semanticweb/owlapi/model/OWLAnnotationProperty;)Lorg/semanticweb/owlapi/model/OWLSubAnnotationPropertyOfAxiom;");
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
  org::semanticweb::owlapi::model::OWLSubAnnotationPropertyOfAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLSubAnnotationPropertyOfAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLSubAnnotationPropertyOfAxiom* OWLDataFactory::getOWLSubAnnotationPropertyOfAxiom(org::semanticweb::owlapi::model::OWLAnnotationProperty* arg1, org::semanticweb::owlapi::model::OWLAnnotationProperty* arg2, java::util::Set* arg3)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOWLSubAnnotationPropertyOfAxiom", "(Lorg/semanticweb/owlapi/model/OWLAnnotationProperty;Lorg/semanticweb/owlapi/model/OWLAnnotationProperty;Ljava/util/Set;)Lorg/semanticweb/owlapi/model/OWLSubAnnotationPropertyOfAxiom;");
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
  org::semanticweb::owlapi::model::OWLSubAnnotationPropertyOfAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLSubAnnotationPropertyOfAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

void OWLDataFactory::purge()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataFactory");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "purge", "()V");
  handleJavaException(wrapperIntern);
  javaEnv->CallVoidMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
}
}
