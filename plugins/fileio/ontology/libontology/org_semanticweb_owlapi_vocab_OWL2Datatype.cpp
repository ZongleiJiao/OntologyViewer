#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_vocab_OWL2Datatype.h>
#include <java_lang_Enum.h>
#include <java_lang_String.h>
#include <org_semanticweb_owlapi_model_IRI.h>
#include <java_util_Set.h>
#include <java_util_regex_Pattern.h>
#include <java_net_URI.h>
#include <org_semanticweb_owlapi_vocab_OWL2Datatype__Category.h>
#include <java_util_Collection.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace vocab {

OWL2Datatype::OWL2Datatype(JavaMarker* dummy)
  : java::lang::Enum(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWL2Datatype::OWL2Datatype(jobject obj)
  : java::lang::Enum(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWL2Datatype::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWL2Datatype");
  handleJavaException(wrapperIntern);
  jfieldID fid_RDF_XML_LITERAL = javaEnv->GetStaticFieldID(cls, "RDF_XML_LITERAL", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_RDF_XML_LITERAL = javaEnv->GetStaticObjectField(cls, fid_RDF_XML_LITERAL);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_RDF_XML_LITERAL;
  if (jresult_RDF_XML_LITERAL!=NULL) {
    result_RDF_XML_LITERAL=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_RDF_XML_LITERAL);
    javaEnv->DeleteLocalRef(jresult_RDF_XML_LITERAL);
  } else {
    result_RDF_XML_LITERAL=NULL;
  }
  this->RDF_XML_LITERAL = result_RDF_XML_LITERAL;
  jfieldID fid_RDFS_LITERAL = javaEnv->GetStaticFieldID(cls, "RDFS_LITERAL", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_RDFS_LITERAL = javaEnv->GetStaticObjectField(cls, fid_RDFS_LITERAL);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_RDFS_LITERAL;
  if (jresult_RDFS_LITERAL!=NULL) {
    result_RDFS_LITERAL=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_RDFS_LITERAL);
    javaEnv->DeleteLocalRef(jresult_RDFS_LITERAL);
  } else {
    result_RDFS_LITERAL=NULL;
  }
  this->RDFS_LITERAL = result_RDFS_LITERAL;
  jfieldID fid_RDF_PLAIN_LITERAL = javaEnv->GetStaticFieldID(cls, "RDF_PLAIN_LITERAL", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_RDF_PLAIN_LITERAL = javaEnv->GetStaticObjectField(cls, fid_RDF_PLAIN_LITERAL);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_RDF_PLAIN_LITERAL;
  if (jresult_RDF_PLAIN_LITERAL!=NULL) {
    result_RDF_PLAIN_LITERAL=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_RDF_PLAIN_LITERAL);
    javaEnv->DeleteLocalRef(jresult_RDF_PLAIN_LITERAL);
  } else {
    result_RDF_PLAIN_LITERAL=NULL;
  }
  this->RDF_PLAIN_LITERAL = result_RDF_PLAIN_LITERAL;
  jfieldID fid_OWL_REAL = javaEnv->GetStaticFieldID(cls, "OWL_REAL", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_REAL = javaEnv->GetStaticObjectField(cls, fid_OWL_REAL);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_OWL_REAL;
  if (jresult_OWL_REAL!=NULL) {
    result_OWL_REAL=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_OWL_REAL);
    javaEnv->DeleteLocalRef(jresult_OWL_REAL);
  } else {
    result_OWL_REAL=NULL;
  }
  this->OWL_REAL = result_OWL_REAL;
  jfieldID fid_OWL_RATIONAL = javaEnv->GetStaticFieldID(cls, "OWL_RATIONAL", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_RATIONAL = javaEnv->GetStaticObjectField(cls, fid_OWL_RATIONAL);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_OWL_RATIONAL;
  if (jresult_OWL_RATIONAL!=NULL) {
    result_OWL_RATIONAL=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_OWL_RATIONAL);
    javaEnv->DeleteLocalRef(jresult_OWL_RATIONAL);
  } else {
    result_OWL_RATIONAL=NULL;
  }
  this->OWL_RATIONAL = result_OWL_RATIONAL;
  jfieldID fid_XSD_DECIMAL = javaEnv->GetStaticFieldID(cls, "XSD_DECIMAL", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_XSD_DECIMAL = javaEnv->GetStaticObjectField(cls, fid_XSD_DECIMAL);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_XSD_DECIMAL;
  if (jresult_XSD_DECIMAL!=NULL) {
    result_XSD_DECIMAL=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_XSD_DECIMAL);
    javaEnv->DeleteLocalRef(jresult_XSD_DECIMAL);
  } else {
    result_XSD_DECIMAL=NULL;
  }
  this->XSD_DECIMAL = result_XSD_DECIMAL;
  jfieldID fid_XSD_INTEGER = javaEnv->GetStaticFieldID(cls, "XSD_INTEGER", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_XSD_INTEGER = javaEnv->GetStaticObjectField(cls, fid_XSD_INTEGER);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_XSD_INTEGER;
  if (jresult_XSD_INTEGER!=NULL) {
    result_XSD_INTEGER=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_XSD_INTEGER);
    javaEnv->DeleteLocalRef(jresult_XSD_INTEGER);
  } else {
    result_XSD_INTEGER=NULL;
  }
  this->XSD_INTEGER = result_XSD_INTEGER;
  jfieldID fid_XSD_NON_NEGATIVE_INTEGER = javaEnv->GetStaticFieldID(cls, "XSD_NON_NEGATIVE_INTEGER", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_XSD_NON_NEGATIVE_INTEGER = javaEnv->GetStaticObjectField(cls, fid_XSD_NON_NEGATIVE_INTEGER);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_XSD_NON_NEGATIVE_INTEGER;
  if (jresult_XSD_NON_NEGATIVE_INTEGER!=NULL) {
    result_XSD_NON_NEGATIVE_INTEGER=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_XSD_NON_NEGATIVE_INTEGER);
    javaEnv->DeleteLocalRef(jresult_XSD_NON_NEGATIVE_INTEGER);
  } else {
    result_XSD_NON_NEGATIVE_INTEGER=NULL;
  }
  this->XSD_NON_NEGATIVE_INTEGER = result_XSD_NON_NEGATIVE_INTEGER;
  jfieldID fid_XSD_NON_POSITIVE_INTEGER = javaEnv->GetStaticFieldID(cls, "XSD_NON_POSITIVE_INTEGER", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_XSD_NON_POSITIVE_INTEGER = javaEnv->GetStaticObjectField(cls, fid_XSD_NON_POSITIVE_INTEGER);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_XSD_NON_POSITIVE_INTEGER;
  if (jresult_XSD_NON_POSITIVE_INTEGER!=NULL) {
    result_XSD_NON_POSITIVE_INTEGER=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_XSD_NON_POSITIVE_INTEGER);
    javaEnv->DeleteLocalRef(jresult_XSD_NON_POSITIVE_INTEGER);
  } else {
    result_XSD_NON_POSITIVE_INTEGER=NULL;
  }
  this->XSD_NON_POSITIVE_INTEGER = result_XSD_NON_POSITIVE_INTEGER;
  jfieldID fid_XSD_POSITIVE_INTEGER = javaEnv->GetStaticFieldID(cls, "XSD_POSITIVE_INTEGER", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_XSD_POSITIVE_INTEGER = javaEnv->GetStaticObjectField(cls, fid_XSD_POSITIVE_INTEGER);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_XSD_POSITIVE_INTEGER;
  if (jresult_XSD_POSITIVE_INTEGER!=NULL) {
    result_XSD_POSITIVE_INTEGER=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_XSD_POSITIVE_INTEGER);
    javaEnv->DeleteLocalRef(jresult_XSD_POSITIVE_INTEGER);
  } else {
    result_XSD_POSITIVE_INTEGER=NULL;
  }
  this->XSD_POSITIVE_INTEGER = result_XSD_POSITIVE_INTEGER;
  jfieldID fid_XSD_NEGATIVE_INTEGER = javaEnv->GetStaticFieldID(cls, "XSD_NEGATIVE_INTEGER", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_XSD_NEGATIVE_INTEGER = javaEnv->GetStaticObjectField(cls, fid_XSD_NEGATIVE_INTEGER);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_XSD_NEGATIVE_INTEGER;
  if (jresult_XSD_NEGATIVE_INTEGER!=NULL) {
    result_XSD_NEGATIVE_INTEGER=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_XSD_NEGATIVE_INTEGER);
    javaEnv->DeleteLocalRef(jresult_XSD_NEGATIVE_INTEGER);
  } else {
    result_XSD_NEGATIVE_INTEGER=NULL;
  }
  this->XSD_NEGATIVE_INTEGER = result_XSD_NEGATIVE_INTEGER;
  jfieldID fid_XSD_LONG = javaEnv->GetStaticFieldID(cls, "XSD_LONG", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_XSD_LONG = javaEnv->GetStaticObjectField(cls, fid_XSD_LONG);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_XSD_LONG;
  if (jresult_XSD_LONG!=NULL) {
    result_XSD_LONG=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_XSD_LONG);
    javaEnv->DeleteLocalRef(jresult_XSD_LONG);
  } else {
    result_XSD_LONG=NULL;
  }
  this->XSD_LONG = result_XSD_LONG;
  jfieldID fid_XSD_INT = javaEnv->GetStaticFieldID(cls, "XSD_INT", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_XSD_INT = javaEnv->GetStaticObjectField(cls, fid_XSD_INT);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_XSD_INT;
  if (jresult_XSD_INT!=NULL) {
    result_XSD_INT=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_XSD_INT);
    javaEnv->DeleteLocalRef(jresult_XSD_INT);
  } else {
    result_XSD_INT=NULL;
  }
  this->XSD_INT = result_XSD_INT;
  jfieldID fid_XSD_SHORT = javaEnv->GetStaticFieldID(cls, "XSD_SHORT", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_XSD_SHORT = javaEnv->GetStaticObjectField(cls, fid_XSD_SHORT);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_XSD_SHORT;
  if (jresult_XSD_SHORT!=NULL) {
    result_XSD_SHORT=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_XSD_SHORT);
    javaEnv->DeleteLocalRef(jresult_XSD_SHORT);
  } else {
    result_XSD_SHORT=NULL;
  }
  this->XSD_SHORT = result_XSD_SHORT;
  jfieldID fid_XSD_BYTE = javaEnv->GetStaticFieldID(cls, "XSD_BYTE", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_XSD_BYTE = javaEnv->GetStaticObjectField(cls, fid_XSD_BYTE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_XSD_BYTE;
  if (jresult_XSD_BYTE!=NULL) {
    result_XSD_BYTE=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_XSD_BYTE);
    javaEnv->DeleteLocalRef(jresult_XSD_BYTE);
  } else {
    result_XSD_BYTE=NULL;
  }
  this->XSD_BYTE = result_XSD_BYTE;
  jfieldID fid_XSD_UNSIGNED_LONG = javaEnv->GetStaticFieldID(cls, "XSD_UNSIGNED_LONG", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_XSD_UNSIGNED_LONG = javaEnv->GetStaticObjectField(cls, fid_XSD_UNSIGNED_LONG);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_XSD_UNSIGNED_LONG;
  if (jresult_XSD_UNSIGNED_LONG!=NULL) {
    result_XSD_UNSIGNED_LONG=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_XSD_UNSIGNED_LONG);
    javaEnv->DeleteLocalRef(jresult_XSD_UNSIGNED_LONG);
  } else {
    result_XSD_UNSIGNED_LONG=NULL;
  }
  this->XSD_UNSIGNED_LONG = result_XSD_UNSIGNED_LONG;
  jfieldID fid_XSD_UNSIGNED_INT = javaEnv->GetStaticFieldID(cls, "XSD_UNSIGNED_INT", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_XSD_UNSIGNED_INT = javaEnv->GetStaticObjectField(cls, fid_XSD_UNSIGNED_INT);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_XSD_UNSIGNED_INT;
  if (jresult_XSD_UNSIGNED_INT!=NULL) {
    result_XSD_UNSIGNED_INT=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_XSD_UNSIGNED_INT);
    javaEnv->DeleteLocalRef(jresult_XSD_UNSIGNED_INT);
  } else {
    result_XSD_UNSIGNED_INT=NULL;
  }
  this->XSD_UNSIGNED_INT = result_XSD_UNSIGNED_INT;
  jfieldID fid_XSD_UNSIGNED_SHORT = javaEnv->GetStaticFieldID(cls, "XSD_UNSIGNED_SHORT", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_XSD_UNSIGNED_SHORT = javaEnv->GetStaticObjectField(cls, fid_XSD_UNSIGNED_SHORT);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_XSD_UNSIGNED_SHORT;
  if (jresult_XSD_UNSIGNED_SHORT!=NULL) {
    result_XSD_UNSIGNED_SHORT=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_XSD_UNSIGNED_SHORT);
    javaEnv->DeleteLocalRef(jresult_XSD_UNSIGNED_SHORT);
  } else {
    result_XSD_UNSIGNED_SHORT=NULL;
  }
  this->XSD_UNSIGNED_SHORT = result_XSD_UNSIGNED_SHORT;
  jfieldID fid_XSD_UNSIGNED_BYTE = javaEnv->GetStaticFieldID(cls, "XSD_UNSIGNED_BYTE", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_XSD_UNSIGNED_BYTE = javaEnv->GetStaticObjectField(cls, fid_XSD_UNSIGNED_BYTE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_XSD_UNSIGNED_BYTE;
  if (jresult_XSD_UNSIGNED_BYTE!=NULL) {
    result_XSD_UNSIGNED_BYTE=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_XSD_UNSIGNED_BYTE);
    javaEnv->DeleteLocalRef(jresult_XSD_UNSIGNED_BYTE);
  } else {
    result_XSD_UNSIGNED_BYTE=NULL;
  }
  this->XSD_UNSIGNED_BYTE = result_XSD_UNSIGNED_BYTE;
  jfieldID fid_XSD_DOUBLE = javaEnv->GetStaticFieldID(cls, "XSD_DOUBLE", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_XSD_DOUBLE = javaEnv->GetStaticObjectField(cls, fid_XSD_DOUBLE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_XSD_DOUBLE;
  if (jresult_XSD_DOUBLE!=NULL) {
    result_XSD_DOUBLE=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_XSD_DOUBLE);
    javaEnv->DeleteLocalRef(jresult_XSD_DOUBLE);
  } else {
    result_XSD_DOUBLE=NULL;
  }
  this->XSD_DOUBLE = result_XSD_DOUBLE;
  jfieldID fid_XSD_FLOAT = javaEnv->GetStaticFieldID(cls, "XSD_FLOAT", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_XSD_FLOAT = javaEnv->GetStaticObjectField(cls, fid_XSD_FLOAT);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_XSD_FLOAT;
  if (jresult_XSD_FLOAT!=NULL) {
    result_XSD_FLOAT=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_XSD_FLOAT);
    javaEnv->DeleteLocalRef(jresult_XSD_FLOAT);
  } else {
    result_XSD_FLOAT=NULL;
  }
  this->XSD_FLOAT = result_XSD_FLOAT;
  jfieldID fid_XSD_STRING = javaEnv->GetStaticFieldID(cls, "XSD_STRING", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_XSD_STRING = javaEnv->GetStaticObjectField(cls, fid_XSD_STRING);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_XSD_STRING;
  if (jresult_XSD_STRING!=NULL) {
    result_XSD_STRING=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_XSD_STRING);
    javaEnv->DeleteLocalRef(jresult_XSD_STRING);
  } else {
    result_XSD_STRING=NULL;
  }
  this->XSD_STRING = result_XSD_STRING;
  jfieldID fid_XSD_NORMALIZED_STRING = javaEnv->GetStaticFieldID(cls, "XSD_NORMALIZED_STRING", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_XSD_NORMALIZED_STRING = javaEnv->GetStaticObjectField(cls, fid_XSD_NORMALIZED_STRING);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_XSD_NORMALIZED_STRING;
  if (jresult_XSD_NORMALIZED_STRING!=NULL) {
    result_XSD_NORMALIZED_STRING=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_XSD_NORMALIZED_STRING);
    javaEnv->DeleteLocalRef(jresult_XSD_NORMALIZED_STRING);
  } else {
    result_XSD_NORMALIZED_STRING=NULL;
  }
  this->XSD_NORMALIZED_STRING = result_XSD_NORMALIZED_STRING;
  jfieldID fid_XSD_TOKEN = javaEnv->GetStaticFieldID(cls, "XSD_TOKEN", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_XSD_TOKEN = javaEnv->GetStaticObjectField(cls, fid_XSD_TOKEN);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_XSD_TOKEN;
  if (jresult_XSD_TOKEN!=NULL) {
    result_XSD_TOKEN=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_XSD_TOKEN);
    javaEnv->DeleteLocalRef(jresult_XSD_TOKEN);
  } else {
    result_XSD_TOKEN=NULL;
  }
  this->XSD_TOKEN = result_XSD_TOKEN;
  jfieldID fid_XSD_LANGUAGE = javaEnv->GetStaticFieldID(cls, "XSD_LANGUAGE", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_XSD_LANGUAGE = javaEnv->GetStaticObjectField(cls, fid_XSD_LANGUAGE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_XSD_LANGUAGE;
  if (jresult_XSD_LANGUAGE!=NULL) {
    result_XSD_LANGUAGE=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_XSD_LANGUAGE);
    javaEnv->DeleteLocalRef(jresult_XSD_LANGUAGE);
  } else {
    result_XSD_LANGUAGE=NULL;
  }
  this->XSD_LANGUAGE = result_XSD_LANGUAGE;
  jfieldID fid_XSD_NAME = javaEnv->GetStaticFieldID(cls, "XSD_NAME", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_XSD_NAME = javaEnv->GetStaticObjectField(cls, fid_XSD_NAME);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_XSD_NAME;
  if (jresult_XSD_NAME!=NULL) {
    result_XSD_NAME=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_XSD_NAME);
    javaEnv->DeleteLocalRef(jresult_XSD_NAME);
  } else {
    result_XSD_NAME=NULL;
  }
  this->XSD_NAME = result_XSD_NAME;
  jfieldID fid_XSD_NCNAME = javaEnv->GetStaticFieldID(cls, "XSD_NCNAME", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_XSD_NCNAME = javaEnv->GetStaticObjectField(cls, fid_XSD_NCNAME);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_XSD_NCNAME;
  if (jresult_XSD_NCNAME!=NULL) {
    result_XSD_NCNAME=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_XSD_NCNAME);
    javaEnv->DeleteLocalRef(jresult_XSD_NCNAME);
  } else {
    result_XSD_NCNAME=NULL;
  }
  this->XSD_NCNAME = result_XSD_NCNAME;
  jfieldID fid_XSD_NMTOKEN = javaEnv->GetStaticFieldID(cls, "XSD_NMTOKEN", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_XSD_NMTOKEN = javaEnv->GetStaticObjectField(cls, fid_XSD_NMTOKEN);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_XSD_NMTOKEN;
  if (jresult_XSD_NMTOKEN!=NULL) {
    result_XSD_NMTOKEN=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_XSD_NMTOKEN);
    javaEnv->DeleteLocalRef(jresult_XSD_NMTOKEN);
  } else {
    result_XSD_NMTOKEN=NULL;
  }
  this->XSD_NMTOKEN = result_XSD_NMTOKEN;
  jfieldID fid_XSD_BOOLEAN = javaEnv->GetStaticFieldID(cls, "XSD_BOOLEAN", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_XSD_BOOLEAN = javaEnv->GetStaticObjectField(cls, fid_XSD_BOOLEAN);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_XSD_BOOLEAN;
  if (jresult_XSD_BOOLEAN!=NULL) {
    result_XSD_BOOLEAN=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_XSD_BOOLEAN);
    javaEnv->DeleteLocalRef(jresult_XSD_BOOLEAN);
  } else {
    result_XSD_BOOLEAN=NULL;
  }
  this->XSD_BOOLEAN = result_XSD_BOOLEAN;
  jfieldID fid_XSD_HEX_BINARY = javaEnv->GetStaticFieldID(cls, "XSD_HEX_BINARY", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_XSD_HEX_BINARY = javaEnv->GetStaticObjectField(cls, fid_XSD_HEX_BINARY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_XSD_HEX_BINARY;
  if (jresult_XSD_HEX_BINARY!=NULL) {
    result_XSD_HEX_BINARY=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_XSD_HEX_BINARY);
    javaEnv->DeleteLocalRef(jresult_XSD_HEX_BINARY);
  } else {
    result_XSD_HEX_BINARY=NULL;
  }
  this->XSD_HEX_BINARY = result_XSD_HEX_BINARY;
  jfieldID fid_XSD_BASE_64_BINARY = javaEnv->GetStaticFieldID(cls, "XSD_BASE_64_BINARY", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_XSD_BASE_64_BINARY = javaEnv->GetStaticObjectField(cls, fid_XSD_BASE_64_BINARY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_XSD_BASE_64_BINARY;
  if (jresult_XSD_BASE_64_BINARY!=NULL) {
    result_XSD_BASE_64_BINARY=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_XSD_BASE_64_BINARY);
    javaEnv->DeleteLocalRef(jresult_XSD_BASE_64_BINARY);
  } else {
    result_XSD_BASE_64_BINARY=NULL;
  }
  this->XSD_BASE_64_BINARY = result_XSD_BASE_64_BINARY;
  jfieldID fid_XSD_ANY_URI = javaEnv->GetStaticFieldID(cls, "XSD_ANY_URI", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_XSD_ANY_URI = javaEnv->GetStaticObjectField(cls, fid_XSD_ANY_URI);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_XSD_ANY_URI;
  if (jresult_XSD_ANY_URI!=NULL) {
    result_XSD_ANY_URI=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_XSD_ANY_URI);
    javaEnv->DeleteLocalRef(jresult_XSD_ANY_URI);
  } else {
    result_XSD_ANY_URI=NULL;
  }
  this->XSD_ANY_URI = result_XSD_ANY_URI;
  jfieldID fid_XSD_DATE_TIME = javaEnv->GetStaticFieldID(cls, "XSD_DATE_TIME", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_XSD_DATE_TIME = javaEnv->GetStaticObjectField(cls, fid_XSD_DATE_TIME);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_XSD_DATE_TIME;
  if (jresult_XSD_DATE_TIME!=NULL) {
    result_XSD_DATE_TIME=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_XSD_DATE_TIME);
    javaEnv->DeleteLocalRef(jresult_XSD_DATE_TIME);
  } else {
    result_XSD_DATE_TIME=NULL;
  }
  this->XSD_DATE_TIME = result_XSD_DATE_TIME;
  jfieldID fid_XSD_DATE_TIME_STAMP = javaEnv->GetStaticFieldID(cls, "XSD_DATE_TIME_STAMP", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult_XSD_DATE_TIME_STAMP = javaEnv->GetStaticObjectField(cls, fid_XSD_DATE_TIME_STAMP);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result_XSD_DATE_TIME_STAMP;
  if (jresult_XSD_DATE_TIME_STAMP!=NULL) {
    result_XSD_DATE_TIME_STAMP=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult_XSD_DATE_TIME_STAMP);
    javaEnv->DeleteLocalRef(jresult_XSD_DATE_TIME_STAMP);
  } else {
    result_XSD_DATE_TIME_STAMP=NULL;
  }
  this->XSD_DATE_TIME_STAMP = result_XSD_DATE_TIME_STAMP;
}

void OWL2Datatype::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWL2Datatype");
  handleJavaException(wrapperIntern);
}

JavaObjectArray* OWL2Datatype::values()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWL2Datatype");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "values", "()[Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
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

org::semanticweb::owlapi::vocab::OWL2Datatype* OWL2Datatype::valueOf(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWL2Datatype");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
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
  org::semanticweb::owlapi::vocab::OWL2Datatype* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool OWL2Datatype::isFinite()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWL2Datatype");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isFinite", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::IRI* OWL2Datatype::getIRI()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWL2Datatype");
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

bool OWL2Datatype::isBuiltIn(org::semanticweb::owlapi::model::IRI* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWL2Datatype");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "isBuiltIn", "(Lorg/semanticweb/owlapi/model/IRI;)Z");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jboolean jresult=javaEnv->CallStaticBooleanMethod(cls, mid, jarg1);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::vocab::OWL2Datatype* OWL2Datatype::getDatatype(org::semanticweb::owlapi::model::IRI* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWL2Datatype");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "getDatatype", "(Lorg/semanticweb/owlapi/model/IRI;)Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::util::Set* OWL2Datatype::getDatatypeIRIs()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWL2Datatype");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "getDatatypeIRIs", "()Ljava/util/Set;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid);
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

java::util::regex::Pattern* OWL2Datatype::getPattern()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWL2Datatype");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getPattern", "()Ljava/util/regex/Pattern;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::util::regex::Pattern* result;
  if (jresult!=NULL) {
    result=new java::util::regex::Pattern(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

const char* OWL2Datatype::getShortName()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWL2Datatype");
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

java::net::URI* OWL2Datatype::getURI()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWL2Datatype");
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

org::semanticweb::owlapi::vocab::OWL2Datatype__Category* OWL2Datatype::getCategory()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWL2Datatype");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getCategory", "()Lorg/semanticweb/owlapi/vocab/OWL2Datatype$Category;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype__Category* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::vocab::OWL2Datatype__Category(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool OWL2Datatype::isNumeric()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWL2Datatype");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isNumeric", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::util::Collection* OWL2Datatype::getFacets()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWL2Datatype");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getFacets", "()Ljava/util/Collection;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::util::Collection* result;
  if (jresult!=NULL) {
    result=new java::util::Collection(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool OWL2Datatype::isInLexicalSpace(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWL2Datatype");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isInLexicalSpace", "(Ljava/lang/String;)Z");
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
