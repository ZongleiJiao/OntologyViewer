#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_EntityType.h>
#include <java_lang_Object.h>
#include <java_lang_String.h>
#include <java_util_List.h>
#include <org_semanticweb_owlapi_vocab_OWLRDFVocabulary.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

EntityType::EntityType(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

EntityType::EntityType(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void EntityType::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/EntityType");
  handleJavaException(wrapperIntern);
  jfieldID fid_CLASS = javaEnv->GetStaticFieldID(cls, "CLASS", "Lorg/semanticweb/owlapi/model/EntityType;");
  handleJavaException(wrapperIntern);
  jobject jresult_CLASS = javaEnv->GetStaticObjectField(cls, fid_CLASS);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::EntityType* result_CLASS;
  if (jresult_CLASS!=NULL) {
    result_CLASS=new org::semanticweb::owlapi::model::EntityType(jresult_CLASS);
    javaEnv->DeleteLocalRef(jresult_CLASS);
  } else {
    result_CLASS=NULL;
  }
  this->CLASS = result_CLASS;
  jfieldID fid_OBJECT_PROPERTY = javaEnv->GetStaticFieldID(cls, "OBJECT_PROPERTY", "Lorg/semanticweb/owlapi/model/EntityType;");
  handleJavaException(wrapperIntern);
  jobject jresult_OBJECT_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_OBJECT_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::EntityType* result_OBJECT_PROPERTY;
  if (jresult_OBJECT_PROPERTY!=NULL) {
    result_OBJECT_PROPERTY=new org::semanticweb::owlapi::model::EntityType(jresult_OBJECT_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_OBJECT_PROPERTY);
  } else {
    result_OBJECT_PROPERTY=NULL;
  }
  this->OBJECT_PROPERTY = result_OBJECT_PROPERTY;
  jfieldID fid_DATA_PROPERTY = javaEnv->GetStaticFieldID(cls, "DATA_PROPERTY", "Lorg/semanticweb/owlapi/model/EntityType;");
  handleJavaException(wrapperIntern);
  jobject jresult_DATA_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_DATA_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::EntityType* result_DATA_PROPERTY;
  if (jresult_DATA_PROPERTY!=NULL) {
    result_DATA_PROPERTY=new org::semanticweb::owlapi::model::EntityType(jresult_DATA_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_DATA_PROPERTY);
  } else {
    result_DATA_PROPERTY=NULL;
  }
  this->DATA_PROPERTY = result_DATA_PROPERTY;
  jfieldID fid_ANNOTATION_PROPERTY = javaEnv->GetStaticFieldID(cls, "ANNOTATION_PROPERTY", "Lorg/semanticweb/owlapi/model/EntityType;");
  handleJavaException(wrapperIntern);
  jobject jresult_ANNOTATION_PROPERTY = javaEnv->GetStaticObjectField(cls, fid_ANNOTATION_PROPERTY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::EntityType* result_ANNOTATION_PROPERTY;
  if (jresult_ANNOTATION_PROPERTY!=NULL) {
    result_ANNOTATION_PROPERTY=new org::semanticweb::owlapi::model::EntityType(jresult_ANNOTATION_PROPERTY);
    javaEnv->DeleteLocalRef(jresult_ANNOTATION_PROPERTY);
  } else {
    result_ANNOTATION_PROPERTY=NULL;
  }
  this->ANNOTATION_PROPERTY = result_ANNOTATION_PROPERTY;
  jfieldID fid_NAMED_INDIVIDUAL = javaEnv->GetStaticFieldID(cls, "NAMED_INDIVIDUAL", "Lorg/semanticweb/owlapi/model/EntityType;");
  handleJavaException(wrapperIntern);
  jobject jresult_NAMED_INDIVIDUAL = javaEnv->GetStaticObjectField(cls, fid_NAMED_INDIVIDUAL);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::EntityType* result_NAMED_INDIVIDUAL;
  if (jresult_NAMED_INDIVIDUAL!=NULL) {
    result_NAMED_INDIVIDUAL=new org::semanticweb::owlapi::model::EntityType(jresult_NAMED_INDIVIDUAL);
    javaEnv->DeleteLocalRef(jresult_NAMED_INDIVIDUAL);
  } else {
    result_NAMED_INDIVIDUAL=NULL;
  }
  this->NAMED_INDIVIDUAL = result_NAMED_INDIVIDUAL;
  jfieldID fid_DATATYPE = javaEnv->GetStaticFieldID(cls, "DATATYPE", "Lorg/semanticweb/owlapi/model/EntityType;");
  handleJavaException(wrapperIntern);
  jobject jresult_DATATYPE = javaEnv->GetStaticObjectField(cls, fid_DATATYPE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::EntityType* result_DATATYPE;
  if (jresult_DATATYPE!=NULL) {
    result_DATATYPE=new org::semanticweb::owlapi::model::EntityType(jresult_DATATYPE);
    javaEnv->DeleteLocalRef(jresult_DATATYPE);
  } else {
    result_DATATYPE=NULL;
  }
  this->DATATYPE = result_DATATYPE;
}

void EntityType::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/EntityType");
  handleJavaException(wrapperIntern);
}

const char* EntityType::toString()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/EntityType");
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

java::util::List* EntityType::values()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/EntityType");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "values", "()Ljava/util/List;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid);
  handleJavaException(wrapperIntern);
  java::util::List* result;
  if (jresult!=NULL) {
    result=new java::util::List(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

const char* EntityType::getName()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/EntityType");
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

org::semanticweb::owlapi::vocab::OWLRDFVocabulary* EntityType::getVocabulary()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/EntityType");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getVocabulary", "()Lorg/semanticweb/owlapi/vocab/OWLRDFVocabulary;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
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
}
}
}
}
