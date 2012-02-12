#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_vocab_OWLRDFVocabulary.h>
#include <java_lang_Enum.h>
#include <java_lang_String.h>
#include <org_semanticweb_owlapi_model_IRI.h>
#include <java_net_URI.h>
#include <org_semanticweb_owlapi_vocab_Namespaces.h>
#include <java_util_Set.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace vocab {

OWLRDFVocabulary::OWLRDFVocabulary(JavaMarker* dummy)
  : java::lang::Enum(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLRDFVocabulary::OWLRDFVocabulary(jobject obj)
  : java::lang::Enum(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLRDFVocabulary::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWLRDFVocabulary");
  handleJavaException(wrapperIntern);
  jfieldID fid_OWL_THING = javaEnv->GetStaticFieldID(cls, "OWL_THING", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_THING = javaEnv->GetStaticObjectField(cls, fid_OWL_THING);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_THING;
  if (jresult_OWL_THING!=NULL) {
    result_OWL_THING=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_THING);
    javaEnv->DeleteLocalRef(jresult_OWL_THING);
  } else {
    result_OWL_THING=NULL;
  }
  this->OWL_THING = result_OWL_THING;
  jfieldID fid_OWL_NOTHING = javaEnv->GetStaticFieldID(cls, "OWL_NOTHING", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_NOTHING = javaEnv->GetStaticObjectField(cls, fid_OWL_NOTHING);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_NOTHING;
  if (jresult_OWL_NOTHING!=NULL) {
    result_OWL_NOTHING=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_NOTHING);
    javaEnv->DeleteLocalRef(jresult_OWL_NOTHING);
  } else {
    result_OWL_NOTHING=NULL;
  }
  this->OWL_NOTHING = result_OWL_NOTHING;
  jfieldID fid_OWL_CLASS = javaEnv->GetStaticFieldID(cls, "OWL_CLASS", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_CLASS = javaEnv->GetStaticObjectField(cls, fid_OWL_CLASS);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_CLASS;
  if (jresult_OWL_CLASS!=NULL) {
    result_OWL_CLASS=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_CLASS);
    javaEnv->DeleteLocalRef(jresult_OWL_CLASS);
  } else {
    result_OWL_CLASS=NULL;
  }
  this->OWL_CLASS = result_OWL_CLASS;
  jfieldID fid_OWL_ONTOLOGY = javaEnv->GetStaticFieldID(cls, "OWL_ONTOLOGY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_ONTOLOGY = javaEnv->GetStaticObjectField(cls, fid_OWL_ONTOLOGY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_ONTOLOGY;
  if (jresult_OWL_ONTOLOGY!=NULL) {
    result_OWL_ONTOLOGY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_ONTOLOGY);
    javaEnv->DeleteLocalRef(jresult_OWL_ONTOLOGY);
  } else {
    result_OWL_ONTOLOGY=NULL;
  }
  this->OWL_ONTOLOGY = result_OWL_ONTOLOGY;
  jfieldID fid_OWL_ONTOLOGY_PROPERTY = javaEnv->GetStaticFieldID(cls, "OWL_ONTOLOGY_PROPERTY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_ONTOLOGY_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_OWL_ONTOLOGY_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_ONTOLOGY_PROPERTY;
  if (jresult_OWL_ONTOLOGY_PROPERTY!=NULL) {
    result_OWL_ONTOLOGY_PROPERTY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_ONTOLOGY_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_OWL_ONTOLOGY_PROPERTY);
  } else {
    result_OWL_ONTOLOGY_PROPERTY=NULL;
  }
  this->OWL_ONTOLOGY_PROPERTY = result_OWL_ONTOLOGY_PROPERTY;
  jfieldID fid_OWL_IMPORTS = javaEnv->GetStaticFieldID(cls, "OWL_IMPORTS", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_IMPORTS = javaEnv->GetStaticObjectField(cls, fid_OWL_IMPORTS);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_IMPORTS;
  if (jresult_OWL_IMPORTS!=NULL) {
    result_OWL_IMPORTS=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_IMPORTS);
    javaEnv->DeleteLocalRef(jresult_OWL_IMPORTS);
  } else {
    result_OWL_IMPORTS=NULL;
  }
  this->OWL_IMPORTS = result_OWL_IMPORTS;
  jfieldID fid_OWL_VERSION_IRI = javaEnv->GetStaticFieldID(cls, "OWL_VERSION_IRI", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_VERSION_IRI = javaEnv->GetStaticObjectField(cls, fid_OWL_VERSION_IRI);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_VERSION_IRI;
  if (jresult_OWL_VERSION_IRI!=NULL) {
    result_OWL_VERSION_IRI=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_VERSION_IRI);
    javaEnv->DeleteLocalRef(jresult_OWL_VERSION_IRI);
  } else {
    result_OWL_VERSION_IRI=NULL;
  }
  this->OWL_VERSION_IRI = result_OWL_VERSION_IRI;
  jfieldID fid_OWL_VERSION_INFO = javaEnv->GetStaticFieldID(cls, "OWL_VERSION_INFO", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_VERSION_INFO = javaEnv->GetStaticObjectField(cls, fid_OWL_VERSION_INFO);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_VERSION_INFO;
  if (jresult_OWL_VERSION_INFO!=NULL) {
    result_OWL_VERSION_INFO=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_VERSION_INFO);
    javaEnv->DeleteLocalRef(jresult_OWL_VERSION_INFO);
  } else {
    result_OWL_VERSION_INFO=NULL;
  }
  this->OWL_VERSION_INFO = result_OWL_VERSION_INFO;
  jfieldID fid_OWL_EQUIVALENT_CLASS = javaEnv->GetStaticFieldID(cls, "OWL_EQUIVALENT_CLASS", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_EQUIVALENT_CLASS = javaEnv->GetStaticObjectField(cls, fid_OWL_EQUIVALENT_CLASS);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_EQUIVALENT_CLASS;
  if (jresult_OWL_EQUIVALENT_CLASS!=NULL) {
    result_OWL_EQUIVALENT_CLASS=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_EQUIVALENT_CLASS);
    javaEnv->DeleteLocalRef(jresult_OWL_EQUIVALENT_CLASS);
  } else {
    result_OWL_EQUIVALENT_CLASS=NULL;
  }
  this->OWL_EQUIVALENT_CLASS = result_OWL_EQUIVALENT_CLASS;
  jfieldID fid_OWL_OBJECT_PROPERTY = javaEnv->GetStaticFieldID(cls, "OWL_OBJECT_PROPERTY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_OBJECT_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_OWL_OBJECT_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_OBJECT_PROPERTY;
  if (jresult_OWL_OBJECT_PROPERTY!=NULL) {
    result_OWL_OBJECT_PROPERTY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_OBJECT_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_OWL_OBJECT_PROPERTY);
  } else {
    result_OWL_OBJECT_PROPERTY=NULL;
  }
  this->OWL_OBJECT_PROPERTY = result_OWL_OBJECT_PROPERTY;
  jfieldID fid_OWL_DATA_PROPERTY = javaEnv->GetStaticFieldID(cls, "OWL_DATA_PROPERTY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_DATA_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_OWL_DATA_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_DATA_PROPERTY;
  if (jresult_OWL_DATA_PROPERTY!=NULL) {
    result_OWL_DATA_PROPERTY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_DATA_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_OWL_DATA_PROPERTY);
  } else {
    result_OWL_DATA_PROPERTY=NULL;
  }
  this->OWL_DATA_PROPERTY = result_OWL_DATA_PROPERTY;
  jfieldID fid_OWL_FUNCTIONAL_PROPERTY = javaEnv->GetStaticFieldID(cls, "OWL_FUNCTIONAL_PROPERTY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_FUNCTIONAL_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_OWL_FUNCTIONAL_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_FUNCTIONAL_PROPERTY;
  if (jresult_OWL_FUNCTIONAL_PROPERTY!=NULL) {
    result_OWL_FUNCTIONAL_PROPERTY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_FUNCTIONAL_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_OWL_FUNCTIONAL_PROPERTY);
  } else {
    result_OWL_FUNCTIONAL_PROPERTY=NULL;
  }
  this->OWL_FUNCTIONAL_PROPERTY = result_OWL_FUNCTIONAL_PROPERTY;
  jfieldID fid_OWL_INVERSE_FUNCTIONAL_PROPERTY = javaEnv->GetStaticFieldID(cls, "OWL_INVERSE_FUNCTIONAL_PROPERTY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_INVERSE_FUNCTIONAL_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_OWL_INVERSE_FUNCTIONAL_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_INVERSE_FUNCTIONAL_PROPERTY;
  if (jresult_OWL_INVERSE_FUNCTIONAL_PROPERTY!=NULL) {
    result_OWL_INVERSE_FUNCTIONAL_PROPERTY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_INVERSE_FUNCTIONAL_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_OWL_INVERSE_FUNCTIONAL_PROPERTY);
  } else {
    result_OWL_INVERSE_FUNCTIONAL_PROPERTY=NULL;
  }
  this->OWL_INVERSE_FUNCTIONAL_PROPERTY = result_OWL_INVERSE_FUNCTIONAL_PROPERTY;
  jfieldID fid_OWL_ANTI_SYMMETRIC_PROPERTY = javaEnv->GetStaticFieldID(cls, "OWL_ANTI_SYMMETRIC_PROPERTY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_ANTI_SYMMETRIC_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_OWL_ANTI_SYMMETRIC_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_ANTI_SYMMETRIC_PROPERTY;
  if (jresult_OWL_ANTI_SYMMETRIC_PROPERTY!=NULL) {
    result_OWL_ANTI_SYMMETRIC_PROPERTY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_ANTI_SYMMETRIC_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_OWL_ANTI_SYMMETRIC_PROPERTY);
  } else {
    result_OWL_ANTI_SYMMETRIC_PROPERTY=NULL;
  }
  this->OWL_ANTI_SYMMETRIC_PROPERTY = result_OWL_ANTI_SYMMETRIC_PROPERTY;
  jfieldID fid_OWL_ASYMMETRIC_PROPERTY = javaEnv->GetStaticFieldID(cls, "OWL_ASYMMETRIC_PROPERTY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_ASYMMETRIC_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_OWL_ASYMMETRIC_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_ASYMMETRIC_PROPERTY;
  if (jresult_OWL_ASYMMETRIC_PROPERTY!=NULL) {
    result_OWL_ASYMMETRIC_PROPERTY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_ASYMMETRIC_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_OWL_ASYMMETRIC_PROPERTY);
  } else {
    result_OWL_ASYMMETRIC_PROPERTY=NULL;
  }
  this->OWL_ASYMMETRIC_PROPERTY = result_OWL_ASYMMETRIC_PROPERTY;
  jfieldID fid_OWL_SYMMETRIC_PROPERTY = javaEnv->GetStaticFieldID(cls, "OWL_SYMMETRIC_PROPERTY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_SYMMETRIC_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_OWL_SYMMETRIC_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_SYMMETRIC_PROPERTY;
  if (jresult_OWL_SYMMETRIC_PROPERTY!=NULL) {
    result_OWL_SYMMETRIC_PROPERTY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_SYMMETRIC_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_OWL_SYMMETRIC_PROPERTY);
  } else {
    result_OWL_SYMMETRIC_PROPERTY=NULL;
  }
  this->OWL_SYMMETRIC_PROPERTY = result_OWL_SYMMETRIC_PROPERTY;
  jfieldID fid_OWL_RESTRICTION = javaEnv->GetStaticFieldID(cls, "OWL_RESTRICTION", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_RESTRICTION = javaEnv->GetStaticObjectField(cls, fid_OWL_RESTRICTION);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_RESTRICTION;
  if (jresult_OWL_RESTRICTION!=NULL) {
    result_OWL_RESTRICTION=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_RESTRICTION);
    javaEnv->DeleteLocalRef(jresult_OWL_RESTRICTION);
  } else {
    result_OWL_RESTRICTION=NULL;
  }
  this->OWL_RESTRICTION = result_OWL_RESTRICTION;
  jfieldID fid_OWL_DATA_RESTRICTION = javaEnv->GetStaticFieldID(cls, "OWL_DATA_RESTRICTION", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_DATA_RESTRICTION = javaEnv->GetStaticObjectField(cls, fid_OWL_DATA_RESTRICTION);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_DATA_RESTRICTION;
  if (jresult_OWL_DATA_RESTRICTION!=NULL) {
    result_OWL_DATA_RESTRICTION=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_DATA_RESTRICTION);
    javaEnv->DeleteLocalRef(jresult_OWL_DATA_RESTRICTION);
  } else {
    result_OWL_DATA_RESTRICTION=NULL;
  }
  this->OWL_DATA_RESTRICTION = result_OWL_DATA_RESTRICTION;
  jfieldID fid_OWL_OBJECT_RESTRICTION = javaEnv->GetStaticFieldID(cls, "OWL_OBJECT_RESTRICTION", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_OBJECT_RESTRICTION = javaEnv->GetStaticObjectField(cls, fid_OWL_OBJECT_RESTRICTION);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_OBJECT_RESTRICTION;
  if (jresult_OWL_OBJECT_RESTRICTION!=NULL) {
    result_OWL_OBJECT_RESTRICTION=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_OBJECT_RESTRICTION);
    javaEnv->DeleteLocalRef(jresult_OWL_OBJECT_RESTRICTION);
  } else {
    result_OWL_OBJECT_RESTRICTION=NULL;
  }
  this->OWL_OBJECT_RESTRICTION = result_OWL_OBJECT_RESTRICTION;
  jfieldID fid_OWL_ON_PROPERTY = javaEnv->GetStaticFieldID(cls, "OWL_ON_PROPERTY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_ON_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_OWL_ON_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_ON_PROPERTY;
  if (jresult_OWL_ON_PROPERTY!=NULL) {
    result_OWL_ON_PROPERTY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_ON_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_OWL_ON_PROPERTY);
  } else {
    result_OWL_ON_PROPERTY=NULL;
  }
  this->OWL_ON_PROPERTY = result_OWL_ON_PROPERTY;
  jfieldID fid_OWL_INTERSECTION_OF = javaEnv->GetStaticFieldID(cls, "OWL_INTERSECTION_OF", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_INTERSECTION_OF = javaEnv->GetStaticObjectField(cls, fid_OWL_INTERSECTION_OF);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_INTERSECTION_OF;
  if (jresult_OWL_INTERSECTION_OF!=NULL) {
    result_OWL_INTERSECTION_OF=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_INTERSECTION_OF);
    javaEnv->DeleteLocalRef(jresult_OWL_INTERSECTION_OF);
  } else {
    result_OWL_INTERSECTION_OF=NULL;
  }
  this->OWL_INTERSECTION_OF = result_OWL_INTERSECTION_OF;
  jfieldID fid_OWL_UNION_OF = javaEnv->GetStaticFieldID(cls, "OWL_UNION_OF", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_UNION_OF = javaEnv->GetStaticObjectField(cls, fid_OWL_UNION_OF);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_UNION_OF;
  if (jresult_OWL_UNION_OF!=NULL) {
    result_OWL_UNION_OF=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_UNION_OF);
    javaEnv->DeleteLocalRef(jresult_OWL_UNION_OF);
  } else {
    result_OWL_UNION_OF=NULL;
  }
  this->OWL_UNION_OF = result_OWL_UNION_OF;
  jfieldID fid_OWL_ALL_VALUES_FROM = javaEnv->GetStaticFieldID(cls, "OWL_ALL_VALUES_FROM", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_ALL_VALUES_FROM = javaEnv->GetStaticObjectField(cls, fid_OWL_ALL_VALUES_FROM);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_ALL_VALUES_FROM;
  if (jresult_OWL_ALL_VALUES_FROM!=NULL) {
    result_OWL_ALL_VALUES_FROM=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_ALL_VALUES_FROM);
    javaEnv->DeleteLocalRef(jresult_OWL_ALL_VALUES_FROM);
  } else {
    result_OWL_ALL_VALUES_FROM=NULL;
  }
  this->OWL_ALL_VALUES_FROM = result_OWL_ALL_VALUES_FROM;
  jfieldID fid_OWL_SOME_VALUES_FROM = javaEnv->GetStaticFieldID(cls, "OWL_SOME_VALUES_FROM", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_SOME_VALUES_FROM = javaEnv->GetStaticObjectField(cls, fid_OWL_SOME_VALUES_FROM);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_SOME_VALUES_FROM;
  if (jresult_OWL_SOME_VALUES_FROM!=NULL) {
    result_OWL_SOME_VALUES_FROM=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_SOME_VALUES_FROM);
    javaEnv->DeleteLocalRef(jresult_OWL_SOME_VALUES_FROM);
  } else {
    result_OWL_SOME_VALUES_FROM=NULL;
  }
  this->OWL_SOME_VALUES_FROM = result_OWL_SOME_VALUES_FROM;
  jfieldID fid_OWL_HAS_VALUE = javaEnv->GetStaticFieldID(cls, "OWL_HAS_VALUE", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_HAS_VALUE = javaEnv->GetStaticObjectField(cls, fid_OWL_HAS_VALUE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_HAS_VALUE;
  if (jresult_OWL_HAS_VALUE!=NULL) {
    result_OWL_HAS_VALUE=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_HAS_VALUE);
    javaEnv->DeleteLocalRef(jresult_OWL_HAS_VALUE);
  } else {
    result_OWL_HAS_VALUE=NULL;
  }
  this->OWL_HAS_VALUE = result_OWL_HAS_VALUE;
  jfieldID fid_OWL_DISJOINT_WITH = javaEnv->GetStaticFieldID(cls, "OWL_DISJOINT_WITH", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_DISJOINT_WITH = javaEnv->GetStaticObjectField(cls, fid_OWL_DISJOINT_WITH);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_DISJOINT_WITH;
  if (jresult_OWL_DISJOINT_WITH!=NULL) {
    result_OWL_DISJOINT_WITH=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_DISJOINT_WITH);
    javaEnv->DeleteLocalRef(jresult_OWL_DISJOINT_WITH);
  } else {
    result_OWL_DISJOINT_WITH=NULL;
  }
  this->OWL_DISJOINT_WITH = result_OWL_DISJOINT_WITH;
  jfieldID fid_OWL_ONE_OF = javaEnv->GetStaticFieldID(cls, "OWL_ONE_OF", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_ONE_OF = javaEnv->GetStaticObjectField(cls, fid_OWL_ONE_OF);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_ONE_OF;
  if (jresult_OWL_ONE_OF!=NULL) {
    result_OWL_ONE_OF=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_ONE_OF);
    javaEnv->DeleteLocalRef(jresult_OWL_ONE_OF);
  } else {
    result_OWL_ONE_OF=NULL;
  }
  this->OWL_ONE_OF = result_OWL_ONE_OF;
  jfieldID fid_OWL_SELF_RESTRICTION = javaEnv->GetStaticFieldID(cls, "OWL_SELF_RESTRICTION", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_SELF_RESTRICTION = javaEnv->GetStaticObjectField(cls, fid_OWL_SELF_RESTRICTION);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_SELF_RESTRICTION;
  if (jresult_OWL_SELF_RESTRICTION!=NULL) {
    result_OWL_SELF_RESTRICTION=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_SELF_RESTRICTION);
    javaEnv->DeleteLocalRef(jresult_OWL_SELF_RESTRICTION);
  } else {
    result_OWL_SELF_RESTRICTION=NULL;
  }
  this->OWL_SELF_RESTRICTION = result_OWL_SELF_RESTRICTION;
  jfieldID fid_OWL_HAS_SELF = javaEnv->GetStaticFieldID(cls, "OWL_HAS_SELF", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_HAS_SELF = javaEnv->GetStaticObjectField(cls, fid_OWL_HAS_SELF);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_HAS_SELF;
  if (jresult_OWL_HAS_SELF!=NULL) {
    result_OWL_HAS_SELF=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_HAS_SELF);
    javaEnv->DeleteLocalRef(jresult_OWL_HAS_SELF);
  } else {
    result_OWL_HAS_SELF=NULL;
  }
  this->OWL_HAS_SELF = result_OWL_HAS_SELF;
  jfieldID fid_OWL_DISJOINT_UNION_OF = javaEnv->GetStaticFieldID(cls, "OWL_DISJOINT_UNION_OF", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_DISJOINT_UNION_OF = javaEnv->GetStaticObjectField(cls, fid_OWL_DISJOINT_UNION_OF);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_DISJOINT_UNION_OF;
  if (jresult_OWL_DISJOINT_UNION_OF!=NULL) {
    result_OWL_DISJOINT_UNION_OF=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_DISJOINT_UNION_OF);
    javaEnv->DeleteLocalRef(jresult_OWL_DISJOINT_UNION_OF);
  } else {
    result_OWL_DISJOINT_UNION_OF=NULL;
  }
  this->OWL_DISJOINT_UNION_OF = result_OWL_DISJOINT_UNION_OF;
  jfieldID fid_OWL_MIN_CARDINALITY = javaEnv->GetStaticFieldID(cls, "OWL_MIN_CARDINALITY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_MIN_CARDINALITY = javaEnv->GetStaticObjectField(cls, fid_OWL_MIN_CARDINALITY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_MIN_CARDINALITY;
  if (jresult_OWL_MIN_CARDINALITY!=NULL) {
    result_OWL_MIN_CARDINALITY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_MIN_CARDINALITY);
    javaEnv->DeleteLocalRef(jresult_OWL_MIN_CARDINALITY);
  } else {
    result_OWL_MIN_CARDINALITY=NULL;
  }
  this->OWL_MIN_CARDINALITY = result_OWL_MIN_CARDINALITY;
  jfieldID fid_OWL_MIN_QUALIFIED_CARDINALITY = javaEnv->GetStaticFieldID(cls, "OWL_MIN_QUALIFIED_CARDINALITY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_MIN_QUALIFIED_CARDINALITY = javaEnv->GetStaticObjectField(cls, fid_OWL_MIN_QUALIFIED_CARDINALITY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_MIN_QUALIFIED_CARDINALITY;
  if (jresult_OWL_MIN_QUALIFIED_CARDINALITY!=NULL) {
    result_OWL_MIN_QUALIFIED_CARDINALITY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_MIN_QUALIFIED_CARDINALITY);
    javaEnv->DeleteLocalRef(jresult_OWL_MIN_QUALIFIED_CARDINALITY);
  } else {
    result_OWL_MIN_QUALIFIED_CARDINALITY=NULL;
  }
  this->OWL_MIN_QUALIFIED_CARDINALITY = result_OWL_MIN_QUALIFIED_CARDINALITY;
  jfieldID fid_OWL_CARDINALITY = javaEnv->GetStaticFieldID(cls, "OWL_CARDINALITY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_CARDINALITY = javaEnv->GetStaticObjectField(cls, fid_OWL_CARDINALITY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_CARDINALITY;
  if (jresult_OWL_CARDINALITY!=NULL) {
    result_OWL_CARDINALITY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_CARDINALITY);
    javaEnv->DeleteLocalRef(jresult_OWL_CARDINALITY);
  } else {
    result_OWL_CARDINALITY=NULL;
  }
  this->OWL_CARDINALITY = result_OWL_CARDINALITY;
  jfieldID fid_OWL_QUALIFIED_CARDINALITY = javaEnv->GetStaticFieldID(cls, "OWL_QUALIFIED_CARDINALITY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_QUALIFIED_CARDINALITY = javaEnv->GetStaticObjectField(cls, fid_OWL_QUALIFIED_CARDINALITY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_QUALIFIED_CARDINALITY;
  if (jresult_OWL_QUALIFIED_CARDINALITY!=NULL) {
    result_OWL_QUALIFIED_CARDINALITY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_QUALIFIED_CARDINALITY);
    javaEnv->DeleteLocalRef(jresult_OWL_QUALIFIED_CARDINALITY);
  } else {
    result_OWL_QUALIFIED_CARDINALITY=NULL;
  }
  this->OWL_QUALIFIED_CARDINALITY = result_OWL_QUALIFIED_CARDINALITY;
  jfieldID fid_OWL_ANNOTATION_PROPERTY = javaEnv->GetStaticFieldID(cls, "OWL_ANNOTATION_PROPERTY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_ANNOTATION_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_OWL_ANNOTATION_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_ANNOTATION_PROPERTY;
  if (jresult_OWL_ANNOTATION_PROPERTY!=NULL) {
    result_OWL_ANNOTATION_PROPERTY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_ANNOTATION_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_OWL_ANNOTATION_PROPERTY);
  } else {
    result_OWL_ANNOTATION_PROPERTY=NULL;
  }
  this->OWL_ANNOTATION_PROPERTY = result_OWL_ANNOTATION_PROPERTY;
  jfieldID fid_OWL_ANNOTATION = javaEnv->GetStaticFieldID(cls, "OWL_ANNOTATION", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_ANNOTATION = javaEnv->GetStaticObjectField(cls, fid_OWL_ANNOTATION);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_ANNOTATION;
  if (jresult_OWL_ANNOTATION!=NULL) {
    result_OWL_ANNOTATION=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_ANNOTATION);
    javaEnv->DeleteLocalRef(jresult_OWL_ANNOTATION);
  } else {
    result_OWL_ANNOTATION=NULL;
  }
  this->OWL_ANNOTATION = result_OWL_ANNOTATION;
  jfieldID fid_OWL_DECLARED_AS = javaEnv->GetStaticFieldID(cls, "OWL_DECLARED_AS", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_DECLARED_AS = javaEnv->GetStaticObjectField(cls, fid_OWL_DECLARED_AS);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_DECLARED_AS;
  if (jresult_OWL_DECLARED_AS!=NULL) {
    result_OWL_DECLARED_AS=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_DECLARED_AS);
    javaEnv->DeleteLocalRef(jresult_OWL_DECLARED_AS);
  } else {
    result_OWL_DECLARED_AS=NULL;
  }
  this->OWL_DECLARED_AS = result_OWL_DECLARED_AS;
  jfieldID fid_OWL_INDIVIDUAL = javaEnv->GetStaticFieldID(cls, "OWL_INDIVIDUAL", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_INDIVIDUAL = javaEnv->GetStaticObjectField(cls, fid_OWL_INDIVIDUAL);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_INDIVIDUAL;
  if (jresult_OWL_INDIVIDUAL!=NULL) {
    result_OWL_INDIVIDUAL=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_INDIVIDUAL);
    javaEnv->DeleteLocalRef(jresult_OWL_INDIVIDUAL);
  } else {
    result_OWL_INDIVIDUAL=NULL;
  }
  this->OWL_INDIVIDUAL = result_OWL_INDIVIDUAL;
  jfieldID fid_OWL_NAMED_INDIVIDUAL = javaEnv->GetStaticFieldID(cls, "OWL_NAMED_INDIVIDUAL", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_NAMED_INDIVIDUAL = javaEnv->GetStaticObjectField(cls, fid_OWL_NAMED_INDIVIDUAL);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_NAMED_INDIVIDUAL;
  if (jresult_OWL_NAMED_INDIVIDUAL!=NULL) {
    result_OWL_NAMED_INDIVIDUAL=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_NAMED_INDIVIDUAL);
    javaEnv->DeleteLocalRef(jresult_OWL_NAMED_INDIVIDUAL);
  } else {
    result_OWL_NAMED_INDIVIDUAL=NULL;
  }
  this->OWL_NAMED_INDIVIDUAL = result_OWL_NAMED_INDIVIDUAL;
  jfieldID fid_OWL_DATATYPE = javaEnv->GetStaticFieldID(cls, "OWL_DATATYPE", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_DATATYPE = javaEnv->GetStaticObjectField(cls, fid_OWL_DATATYPE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_DATATYPE;
  if (jresult_OWL_DATATYPE!=NULL) {
    result_OWL_DATATYPE=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_DATATYPE);
    javaEnv->DeleteLocalRef(jresult_OWL_DATATYPE);
  } else {
    result_OWL_DATATYPE=NULL;
  }
  this->OWL_DATATYPE = result_OWL_DATATYPE;
  jfieldID fid_RDFS_SUBCLASS_OF = javaEnv->GetStaticFieldID(cls, "RDFS_SUBCLASS_OF", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_RDFS_SUBCLASS_OF = javaEnv->GetStaticObjectField(cls, fid_RDFS_SUBCLASS_OF);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_RDFS_SUBCLASS_OF;
  if (jresult_RDFS_SUBCLASS_OF!=NULL) {
    result_RDFS_SUBCLASS_OF=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_RDFS_SUBCLASS_OF);
    javaEnv->DeleteLocalRef(jresult_RDFS_SUBCLASS_OF);
  } else {
    result_RDFS_SUBCLASS_OF=NULL;
  }
  this->RDFS_SUBCLASS_OF = result_RDFS_SUBCLASS_OF;
  jfieldID fid_RDFS_SUB_PROPERTY_OF = javaEnv->GetStaticFieldID(cls, "RDFS_SUB_PROPERTY_OF", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_RDFS_SUB_PROPERTY_OF = javaEnv->GetStaticObjectField(cls, fid_RDFS_SUB_PROPERTY_OF);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_RDFS_SUB_PROPERTY_OF;
  if (jresult_RDFS_SUB_PROPERTY_OF!=NULL) {
    result_RDFS_SUB_PROPERTY_OF=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_RDFS_SUB_PROPERTY_OF);
    javaEnv->DeleteLocalRef(jresult_RDFS_SUB_PROPERTY_OF);
  } else {
    result_RDFS_SUB_PROPERTY_OF=NULL;
  }
  this->RDFS_SUB_PROPERTY_OF = result_RDFS_SUB_PROPERTY_OF;
  jfieldID fid_RDF_TYPE = javaEnv->GetStaticFieldID(cls, "RDF_TYPE", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_RDF_TYPE = javaEnv->GetStaticObjectField(cls, fid_RDF_TYPE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_RDF_TYPE;
  if (jresult_RDF_TYPE!=NULL) {
    result_RDF_TYPE=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_RDF_TYPE);
    javaEnv->DeleteLocalRef(jresult_RDF_TYPE);
  } else {
    result_RDF_TYPE=NULL;
  }
  this->RDF_TYPE = result_RDF_TYPE;
  jfieldID fid_RDF_NIL = javaEnv->GetStaticFieldID(cls, "RDF_NIL", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_RDF_NIL = javaEnv->GetStaticObjectField(cls, fid_RDF_NIL);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_RDF_NIL;
  if (jresult_RDF_NIL!=NULL) {
    result_RDF_NIL=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_RDF_NIL);
    javaEnv->DeleteLocalRef(jresult_RDF_NIL);
  } else {
    result_RDF_NIL=NULL;
  }
  this->RDF_NIL = result_RDF_NIL;
  jfieldID fid_RDF_REST = javaEnv->GetStaticFieldID(cls, "RDF_REST", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_RDF_REST = javaEnv->GetStaticObjectField(cls, fid_RDF_REST);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_RDF_REST;
  if (jresult_RDF_REST!=NULL) {
    result_RDF_REST=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_RDF_REST);
    javaEnv->DeleteLocalRef(jresult_RDF_REST);
  } else {
    result_RDF_REST=NULL;
  }
  this->RDF_REST = result_RDF_REST;
  jfieldID fid_RDF_FIRST = javaEnv->GetStaticFieldID(cls, "RDF_FIRST", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_RDF_FIRST = javaEnv->GetStaticObjectField(cls, fid_RDF_FIRST);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_RDF_FIRST;
  if (jresult_RDF_FIRST!=NULL) {
    result_RDF_FIRST=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_RDF_FIRST);
    javaEnv->DeleteLocalRef(jresult_RDF_FIRST);
  } else {
    result_RDF_FIRST=NULL;
  }
  this->RDF_FIRST = result_RDF_FIRST;
  jfieldID fid_RDF_LIST = javaEnv->GetStaticFieldID(cls, "RDF_LIST", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_RDF_LIST = javaEnv->GetStaticObjectField(cls, fid_RDF_LIST);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_RDF_LIST;
  if (jresult_RDF_LIST!=NULL) {
    result_RDF_LIST=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_RDF_LIST);
    javaEnv->DeleteLocalRef(jresult_RDF_LIST);
  } else {
    result_RDF_LIST=NULL;
  }
  this->RDF_LIST = result_RDF_LIST;
  jfieldID fid_OWL_MAX_CARDINALITY = javaEnv->GetStaticFieldID(cls, "OWL_MAX_CARDINALITY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_MAX_CARDINALITY = javaEnv->GetStaticObjectField(cls, fid_OWL_MAX_CARDINALITY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_MAX_CARDINALITY;
  if (jresult_OWL_MAX_CARDINALITY!=NULL) {
    result_OWL_MAX_CARDINALITY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_MAX_CARDINALITY);
    javaEnv->DeleteLocalRef(jresult_OWL_MAX_CARDINALITY);
  } else {
    result_OWL_MAX_CARDINALITY=NULL;
  }
  this->OWL_MAX_CARDINALITY = result_OWL_MAX_CARDINALITY;
  jfieldID fid_OWL_MAX_QUALIFIED_CARDINALITY = javaEnv->GetStaticFieldID(cls, "OWL_MAX_QUALIFIED_CARDINALITY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_MAX_QUALIFIED_CARDINALITY = javaEnv->GetStaticObjectField(cls, fid_OWL_MAX_QUALIFIED_CARDINALITY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_MAX_QUALIFIED_CARDINALITY;
  if (jresult_OWL_MAX_QUALIFIED_CARDINALITY!=NULL) {
    result_OWL_MAX_QUALIFIED_CARDINALITY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_MAX_QUALIFIED_CARDINALITY);
    javaEnv->DeleteLocalRef(jresult_OWL_MAX_QUALIFIED_CARDINALITY);
  } else {
    result_OWL_MAX_QUALIFIED_CARDINALITY=NULL;
  }
  this->OWL_MAX_QUALIFIED_CARDINALITY = result_OWL_MAX_QUALIFIED_CARDINALITY;
  jfieldID fid_OWL_NEGATIVE_OBJECT_PROPERTY_ASSERTION = javaEnv->GetStaticFieldID(cls, "OWL_NEGATIVE_OBJECT_PROPERTY_ASSERTION", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_NEGATIVE_OBJECT_PROPERTY_ASSERTION = javaEnv->GetStaticObjectField(cls, fid_OWL_NEGATIVE_OBJECT_PROPERTY_ASSERTION);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_NEGATIVE_OBJECT_PROPERTY_ASSERTION;
  if (jresult_OWL_NEGATIVE_OBJECT_PROPERTY_ASSERTION!=NULL) {
    result_OWL_NEGATIVE_OBJECT_PROPERTY_ASSERTION=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_NEGATIVE_OBJECT_PROPERTY_ASSERTION);
    javaEnv->DeleteLocalRef(jresult_OWL_NEGATIVE_OBJECT_PROPERTY_ASSERTION);
  } else {
    result_OWL_NEGATIVE_OBJECT_PROPERTY_ASSERTION=NULL;
  }
  this->OWL_NEGATIVE_OBJECT_PROPERTY_ASSERTION = result_OWL_NEGATIVE_OBJECT_PROPERTY_ASSERTION;
  jfieldID fid_OWL_NEGATIVE_DATA_PROPERTY_ASSERTION = javaEnv->GetStaticFieldID(cls, "OWL_NEGATIVE_DATA_PROPERTY_ASSERTION", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_NEGATIVE_DATA_PROPERTY_ASSERTION = javaEnv->GetStaticObjectField(cls, fid_OWL_NEGATIVE_DATA_PROPERTY_ASSERTION);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_NEGATIVE_DATA_PROPERTY_ASSERTION;
  if (jresult_OWL_NEGATIVE_DATA_PROPERTY_ASSERTION!=NULL) {
    result_OWL_NEGATIVE_DATA_PROPERTY_ASSERTION=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_NEGATIVE_DATA_PROPERTY_ASSERTION);
    javaEnv->DeleteLocalRef(jresult_OWL_NEGATIVE_DATA_PROPERTY_ASSERTION);
  } else {
    result_OWL_NEGATIVE_DATA_PROPERTY_ASSERTION=NULL;
  }
  this->OWL_NEGATIVE_DATA_PROPERTY_ASSERTION = result_OWL_NEGATIVE_DATA_PROPERTY_ASSERTION;
  jfieldID fid_OWL_NEGATIVE_PROPERTY_ASSERTION = javaEnv->GetStaticFieldID(cls, "OWL_NEGATIVE_PROPERTY_ASSERTION", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_NEGATIVE_PROPERTY_ASSERTION = javaEnv->GetStaticObjectField(cls, fid_OWL_NEGATIVE_PROPERTY_ASSERTION);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_NEGATIVE_PROPERTY_ASSERTION;
  if (jresult_OWL_NEGATIVE_PROPERTY_ASSERTION!=NULL) {
    result_OWL_NEGATIVE_PROPERTY_ASSERTION=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_NEGATIVE_PROPERTY_ASSERTION);
    javaEnv->DeleteLocalRef(jresult_OWL_NEGATIVE_PROPERTY_ASSERTION);
  } else {
    result_OWL_NEGATIVE_PROPERTY_ASSERTION=NULL;
  }
  this->OWL_NEGATIVE_PROPERTY_ASSERTION = result_OWL_NEGATIVE_PROPERTY_ASSERTION;
  jfieldID fid_RDFS_LABEL = javaEnv->GetStaticFieldID(cls, "RDFS_LABEL", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_RDFS_LABEL = javaEnv->GetStaticObjectField(cls, fid_RDFS_LABEL);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_RDFS_LABEL;
  if (jresult_RDFS_LABEL!=NULL) {
    result_RDFS_LABEL=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_RDFS_LABEL);
    javaEnv->DeleteLocalRef(jresult_RDFS_LABEL);
  } else {
    result_RDFS_LABEL=NULL;
  }
  this->RDFS_LABEL = result_RDFS_LABEL;
  jfieldID fid_RDFS_COMMENT = javaEnv->GetStaticFieldID(cls, "RDFS_COMMENT", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_RDFS_COMMENT = javaEnv->GetStaticObjectField(cls, fid_RDFS_COMMENT);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_RDFS_COMMENT;
  if (jresult_RDFS_COMMENT!=NULL) {
    result_RDFS_COMMENT=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_RDFS_COMMENT);
    javaEnv->DeleteLocalRef(jresult_RDFS_COMMENT);
  } else {
    result_RDFS_COMMENT=NULL;
  }
  this->RDFS_COMMENT = result_RDFS_COMMENT;
  jfieldID fid_RDFS_SEE_ALSO = javaEnv->GetStaticFieldID(cls, "RDFS_SEE_ALSO", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_RDFS_SEE_ALSO = javaEnv->GetStaticObjectField(cls, fid_RDFS_SEE_ALSO);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_RDFS_SEE_ALSO;
  if (jresult_RDFS_SEE_ALSO!=NULL) {
    result_RDFS_SEE_ALSO=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_RDFS_SEE_ALSO);
    javaEnv->DeleteLocalRef(jresult_RDFS_SEE_ALSO);
  } else {
    result_RDFS_SEE_ALSO=NULL;
  }
  this->RDFS_SEE_ALSO = result_RDFS_SEE_ALSO;
  jfieldID fid_RDFS_IS_DEFINED_BY = javaEnv->GetStaticFieldID(cls, "RDFS_IS_DEFINED_BY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_RDFS_IS_DEFINED_BY = javaEnv->GetStaticObjectField(cls, fid_RDFS_IS_DEFINED_BY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_RDFS_IS_DEFINED_BY;
  if (jresult_RDFS_IS_DEFINED_BY!=NULL) {
    result_RDFS_IS_DEFINED_BY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_RDFS_IS_DEFINED_BY);
    javaEnv->DeleteLocalRef(jresult_RDFS_IS_DEFINED_BY);
  } else {
    result_RDFS_IS_DEFINED_BY=NULL;
  }
  this->RDFS_IS_DEFINED_BY = result_RDFS_IS_DEFINED_BY;
  jfieldID fid_RDFS_RESOURCE = javaEnv->GetStaticFieldID(cls, "RDFS_RESOURCE", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_RDFS_RESOURCE = javaEnv->GetStaticObjectField(cls, fid_RDFS_RESOURCE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_RDFS_RESOURCE;
  if (jresult_RDFS_RESOURCE!=NULL) {
    result_RDFS_RESOURCE=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_RDFS_RESOURCE);
    javaEnv->DeleteLocalRef(jresult_RDFS_RESOURCE);
  } else {
    result_RDFS_RESOURCE=NULL;
  }
  this->RDFS_RESOURCE = result_RDFS_RESOURCE;
  jfieldID fid_RDFS_LITERAL = javaEnv->GetStaticFieldID(cls, "RDFS_LITERAL", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_RDFS_LITERAL = javaEnv->GetStaticObjectField(cls, fid_RDFS_LITERAL);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_RDFS_LITERAL;
  if (jresult_RDFS_LITERAL!=NULL) {
    result_RDFS_LITERAL=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_RDFS_LITERAL);
    javaEnv->DeleteLocalRef(jresult_RDFS_LITERAL);
  } else {
    result_RDFS_LITERAL=NULL;
  }
  this->RDFS_LITERAL = result_RDFS_LITERAL;
  jfieldID fid_RDF_PLAIN_LITERAL = javaEnv->GetStaticFieldID(cls, "RDF_PLAIN_LITERAL", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_RDF_PLAIN_LITERAL = javaEnv->GetStaticObjectField(cls, fid_RDF_PLAIN_LITERAL);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_RDF_PLAIN_LITERAL;
  if (jresult_RDF_PLAIN_LITERAL!=NULL) {
    result_RDF_PLAIN_LITERAL=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_RDF_PLAIN_LITERAL);
    javaEnv->DeleteLocalRef(jresult_RDF_PLAIN_LITERAL);
  } else {
    result_RDF_PLAIN_LITERAL=NULL;
  }
  this->RDF_PLAIN_LITERAL = result_RDF_PLAIN_LITERAL;
  jfieldID fid_RDFS_DATATYPE = javaEnv->GetStaticFieldID(cls, "RDFS_DATATYPE", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_RDFS_DATATYPE = javaEnv->GetStaticObjectField(cls, fid_RDFS_DATATYPE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_RDFS_DATATYPE;
  if (jresult_RDFS_DATATYPE!=NULL) {
    result_RDFS_DATATYPE=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_RDFS_DATATYPE);
    javaEnv->DeleteLocalRef(jresult_RDFS_DATATYPE);
  } else {
    result_RDFS_DATATYPE=NULL;
  }
  this->RDFS_DATATYPE = result_RDFS_DATATYPE;
  jfieldID fid_OWL_TRANSITIVE_PROPERTY = javaEnv->GetStaticFieldID(cls, "OWL_TRANSITIVE_PROPERTY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_TRANSITIVE_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_OWL_TRANSITIVE_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_TRANSITIVE_PROPERTY;
  if (jresult_OWL_TRANSITIVE_PROPERTY!=NULL) {
    result_OWL_TRANSITIVE_PROPERTY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_TRANSITIVE_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_OWL_TRANSITIVE_PROPERTY);
  } else {
    result_OWL_TRANSITIVE_PROPERTY=NULL;
  }
  this->OWL_TRANSITIVE_PROPERTY = result_OWL_TRANSITIVE_PROPERTY;
  jfieldID fid_OWL_REFLEXIVE_PROPERTY = javaEnv->GetStaticFieldID(cls, "OWL_REFLEXIVE_PROPERTY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_REFLEXIVE_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_OWL_REFLEXIVE_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_REFLEXIVE_PROPERTY;
  if (jresult_OWL_REFLEXIVE_PROPERTY!=NULL) {
    result_OWL_REFLEXIVE_PROPERTY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_REFLEXIVE_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_OWL_REFLEXIVE_PROPERTY);
  } else {
    result_OWL_REFLEXIVE_PROPERTY=NULL;
  }
  this->OWL_REFLEXIVE_PROPERTY = result_OWL_REFLEXIVE_PROPERTY;
  jfieldID fid_OWL_IRREFLEXIVE_PROPERTY = javaEnv->GetStaticFieldID(cls, "OWL_IRREFLEXIVE_PROPERTY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_IRREFLEXIVE_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_OWL_IRREFLEXIVE_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_IRREFLEXIVE_PROPERTY;
  if (jresult_OWL_IRREFLEXIVE_PROPERTY!=NULL) {
    result_OWL_IRREFLEXIVE_PROPERTY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_IRREFLEXIVE_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_OWL_IRREFLEXIVE_PROPERTY);
  } else {
    result_OWL_IRREFLEXIVE_PROPERTY=NULL;
  }
  this->OWL_IRREFLEXIVE_PROPERTY = result_OWL_IRREFLEXIVE_PROPERTY;
  jfieldID fid_OWL_INVERSE_OF = javaEnv->GetStaticFieldID(cls, "OWL_INVERSE_OF", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_INVERSE_OF = javaEnv->GetStaticObjectField(cls, fid_OWL_INVERSE_OF);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_INVERSE_OF;
  if (jresult_OWL_INVERSE_OF!=NULL) {
    result_OWL_INVERSE_OF=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_INVERSE_OF);
    javaEnv->DeleteLocalRef(jresult_OWL_INVERSE_OF);
  } else {
    result_OWL_INVERSE_OF=NULL;
  }
  this->OWL_INVERSE_OF = result_OWL_INVERSE_OF;
  jfieldID fid_OWL_COMPLEMENT_OF = javaEnv->GetStaticFieldID(cls, "OWL_COMPLEMENT_OF", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_COMPLEMENT_OF = javaEnv->GetStaticObjectField(cls, fid_OWL_COMPLEMENT_OF);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_COMPLEMENT_OF;
  if (jresult_OWL_COMPLEMENT_OF!=NULL) {
    result_OWL_COMPLEMENT_OF=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_COMPLEMENT_OF);
    javaEnv->DeleteLocalRef(jresult_OWL_COMPLEMENT_OF);
  } else {
    result_OWL_COMPLEMENT_OF=NULL;
  }
  this->OWL_COMPLEMENT_OF = result_OWL_COMPLEMENT_OF;
  jfieldID fid_OWL_DATATYPE_COMPLEMENT_OF = javaEnv->GetStaticFieldID(cls, "OWL_DATATYPE_COMPLEMENT_OF", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_DATATYPE_COMPLEMENT_OF = javaEnv->GetStaticObjectField(cls, fid_OWL_DATATYPE_COMPLEMENT_OF);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_DATATYPE_COMPLEMENT_OF;
  if (jresult_OWL_DATATYPE_COMPLEMENT_OF!=NULL) {
    result_OWL_DATATYPE_COMPLEMENT_OF=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_DATATYPE_COMPLEMENT_OF);
    javaEnv->DeleteLocalRef(jresult_OWL_DATATYPE_COMPLEMENT_OF);
  } else {
    result_OWL_DATATYPE_COMPLEMENT_OF=NULL;
  }
  this->OWL_DATATYPE_COMPLEMENT_OF = result_OWL_DATATYPE_COMPLEMENT_OF;
  jfieldID fid_OWL_ALL_DIFFERENT = javaEnv->GetStaticFieldID(cls, "OWL_ALL_DIFFERENT", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_ALL_DIFFERENT = javaEnv->GetStaticObjectField(cls, fid_OWL_ALL_DIFFERENT);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_ALL_DIFFERENT;
  if (jresult_OWL_ALL_DIFFERENT!=NULL) {
    result_OWL_ALL_DIFFERENT=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_ALL_DIFFERENT);
    javaEnv->DeleteLocalRef(jresult_OWL_ALL_DIFFERENT);
  } else {
    result_OWL_ALL_DIFFERENT=NULL;
  }
  this->OWL_ALL_DIFFERENT = result_OWL_ALL_DIFFERENT;
  jfieldID fid_OWL_DISTINCT_MEMBERS = javaEnv->GetStaticFieldID(cls, "OWL_DISTINCT_MEMBERS", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_DISTINCT_MEMBERS = javaEnv->GetStaticObjectField(cls, fid_OWL_DISTINCT_MEMBERS);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_DISTINCT_MEMBERS;
  if (jresult_OWL_DISTINCT_MEMBERS!=NULL) {
    result_OWL_DISTINCT_MEMBERS=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_DISTINCT_MEMBERS);
    javaEnv->DeleteLocalRef(jresult_OWL_DISTINCT_MEMBERS);
  } else {
    result_OWL_DISTINCT_MEMBERS=NULL;
  }
  this->OWL_DISTINCT_MEMBERS = result_OWL_DISTINCT_MEMBERS;
  jfieldID fid_OWL_SAME_AS = javaEnv->GetStaticFieldID(cls, "OWL_SAME_AS", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_SAME_AS = javaEnv->GetStaticObjectField(cls, fid_OWL_SAME_AS);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_SAME_AS;
  if (jresult_OWL_SAME_AS!=NULL) {
    result_OWL_SAME_AS=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_SAME_AS);
    javaEnv->DeleteLocalRef(jresult_OWL_SAME_AS);
  } else {
    result_OWL_SAME_AS=NULL;
  }
  this->OWL_SAME_AS = result_OWL_SAME_AS;
  jfieldID fid_OWL_DIFFERENT_FROM = javaEnv->GetStaticFieldID(cls, "OWL_DIFFERENT_FROM", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_DIFFERENT_FROM = javaEnv->GetStaticObjectField(cls, fid_OWL_DIFFERENT_FROM);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_DIFFERENT_FROM;
  if (jresult_OWL_DIFFERENT_FROM!=NULL) {
    result_OWL_DIFFERENT_FROM=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_DIFFERENT_FROM);
    javaEnv->DeleteLocalRef(jresult_OWL_DIFFERENT_FROM);
  } else {
    result_OWL_DIFFERENT_FROM=NULL;
  }
  this->OWL_DIFFERENT_FROM = result_OWL_DIFFERENT_FROM;
  jfieldID fid_OWL_DEPRECATED_PROPERTY = javaEnv->GetStaticFieldID(cls, "OWL_DEPRECATED_PROPERTY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_DEPRECATED_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_OWL_DEPRECATED_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_DEPRECATED_PROPERTY;
  if (jresult_OWL_DEPRECATED_PROPERTY!=NULL) {
    result_OWL_DEPRECATED_PROPERTY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_DEPRECATED_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_OWL_DEPRECATED_PROPERTY);
  } else {
    result_OWL_DEPRECATED_PROPERTY=NULL;
  }
  this->OWL_DEPRECATED_PROPERTY = result_OWL_DEPRECATED_PROPERTY;
  jfieldID fid_OWL_EQUIVALENT_PROPERTY = javaEnv->GetStaticFieldID(cls, "OWL_EQUIVALENT_PROPERTY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_EQUIVALENT_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_OWL_EQUIVALENT_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_EQUIVALENT_PROPERTY;
  if (jresult_OWL_EQUIVALENT_PROPERTY!=NULL) {
    result_OWL_EQUIVALENT_PROPERTY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_EQUIVALENT_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_OWL_EQUIVALENT_PROPERTY);
  } else {
    result_OWL_EQUIVALENT_PROPERTY=NULL;
  }
  this->OWL_EQUIVALENT_PROPERTY = result_OWL_EQUIVALENT_PROPERTY;
  jfieldID fid_OWL_DEPRECATED_CLASS = javaEnv->GetStaticFieldID(cls, "OWL_DEPRECATED_CLASS", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_DEPRECATED_CLASS = javaEnv->GetStaticObjectField(cls, fid_OWL_DEPRECATED_CLASS);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_DEPRECATED_CLASS;
  if (jresult_OWL_DEPRECATED_CLASS!=NULL) {
    result_OWL_DEPRECATED_CLASS=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_DEPRECATED_CLASS);
    javaEnv->DeleteLocalRef(jresult_OWL_DEPRECATED_CLASS);
  } else {
    result_OWL_DEPRECATED_CLASS=NULL;
  }
  this->OWL_DEPRECATED_CLASS = result_OWL_DEPRECATED_CLASS;
  jfieldID fid_OWL_DATA_RANGE = javaEnv->GetStaticFieldID(cls, "OWL_DATA_RANGE", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_DATA_RANGE = javaEnv->GetStaticObjectField(cls, fid_OWL_DATA_RANGE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_DATA_RANGE;
  if (jresult_OWL_DATA_RANGE!=NULL) {
    result_OWL_DATA_RANGE=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_DATA_RANGE);
    javaEnv->DeleteLocalRef(jresult_OWL_DATA_RANGE);
  } else {
    result_OWL_DATA_RANGE=NULL;
  }
  this->OWL_DATA_RANGE = result_OWL_DATA_RANGE;
  jfieldID fid_RDFS_DOMAIN = javaEnv->GetStaticFieldID(cls, "RDFS_DOMAIN", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_RDFS_DOMAIN = javaEnv->GetStaticObjectField(cls, fid_RDFS_DOMAIN);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_RDFS_DOMAIN;
  if (jresult_RDFS_DOMAIN!=NULL) {
    result_RDFS_DOMAIN=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_RDFS_DOMAIN);
    javaEnv->DeleteLocalRef(jresult_RDFS_DOMAIN);
  } else {
    result_RDFS_DOMAIN=NULL;
  }
  this->RDFS_DOMAIN = result_RDFS_DOMAIN;
  jfieldID fid_RDFS_RANGE = javaEnv->GetStaticFieldID(cls, "RDFS_RANGE", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_RDFS_RANGE = javaEnv->GetStaticObjectField(cls, fid_RDFS_RANGE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_RDFS_RANGE;
  if (jresult_RDFS_RANGE!=NULL) {
    result_RDFS_RANGE=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_RDFS_RANGE);
    javaEnv->DeleteLocalRef(jresult_RDFS_RANGE);
  } else {
    result_RDFS_RANGE=NULL;
  }
  this->RDFS_RANGE = result_RDFS_RANGE;
  jfieldID fid_RDFS_CLASS = javaEnv->GetStaticFieldID(cls, "RDFS_CLASS", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_RDFS_CLASS = javaEnv->GetStaticObjectField(cls, fid_RDFS_CLASS);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_RDFS_CLASS;
  if (jresult_RDFS_CLASS!=NULL) {
    result_RDFS_CLASS=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_RDFS_CLASS);
    javaEnv->DeleteLocalRef(jresult_RDFS_CLASS);
  } else {
    result_RDFS_CLASS=NULL;
  }
  this->RDFS_CLASS = result_RDFS_CLASS;
  jfieldID fid_RDF_PROPERTY = javaEnv->GetStaticFieldID(cls, "RDF_PROPERTY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_RDF_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_RDF_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_RDF_PROPERTY;
  if (jresult_RDF_PROPERTY!=NULL) {
    result_RDF_PROPERTY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_RDF_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_RDF_PROPERTY);
  } else {
    result_RDF_PROPERTY=NULL;
  }
  this->RDF_PROPERTY = result_RDF_PROPERTY;
  jfieldID fid_RDF_SUBJECT = javaEnv->GetStaticFieldID(cls, "RDF_SUBJECT", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_RDF_SUBJECT = javaEnv->GetStaticObjectField(cls, fid_RDF_SUBJECT);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_RDF_SUBJECT;
  if (jresult_RDF_SUBJECT!=NULL) {
    result_RDF_SUBJECT=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_RDF_SUBJECT);
    javaEnv->DeleteLocalRef(jresult_RDF_SUBJECT);
  } else {
    result_RDF_SUBJECT=NULL;
  }
  this->RDF_SUBJECT = result_RDF_SUBJECT;
  jfieldID fid_RDF_PREDICATE = javaEnv->GetStaticFieldID(cls, "RDF_PREDICATE", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_RDF_PREDICATE = javaEnv->GetStaticObjectField(cls, fid_RDF_PREDICATE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_RDF_PREDICATE;
  if (jresult_RDF_PREDICATE!=NULL) {
    result_RDF_PREDICATE=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_RDF_PREDICATE);
    javaEnv->DeleteLocalRef(jresult_RDF_PREDICATE);
  } else {
    result_RDF_PREDICATE=NULL;
  }
  this->RDF_PREDICATE = result_RDF_PREDICATE;
  jfieldID fid_RDF_OBJECT = javaEnv->GetStaticFieldID(cls, "RDF_OBJECT", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_RDF_OBJECT = javaEnv->GetStaticObjectField(cls, fid_RDF_OBJECT);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_RDF_OBJECT;
  if (jresult_RDF_OBJECT!=NULL) {
    result_RDF_OBJECT=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_RDF_OBJECT);
    javaEnv->DeleteLocalRef(jresult_RDF_OBJECT);
  } else {
    result_RDF_OBJECT=NULL;
  }
  this->RDF_OBJECT = result_RDF_OBJECT;
  jfieldID fid_OWL_SUBJECT = javaEnv->GetStaticFieldID(cls, "OWL_SUBJECT", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_SUBJECT = javaEnv->GetStaticObjectField(cls, fid_OWL_SUBJECT);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_SUBJECT;
  if (jresult_OWL_SUBJECT!=NULL) {
    result_OWL_SUBJECT=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_SUBJECT);
    javaEnv->DeleteLocalRef(jresult_OWL_SUBJECT);
  } else {
    result_OWL_SUBJECT=NULL;
  }
  this->OWL_SUBJECT = result_OWL_SUBJECT;
  jfieldID fid_OWL_PREDICATE = javaEnv->GetStaticFieldID(cls, "OWL_PREDICATE", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_PREDICATE = javaEnv->GetStaticObjectField(cls, fid_OWL_PREDICATE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_PREDICATE;
  if (jresult_OWL_PREDICATE!=NULL) {
    result_OWL_PREDICATE=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_PREDICATE);
    javaEnv->DeleteLocalRef(jresult_OWL_PREDICATE);
  } else {
    result_OWL_PREDICATE=NULL;
  }
  this->OWL_PREDICATE = result_OWL_PREDICATE;
  jfieldID fid_OWL_OBJECT = javaEnv->GetStaticFieldID(cls, "OWL_OBJECT", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_OBJECT = javaEnv->GetStaticObjectField(cls, fid_OWL_OBJECT);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_OBJECT;
  if (jresult_OWL_OBJECT!=NULL) {
    result_OWL_OBJECT=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_OBJECT);
    javaEnv->DeleteLocalRef(jresult_OWL_OBJECT);
  } else {
    result_OWL_OBJECT=NULL;
  }
  this->OWL_OBJECT = result_OWL_OBJECT;
  jfieldID fid_RDF_DESCRIPTION = javaEnv->GetStaticFieldID(cls, "RDF_DESCRIPTION", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_RDF_DESCRIPTION = javaEnv->GetStaticObjectField(cls, fid_RDF_DESCRIPTION);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_RDF_DESCRIPTION;
  if (jresult_RDF_DESCRIPTION!=NULL) {
    result_RDF_DESCRIPTION=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_RDF_DESCRIPTION);
    javaEnv->DeleteLocalRef(jresult_RDF_DESCRIPTION);
  } else {
    result_RDF_DESCRIPTION=NULL;
  }
  this->RDF_DESCRIPTION = result_RDF_DESCRIPTION;
  jfieldID fid_RDF_XML_LITERAL = javaEnv->GetStaticFieldID(cls, "RDF_XML_LITERAL", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_RDF_XML_LITERAL = javaEnv->GetStaticObjectField(cls, fid_RDF_XML_LITERAL);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_RDF_XML_LITERAL;
  if (jresult_RDF_XML_LITERAL!=NULL) {
    result_RDF_XML_LITERAL=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_RDF_XML_LITERAL);
    javaEnv->DeleteLocalRef(jresult_RDF_XML_LITERAL);
  } else {
    result_RDF_XML_LITERAL=NULL;
  }
  this->RDF_XML_LITERAL = result_RDF_XML_LITERAL;
  jfieldID fid_OWL_PRIOR_VERSION = javaEnv->GetStaticFieldID(cls, "OWL_PRIOR_VERSION", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_PRIOR_VERSION = javaEnv->GetStaticObjectField(cls, fid_OWL_PRIOR_VERSION);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_PRIOR_VERSION;
  if (jresult_OWL_PRIOR_VERSION!=NULL) {
    result_OWL_PRIOR_VERSION=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_PRIOR_VERSION);
    javaEnv->DeleteLocalRef(jresult_OWL_PRIOR_VERSION);
  } else {
    result_OWL_PRIOR_VERSION=NULL;
  }
  this->OWL_PRIOR_VERSION = result_OWL_PRIOR_VERSION;
  jfieldID fid_OWL_DEPRECATED = javaEnv->GetStaticFieldID(cls, "OWL_DEPRECATED", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_DEPRECATED = javaEnv->GetStaticObjectField(cls, fid_OWL_DEPRECATED);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_DEPRECATED;
  if (jresult_OWL_DEPRECATED!=NULL) {
    result_OWL_DEPRECATED=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_DEPRECATED);
    javaEnv->DeleteLocalRef(jresult_OWL_DEPRECATED);
  } else {
    result_OWL_DEPRECATED=NULL;
  }
  this->OWL_DEPRECATED = result_OWL_DEPRECATED;
  jfieldID fid_OWL_BACKWARD_COMPATIBLE_WITH = javaEnv->GetStaticFieldID(cls, "OWL_BACKWARD_COMPATIBLE_WITH", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_BACKWARD_COMPATIBLE_WITH = javaEnv->GetStaticObjectField(cls, fid_OWL_BACKWARD_COMPATIBLE_WITH);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_BACKWARD_COMPATIBLE_WITH;
  if (jresult_OWL_BACKWARD_COMPATIBLE_WITH!=NULL) {
    result_OWL_BACKWARD_COMPATIBLE_WITH=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_BACKWARD_COMPATIBLE_WITH);
    javaEnv->DeleteLocalRef(jresult_OWL_BACKWARD_COMPATIBLE_WITH);
  } else {
    result_OWL_BACKWARD_COMPATIBLE_WITH=NULL;
  }
  this->OWL_BACKWARD_COMPATIBLE_WITH = result_OWL_BACKWARD_COMPATIBLE_WITH;
  jfieldID fid_OWL_INCOMPATIBLE_WITH = javaEnv->GetStaticFieldID(cls, "OWL_INCOMPATIBLE_WITH", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_INCOMPATIBLE_WITH = javaEnv->GetStaticObjectField(cls, fid_OWL_INCOMPATIBLE_WITH);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_INCOMPATIBLE_WITH;
  if (jresult_OWL_INCOMPATIBLE_WITH!=NULL) {
    result_OWL_INCOMPATIBLE_WITH=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_INCOMPATIBLE_WITH);
    javaEnv->DeleteLocalRef(jresult_OWL_INCOMPATIBLE_WITH);
  } else {
    result_OWL_INCOMPATIBLE_WITH=NULL;
  }
  this->OWL_INCOMPATIBLE_WITH = result_OWL_INCOMPATIBLE_WITH;
  jfieldID fid_OWL_OBJECT_PROPERTY_DOMAIN = javaEnv->GetStaticFieldID(cls, "OWL_OBJECT_PROPERTY_DOMAIN", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_OBJECT_PROPERTY_DOMAIN = javaEnv->GetStaticObjectField(cls, fid_OWL_OBJECT_PROPERTY_DOMAIN);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_OBJECT_PROPERTY_DOMAIN;
  if (jresult_OWL_OBJECT_PROPERTY_DOMAIN!=NULL) {
    result_OWL_OBJECT_PROPERTY_DOMAIN=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_OBJECT_PROPERTY_DOMAIN);
    javaEnv->DeleteLocalRef(jresult_OWL_OBJECT_PROPERTY_DOMAIN);
  } else {
    result_OWL_OBJECT_PROPERTY_DOMAIN=NULL;
  }
  this->OWL_OBJECT_PROPERTY_DOMAIN = result_OWL_OBJECT_PROPERTY_DOMAIN;
  jfieldID fid_OWL_DATA_PROPERTY_DOMAIN = javaEnv->GetStaticFieldID(cls, "OWL_DATA_PROPERTY_DOMAIN", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_DATA_PROPERTY_DOMAIN = javaEnv->GetStaticObjectField(cls, fid_OWL_DATA_PROPERTY_DOMAIN);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_DATA_PROPERTY_DOMAIN;
  if (jresult_OWL_DATA_PROPERTY_DOMAIN!=NULL) {
    result_OWL_DATA_PROPERTY_DOMAIN=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_DATA_PROPERTY_DOMAIN);
    javaEnv->DeleteLocalRef(jresult_OWL_DATA_PROPERTY_DOMAIN);
  } else {
    result_OWL_DATA_PROPERTY_DOMAIN=NULL;
  }
  this->OWL_DATA_PROPERTY_DOMAIN = result_OWL_DATA_PROPERTY_DOMAIN;
  jfieldID fid_OWL_DATA_PROPERTY_RANGE = javaEnv->GetStaticFieldID(cls, "OWL_DATA_PROPERTY_RANGE", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_DATA_PROPERTY_RANGE = javaEnv->GetStaticObjectField(cls, fid_OWL_DATA_PROPERTY_RANGE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_DATA_PROPERTY_RANGE;
  if (jresult_OWL_DATA_PROPERTY_RANGE!=NULL) {
    result_OWL_DATA_PROPERTY_RANGE=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_DATA_PROPERTY_RANGE);
    javaEnv->DeleteLocalRef(jresult_OWL_DATA_PROPERTY_RANGE);
  } else {
    result_OWL_DATA_PROPERTY_RANGE=NULL;
  }
  this->OWL_DATA_PROPERTY_RANGE = result_OWL_DATA_PROPERTY_RANGE;
  jfieldID fid_OWL_OBJECT_PROPERTY_RANGE = javaEnv->GetStaticFieldID(cls, "OWL_OBJECT_PROPERTY_RANGE", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_OBJECT_PROPERTY_RANGE = javaEnv->GetStaticObjectField(cls, fid_OWL_OBJECT_PROPERTY_RANGE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_OBJECT_PROPERTY_RANGE;
  if (jresult_OWL_OBJECT_PROPERTY_RANGE!=NULL) {
    result_OWL_OBJECT_PROPERTY_RANGE=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_OBJECT_PROPERTY_RANGE);
    javaEnv->DeleteLocalRef(jresult_OWL_OBJECT_PROPERTY_RANGE);
  } else {
    result_OWL_OBJECT_PROPERTY_RANGE=NULL;
  }
  this->OWL_OBJECT_PROPERTY_RANGE = result_OWL_OBJECT_PROPERTY_RANGE;
  jfieldID fid_OWL_SUB_OBJECT_PROPERTY_OF = javaEnv->GetStaticFieldID(cls, "OWL_SUB_OBJECT_PROPERTY_OF", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_SUB_OBJECT_PROPERTY_OF = javaEnv->GetStaticObjectField(cls, fid_OWL_SUB_OBJECT_PROPERTY_OF);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_SUB_OBJECT_PROPERTY_OF;
  if (jresult_OWL_SUB_OBJECT_PROPERTY_OF!=NULL) {
    result_OWL_SUB_OBJECT_PROPERTY_OF=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_SUB_OBJECT_PROPERTY_OF);
    javaEnv->DeleteLocalRef(jresult_OWL_SUB_OBJECT_PROPERTY_OF);
  } else {
    result_OWL_SUB_OBJECT_PROPERTY_OF=NULL;
  }
  this->OWL_SUB_OBJECT_PROPERTY_OF = result_OWL_SUB_OBJECT_PROPERTY_OF;
  jfieldID fid_OWL_SUB_DATA_PROPERTY_OF = javaEnv->GetStaticFieldID(cls, "OWL_SUB_DATA_PROPERTY_OF", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_SUB_DATA_PROPERTY_OF = javaEnv->GetStaticObjectField(cls, fid_OWL_SUB_DATA_PROPERTY_OF);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_SUB_DATA_PROPERTY_OF;
  if (jresult_OWL_SUB_DATA_PROPERTY_OF!=NULL) {
    result_OWL_SUB_DATA_PROPERTY_OF=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_SUB_DATA_PROPERTY_OF);
    javaEnv->DeleteLocalRef(jresult_OWL_SUB_DATA_PROPERTY_OF);
  } else {
    result_OWL_SUB_DATA_PROPERTY_OF=NULL;
  }
  this->OWL_SUB_DATA_PROPERTY_OF = result_OWL_SUB_DATA_PROPERTY_OF;
  jfieldID fid_OWL_DISJOINT_DATA_PROPERTIES = javaEnv->GetStaticFieldID(cls, "OWL_DISJOINT_DATA_PROPERTIES", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_DISJOINT_DATA_PROPERTIES = javaEnv->GetStaticObjectField(cls, fid_OWL_DISJOINT_DATA_PROPERTIES);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_DISJOINT_DATA_PROPERTIES;
  if (jresult_OWL_DISJOINT_DATA_PROPERTIES!=NULL) {
    result_OWL_DISJOINT_DATA_PROPERTIES=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_DISJOINT_DATA_PROPERTIES);
    javaEnv->DeleteLocalRef(jresult_OWL_DISJOINT_DATA_PROPERTIES);
  } else {
    result_OWL_DISJOINT_DATA_PROPERTIES=NULL;
  }
  this->OWL_DISJOINT_DATA_PROPERTIES = result_OWL_DISJOINT_DATA_PROPERTIES;
  jfieldID fid_OWL_DISJOINT_OBJECT_PROPERTIES = javaEnv->GetStaticFieldID(cls, "OWL_DISJOINT_OBJECT_PROPERTIES", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_DISJOINT_OBJECT_PROPERTIES = javaEnv->GetStaticObjectField(cls, fid_OWL_DISJOINT_OBJECT_PROPERTIES);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_DISJOINT_OBJECT_PROPERTIES;
  if (jresult_OWL_DISJOINT_OBJECT_PROPERTIES!=NULL) {
    result_OWL_DISJOINT_OBJECT_PROPERTIES=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_DISJOINT_OBJECT_PROPERTIES);
    javaEnv->DeleteLocalRef(jresult_OWL_DISJOINT_OBJECT_PROPERTIES);
  } else {
    result_OWL_DISJOINT_OBJECT_PROPERTIES=NULL;
  }
  this->OWL_DISJOINT_OBJECT_PROPERTIES = result_OWL_DISJOINT_OBJECT_PROPERTIES;
  jfieldID fid_OWL_PROPERTY_DISJOINT_WITH = javaEnv->GetStaticFieldID(cls, "OWL_PROPERTY_DISJOINT_WITH", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_PROPERTY_DISJOINT_WITH = javaEnv->GetStaticObjectField(cls, fid_OWL_PROPERTY_DISJOINT_WITH);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_PROPERTY_DISJOINT_WITH;
  if (jresult_OWL_PROPERTY_DISJOINT_WITH!=NULL) {
    result_OWL_PROPERTY_DISJOINT_WITH=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_PROPERTY_DISJOINT_WITH);
    javaEnv->DeleteLocalRef(jresult_OWL_PROPERTY_DISJOINT_WITH);
  } else {
    result_OWL_PROPERTY_DISJOINT_WITH=NULL;
  }
  this->OWL_PROPERTY_DISJOINT_WITH = result_OWL_PROPERTY_DISJOINT_WITH;
  jfieldID fid_OWL_EQUIVALENT_DATA_PROPERTIES = javaEnv->GetStaticFieldID(cls, "OWL_EQUIVALENT_DATA_PROPERTIES", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_EQUIVALENT_DATA_PROPERTIES = javaEnv->GetStaticObjectField(cls, fid_OWL_EQUIVALENT_DATA_PROPERTIES);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_EQUIVALENT_DATA_PROPERTIES;
  if (jresult_OWL_EQUIVALENT_DATA_PROPERTIES!=NULL) {
    result_OWL_EQUIVALENT_DATA_PROPERTIES=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_EQUIVALENT_DATA_PROPERTIES);
    javaEnv->DeleteLocalRef(jresult_OWL_EQUIVALENT_DATA_PROPERTIES);
  } else {
    result_OWL_EQUIVALENT_DATA_PROPERTIES=NULL;
  }
  this->OWL_EQUIVALENT_DATA_PROPERTIES = result_OWL_EQUIVALENT_DATA_PROPERTIES;
  jfieldID fid_OWL_EQUIVALENT_OBJECT_PROPERTIES = javaEnv->GetStaticFieldID(cls, "OWL_EQUIVALENT_OBJECT_PROPERTIES", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_EQUIVALENT_OBJECT_PROPERTIES = javaEnv->GetStaticObjectField(cls, fid_OWL_EQUIVALENT_OBJECT_PROPERTIES);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_EQUIVALENT_OBJECT_PROPERTIES;
  if (jresult_OWL_EQUIVALENT_OBJECT_PROPERTIES!=NULL) {
    result_OWL_EQUIVALENT_OBJECT_PROPERTIES=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_EQUIVALENT_OBJECT_PROPERTIES);
    javaEnv->DeleteLocalRef(jresult_OWL_EQUIVALENT_OBJECT_PROPERTIES);
  } else {
    result_OWL_EQUIVALENT_OBJECT_PROPERTIES=NULL;
  }
  this->OWL_EQUIVALENT_OBJECT_PROPERTIES = result_OWL_EQUIVALENT_OBJECT_PROPERTIES;
  jfieldID fid_OWL_FUNCTIONAL_DATA_PROPERTY = javaEnv->GetStaticFieldID(cls, "OWL_FUNCTIONAL_DATA_PROPERTY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_FUNCTIONAL_DATA_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_OWL_FUNCTIONAL_DATA_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_FUNCTIONAL_DATA_PROPERTY;
  if (jresult_OWL_FUNCTIONAL_DATA_PROPERTY!=NULL) {
    result_OWL_FUNCTIONAL_DATA_PROPERTY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_FUNCTIONAL_DATA_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_OWL_FUNCTIONAL_DATA_PROPERTY);
  } else {
    result_OWL_FUNCTIONAL_DATA_PROPERTY=NULL;
  }
  this->OWL_FUNCTIONAL_DATA_PROPERTY = result_OWL_FUNCTIONAL_DATA_PROPERTY;
  jfieldID fid_OWL_FUNCTIONAL_OBJECT_PROPERTY = javaEnv->GetStaticFieldID(cls, "OWL_FUNCTIONAL_OBJECT_PROPERTY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_FUNCTIONAL_OBJECT_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_OWL_FUNCTIONAL_OBJECT_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_FUNCTIONAL_OBJECT_PROPERTY;
  if (jresult_OWL_FUNCTIONAL_OBJECT_PROPERTY!=NULL) {
    result_OWL_FUNCTIONAL_OBJECT_PROPERTY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_FUNCTIONAL_OBJECT_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_OWL_FUNCTIONAL_OBJECT_PROPERTY);
  } else {
    result_OWL_FUNCTIONAL_OBJECT_PROPERTY=NULL;
  }
  this->OWL_FUNCTIONAL_OBJECT_PROPERTY = result_OWL_FUNCTIONAL_OBJECT_PROPERTY;
  jfieldID fid_OWL_ON_CLASS = javaEnv->GetStaticFieldID(cls, "OWL_ON_CLASS", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_ON_CLASS = javaEnv->GetStaticObjectField(cls, fid_OWL_ON_CLASS);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_ON_CLASS;
  if (jresult_OWL_ON_CLASS!=NULL) {
    result_OWL_ON_CLASS=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_ON_CLASS);
    javaEnv->DeleteLocalRef(jresult_OWL_ON_CLASS);
  } else {
    result_OWL_ON_CLASS=NULL;
  }
  this->OWL_ON_CLASS = result_OWL_ON_CLASS;
  jfieldID fid_OWL_ON_DATA_RANGE = javaEnv->GetStaticFieldID(cls, "OWL_ON_DATA_RANGE", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_ON_DATA_RANGE = javaEnv->GetStaticObjectField(cls, fid_OWL_ON_DATA_RANGE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_ON_DATA_RANGE;
  if (jresult_OWL_ON_DATA_RANGE!=NULL) {
    result_OWL_ON_DATA_RANGE=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_ON_DATA_RANGE);
    javaEnv->DeleteLocalRef(jresult_OWL_ON_DATA_RANGE);
  } else {
    result_OWL_ON_DATA_RANGE=NULL;
  }
  this->OWL_ON_DATA_RANGE = result_OWL_ON_DATA_RANGE;
  jfieldID fid_OWL_ON_DATA_TYPE = javaEnv->GetStaticFieldID(cls, "OWL_ON_DATA_TYPE", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_ON_DATA_TYPE = javaEnv->GetStaticObjectField(cls, fid_OWL_ON_DATA_TYPE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_ON_DATA_TYPE;
  if (jresult_OWL_ON_DATA_TYPE!=NULL) {
    result_OWL_ON_DATA_TYPE=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_ON_DATA_TYPE);
    javaEnv->DeleteLocalRef(jresult_OWL_ON_DATA_TYPE);
  } else {
    result_OWL_ON_DATA_TYPE=NULL;
  }
  this->OWL_ON_DATA_TYPE = result_OWL_ON_DATA_TYPE;
  jfieldID fid_OWL_WITH_RESTRICTIONS = javaEnv->GetStaticFieldID(cls, "OWL_WITH_RESTRICTIONS", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_WITH_RESTRICTIONS = javaEnv->GetStaticObjectField(cls, fid_OWL_WITH_RESTRICTIONS);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_WITH_RESTRICTIONS;
  if (jresult_OWL_WITH_RESTRICTIONS!=NULL) {
    result_OWL_WITH_RESTRICTIONS=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_WITH_RESTRICTIONS);
    javaEnv->DeleteLocalRef(jresult_OWL_WITH_RESTRICTIONS);
  } else {
    result_OWL_WITH_RESTRICTIONS=NULL;
  }
  this->OWL_WITH_RESTRICTIONS = result_OWL_WITH_RESTRICTIONS;
  jfieldID fid_OWL_INVERSE_OBJECT_PROPERTY_EXPRESSION = javaEnv->GetStaticFieldID(cls, "OWL_INVERSE_OBJECT_PROPERTY_EXPRESSION", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_INVERSE_OBJECT_PROPERTY_EXPRESSION = javaEnv->GetStaticObjectField(cls, fid_OWL_INVERSE_OBJECT_PROPERTY_EXPRESSION);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_INVERSE_OBJECT_PROPERTY_EXPRESSION;
  if (jresult_OWL_INVERSE_OBJECT_PROPERTY_EXPRESSION!=NULL) {
    result_OWL_INVERSE_OBJECT_PROPERTY_EXPRESSION=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_INVERSE_OBJECT_PROPERTY_EXPRESSION);
    javaEnv->DeleteLocalRef(jresult_OWL_INVERSE_OBJECT_PROPERTY_EXPRESSION);
  } else {
    result_OWL_INVERSE_OBJECT_PROPERTY_EXPRESSION=NULL;
  }
  this->OWL_INVERSE_OBJECT_PROPERTY_EXPRESSION = result_OWL_INVERSE_OBJECT_PROPERTY_EXPRESSION;
  jfieldID fid_OWL_AXIOM = javaEnv->GetStaticFieldID(cls, "OWL_AXIOM", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_AXIOM = javaEnv->GetStaticObjectField(cls, fid_OWL_AXIOM);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_AXIOM;
  if (jresult_OWL_AXIOM!=NULL) {
    result_OWL_AXIOM=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_AXIOM);
    javaEnv->DeleteLocalRef(jresult_OWL_AXIOM);
  } else {
    result_OWL_AXIOM=NULL;
  }
  this->OWL_AXIOM = result_OWL_AXIOM;
  jfieldID fid_OWL_PROPERTY_CHAIN = javaEnv->GetStaticFieldID(cls, "OWL_PROPERTY_CHAIN", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_PROPERTY_CHAIN = javaEnv->GetStaticObjectField(cls, fid_OWL_PROPERTY_CHAIN);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_PROPERTY_CHAIN;
  if (jresult_OWL_PROPERTY_CHAIN!=NULL) {
    result_OWL_PROPERTY_CHAIN=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_PROPERTY_CHAIN);
    javaEnv->DeleteLocalRef(jresult_OWL_PROPERTY_CHAIN);
  } else {
    result_OWL_PROPERTY_CHAIN=NULL;
  }
  this->OWL_PROPERTY_CHAIN = result_OWL_PROPERTY_CHAIN;
  jfieldID fid_OWL_PROPERTY_CHAIN_AXIOM = javaEnv->GetStaticFieldID(cls, "OWL_PROPERTY_CHAIN_AXIOM", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_PROPERTY_CHAIN_AXIOM = javaEnv->GetStaticObjectField(cls, fid_OWL_PROPERTY_CHAIN_AXIOM);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_PROPERTY_CHAIN_AXIOM;
  if (jresult_OWL_PROPERTY_CHAIN_AXIOM!=NULL) {
    result_OWL_PROPERTY_CHAIN_AXIOM=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_PROPERTY_CHAIN_AXIOM);
    javaEnv->DeleteLocalRef(jresult_OWL_PROPERTY_CHAIN_AXIOM);
  } else {
    result_OWL_PROPERTY_CHAIN_AXIOM=NULL;
  }
  this->OWL_PROPERTY_CHAIN_AXIOM = result_OWL_PROPERTY_CHAIN_AXIOM;
  jfieldID fid_OWL_ALL_DISJOINT_CLASSES = javaEnv->GetStaticFieldID(cls, "OWL_ALL_DISJOINT_CLASSES", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_ALL_DISJOINT_CLASSES = javaEnv->GetStaticObjectField(cls, fid_OWL_ALL_DISJOINT_CLASSES);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_ALL_DISJOINT_CLASSES;
  if (jresult_OWL_ALL_DISJOINT_CLASSES!=NULL) {
    result_OWL_ALL_DISJOINT_CLASSES=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_ALL_DISJOINT_CLASSES);
    javaEnv->DeleteLocalRef(jresult_OWL_ALL_DISJOINT_CLASSES);
  } else {
    result_OWL_ALL_DISJOINT_CLASSES=NULL;
  }
  this->OWL_ALL_DISJOINT_CLASSES = result_OWL_ALL_DISJOINT_CLASSES;
  jfieldID fid_OWL_MEMBERS = javaEnv->GetStaticFieldID(cls, "OWL_MEMBERS", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_MEMBERS = javaEnv->GetStaticObjectField(cls, fid_OWL_MEMBERS);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_MEMBERS;
  if (jresult_OWL_MEMBERS!=NULL) {
    result_OWL_MEMBERS=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_MEMBERS);
    javaEnv->DeleteLocalRef(jresult_OWL_MEMBERS);
  } else {
    result_OWL_MEMBERS=NULL;
  }
  this->OWL_MEMBERS = result_OWL_MEMBERS;
  jfieldID fid_OWL_ALL_DISJOINT_PROPERTIES = javaEnv->GetStaticFieldID(cls, "OWL_ALL_DISJOINT_PROPERTIES", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_ALL_DISJOINT_PROPERTIES = javaEnv->GetStaticObjectField(cls, fid_OWL_ALL_DISJOINT_PROPERTIES);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_ALL_DISJOINT_PROPERTIES;
  if (jresult_OWL_ALL_DISJOINT_PROPERTIES!=NULL) {
    result_OWL_ALL_DISJOINT_PROPERTIES=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_ALL_DISJOINT_PROPERTIES);
    javaEnv->DeleteLocalRef(jresult_OWL_ALL_DISJOINT_PROPERTIES);
  } else {
    result_OWL_ALL_DISJOINT_PROPERTIES=NULL;
  }
  this->OWL_ALL_DISJOINT_PROPERTIES = result_OWL_ALL_DISJOINT_PROPERTIES;
  jfieldID fid_OWL_TOP_OBJECT_PROPERTY = javaEnv->GetStaticFieldID(cls, "OWL_TOP_OBJECT_PROPERTY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_TOP_OBJECT_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_OWL_TOP_OBJECT_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_TOP_OBJECT_PROPERTY;
  if (jresult_OWL_TOP_OBJECT_PROPERTY!=NULL) {
    result_OWL_TOP_OBJECT_PROPERTY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_TOP_OBJECT_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_OWL_TOP_OBJECT_PROPERTY);
  } else {
    result_OWL_TOP_OBJECT_PROPERTY=NULL;
  }
  this->OWL_TOP_OBJECT_PROPERTY = result_OWL_TOP_OBJECT_PROPERTY;
  jfieldID fid_OWL_BOTTOM_OBJECT_PROPERTY = javaEnv->GetStaticFieldID(cls, "OWL_BOTTOM_OBJECT_PROPERTY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_BOTTOM_OBJECT_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_OWL_BOTTOM_OBJECT_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_BOTTOM_OBJECT_PROPERTY;
  if (jresult_OWL_BOTTOM_OBJECT_PROPERTY!=NULL) {
    result_OWL_BOTTOM_OBJECT_PROPERTY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_BOTTOM_OBJECT_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_OWL_BOTTOM_OBJECT_PROPERTY);
  } else {
    result_OWL_BOTTOM_OBJECT_PROPERTY=NULL;
  }
  this->OWL_BOTTOM_OBJECT_PROPERTY = result_OWL_BOTTOM_OBJECT_PROPERTY;
  jfieldID fid_OWL_TOP_DATA_PROPERTY = javaEnv->GetStaticFieldID(cls, "OWL_TOP_DATA_PROPERTY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_TOP_DATA_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_OWL_TOP_DATA_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_TOP_DATA_PROPERTY;
  if (jresult_OWL_TOP_DATA_PROPERTY!=NULL) {
    result_OWL_TOP_DATA_PROPERTY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_TOP_DATA_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_OWL_TOP_DATA_PROPERTY);
  } else {
    result_OWL_TOP_DATA_PROPERTY=NULL;
  }
  this->OWL_TOP_DATA_PROPERTY = result_OWL_TOP_DATA_PROPERTY;
  jfieldID fid_OWL_BOTTOM_DATA_PROPERTY = javaEnv->GetStaticFieldID(cls, "OWL_BOTTOM_DATA_PROPERTY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_BOTTOM_DATA_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_OWL_BOTTOM_DATA_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_BOTTOM_DATA_PROPERTY;
  if (jresult_OWL_BOTTOM_DATA_PROPERTY!=NULL) {
    result_OWL_BOTTOM_DATA_PROPERTY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_BOTTOM_DATA_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_OWL_BOTTOM_DATA_PROPERTY);
  } else {
    result_OWL_BOTTOM_DATA_PROPERTY=NULL;
  }
  this->OWL_BOTTOM_DATA_PROPERTY = result_OWL_BOTTOM_DATA_PROPERTY;
  jfieldID fid_OWL_HAS_KEY = javaEnv->GetStaticFieldID(cls, "OWL_HAS_KEY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_HAS_KEY = javaEnv->GetStaticObjectField(cls, fid_OWL_HAS_KEY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_HAS_KEY;
  if (jresult_OWL_HAS_KEY!=NULL) {
    result_OWL_HAS_KEY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_HAS_KEY);
    javaEnv->DeleteLocalRef(jresult_OWL_HAS_KEY);
  } else {
    result_OWL_HAS_KEY=NULL;
  }
  this->OWL_HAS_KEY = result_OWL_HAS_KEY;
  jfieldID fid_OWL_ANNOTATED_SOURCE = javaEnv->GetStaticFieldID(cls, "OWL_ANNOTATED_SOURCE", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_ANNOTATED_SOURCE = javaEnv->GetStaticObjectField(cls, fid_OWL_ANNOTATED_SOURCE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_ANNOTATED_SOURCE;
  if (jresult_OWL_ANNOTATED_SOURCE!=NULL) {
    result_OWL_ANNOTATED_SOURCE=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_ANNOTATED_SOURCE);
    javaEnv->DeleteLocalRef(jresult_OWL_ANNOTATED_SOURCE);
  } else {
    result_OWL_ANNOTATED_SOURCE=NULL;
  }
  this->OWL_ANNOTATED_SOURCE = result_OWL_ANNOTATED_SOURCE;
  jfieldID fid_OWL_ANNOTATED_PROPERTY = javaEnv->GetStaticFieldID(cls, "OWL_ANNOTATED_PROPERTY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_ANNOTATED_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_OWL_ANNOTATED_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_ANNOTATED_PROPERTY;
  if (jresult_OWL_ANNOTATED_PROPERTY!=NULL) {
    result_OWL_ANNOTATED_PROPERTY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_ANNOTATED_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_OWL_ANNOTATED_PROPERTY);
  } else {
    result_OWL_ANNOTATED_PROPERTY=NULL;
  }
  this->OWL_ANNOTATED_PROPERTY = result_OWL_ANNOTATED_PROPERTY;
  jfieldID fid_OWL_ANNOTATED_TARGET = javaEnv->GetStaticFieldID(cls, "OWL_ANNOTATED_TARGET", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_ANNOTATED_TARGET = javaEnv->GetStaticObjectField(cls, fid_OWL_ANNOTATED_TARGET);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_ANNOTATED_TARGET;
  if (jresult_OWL_ANNOTATED_TARGET!=NULL) {
    result_OWL_ANNOTATED_TARGET=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_ANNOTATED_TARGET);
    javaEnv->DeleteLocalRef(jresult_OWL_ANNOTATED_TARGET);
  } else {
    result_OWL_ANNOTATED_TARGET=NULL;
  }
  this->OWL_ANNOTATED_TARGET = result_OWL_ANNOTATED_TARGET;
  jfieldID fid_OWL_SOURCE_INDIVIDUAL = javaEnv->GetStaticFieldID(cls, "OWL_SOURCE_INDIVIDUAL", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_SOURCE_INDIVIDUAL = javaEnv->GetStaticObjectField(cls, fid_OWL_SOURCE_INDIVIDUAL);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_SOURCE_INDIVIDUAL;
  if (jresult_OWL_SOURCE_INDIVIDUAL!=NULL) {
    result_OWL_SOURCE_INDIVIDUAL=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_SOURCE_INDIVIDUAL);
    javaEnv->DeleteLocalRef(jresult_OWL_SOURCE_INDIVIDUAL);
  } else {
    result_OWL_SOURCE_INDIVIDUAL=NULL;
  }
  this->OWL_SOURCE_INDIVIDUAL = result_OWL_SOURCE_INDIVIDUAL;
  jfieldID fid_OWL_ASSERTION_PROPERTY = javaEnv->GetStaticFieldID(cls, "OWL_ASSERTION_PROPERTY", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_ASSERTION_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_OWL_ASSERTION_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_ASSERTION_PROPERTY;
  if (jresult_OWL_ASSERTION_PROPERTY!=NULL) {
    result_OWL_ASSERTION_PROPERTY=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_ASSERTION_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_OWL_ASSERTION_PROPERTY);
  } else {
    result_OWL_ASSERTION_PROPERTY=NULL;
  }
  this->OWL_ASSERTION_PROPERTY = result_OWL_ASSERTION_PROPERTY;
  jfieldID fid_OWL_TARGET_INDIVIDUAL = javaEnv->GetStaticFieldID(cls, "OWL_TARGET_INDIVIDUAL", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_TARGET_INDIVIDUAL = javaEnv->GetStaticObjectField(cls, fid_OWL_TARGET_INDIVIDUAL);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_TARGET_INDIVIDUAL;
  if (jresult_OWL_TARGET_INDIVIDUAL!=NULL) {
    result_OWL_TARGET_INDIVIDUAL=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_TARGET_INDIVIDUAL);
    javaEnv->DeleteLocalRef(jresult_OWL_TARGET_INDIVIDUAL);
  } else {
    result_OWL_TARGET_INDIVIDUAL=NULL;
  }
  this->OWL_TARGET_INDIVIDUAL = result_OWL_TARGET_INDIVIDUAL;
  jfieldID fid_OWL_TARGET_VALUE = javaEnv->GetStaticFieldID(cls, "OWL_TARGET_VALUE", "Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_TARGET_VALUE = javaEnv->GetStaticObjectField(cls, fid_OWL_TARGET_VALUE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result_OWL_TARGET_VALUE;
  if (jresult_OWL_TARGET_VALUE!=NULL) {
    result_OWL_TARGET_VALUE=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult_OWL_TARGET_VALUE);
    javaEnv->DeleteLocalRef(jresult_OWL_TARGET_VALUE);
  } else {
    result_OWL_TARGET_VALUE=NULL;
  }
  this->OWL_TARGET_VALUE = result_OWL_TARGET_VALUE;
  jfieldID fid_BUILT_IN_VOCABULARY_IRIS = javaEnv->GetStaticFieldID(cls, "BUILT_IN_VOCABULARY_IRIS", "Ljava/util/Set;");
  handleJavaException(wrapperIntern);
  jobject jresult_BUILT_IN_VOCABULARY_IRIS = javaEnv->GetStaticObjectField(cls, fid_BUILT_IN_VOCABULARY_IRIS);
  handleJavaException(wrapperIntern);
  java::util::Set* result_BUILT_IN_VOCABULARY_IRIS;
  if (jresult_BUILT_IN_VOCABULARY_IRIS!=NULL) {
    result_BUILT_IN_VOCABULARY_IRIS=new java::util::Set(jresult_BUILT_IN_VOCABULARY_IRIS);
    javaEnv->DeleteLocalRef(jresult_BUILT_IN_VOCABULARY_IRIS);
  } else {
    result_BUILT_IN_VOCABULARY_IRIS=NULL;
  }
  this->BUILT_IN_VOCABULARY_IRIS = result_BUILT_IN_VOCABULARY_IRIS;
  jfieldID fid_BUILT_IN_ANNOTATION_PROPERTY_IRIS = javaEnv->GetStaticFieldID(cls, "BUILT_IN_ANNOTATION_PROPERTY_IRIS", "Ljava/util/Set;");
  handleJavaException(wrapperIntern);
  jobject jresult_BUILT_IN_ANNOTATION_PROPERTY_IRIS = javaEnv->GetStaticObjectField(cls, fid_BUILT_IN_ANNOTATION_PROPERTY_IRIS);
  handleJavaException(wrapperIntern);
  java::util::Set* result_BUILT_IN_ANNOTATION_PROPERTY_IRIS;
  if (jresult_BUILT_IN_ANNOTATION_PROPERTY_IRIS!=NULL) {
    result_BUILT_IN_ANNOTATION_PROPERTY_IRIS=new java::util::Set(jresult_BUILT_IN_ANNOTATION_PROPERTY_IRIS);
    javaEnv->DeleteLocalRef(jresult_BUILT_IN_ANNOTATION_PROPERTY_IRIS);
  } else {
    result_BUILT_IN_ANNOTATION_PROPERTY_IRIS=NULL;
  }
  this->BUILT_IN_ANNOTATION_PROPERTY_IRIS = result_BUILT_IN_ANNOTATION_PROPERTY_IRIS;
}

void OWLRDFVocabulary::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWLRDFVocabulary");
  handleJavaException(wrapperIntern);
}

const char* OWLRDFVocabulary::toString()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWLRDFVocabulary");
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

JavaObjectArray* OWLRDFVocabulary::values()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWLRDFVocabulary");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "values", "()[Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid);
  handleJavaException(wrapperIntern);
  JavaObjectArray* result;
  if (jresult!=NULL) {
    result=new JavaObjectArray((jarray)jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWLRDFVocabulary::valueOf(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWLRDFVocabulary");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
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
  org::semanticweb::owlapi::vocab::OWLRDFVocabulary* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::vocab::OWLRDFVocabulary(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::IRI* OWLRDFVocabulary::getIRI()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWLRDFVocabulary");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getIRI", "()Lorg/semanticweb/owlapi/model/IRI;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::IRI* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::IRI(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

const char* OWLRDFVocabulary::getShortName()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWLRDFVocabulary");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getShortName", "()Ljava/lang/String;");
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

java::net::URI* OWLRDFVocabulary::getURI()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWLRDFVocabulary");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getURI", "()Ljava/net/URI;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::net::URI* result;
  if (jresult!=NULL) {
    result=new java::net::URI(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::vocab::Namespaces* OWLRDFVocabulary::getNamespace()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWLRDFVocabulary");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getNamespace", "()Lorg/semanticweb/owlapi/vocab/Namespaces;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::Namespaces* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::vocab::Namespaces(jresult);
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
