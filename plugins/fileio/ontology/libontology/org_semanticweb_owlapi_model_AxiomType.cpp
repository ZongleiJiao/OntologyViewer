#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_AxiomType.h>
#include <java_lang_Object.h>
#include <java_lang_String.h>
#include <java_util_Set.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

AxiomType::AxiomType(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

AxiomType::AxiomType(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void AxiomType::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/AxiomType");
  handleJavaException(wrapperIntern);
  jfieldID fid_index = javaEnv->GetFieldID(cls, "index", "I");
  handleJavaException(wrapperIntern);
  jint jresult_index = javaEnv->GetIntField(this->getJavaObject(), fid_index);
  handleJavaException(wrapperIntern);
  int result_index = (int)jresult_index;
  this->index = result_index;
  jfieldID fid_AXIOM_TYPES = javaEnv->GetStaticFieldID(cls, "AXIOM_TYPES", "Ljava/util/Set;");
  handleJavaException(wrapperIntern);
  jobject jresult_AXIOM_TYPES = javaEnv->GetStaticObjectField(cls, fid_AXIOM_TYPES);
  handleJavaException(wrapperIntern);
  java::util::Set* result_AXIOM_TYPES;
  if (jresult_AXIOM_TYPES!=NULL) {
    result_AXIOM_TYPES=new java::util::Set(jresult_AXIOM_TYPES);
    javaEnv->DeleteLocalRef(jresult_AXIOM_TYPES);
  } else {
    result_AXIOM_TYPES=NULL;
  }
  this->AXIOM_TYPES = result_AXIOM_TYPES;
  jfieldID fid_DECLARATION = javaEnv->GetStaticFieldID(cls, "DECLARATION", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_DECLARATION = javaEnv->GetStaticObjectField(cls, fid_DECLARATION);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_DECLARATION;
  if (jresult_DECLARATION!=NULL) {
    result_DECLARATION=new org::semanticweb::owlapi::model::AxiomType(jresult_DECLARATION);
    javaEnv->DeleteLocalRef(jresult_DECLARATION);
  } else {
    result_DECLARATION=NULL;
  }
  this->DECLARATION = result_DECLARATION;
  jfieldID fid_EQUIVALENT_CLASSES = javaEnv->GetStaticFieldID(cls, "EQUIVALENT_CLASSES", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_EQUIVALENT_CLASSES = javaEnv->GetStaticObjectField(cls, fid_EQUIVALENT_CLASSES);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_EQUIVALENT_CLASSES;
  if (jresult_EQUIVALENT_CLASSES!=NULL) {
    result_EQUIVALENT_CLASSES=new org::semanticweb::owlapi::model::AxiomType(jresult_EQUIVALENT_CLASSES);
    javaEnv->DeleteLocalRef(jresult_EQUIVALENT_CLASSES);
  } else {
    result_EQUIVALENT_CLASSES=NULL;
  }
  this->EQUIVALENT_CLASSES = result_EQUIVALENT_CLASSES;
  jfieldID fid_SUBCLASS_OF = javaEnv->GetStaticFieldID(cls, "SUBCLASS_OF", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_SUBCLASS_OF = javaEnv->GetStaticObjectField(cls, fid_SUBCLASS_OF);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_SUBCLASS_OF;
  if (jresult_SUBCLASS_OF!=NULL) {
    result_SUBCLASS_OF=new org::semanticweb::owlapi::model::AxiomType(jresult_SUBCLASS_OF);
    javaEnv->DeleteLocalRef(jresult_SUBCLASS_OF);
  } else {
    result_SUBCLASS_OF=NULL;
  }
  this->SUBCLASS_OF = result_SUBCLASS_OF;
  jfieldID fid_DISJOINT_CLASSES = javaEnv->GetStaticFieldID(cls, "DISJOINT_CLASSES", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_DISJOINT_CLASSES = javaEnv->GetStaticObjectField(cls, fid_DISJOINT_CLASSES);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_DISJOINT_CLASSES;
  if (jresult_DISJOINT_CLASSES!=NULL) {
    result_DISJOINT_CLASSES=new org::semanticweb::owlapi::model::AxiomType(jresult_DISJOINT_CLASSES);
    javaEnv->DeleteLocalRef(jresult_DISJOINT_CLASSES);
  } else {
    result_DISJOINT_CLASSES=NULL;
  }
  this->DISJOINT_CLASSES = result_DISJOINT_CLASSES;
  jfieldID fid_DISJOINT_UNION = javaEnv->GetStaticFieldID(cls, "DISJOINT_UNION", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_DISJOINT_UNION = javaEnv->GetStaticObjectField(cls, fid_DISJOINT_UNION);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_DISJOINT_UNION;
  if (jresult_DISJOINT_UNION!=NULL) {
    result_DISJOINT_UNION=new org::semanticweb::owlapi::model::AxiomType(jresult_DISJOINT_UNION);
    javaEnv->DeleteLocalRef(jresult_DISJOINT_UNION);
  } else {
    result_DISJOINT_UNION=NULL;
  }
  this->DISJOINT_UNION = result_DISJOINT_UNION;
  jfieldID fid_CLASS_ASSERTION = javaEnv->GetStaticFieldID(cls, "CLASS_ASSERTION", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_CLASS_ASSERTION = javaEnv->GetStaticObjectField(cls, fid_CLASS_ASSERTION);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_CLASS_ASSERTION;
  if (jresult_CLASS_ASSERTION!=NULL) {
    result_CLASS_ASSERTION=new org::semanticweb::owlapi::model::AxiomType(jresult_CLASS_ASSERTION);
    javaEnv->DeleteLocalRef(jresult_CLASS_ASSERTION);
  } else {
    result_CLASS_ASSERTION=NULL;
  }
  this->CLASS_ASSERTION = result_CLASS_ASSERTION;
  jfieldID fid_SAME_INDIVIDUAL = javaEnv->GetStaticFieldID(cls, "SAME_INDIVIDUAL", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_SAME_INDIVIDUAL = javaEnv->GetStaticObjectField(cls, fid_SAME_INDIVIDUAL);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_SAME_INDIVIDUAL;
  if (jresult_SAME_INDIVIDUAL!=NULL) {
    result_SAME_INDIVIDUAL=new org::semanticweb::owlapi::model::AxiomType(jresult_SAME_INDIVIDUAL);
    javaEnv->DeleteLocalRef(jresult_SAME_INDIVIDUAL);
  } else {
    result_SAME_INDIVIDUAL=NULL;
  }
  this->SAME_INDIVIDUAL = result_SAME_INDIVIDUAL;
  jfieldID fid_DIFFERENT_INDIVIDUALS = javaEnv->GetStaticFieldID(cls, "DIFFERENT_INDIVIDUALS", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_DIFFERENT_INDIVIDUALS = javaEnv->GetStaticObjectField(cls, fid_DIFFERENT_INDIVIDUALS);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_DIFFERENT_INDIVIDUALS;
  if (jresult_DIFFERENT_INDIVIDUALS!=NULL) {
    result_DIFFERENT_INDIVIDUALS=new org::semanticweb::owlapi::model::AxiomType(jresult_DIFFERENT_INDIVIDUALS);
    javaEnv->DeleteLocalRef(jresult_DIFFERENT_INDIVIDUALS);
  } else {
    result_DIFFERENT_INDIVIDUALS=NULL;
  }
  this->DIFFERENT_INDIVIDUALS = result_DIFFERENT_INDIVIDUALS;
  jfieldID fid_OBJECT_PROPERTY_ASSERTION = javaEnv->GetStaticFieldID(cls, "OBJECT_PROPERTY_ASSERTION", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_OBJECT_PROPERTY_ASSERTION = javaEnv->GetStaticObjectField(cls, fid_OBJECT_PROPERTY_ASSERTION);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_OBJECT_PROPERTY_ASSERTION;
  if (jresult_OBJECT_PROPERTY_ASSERTION!=NULL) {
    result_OBJECT_PROPERTY_ASSERTION=new org::semanticweb::owlapi::model::AxiomType(jresult_OBJECT_PROPERTY_ASSERTION);
    javaEnv->DeleteLocalRef(jresult_OBJECT_PROPERTY_ASSERTION);
  } else {
    result_OBJECT_PROPERTY_ASSERTION=NULL;
  }
  this->OBJECT_PROPERTY_ASSERTION = result_OBJECT_PROPERTY_ASSERTION;
  jfieldID fid_NEGATIVE_OBJECT_PROPERTY_ASSERTION = javaEnv->GetStaticFieldID(cls, "NEGATIVE_OBJECT_PROPERTY_ASSERTION", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_NEGATIVE_OBJECT_PROPERTY_ASSERTION = javaEnv->GetStaticObjectField(cls, fid_NEGATIVE_OBJECT_PROPERTY_ASSERTION);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_NEGATIVE_OBJECT_PROPERTY_ASSERTION;
  if (jresult_NEGATIVE_OBJECT_PROPERTY_ASSERTION!=NULL) {
    result_NEGATIVE_OBJECT_PROPERTY_ASSERTION=new org::semanticweb::owlapi::model::AxiomType(jresult_NEGATIVE_OBJECT_PROPERTY_ASSERTION);
    javaEnv->DeleteLocalRef(jresult_NEGATIVE_OBJECT_PROPERTY_ASSERTION);
  } else {
    result_NEGATIVE_OBJECT_PROPERTY_ASSERTION=NULL;
  }
  this->NEGATIVE_OBJECT_PROPERTY_ASSERTION = result_NEGATIVE_OBJECT_PROPERTY_ASSERTION;
  jfieldID fid_DATA_PROPERTY_ASSERTION = javaEnv->GetStaticFieldID(cls, "DATA_PROPERTY_ASSERTION", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_DATA_PROPERTY_ASSERTION = javaEnv->GetStaticObjectField(cls, fid_DATA_PROPERTY_ASSERTION);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_DATA_PROPERTY_ASSERTION;
  if (jresult_DATA_PROPERTY_ASSERTION!=NULL) {
    result_DATA_PROPERTY_ASSERTION=new org::semanticweb::owlapi::model::AxiomType(jresult_DATA_PROPERTY_ASSERTION);
    javaEnv->DeleteLocalRef(jresult_DATA_PROPERTY_ASSERTION);
  } else {
    result_DATA_PROPERTY_ASSERTION=NULL;
  }
  this->DATA_PROPERTY_ASSERTION = result_DATA_PROPERTY_ASSERTION;
  jfieldID fid_NEGATIVE_DATA_PROPERTY_ASSERTION = javaEnv->GetStaticFieldID(cls, "NEGATIVE_DATA_PROPERTY_ASSERTION", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_NEGATIVE_DATA_PROPERTY_ASSERTION = javaEnv->GetStaticObjectField(cls, fid_NEGATIVE_DATA_PROPERTY_ASSERTION);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_NEGATIVE_DATA_PROPERTY_ASSERTION;
  if (jresult_NEGATIVE_DATA_PROPERTY_ASSERTION!=NULL) {
    result_NEGATIVE_DATA_PROPERTY_ASSERTION=new org::semanticweb::owlapi::model::AxiomType(jresult_NEGATIVE_DATA_PROPERTY_ASSERTION);
    javaEnv->DeleteLocalRef(jresult_NEGATIVE_DATA_PROPERTY_ASSERTION);
  } else {
    result_NEGATIVE_DATA_PROPERTY_ASSERTION=NULL;
  }
  this->NEGATIVE_DATA_PROPERTY_ASSERTION = result_NEGATIVE_DATA_PROPERTY_ASSERTION;
  jfieldID fid_EQUIVALENT_OBJECT_PROPERTIES = javaEnv->GetStaticFieldID(cls, "EQUIVALENT_OBJECT_PROPERTIES", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_EQUIVALENT_OBJECT_PROPERTIES = javaEnv->GetStaticObjectField(cls, fid_EQUIVALENT_OBJECT_PROPERTIES);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_EQUIVALENT_OBJECT_PROPERTIES;
  if (jresult_EQUIVALENT_OBJECT_PROPERTIES!=NULL) {
    result_EQUIVALENT_OBJECT_PROPERTIES=new org::semanticweb::owlapi::model::AxiomType(jresult_EQUIVALENT_OBJECT_PROPERTIES);
    javaEnv->DeleteLocalRef(jresult_EQUIVALENT_OBJECT_PROPERTIES);
  } else {
    result_EQUIVALENT_OBJECT_PROPERTIES=NULL;
  }
  this->EQUIVALENT_OBJECT_PROPERTIES = result_EQUIVALENT_OBJECT_PROPERTIES;
  jfieldID fid_SUB_OBJECT_PROPERTY = javaEnv->GetStaticFieldID(cls, "SUB_OBJECT_PROPERTY", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_SUB_OBJECT_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_SUB_OBJECT_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_SUB_OBJECT_PROPERTY;
  if (jresult_SUB_OBJECT_PROPERTY!=NULL) {
    result_SUB_OBJECT_PROPERTY=new org::semanticweb::owlapi::model::AxiomType(jresult_SUB_OBJECT_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_SUB_OBJECT_PROPERTY);
  } else {
    result_SUB_OBJECT_PROPERTY=NULL;
  }
  this->SUB_OBJECT_PROPERTY = result_SUB_OBJECT_PROPERTY;
  jfieldID fid_INVERSE_OBJECT_PROPERTIES = javaEnv->GetStaticFieldID(cls, "INVERSE_OBJECT_PROPERTIES", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_INVERSE_OBJECT_PROPERTIES = javaEnv->GetStaticObjectField(cls, fid_INVERSE_OBJECT_PROPERTIES);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_INVERSE_OBJECT_PROPERTIES;
  if (jresult_INVERSE_OBJECT_PROPERTIES!=NULL) {
    result_INVERSE_OBJECT_PROPERTIES=new org::semanticweb::owlapi::model::AxiomType(jresult_INVERSE_OBJECT_PROPERTIES);
    javaEnv->DeleteLocalRef(jresult_INVERSE_OBJECT_PROPERTIES);
  } else {
    result_INVERSE_OBJECT_PROPERTIES=NULL;
  }
  this->INVERSE_OBJECT_PROPERTIES = result_INVERSE_OBJECT_PROPERTIES;
  jfieldID fid_FUNCTIONAL_OBJECT_PROPERTY = javaEnv->GetStaticFieldID(cls, "FUNCTIONAL_OBJECT_PROPERTY", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_FUNCTIONAL_OBJECT_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_FUNCTIONAL_OBJECT_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_FUNCTIONAL_OBJECT_PROPERTY;
  if (jresult_FUNCTIONAL_OBJECT_PROPERTY!=NULL) {
    result_FUNCTIONAL_OBJECT_PROPERTY=new org::semanticweb::owlapi::model::AxiomType(jresult_FUNCTIONAL_OBJECT_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_FUNCTIONAL_OBJECT_PROPERTY);
  } else {
    result_FUNCTIONAL_OBJECT_PROPERTY=NULL;
  }
  this->FUNCTIONAL_OBJECT_PROPERTY = result_FUNCTIONAL_OBJECT_PROPERTY;
  jfieldID fid_INVERSE_FUNCTIONAL_OBJECT_PROPERTY = javaEnv->GetStaticFieldID(cls, "INVERSE_FUNCTIONAL_OBJECT_PROPERTY", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_INVERSE_FUNCTIONAL_OBJECT_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_INVERSE_FUNCTIONAL_OBJECT_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_INVERSE_FUNCTIONAL_OBJECT_PROPERTY;
  if (jresult_INVERSE_FUNCTIONAL_OBJECT_PROPERTY!=NULL) {
    result_INVERSE_FUNCTIONAL_OBJECT_PROPERTY=new org::semanticweb::owlapi::model::AxiomType(jresult_INVERSE_FUNCTIONAL_OBJECT_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_INVERSE_FUNCTIONAL_OBJECT_PROPERTY);
  } else {
    result_INVERSE_FUNCTIONAL_OBJECT_PROPERTY=NULL;
  }
  this->INVERSE_FUNCTIONAL_OBJECT_PROPERTY = result_INVERSE_FUNCTIONAL_OBJECT_PROPERTY;
  jfieldID fid_SYMMETRIC_OBJECT_PROPERTY = javaEnv->GetStaticFieldID(cls, "SYMMETRIC_OBJECT_PROPERTY", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_SYMMETRIC_OBJECT_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_SYMMETRIC_OBJECT_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_SYMMETRIC_OBJECT_PROPERTY;
  if (jresult_SYMMETRIC_OBJECT_PROPERTY!=NULL) {
    result_SYMMETRIC_OBJECT_PROPERTY=new org::semanticweb::owlapi::model::AxiomType(jresult_SYMMETRIC_OBJECT_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_SYMMETRIC_OBJECT_PROPERTY);
  } else {
    result_SYMMETRIC_OBJECT_PROPERTY=NULL;
  }
  this->SYMMETRIC_OBJECT_PROPERTY = result_SYMMETRIC_OBJECT_PROPERTY;
  jfieldID fid_ASYMMETRIC_OBJECT_PROPERTY = javaEnv->GetStaticFieldID(cls, "ASYMMETRIC_OBJECT_PROPERTY", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_ASYMMETRIC_OBJECT_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_ASYMMETRIC_OBJECT_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_ASYMMETRIC_OBJECT_PROPERTY;
  if (jresult_ASYMMETRIC_OBJECT_PROPERTY!=NULL) {
    result_ASYMMETRIC_OBJECT_PROPERTY=new org::semanticweb::owlapi::model::AxiomType(jresult_ASYMMETRIC_OBJECT_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_ASYMMETRIC_OBJECT_PROPERTY);
  } else {
    result_ASYMMETRIC_OBJECT_PROPERTY=NULL;
  }
  this->ASYMMETRIC_OBJECT_PROPERTY = result_ASYMMETRIC_OBJECT_PROPERTY;
  jfieldID fid_TRANSITIVE_OBJECT_PROPERTY = javaEnv->GetStaticFieldID(cls, "TRANSITIVE_OBJECT_PROPERTY", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_TRANSITIVE_OBJECT_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_TRANSITIVE_OBJECT_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_TRANSITIVE_OBJECT_PROPERTY;
  if (jresult_TRANSITIVE_OBJECT_PROPERTY!=NULL) {
    result_TRANSITIVE_OBJECT_PROPERTY=new org::semanticweb::owlapi::model::AxiomType(jresult_TRANSITIVE_OBJECT_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_TRANSITIVE_OBJECT_PROPERTY);
  } else {
    result_TRANSITIVE_OBJECT_PROPERTY=NULL;
  }
  this->TRANSITIVE_OBJECT_PROPERTY = result_TRANSITIVE_OBJECT_PROPERTY;
  jfieldID fid_REFLEXIVE_OBJECT_PROPERTY = javaEnv->GetStaticFieldID(cls, "REFLEXIVE_OBJECT_PROPERTY", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_REFLEXIVE_OBJECT_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_REFLEXIVE_OBJECT_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_REFLEXIVE_OBJECT_PROPERTY;
  if (jresult_REFLEXIVE_OBJECT_PROPERTY!=NULL) {
    result_REFLEXIVE_OBJECT_PROPERTY=new org::semanticweb::owlapi::model::AxiomType(jresult_REFLEXIVE_OBJECT_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_REFLEXIVE_OBJECT_PROPERTY);
  } else {
    result_REFLEXIVE_OBJECT_PROPERTY=NULL;
  }
  this->REFLEXIVE_OBJECT_PROPERTY = result_REFLEXIVE_OBJECT_PROPERTY;
  jfieldID fid_IRREFLEXIVE_OBJECT_PROPERTY = javaEnv->GetStaticFieldID(cls, "IRREFLEXIVE_OBJECT_PROPERTY", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_IRREFLEXIVE_OBJECT_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_IRREFLEXIVE_OBJECT_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_IRREFLEXIVE_OBJECT_PROPERTY;
  if (jresult_IRREFLEXIVE_OBJECT_PROPERTY!=NULL) {
    result_IRREFLEXIVE_OBJECT_PROPERTY=new org::semanticweb::owlapi::model::AxiomType(jresult_IRREFLEXIVE_OBJECT_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_IRREFLEXIVE_OBJECT_PROPERTY);
  } else {
    result_IRREFLEXIVE_OBJECT_PROPERTY=NULL;
  }
  this->IRREFLEXIVE_OBJECT_PROPERTY = result_IRREFLEXIVE_OBJECT_PROPERTY;
  jfieldID fid_OBJECT_PROPERTY_DOMAIN = javaEnv->GetStaticFieldID(cls, "OBJECT_PROPERTY_DOMAIN", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_OBJECT_PROPERTY_DOMAIN = javaEnv->GetStaticObjectField(cls, fid_OBJECT_PROPERTY_DOMAIN);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_OBJECT_PROPERTY_DOMAIN;
  if (jresult_OBJECT_PROPERTY_DOMAIN!=NULL) {
    result_OBJECT_PROPERTY_DOMAIN=new org::semanticweb::owlapi::model::AxiomType(jresult_OBJECT_PROPERTY_DOMAIN);
    javaEnv->DeleteLocalRef(jresult_OBJECT_PROPERTY_DOMAIN);
  } else {
    result_OBJECT_PROPERTY_DOMAIN=NULL;
  }
  this->OBJECT_PROPERTY_DOMAIN = result_OBJECT_PROPERTY_DOMAIN;
  jfieldID fid_OBJECT_PROPERTY_RANGE = javaEnv->GetStaticFieldID(cls, "OBJECT_PROPERTY_RANGE", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_OBJECT_PROPERTY_RANGE = javaEnv->GetStaticObjectField(cls, fid_OBJECT_PROPERTY_RANGE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_OBJECT_PROPERTY_RANGE;
  if (jresult_OBJECT_PROPERTY_RANGE!=NULL) {
    result_OBJECT_PROPERTY_RANGE=new org::semanticweb::owlapi::model::AxiomType(jresult_OBJECT_PROPERTY_RANGE);
    javaEnv->DeleteLocalRef(jresult_OBJECT_PROPERTY_RANGE);
  } else {
    result_OBJECT_PROPERTY_RANGE=NULL;
  }
  this->OBJECT_PROPERTY_RANGE = result_OBJECT_PROPERTY_RANGE;
  jfieldID fid_DISJOINT_OBJECT_PROPERTIES = javaEnv->GetStaticFieldID(cls, "DISJOINT_OBJECT_PROPERTIES", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_DISJOINT_OBJECT_PROPERTIES = javaEnv->GetStaticObjectField(cls, fid_DISJOINT_OBJECT_PROPERTIES);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_DISJOINT_OBJECT_PROPERTIES;
  if (jresult_DISJOINT_OBJECT_PROPERTIES!=NULL) {
    result_DISJOINT_OBJECT_PROPERTIES=new org::semanticweb::owlapi::model::AxiomType(jresult_DISJOINT_OBJECT_PROPERTIES);
    javaEnv->DeleteLocalRef(jresult_DISJOINT_OBJECT_PROPERTIES);
  } else {
    result_DISJOINT_OBJECT_PROPERTIES=NULL;
  }
  this->DISJOINT_OBJECT_PROPERTIES = result_DISJOINT_OBJECT_PROPERTIES;
  jfieldID fid_SUB_PROPERTY_CHAIN_OF = javaEnv->GetStaticFieldID(cls, "SUB_PROPERTY_CHAIN_OF", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_SUB_PROPERTY_CHAIN_OF = javaEnv->GetStaticObjectField(cls, fid_SUB_PROPERTY_CHAIN_OF);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_SUB_PROPERTY_CHAIN_OF;
  if (jresult_SUB_PROPERTY_CHAIN_OF!=NULL) {
    result_SUB_PROPERTY_CHAIN_OF=new org::semanticweb::owlapi::model::AxiomType(jresult_SUB_PROPERTY_CHAIN_OF);
    javaEnv->DeleteLocalRef(jresult_SUB_PROPERTY_CHAIN_OF);
  } else {
    result_SUB_PROPERTY_CHAIN_OF=NULL;
  }
  this->SUB_PROPERTY_CHAIN_OF = result_SUB_PROPERTY_CHAIN_OF;
  jfieldID fid_EQUIVALENT_DATA_PROPERTIES = javaEnv->GetStaticFieldID(cls, "EQUIVALENT_DATA_PROPERTIES", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_EQUIVALENT_DATA_PROPERTIES = javaEnv->GetStaticObjectField(cls, fid_EQUIVALENT_DATA_PROPERTIES);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_EQUIVALENT_DATA_PROPERTIES;
  if (jresult_EQUIVALENT_DATA_PROPERTIES!=NULL) {
    result_EQUIVALENT_DATA_PROPERTIES=new org::semanticweb::owlapi::model::AxiomType(jresult_EQUIVALENT_DATA_PROPERTIES);
    javaEnv->DeleteLocalRef(jresult_EQUIVALENT_DATA_PROPERTIES);
  } else {
    result_EQUIVALENT_DATA_PROPERTIES=NULL;
  }
  this->EQUIVALENT_DATA_PROPERTIES = result_EQUIVALENT_DATA_PROPERTIES;
  jfieldID fid_SUB_DATA_PROPERTY = javaEnv->GetStaticFieldID(cls, "SUB_DATA_PROPERTY", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_SUB_DATA_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_SUB_DATA_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_SUB_DATA_PROPERTY;
  if (jresult_SUB_DATA_PROPERTY!=NULL) {
    result_SUB_DATA_PROPERTY=new org::semanticweb::owlapi::model::AxiomType(jresult_SUB_DATA_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_SUB_DATA_PROPERTY);
  } else {
    result_SUB_DATA_PROPERTY=NULL;
  }
  this->SUB_DATA_PROPERTY = result_SUB_DATA_PROPERTY;
  jfieldID fid_FUNCTIONAL_DATA_PROPERTY = javaEnv->GetStaticFieldID(cls, "FUNCTIONAL_DATA_PROPERTY", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_FUNCTIONAL_DATA_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_FUNCTIONAL_DATA_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_FUNCTIONAL_DATA_PROPERTY;
  if (jresult_FUNCTIONAL_DATA_PROPERTY!=NULL) {
    result_FUNCTIONAL_DATA_PROPERTY=new org::semanticweb::owlapi::model::AxiomType(jresult_FUNCTIONAL_DATA_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_FUNCTIONAL_DATA_PROPERTY);
  } else {
    result_FUNCTIONAL_DATA_PROPERTY=NULL;
  }
  this->FUNCTIONAL_DATA_PROPERTY = result_FUNCTIONAL_DATA_PROPERTY;
  jfieldID fid_DATA_PROPERTY_DOMAIN = javaEnv->GetStaticFieldID(cls, "DATA_PROPERTY_DOMAIN", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_DATA_PROPERTY_DOMAIN = javaEnv->GetStaticObjectField(cls, fid_DATA_PROPERTY_DOMAIN);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_DATA_PROPERTY_DOMAIN;
  if (jresult_DATA_PROPERTY_DOMAIN!=NULL) {
    result_DATA_PROPERTY_DOMAIN=new org::semanticweb::owlapi::model::AxiomType(jresult_DATA_PROPERTY_DOMAIN);
    javaEnv->DeleteLocalRef(jresult_DATA_PROPERTY_DOMAIN);
  } else {
    result_DATA_PROPERTY_DOMAIN=NULL;
  }
  this->DATA_PROPERTY_DOMAIN = result_DATA_PROPERTY_DOMAIN;
  jfieldID fid_DATA_PROPERTY_RANGE = javaEnv->GetStaticFieldID(cls, "DATA_PROPERTY_RANGE", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_DATA_PROPERTY_RANGE = javaEnv->GetStaticObjectField(cls, fid_DATA_PROPERTY_RANGE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_DATA_PROPERTY_RANGE;
  if (jresult_DATA_PROPERTY_RANGE!=NULL) {
    result_DATA_PROPERTY_RANGE=new org::semanticweb::owlapi::model::AxiomType(jresult_DATA_PROPERTY_RANGE);
    javaEnv->DeleteLocalRef(jresult_DATA_PROPERTY_RANGE);
  } else {
    result_DATA_PROPERTY_RANGE=NULL;
  }
  this->DATA_PROPERTY_RANGE = result_DATA_PROPERTY_RANGE;
  jfieldID fid_DISJOINT_DATA_PROPERTIES = javaEnv->GetStaticFieldID(cls, "DISJOINT_DATA_PROPERTIES", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_DISJOINT_DATA_PROPERTIES = javaEnv->GetStaticObjectField(cls, fid_DISJOINT_DATA_PROPERTIES);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_DISJOINT_DATA_PROPERTIES;
  if (jresult_DISJOINT_DATA_PROPERTIES!=NULL) {
    result_DISJOINT_DATA_PROPERTIES=new org::semanticweb::owlapi::model::AxiomType(jresult_DISJOINT_DATA_PROPERTIES);
    javaEnv->DeleteLocalRef(jresult_DISJOINT_DATA_PROPERTIES);
  } else {
    result_DISJOINT_DATA_PROPERTIES=NULL;
  }
  this->DISJOINT_DATA_PROPERTIES = result_DISJOINT_DATA_PROPERTIES;
  jfieldID fid_HAS_KEY = javaEnv->GetStaticFieldID(cls, "HAS_KEY", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_HAS_KEY = javaEnv->GetStaticObjectField(cls, fid_HAS_KEY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_HAS_KEY;
  if (jresult_HAS_KEY!=NULL) {
    result_HAS_KEY=new org::semanticweb::owlapi::model::AxiomType(jresult_HAS_KEY);
    javaEnv->DeleteLocalRef(jresult_HAS_KEY);
  } else {
    result_HAS_KEY=NULL;
  }
  this->HAS_KEY = result_HAS_KEY;
  jfieldID fid_SWRL_RULE = javaEnv->GetStaticFieldID(cls, "SWRL_RULE", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_SWRL_RULE = javaEnv->GetStaticObjectField(cls, fid_SWRL_RULE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_SWRL_RULE;
  if (jresult_SWRL_RULE!=NULL) {
    result_SWRL_RULE=new org::semanticweb::owlapi::model::AxiomType(jresult_SWRL_RULE);
    javaEnv->DeleteLocalRef(jresult_SWRL_RULE);
  } else {
    result_SWRL_RULE=NULL;
  }
  this->SWRL_RULE = result_SWRL_RULE;
  jfieldID fid_ANNOTATION_ASSERTION = javaEnv->GetStaticFieldID(cls, "ANNOTATION_ASSERTION", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_ANNOTATION_ASSERTION = javaEnv->GetStaticObjectField(cls, fid_ANNOTATION_ASSERTION);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_ANNOTATION_ASSERTION;
  if (jresult_ANNOTATION_ASSERTION!=NULL) {
    result_ANNOTATION_ASSERTION=new org::semanticweb::owlapi::model::AxiomType(jresult_ANNOTATION_ASSERTION);
    javaEnv->DeleteLocalRef(jresult_ANNOTATION_ASSERTION);
  } else {
    result_ANNOTATION_ASSERTION=NULL;
  }
  this->ANNOTATION_ASSERTION = result_ANNOTATION_ASSERTION;
  jfieldID fid_SUB_ANNOTATION_PROPERTY_OF = javaEnv->GetStaticFieldID(cls, "SUB_ANNOTATION_PROPERTY_OF", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_SUB_ANNOTATION_PROPERTY_OF = javaEnv->GetStaticObjectField(cls, fid_SUB_ANNOTATION_PROPERTY_OF);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_SUB_ANNOTATION_PROPERTY_OF;
  if (jresult_SUB_ANNOTATION_PROPERTY_OF!=NULL) {
    result_SUB_ANNOTATION_PROPERTY_OF=new org::semanticweb::owlapi::model::AxiomType(jresult_SUB_ANNOTATION_PROPERTY_OF);
    javaEnv->DeleteLocalRef(jresult_SUB_ANNOTATION_PROPERTY_OF);
  } else {
    result_SUB_ANNOTATION_PROPERTY_OF=NULL;
  }
  this->SUB_ANNOTATION_PROPERTY_OF = result_SUB_ANNOTATION_PROPERTY_OF;
  jfieldID fid_ANNOTATION_PROPERTY_RANGE = javaEnv->GetStaticFieldID(cls, "ANNOTATION_PROPERTY_RANGE", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_ANNOTATION_PROPERTY_RANGE = javaEnv->GetStaticObjectField(cls, fid_ANNOTATION_PROPERTY_RANGE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_ANNOTATION_PROPERTY_RANGE;
  if (jresult_ANNOTATION_PROPERTY_RANGE!=NULL) {
    result_ANNOTATION_PROPERTY_RANGE=new org::semanticweb::owlapi::model::AxiomType(jresult_ANNOTATION_PROPERTY_RANGE);
    javaEnv->DeleteLocalRef(jresult_ANNOTATION_PROPERTY_RANGE);
  } else {
    result_ANNOTATION_PROPERTY_RANGE=NULL;
  }
  this->ANNOTATION_PROPERTY_RANGE = result_ANNOTATION_PROPERTY_RANGE;
  jfieldID fid_ANNOTATION_PROPERTY_DOMAIN = javaEnv->GetStaticFieldID(cls, "ANNOTATION_PROPERTY_DOMAIN", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_ANNOTATION_PROPERTY_DOMAIN = javaEnv->GetStaticObjectField(cls, fid_ANNOTATION_PROPERTY_DOMAIN);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_ANNOTATION_PROPERTY_DOMAIN;
  if (jresult_ANNOTATION_PROPERTY_DOMAIN!=NULL) {
    result_ANNOTATION_PROPERTY_DOMAIN=new org::semanticweb::owlapi::model::AxiomType(jresult_ANNOTATION_PROPERTY_DOMAIN);
    javaEnv->DeleteLocalRef(jresult_ANNOTATION_PROPERTY_DOMAIN);
  } else {
    result_ANNOTATION_PROPERTY_DOMAIN=NULL;
  }
  this->ANNOTATION_PROPERTY_DOMAIN = result_ANNOTATION_PROPERTY_DOMAIN;
  jfieldID fid_DATATYPE_DEFINITION = javaEnv->GetStaticFieldID(cls, "DATATYPE_DEFINITION", "Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jobject jresult_DATATYPE_DEFINITION = javaEnv->GetStaticObjectField(cls, fid_DATATYPE_DEFINITION);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::AxiomType* result_DATATYPE_DEFINITION;
  if (jresult_DATATYPE_DEFINITION!=NULL) {
    result_DATATYPE_DEFINITION=new org::semanticweb::owlapi::model::AxiomType(jresult_DATATYPE_DEFINITION);
    javaEnv->DeleteLocalRef(jresult_DATATYPE_DEFINITION);
  } else {
    result_DATATYPE_DEFINITION=NULL;
  }
  this->DATATYPE_DEFINITION = result_DATATYPE_DEFINITION;
  jfieldID fid_TBoxAxiomTypes = javaEnv->GetStaticFieldID(cls, "TBoxAxiomTypes", "Ljava/util/Set;");
  handleJavaException(wrapperIntern);
  jobject jresult_TBoxAxiomTypes = javaEnv->GetStaticObjectField(cls, fid_TBoxAxiomTypes);
  handleJavaException(wrapperIntern);
  java::util::Set* result_TBoxAxiomTypes;
  if (jresult_TBoxAxiomTypes!=NULL) {
    result_TBoxAxiomTypes=new java::util::Set(jresult_TBoxAxiomTypes);
    javaEnv->DeleteLocalRef(jresult_TBoxAxiomTypes);
  } else {
    result_TBoxAxiomTypes=NULL;
  }
  this->TBoxAxiomTypes = result_TBoxAxiomTypes;
  jfieldID fid_ABoxAxiomTypes = javaEnv->GetStaticFieldID(cls, "ABoxAxiomTypes", "Ljava/util/Set;");
  handleJavaException(wrapperIntern);
  jobject jresult_ABoxAxiomTypes = javaEnv->GetStaticObjectField(cls, fid_ABoxAxiomTypes);
  handleJavaException(wrapperIntern);
  java::util::Set* result_ABoxAxiomTypes;
  if (jresult_ABoxAxiomTypes!=NULL) {
    result_ABoxAxiomTypes=new java::util::Set(jresult_ABoxAxiomTypes);
    javaEnv->DeleteLocalRef(jresult_ABoxAxiomTypes);
  } else {
    result_ABoxAxiomTypes=NULL;
  }
  this->ABoxAxiomTypes = result_ABoxAxiomTypes;
  jfieldID fid_RBoxAxiomTypes = javaEnv->GetStaticFieldID(cls, "RBoxAxiomTypes", "Ljava/util/Set;");
  handleJavaException(wrapperIntern);
  jobject jresult_RBoxAxiomTypes = javaEnv->GetStaticObjectField(cls, fid_RBoxAxiomTypes);
  handleJavaException(wrapperIntern);
  java::util::Set* result_RBoxAxiomTypes;
  if (jresult_RBoxAxiomTypes!=NULL) {
    result_RBoxAxiomTypes=new java::util::Set(jresult_RBoxAxiomTypes);
    javaEnv->DeleteLocalRef(jresult_RBoxAxiomTypes);
  } else {
    result_RBoxAxiomTypes=NULL;
  }
  this->RBoxAxiomTypes = result_RBoxAxiomTypes;
}

void AxiomType::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/AxiomType");
  handleJavaException(wrapperIntern);
}

const char* AxiomType::toString()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/AxiomType");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "toString", "()Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  char* result;
  if (jresult!=NULL) {
    const char*  jresult_bytes = javaEnv->GetStringUTFChars((jstring)jresult,NULL);
    handleJavaException(wrapperIntern);
    jsize        jresult_size = javaEnv->GetStringUTFLength((jstring)jresult);
    handleJavaException(wrapperIntern);
                 result = new char[jresult_size+1];
    for (int i=0;i<jresult_size;i++) {
      result[i] = jresult_bytes[i];
    }
    result[jresult_size]=0;
    javaEnv->ReleaseStringUTFChars((jstring)jresult, jresult_bytes);
    handleJavaException(wrapperIntern);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

const char* AxiomType::getName()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/AxiomType");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getName", "()Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  char* result;
  if (jresult!=NULL) {
    const char*  jresult_bytes = javaEnv->GetStringUTFChars((jstring)jresult,NULL);
    handleJavaException(wrapperIntern);
    jsize        jresult_size = javaEnv->GetStringUTFLength((jstring)jresult);
    handleJavaException(wrapperIntern);
                 result = new char[jresult_size+1];
    for (int i=0;i<jresult_size;i++) {
      result[i] = jresult_bytes[i];
    }
    result[jresult_size]=0;
    javaEnv->ReleaseStringUTFChars((jstring)jresult, jresult_bytes);
    handleJavaException(wrapperIntern);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int AxiomType::getIndex()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/AxiomType");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getIndex", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::AxiomType* AxiomType::getAxiomType(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/AxiomType");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "getAxiomType", "(Ljava/lang/String;)Lorg/semanticweb/owlapi/model/AxiomType;");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid, jarg1);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  org::semanticweb::owlapi::model::AxiomType* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::AxiomType(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool AxiomType::isLogical()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/AxiomType");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isLogical", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool AxiomType::isOWL2Axiom()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/AxiomType");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isOWL2Axiom", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool AxiomType::isNonSyntacticOWL2Axiom()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/AxiomType");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isNonSyntacticOWL2Axiom", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::util::Set* AxiomType::getAxiomsWithoutTypes(java::util::Set* arg1, JavaObjectArray* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/AxiomType");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "getAxiomsWithoutTypes", "(Ljava/util/Set;[Lorg/semanticweb/owlapi/model/AxiomType;)Ljava/util/Set;");
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
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid, jarg1, jarg2);
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

java::util::Set* AxiomType::getAxiomsOfTypes(java::util::Set* arg1, JavaObjectArray* arg2)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/AxiomType");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "getAxiomsOfTypes", "(Ljava/util/Set;[Lorg/semanticweb/owlapi/model/AxiomType;)Ljava/util/Set;");
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
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid, jarg1, jarg2);
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

bool AxiomType::isAxiomType(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/AxiomType");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isAxiomType", "(Ljava/lang/String;)Z");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
}
}
