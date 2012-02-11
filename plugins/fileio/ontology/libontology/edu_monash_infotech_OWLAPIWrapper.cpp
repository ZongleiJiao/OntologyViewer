#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <edu_monash_infotech_OWLAPIWrapper.h>
#include <java_lang_Object.h>
#include <java_lang_String.h>
#include <org_semanticweb_owlapi_model_OWLClass.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace edu {
namespace monash {
namespace infotech {

OWLAPIWrapper::OWLAPIWrapper(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLAPIWrapper::OWLAPIWrapper(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

OWLAPIWrapper::OWLAPIWrapper()
  : java::lang::Object(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("edu/monash/infotech/OWLAPIWrapper");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "()V");
  handleJavaException(wrapperIntern);
  jobject o = javaEnv->NewObject(cls, mid);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  updateAllVariables(wrapperIntern);
}

void OWLAPIWrapper::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("edu/monash/infotech/OWLAPIWrapper");
  handleJavaException(wrapperIntern);
  jfieldID fid_ENTITIY_TYPE_CLASS = javaEnv->GetFieldID(cls, "ENTITIY_TYPE_CLASS", "Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult_ENTITIY_TYPE_CLASS = javaEnv->GetObjectField(this->getJavaObject(), fid_ENTITIY_TYPE_CLASS);
  handleJavaException(wrapperIntern);
  char* result_ENTITIY_TYPE_CLASS;
  if (jresult_ENTITIY_TYPE_CLASS!=NULL) {
    const char*  jresult_ENTITIY_TYPE_CLASS_bytes = javaEnv->GetStringUTFChars((jstring)jresult_ENTITIY_TYPE_CLASS,NULL);
    handleJavaException(wrapperIntern);
    jsize        jresult_ENTITIY_TYPE_CLASS_size = javaEnv->GetStringUTFLength((jstring)jresult_ENTITIY_TYPE_CLASS);
    handleJavaException(wrapperIntern);
                 result_ENTITIY_TYPE_CLASS = new char[jresult_ENTITIY_TYPE_CLASS_size+1];
    for (int i=0;i<jresult_ENTITIY_TYPE_CLASS_size;i++) {
      result_ENTITIY_TYPE_CLASS[i] = jresult_ENTITIY_TYPE_CLASS_bytes[i];
    }
    result_ENTITIY_TYPE_CLASS[jresult_ENTITIY_TYPE_CLASS_size]=0;
    javaEnv->ReleaseStringUTFChars((jstring)jresult_ENTITIY_TYPE_CLASS, jresult_ENTITIY_TYPE_CLASS_bytes);
    handleJavaException(wrapperIntern);
    javaEnv->DeleteLocalRef(jresult_ENTITIY_TYPE_CLASS);
  } else {
    result_ENTITIY_TYPE_CLASS=NULL;
  }
  this->ENTITIY_TYPE_CLASS = result_ENTITIY_TYPE_CLASS;
  jfieldID fid_ENTITIY_TYPE_DATA_PROPERTY = javaEnv->GetFieldID(cls, "ENTITIY_TYPE_DATA_PROPERTY", "Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult_ENTITIY_TYPE_DATA_PROPERTY = javaEnv->GetObjectField(this->getJavaObject(), fid_ENTITIY_TYPE_DATA_PROPERTY);
  handleJavaException(wrapperIntern);
  char* result_ENTITIY_TYPE_DATA_PROPERTY;
  if (jresult_ENTITIY_TYPE_DATA_PROPERTY!=NULL) {
    const char*  jresult_ENTITIY_TYPE_DATA_PROPERTY_bytes = javaEnv->GetStringUTFChars((jstring)jresult_ENTITIY_TYPE_DATA_PROPERTY,NULL);
    handleJavaException(wrapperIntern);
    jsize        jresult_ENTITIY_TYPE_DATA_PROPERTY_size = javaEnv->GetStringUTFLength((jstring)jresult_ENTITIY_TYPE_DATA_PROPERTY);
    handleJavaException(wrapperIntern);
                 result_ENTITIY_TYPE_DATA_PROPERTY = new char[jresult_ENTITIY_TYPE_DATA_PROPERTY_size+1];
    for (int i=0;i<jresult_ENTITIY_TYPE_DATA_PROPERTY_size;i++) {
      result_ENTITIY_TYPE_DATA_PROPERTY[i] = jresult_ENTITIY_TYPE_DATA_PROPERTY_bytes[i];
    }
    result_ENTITIY_TYPE_DATA_PROPERTY[jresult_ENTITIY_TYPE_DATA_PROPERTY_size]=0;
    javaEnv->ReleaseStringUTFChars((jstring)jresult_ENTITIY_TYPE_DATA_PROPERTY, jresult_ENTITIY_TYPE_DATA_PROPERTY_bytes);
    handleJavaException(wrapperIntern);
    javaEnv->DeleteLocalRef(jresult_ENTITIY_TYPE_DATA_PROPERTY);
  } else {
    result_ENTITIY_TYPE_DATA_PROPERTY=NULL;
  }
  this->ENTITIY_TYPE_DATA_PROPERTY = result_ENTITIY_TYPE_DATA_PROPERTY;
  jfieldID fid_ENTITIY_TYPE_OBJECT_PROPERTY = javaEnv->GetFieldID(cls, "ENTITIY_TYPE_OBJECT_PROPERTY", "Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult_ENTITIY_TYPE_OBJECT_PROPERTY = javaEnv->GetObjectField(this->getJavaObject(), fid_ENTITIY_TYPE_OBJECT_PROPERTY);
  handleJavaException(wrapperIntern);
  char* result_ENTITIY_TYPE_OBJECT_PROPERTY;
  if (jresult_ENTITIY_TYPE_OBJECT_PROPERTY!=NULL) {
    const char*  jresult_ENTITIY_TYPE_OBJECT_PROPERTY_bytes = javaEnv->GetStringUTFChars((jstring)jresult_ENTITIY_TYPE_OBJECT_PROPERTY,NULL);
    handleJavaException(wrapperIntern);
    jsize        jresult_ENTITIY_TYPE_OBJECT_PROPERTY_size = javaEnv->GetStringUTFLength((jstring)jresult_ENTITIY_TYPE_OBJECT_PROPERTY);
    handleJavaException(wrapperIntern);
                 result_ENTITIY_TYPE_OBJECT_PROPERTY = new char[jresult_ENTITIY_TYPE_OBJECT_PROPERTY_size+1];
    for (int i=0;i<jresult_ENTITIY_TYPE_OBJECT_PROPERTY_size;i++) {
      result_ENTITIY_TYPE_OBJECT_PROPERTY[i] = jresult_ENTITIY_TYPE_OBJECT_PROPERTY_bytes[i];
    }
    result_ENTITIY_TYPE_OBJECT_PROPERTY[jresult_ENTITIY_TYPE_OBJECT_PROPERTY_size]=0;
    javaEnv->ReleaseStringUTFChars((jstring)jresult_ENTITIY_TYPE_OBJECT_PROPERTY, jresult_ENTITIY_TYPE_OBJECT_PROPERTY_bytes);
    handleJavaException(wrapperIntern);
    javaEnv->DeleteLocalRef(jresult_ENTITIY_TYPE_OBJECT_PROPERTY);
  } else {
    result_ENTITIY_TYPE_OBJECT_PROPERTY=NULL;
  }
  this->ENTITIY_TYPE_OBJECT_PROPERTY = result_ENTITIY_TYPE_OBJECT_PROPERTY;
  jfieldID fid_PROPERTY_TYPE_FUNCTIONAL = javaEnv->GetFieldID(cls, "PROPERTY_TYPE_FUNCTIONAL", "Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult_PROPERTY_TYPE_FUNCTIONAL = javaEnv->GetObjectField(this->getJavaObject(), fid_PROPERTY_TYPE_FUNCTIONAL);
  handleJavaException(wrapperIntern);
  char* result_PROPERTY_TYPE_FUNCTIONAL;
  if (jresult_PROPERTY_TYPE_FUNCTIONAL!=NULL) {
    const char*  jresult_PROPERTY_TYPE_FUNCTIONAL_bytes = javaEnv->GetStringUTFChars((jstring)jresult_PROPERTY_TYPE_FUNCTIONAL,NULL);
    handleJavaException(wrapperIntern);
    jsize        jresult_PROPERTY_TYPE_FUNCTIONAL_size = javaEnv->GetStringUTFLength((jstring)jresult_PROPERTY_TYPE_FUNCTIONAL);
    handleJavaException(wrapperIntern);
                 result_PROPERTY_TYPE_FUNCTIONAL = new char[jresult_PROPERTY_TYPE_FUNCTIONAL_size+1];
    for (int i=0;i<jresult_PROPERTY_TYPE_FUNCTIONAL_size;i++) {
      result_PROPERTY_TYPE_FUNCTIONAL[i] = jresult_PROPERTY_TYPE_FUNCTIONAL_bytes[i];
    }
    result_PROPERTY_TYPE_FUNCTIONAL[jresult_PROPERTY_TYPE_FUNCTIONAL_size]=0;
    javaEnv->ReleaseStringUTFChars((jstring)jresult_PROPERTY_TYPE_FUNCTIONAL, jresult_PROPERTY_TYPE_FUNCTIONAL_bytes);
    handleJavaException(wrapperIntern);
    javaEnv->DeleteLocalRef(jresult_PROPERTY_TYPE_FUNCTIONAL);
  } else {
    result_PROPERTY_TYPE_FUNCTIONAL=NULL;
  }
  this->PROPERTY_TYPE_FUNCTIONAL = result_PROPERTY_TYPE_FUNCTIONAL;
  jfieldID fid_PROPERTY_TYPE_INVERSE = javaEnv->GetFieldID(cls, "PROPERTY_TYPE_INVERSE", "Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult_PROPERTY_TYPE_INVERSE = javaEnv->GetObjectField(this->getJavaObject(), fid_PROPERTY_TYPE_INVERSE);
  handleJavaException(wrapperIntern);
  char* result_PROPERTY_TYPE_INVERSE;
  if (jresult_PROPERTY_TYPE_INVERSE!=NULL) {
    const char*  jresult_PROPERTY_TYPE_INVERSE_bytes = javaEnv->GetStringUTFChars((jstring)jresult_PROPERTY_TYPE_INVERSE,NULL);
    handleJavaException(wrapperIntern);
    jsize        jresult_PROPERTY_TYPE_INVERSE_size = javaEnv->GetStringUTFLength((jstring)jresult_PROPERTY_TYPE_INVERSE);
    handleJavaException(wrapperIntern);
                 result_PROPERTY_TYPE_INVERSE = new char[jresult_PROPERTY_TYPE_INVERSE_size+1];
    for (int i=0;i<jresult_PROPERTY_TYPE_INVERSE_size;i++) {
      result_PROPERTY_TYPE_INVERSE[i] = jresult_PROPERTY_TYPE_INVERSE_bytes[i];
    }
    result_PROPERTY_TYPE_INVERSE[jresult_PROPERTY_TYPE_INVERSE_size]=0;
    javaEnv->ReleaseStringUTFChars((jstring)jresult_PROPERTY_TYPE_INVERSE, jresult_PROPERTY_TYPE_INVERSE_bytes);
    handleJavaException(wrapperIntern);
    javaEnv->DeleteLocalRef(jresult_PROPERTY_TYPE_INVERSE);
  } else {
    result_PROPERTY_TYPE_INVERSE=NULL;
  }
  this->PROPERTY_TYPE_INVERSE = result_PROPERTY_TYPE_INVERSE;
  jfieldID fid_PROPERTY_TYPE_INVERSE_FUNCTIONAL = javaEnv->GetFieldID(cls, "PROPERTY_TYPE_INVERSE_FUNCTIONAL", "Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult_PROPERTY_TYPE_INVERSE_FUNCTIONAL = javaEnv->GetObjectField(this->getJavaObject(), fid_PROPERTY_TYPE_INVERSE_FUNCTIONAL);
  handleJavaException(wrapperIntern);
  char* result_PROPERTY_TYPE_INVERSE_FUNCTIONAL;
  if (jresult_PROPERTY_TYPE_INVERSE_FUNCTIONAL!=NULL) {
    const char*  jresult_PROPERTY_TYPE_INVERSE_FUNCTIONAL_bytes = javaEnv->GetStringUTFChars((jstring)jresult_PROPERTY_TYPE_INVERSE_FUNCTIONAL,NULL);
    handleJavaException(wrapperIntern);
    jsize        jresult_PROPERTY_TYPE_INVERSE_FUNCTIONAL_size = javaEnv->GetStringUTFLength((jstring)jresult_PROPERTY_TYPE_INVERSE_FUNCTIONAL);
    handleJavaException(wrapperIntern);
                 result_PROPERTY_TYPE_INVERSE_FUNCTIONAL = new char[jresult_PROPERTY_TYPE_INVERSE_FUNCTIONAL_size+1];
    for (int i=0;i<jresult_PROPERTY_TYPE_INVERSE_FUNCTIONAL_size;i++) {
      result_PROPERTY_TYPE_INVERSE_FUNCTIONAL[i] = jresult_PROPERTY_TYPE_INVERSE_FUNCTIONAL_bytes[i];
    }
    result_PROPERTY_TYPE_INVERSE_FUNCTIONAL[jresult_PROPERTY_TYPE_INVERSE_FUNCTIONAL_size]=0;
    javaEnv->ReleaseStringUTFChars((jstring)jresult_PROPERTY_TYPE_INVERSE_FUNCTIONAL, jresult_PROPERTY_TYPE_INVERSE_FUNCTIONAL_bytes);
    handleJavaException(wrapperIntern);
    javaEnv->DeleteLocalRef(jresult_PROPERTY_TYPE_INVERSE_FUNCTIONAL);
  } else {
    result_PROPERTY_TYPE_INVERSE_FUNCTIONAL=NULL;
  }
  this->PROPERTY_TYPE_INVERSE_FUNCTIONAL = result_PROPERTY_TYPE_INVERSE_FUNCTIONAL;
  jfieldID fid_PROPERTY_TYPE_SYMMETRIC = javaEnv->GetFieldID(cls, "PROPERTY_TYPE_SYMMETRIC", "Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult_PROPERTY_TYPE_SYMMETRIC = javaEnv->GetObjectField(this->getJavaObject(), fid_PROPERTY_TYPE_SYMMETRIC);
  handleJavaException(wrapperIntern);
  char* result_PROPERTY_TYPE_SYMMETRIC;
  if (jresult_PROPERTY_TYPE_SYMMETRIC!=NULL) {
    const char*  jresult_PROPERTY_TYPE_SYMMETRIC_bytes = javaEnv->GetStringUTFChars((jstring)jresult_PROPERTY_TYPE_SYMMETRIC,NULL);
    handleJavaException(wrapperIntern);
    jsize        jresult_PROPERTY_TYPE_SYMMETRIC_size = javaEnv->GetStringUTFLength((jstring)jresult_PROPERTY_TYPE_SYMMETRIC);
    handleJavaException(wrapperIntern);
                 result_PROPERTY_TYPE_SYMMETRIC = new char[jresult_PROPERTY_TYPE_SYMMETRIC_size+1];
    for (int i=0;i<jresult_PROPERTY_TYPE_SYMMETRIC_size;i++) {
      result_PROPERTY_TYPE_SYMMETRIC[i] = jresult_PROPERTY_TYPE_SYMMETRIC_bytes[i];
    }
    result_PROPERTY_TYPE_SYMMETRIC[jresult_PROPERTY_TYPE_SYMMETRIC_size]=0;
    javaEnv->ReleaseStringUTFChars((jstring)jresult_PROPERTY_TYPE_SYMMETRIC, jresult_PROPERTY_TYPE_SYMMETRIC_bytes);
    handleJavaException(wrapperIntern);
    javaEnv->DeleteLocalRef(jresult_PROPERTY_TYPE_SYMMETRIC);
  } else {
    result_PROPERTY_TYPE_SYMMETRIC=NULL;
  }
  this->PROPERTY_TYPE_SYMMETRIC = result_PROPERTY_TYPE_SYMMETRIC;
  jfieldID fid_PROPERTY_TYPE_ASYMMETRIC = javaEnv->GetFieldID(cls, "PROPERTY_TYPE_ASYMMETRIC", "Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult_PROPERTY_TYPE_ASYMMETRIC = javaEnv->GetObjectField(this->getJavaObject(), fid_PROPERTY_TYPE_ASYMMETRIC);
  handleJavaException(wrapperIntern);
  char* result_PROPERTY_TYPE_ASYMMETRIC;
  if (jresult_PROPERTY_TYPE_ASYMMETRIC!=NULL) {
    const char*  jresult_PROPERTY_TYPE_ASYMMETRIC_bytes = javaEnv->GetStringUTFChars((jstring)jresult_PROPERTY_TYPE_ASYMMETRIC,NULL);
    handleJavaException(wrapperIntern);
    jsize        jresult_PROPERTY_TYPE_ASYMMETRIC_size = javaEnv->GetStringUTFLength((jstring)jresult_PROPERTY_TYPE_ASYMMETRIC);
    handleJavaException(wrapperIntern);
                 result_PROPERTY_TYPE_ASYMMETRIC = new char[jresult_PROPERTY_TYPE_ASYMMETRIC_size+1];
    for (int i=0;i<jresult_PROPERTY_TYPE_ASYMMETRIC_size;i++) {
      result_PROPERTY_TYPE_ASYMMETRIC[i] = jresult_PROPERTY_TYPE_ASYMMETRIC_bytes[i];
    }
    result_PROPERTY_TYPE_ASYMMETRIC[jresult_PROPERTY_TYPE_ASYMMETRIC_size]=0;
    javaEnv->ReleaseStringUTFChars((jstring)jresult_PROPERTY_TYPE_ASYMMETRIC, jresult_PROPERTY_TYPE_ASYMMETRIC_bytes);
    handleJavaException(wrapperIntern);
    javaEnv->DeleteLocalRef(jresult_PROPERTY_TYPE_ASYMMETRIC);
  } else {
    result_PROPERTY_TYPE_ASYMMETRIC=NULL;
  }
  this->PROPERTY_TYPE_ASYMMETRIC = result_PROPERTY_TYPE_ASYMMETRIC;
  jfieldID fid_PROPERTY_TYPE_TRANSITIVE = javaEnv->GetFieldID(cls, "PROPERTY_TYPE_TRANSITIVE", "Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult_PROPERTY_TYPE_TRANSITIVE = javaEnv->GetObjectField(this->getJavaObject(), fid_PROPERTY_TYPE_TRANSITIVE);
  handleJavaException(wrapperIntern);
  char* result_PROPERTY_TYPE_TRANSITIVE;
  if (jresult_PROPERTY_TYPE_TRANSITIVE!=NULL) {
    const char*  jresult_PROPERTY_TYPE_TRANSITIVE_bytes = javaEnv->GetStringUTFChars((jstring)jresult_PROPERTY_TYPE_TRANSITIVE,NULL);
    handleJavaException(wrapperIntern);
    jsize        jresult_PROPERTY_TYPE_TRANSITIVE_size = javaEnv->GetStringUTFLength((jstring)jresult_PROPERTY_TYPE_TRANSITIVE);
    handleJavaException(wrapperIntern);
                 result_PROPERTY_TYPE_TRANSITIVE = new char[jresult_PROPERTY_TYPE_TRANSITIVE_size+1];
    for (int i=0;i<jresult_PROPERTY_TYPE_TRANSITIVE_size;i++) {
      result_PROPERTY_TYPE_TRANSITIVE[i] = jresult_PROPERTY_TYPE_TRANSITIVE_bytes[i];
    }
    result_PROPERTY_TYPE_TRANSITIVE[jresult_PROPERTY_TYPE_TRANSITIVE_size]=0;
    javaEnv->ReleaseStringUTFChars((jstring)jresult_PROPERTY_TYPE_TRANSITIVE, jresult_PROPERTY_TYPE_TRANSITIVE_bytes);
    handleJavaException(wrapperIntern);
    javaEnv->DeleteLocalRef(jresult_PROPERTY_TYPE_TRANSITIVE);
  } else {
    result_PROPERTY_TYPE_TRANSITIVE=NULL;
  }
  this->PROPERTY_TYPE_TRANSITIVE = result_PROPERTY_TYPE_TRANSITIVE;
  jfieldID fid_PROPERTY_TYPE_REFLEXIVE = javaEnv->GetFieldID(cls, "PROPERTY_TYPE_REFLEXIVE", "Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult_PROPERTY_TYPE_REFLEXIVE = javaEnv->GetObjectField(this->getJavaObject(), fid_PROPERTY_TYPE_REFLEXIVE);
  handleJavaException(wrapperIntern);
  char* result_PROPERTY_TYPE_REFLEXIVE;
  if (jresult_PROPERTY_TYPE_REFLEXIVE!=NULL) {
    const char*  jresult_PROPERTY_TYPE_REFLEXIVE_bytes = javaEnv->GetStringUTFChars((jstring)jresult_PROPERTY_TYPE_REFLEXIVE,NULL);
    handleJavaException(wrapperIntern);
    jsize        jresult_PROPERTY_TYPE_REFLEXIVE_size = javaEnv->GetStringUTFLength((jstring)jresult_PROPERTY_TYPE_REFLEXIVE);
    handleJavaException(wrapperIntern);
                 result_PROPERTY_TYPE_REFLEXIVE = new char[jresult_PROPERTY_TYPE_REFLEXIVE_size+1];
    for (int i=0;i<jresult_PROPERTY_TYPE_REFLEXIVE_size;i++) {
      result_PROPERTY_TYPE_REFLEXIVE[i] = jresult_PROPERTY_TYPE_REFLEXIVE_bytes[i];
    }
    result_PROPERTY_TYPE_REFLEXIVE[jresult_PROPERTY_TYPE_REFLEXIVE_size]=0;
    javaEnv->ReleaseStringUTFChars((jstring)jresult_PROPERTY_TYPE_REFLEXIVE, jresult_PROPERTY_TYPE_REFLEXIVE_bytes);
    handleJavaException(wrapperIntern);
    javaEnv->DeleteLocalRef(jresult_PROPERTY_TYPE_REFLEXIVE);
  } else {
    result_PROPERTY_TYPE_REFLEXIVE=NULL;
  }
  this->PROPERTY_TYPE_REFLEXIVE = result_PROPERTY_TYPE_REFLEXIVE;
  jfieldID fid_PROPERTY_TYPE_IRREFLEXIVE = javaEnv->GetFieldID(cls, "PROPERTY_TYPE_IRREFLEXIVE", "Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult_PROPERTY_TYPE_IRREFLEXIVE = javaEnv->GetObjectField(this->getJavaObject(), fid_PROPERTY_TYPE_IRREFLEXIVE);
  handleJavaException(wrapperIntern);
  char* result_PROPERTY_TYPE_IRREFLEXIVE;
  if (jresult_PROPERTY_TYPE_IRREFLEXIVE!=NULL) {
    const char*  jresult_PROPERTY_TYPE_IRREFLEXIVE_bytes = javaEnv->GetStringUTFChars((jstring)jresult_PROPERTY_TYPE_IRREFLEXIVE,NULL);
    handleJavaException(wrapperIntern);
    jsize        jresult_PROPERTY_TYPE_IRREFLEXIVE_size = javaEnv->GetStringUTFLength((jstring)jresult_PROPERTY_TYPE_IRREFLEXIVE);
    handleJavaException(wrapperIntern);
                 result_PROPERTY_TYPE_IRREFLEXIVE = new char[jresult_PROPERTY_TYPE_IRREFLEXIVE_size+1];
    for (int i=0;i<jresult_PROPERTY_TYPE_IRREFLEXIVE_size;i++) {
      result_PROPERTY_TYPE_IRREFLEXIVE[i] = jresult_PROPERTY_TYPE_IRREFLEXIVE_bytes[i];
    }
    result_PROPERTY_TYPE_IRREFLEXIVE[jresult_PROPERTY_TYPE_IRREFLEXIVE_size]=0;
    javaEnv->ReleaseStringUTFChars((jstring)jresult_PROPERTY_TYPE_IRREFLEXIVE, jresult_PROPERTY_TYPE_IRREFLEXIVE_bytes);
    handleJavaException(wrapperIntern);
    javaEnv->DeleteLocalRef(jresult_PROPERTY_TYPE_IRREFLEXIVE);
  } else {
    result_PROPERTY_TYPE_IRREFLEXIVE=NULL;
  }
  this->PROPERTY_TYPE_IRREFLEXIVE = result_PROPERTY_TYPE_IRREFLEXIVE;
  jfieldID fid_SPLITER = javaEnv->GetFieldID(cls, "SPLITER", "Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult_SPLITER = javaEnv->GetObjectField(this->getJavaObject(), fid_SPLITER);
  handleJavaException(wrapperIntern);
  char* result_SPLITER;
  if (jresult_SPLITER!=NULL) {
    const char*  jresult_SPLITER_bytes = javaEnv->GetStringUTFChars((jstring)jresult_SPLITER,NULL);
    handleJavaException(wrapperIntern);
    jsize        jresult_SPLITER_size = javaEnv->GetStringUTFLength((jstring)jresult_SPLITER);
    handleJavaException(wrapperIntern);
                 result_SPLITER = new char[jresult_SPLITER_size+1];
    for (int i=0;i<jresult_SPLITER_size;i++) {
      result_SPLITER[i] = jresult_SPLITER_bytes[i];
    }
    result_SPLITER[jresult_SPLITER_size]=0;
    javaEnv->ReleaseStringUTFChars((jstring)jresult_SPLITER, jresult_SPLITER_bytes);
    handleJavaException(wrapperIntern);
    javaEnv->DeleteLocalRef(jresult_SPLITER);
  } else {
    result_SPLITER=NULL;
  }
  this->SPLITER = result_SPLITER;
  jfieldID fid_ENTITIY_TYPE_CLASS_SHORT = javaEnv->GetFieldID(cls, "ENTITIY_TYPE_CLASS_SHORT", "Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult_ENTITIY_TYPE_CLASS_SHORT = javaEnv->GetObjectField(this->getJavaObject(), fid_ENTITIY_TYPE_CLASS_SHORT);
  handleJavaException(wrapperIntern);
  char* result_ENTITIY_TYPE_CLASS_SHORT;
  if (jresult_ENTITIY_TYPE_CLASS_SHORT!=NULL) {
    const char*  jresult_ENTITIY_TYPE_CLASS_SHORT_bytes = javaEnv->GetStringUTFChars((jstring)jresult_ENTITIY_TYPE_CLASS_SHORT,NULL);
    handleJavaException(wrapperIntern);
    jsize        jresult_ENTITIY_TYPE_CLASS_SHORT_size = javaEnv->GetStringUTFLength((jstring)jresult_ENTITIY_TYPE_CLASS_SHORT);
    handleJavaException(wrapperIntern);
                 result_ENTITIY_TYPE_CLASS_SHORT = new char[jresult_ENTITIY_TYPE_CLASS_SHORT_size+1];
    for (int i=0;i<jresult_ENTITIY_TYPE_CLASS_SHORT_size;i++) {
      result_ENTITIY_TYPE_CLASS_SHORT[i] = jresult_ENTITIY_TYPE_CLASS_SHORT_bytes[i];
    }
    result_ENTITIY_TYPE_CLASS_SHORT[jresult_ENTITIY_TYPE_CLASS_SHORT_size]=0;
    javaEnv->ReleaseStringUTFChars((jstring)jresult_ENTITIY_TYPE_CLASS_SHORT, jresult_ENTITIY_TYPE_CLASS_SHORT_bytes);
    handleJavaException(wrapperIntern);
    javaEnv->DeleteLocalRef(jresult_ENTITIY_TYPE_CLASS_SHORT);
  } else {
    result_ENTITIY_TYPE_CLASS_SHORT=NULL;
  }
  this->ENTITIY_TYPE_CLASS_SHORT = result_ENTITIY_TYPE_CLASS_SHORT;
  jfieldID fid_ENTITIY_TYPE_DATA_PROPERTY_SHORT = javaEnv->GetFieldID(cls, "ENTITIY_TYPE_DATA_PROPERTY_SHORT", "Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult_ENTITIY_TYPE_DATA_PROPERTY_SHORT = javaEnv->GetObjectField(this->getJavaObject(), fid_ENTITIY_TYPE_DATA_PROPERTY_SHORT);
  handleJavaException(wrapperIntern);
  char* result_ENTITIY_TYPE_DATA_PROPERTY_SHORT;
  if (jresult_ENTITIY_TYPE_DATA_PROPERTY_SHORT!=NULL) {
    const char*  jresult_ENTITIY_TYPE_DATA_PROPERTY_SHORT_bytes = javaEnv->GetStringUTFChars((jstring)jresult_ENTITIY_TYPE_DATA_PROPERTY_SHORT,NULL);
    handleJavaException(wrapperIntern);
    jsize        jresult_ENTITIY_TYPE_DATA_PROPERTY_SHORT_size = javaEnv->GetStringUTFLength((jstring)jresult_ENTITIY_TYPE_DATA_PROPERTY_SHORT);
    handleJavaException(wrapperIntern);
                 result_ENTITIY_TYPE_DATA_PROPERTY_SHORT = new char[jresult_ENTITIY_TYPE_DATA_PROPERTY_SHORT_size+1];
    for (int i=0;i<jresult_ENTITIY_TYPE_DATA_PROPERTY_SHORT_size;i++) {
      result_ENTITIY_TYPE_DATA_PROPERTY_SHORT[i] = jresult_ENTITIY_TYPE_DATA_PROPERTY_SHORT_bytes[i];
    }
    result_ENTITIY_TYPE_DATA_PROPERTY_SHORT[jresult_ENTITIY_TYPE_DATA_PROPERTY_SHORT_size]=0;
    javaEnv->ReleaseStringUTFChars((jstring)jresult_ENTITIY_TYPE_DATA_PROPERTY_SHORT, jresult_ENTITIY_TYPE_DATA_PROPERTY_SHORT_bytes);
    handleJavaException(wrapperIntern);
    javaEnv->DeleteLocalRef(jresult_ENTITIY_TYPE_DATA_PROPERTY_SHORT);
  } else {
    result_ENTITIY_TYPE_DATA_PROPERTY_SHORT=NULL;
  }
  this->ENTITIY_TYPE_DATA_PROPERTY_SHORT = result_ENTITIY_TYPE_DATA_PROPERTY_SHORT;
  jfieldID fid_ENTITIY_TYPE_OBJECT_PROPERTY_SHORT = javaEnv->GetFieldID(cls, "ENTITIY_TYPE_OBJECT_PROPERTY_SHORT", "Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult_ENTITIY_TYPE_OBJECT_PROPERTY_SHORT = javaEnv->GetObjectField(this->getJavaObject(), fid_ENTITIY_TYPE_OBJECT_PROPERTY_SHORT);
  handleJavaException(wrapperIntern);
  char* result_ENTITIY_TYPE_OBJECT_PROPERTY_SHORT;
  if (jresult_ENTITIY_TYPE_OBJECT_PROPERTY_SHORT!=NULL) {
    const char*  jresult_ENTITIY_TYPE_OBJECT_PROPERTY_SHORT_bytes = javaEnv->GetStringUTFChars((jstring)jresult_ENTITIY_TYPE_OBJECT_PROPERTY_SHORT,NULL);
    handleJavaException(wrapperIntern);
    jsize        jresult_ENTITIY_TYPE_OBJECT_PROPERTY_SHORT_size = javaEnv->GetStringUTFLength((jstring)jresult_ENTITIY_TYPE_OBJECT_PROPERTY_SHORT);
    handleJavaException(wrapperIntern);
                 result_ENTITIY_TYPE_OBJECT_PROPERTY_SHORT = new char[jresult_ENTITIY_TYPE_OBJECT_PROPERTY_SHORT_size+1];
    for (int i=0;i<jresult_ENTITIY_TYPE_OBJECT_PROPERTY_SHORT_size;i++) {
      result_ENTITIY_TYPE_OBJECT_PROPERTY_SHORT[i] = jresult_ENTITIY_TYPE_OBJECT_PROPERTY_SHORT_bytes[i];
    }
    result_ENTITIY_TYPE_OBJECT_PROPERTY_SHORT[jresult_ENTITIY_TYPE_OBJECT_PROPERTY_SHORT_size]=0;
    javaEnv->ReleaseStringUTFChars((jstring)jresult_ENTITIY_TYPE_OBJECT_PROPERTY_SHORT, jresult_ENTITIY_TYPE_OBJECT_PROPERTY_SHORT_bytes);
    handleJavaException(wrapperIntern);
    javaEnv->DeleteLocalRef(jresult_ENTITIY_TYPE_OBJECT_PROPERTY_SHORT);
  } else {
    result_ENTITIY_TYPE_OBJECT_PROPERTY_SHORT=NULL;
  }
  this->ENTITIY_TYPE_OBJECT_PROPERTY_SHORT = result_ENTITIY_TYPE_OBJECT_PROPERTY_SHORT;
  jfieldID fid_PROPERTY_TYPE_FUNCTIONAL_SHORT = javaEnv->GetFieldID(cls, "PROPERTY_TYPE_FUNCTIONAL_SHORT", "Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult_PROPERTY_TYPE_FUNCTIONAL_SHORT = javaEnv->GetObjectField(this->getJavaObject(), fid_PROPERTY_TYPE_FUNCTIONAL_SHORT);
  handleJavaException(wrapperIntern);
  char* result_PROPERTY_TYPE_FUNCTIONAL_SHORT;
  if (jresult_PROPERTY_TYPE_FUNCTIONAL_SHORT!=NULL) {
    const char*  jresult_PROPERTY_TYPE_FUNCTIONAL_SHORT_bytes = javaEnv->GetStringUTFChars((jstring)jresult_PROPERTY_TYPE_FUNCTIONAL_SHORT,NULL);
    handleJavaException(wrapperIntern);
    jsize        jresult_PROPERTY_TYPE_FUNCTIONAL_SHORT_size = javaEnv->GetStringUTFLength((jstring)jresult_PROPERTY_TYPE_FUNCTIONAL_SHORT);
    handleJavaException(wrapperIntern);
                 result_PROPERTY_TYPE_FUNCTIONAL_SHORT = new char[jresult_PROPERTY_TYPE_FUNCTIONAL_SHORT_size+1];
    for (int i=0;i<jresult_PROPERTY_TYPE_FUNCTIONAL_SHORT_size;i++) {
      result_PROPERTY_TYPE_FUNCTIONAL_SHORT[i] = jresult_PROPERTY_TYPE_FUNCTIONAL_SHORT_bytes[i];
    }
    result_PROPERTY_TYPE_FUNCTIONAL_SHORT[jresult_PROPERTY_TYPE_FUNCTIONAL_SHORT_size]=0;
    javaEnv->ReleaseStringUTFChars((jstring)jresult_PROPERTY_TYPE_FUNCTIONAL_SHORT, jresult_PROPERTY_TYPE_FUNCTIONAL_SHORT_bytes);
    handleJavaException(wrapperIntern);
    javaEnv->DeleteLocalRef(jresult_PROPERTY_TYPE_FUNCTIONAL_SHORT);
  } else {
    result_PROPERTY_TYPE_FUNCTIONAL_SHORT=NULL;
  }
  this->PROPERTY_TYPE_FUNCTIONAL_SHORT = result_PROPERTY_TYPE_FUNCTIONAL_SHORT;
  jfieldID fid_PROPERTY_TYPE_INVERSE_SHORT = javaEnv->GetFieldID(cls, "PROPERTY_TYPE_INVERSE_SHORT", "Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult_PROPERTY_TYPE_INVERSE_SHORT = javaEnv->GetObjectField(this->getJavaObject(), fid_PROPERTY_TYPE_INVERSE_SHORT);
  handleJavaException(wrapperIntern);
  char* result_PROPERTY_TYPE_INVERSE_SHORT;
  if (jresult_PROPERTY_TYPE_INVERSE_SHORT!=NULL) {
    const char*  jresult_PROPERTY_TYPE_INVERSE_SHORT_bytes = javaEnv->GetStringUTFChars((jstring)jresult_PROPERTY_TYPE_INVERSE_SHORT,NULL);
    handleJavaException(wrapperIntern);
    jsize        jresult_PROPERTY_TYPE_INVERSE_SHORT_size = javaEnv->GetStringUTFLength((jstring)jresult_PROPERTY_TYPE_INVERSE_SHORT);
    handleJavaException(wrapperIntern);
                 result_PROPERTY_TYPE_INVERSE_SHORT = new char[jresult_PROPERTY_TYPE_INVERSE_SHORT_size+1];
    for (int i=0;i<jresult_PROPERTY_TYPE_INVERSE_SHORT_size;i++) {
      result_PROPERTY_TYPE_INVERSE_SHORT[i] = jresult_PROPERTY_TYPE_INVERSE_SHORT_bytes[i];
    }
    result_PROPERTY_TYPE_INVERSE_SHORT[jresult_PROPERTY_TYPE_INVERSE_SHORT_size]=0;
    javaEnv->ReleaseStringUTFChars((jstring)jresult_PROPERTY_TYPE_INVERSE_SHORT, jresult_PROPERTY_TYPE_INVERSE_SHORT_bytes);
    handleJavaException(wrapperIntern);
    javaEnv->DeleteLocalRef(jresult_PROPERTY_TYPE_INVERSE_SHORT);
  } else {
    result_PROPERTY_TYPE_INVERSE_SHORT=NULL;
  }
  this->PROPERTY_TYPE_INVERSE_SHORT = result_PROPERTY_TYPE_INVERSE_SHORT;
  jfieldID fid_PROPERTY_TYPE_INVERSE_FUNCTIONAL_SHORT = javaEnv->GetFieldID(cls, "PROPERTY_TYPE_INVERSE_FUNCTIONAL_SHORT", "Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult_PROPERTY_TYPE_INVERSE_FUNCTIONAL_SHORT = javaEnv->GetObjectField(this->getJavaObject(), fid_PROPERTY_TYPE_INVERSE_FUNCTIONAL_SHORT);
  handleJavaException(wrapperIntern);
  char* result_PROPERTY_TYPE_INVERSE_FUNCTIONAL_SHORT;
  if (jresult_PROPERTY_TYPE_INVERSE_FUNCTIONAL_SHORT!=NULL) {
    const char*  jresult_PROPERTY_TYPE_INVERSE_FUNCTIONAL_SHORT_bytes = javaEnv->GetStringUTFChars((jstring)jresult_PROPERTY_TYPE_INVERSE_FUNCTIONAL_SHORT,NULL);
    handleJavaException(wrapperIntern);
    jsize        jresult_PROPERTY_TYPE_INVERSE_FUNCTIONAL_SHORT_size = javaEnv->GetStringUTFLength((jstring)jresult_PROPERTY_TYPE_INVERSE_FUNCTIONAL_SHORT);
    handleJavaException(wrapperIntern);
                 result_PROPERTY_TYPE_INVERSE_FUNCTIONAL_SHORT = new char[jresult_PROPERTY_TYPE_INVERSE_FUNCTIONAL_SHORT_size+1];
    for (int i=0;i<jresult_PROPERTY_TYPE_INVERSE_FUNCTIONAL_SHORT_size;i++) {
      result_PROPERTY_TYPE_INVERSE_FUNCTIONAL_SHORT[i] = jresult_PROPERTY_TYPE_INVERSE_FUNCTIONAL_SHORT_bytes[i];
    }
    result_PROPERTY_TYPE_INVERSE_FUNCTIONAL_SHORT[jresult_PROPERTY_TYPE_INVERSE_FUNCTIONAL_SHORT_size]=0;
    javaEnv->ReleaseStringUTFChars((jstring)jresult_PROPERTY_TYPE_INVERSE_FUNCTIONAL_SHORT, jresult_PROPERTY_TYPE_INVERSE_FUNCTIONAL_SHORT_bytes);
    handleJavaException(wrapperIntern);
    javaEnv->DeleteLocalRef(jresult_PROPERTY_TYPE_INVERSE_FUNCTIONAL_SHORT);
  } else {
    result_PROPERTY_TYPE_INVERSE_FUNCTIONAL_SHORT=NULL;
  }
  this->PROPERTY_TYPE_INVERSE_FUNCTIONAL_SHORT = result_PROPERTY_TYPE_INVERSE_FUNCTIONAL_SHORT;
  jfieldID fid_PROPERTY_TYPE_SYMMETRIC_SHORT = javaEnv->GetFieldID(cls, "PROPERTY_TYPE_SYMMETRIC_SHORT", "Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult_PROPERTY_TYPE_SYMMETRIC_SHORT = javaEnv->GetObjectField(this->getJavaObject(), fid_PROPERTY_TYPE_SYMMETRIC_SHORT);
  handleJavaException(wrapperIntern);
  char* result_PROPERTY_TYPE_SYMMETRIC_SHORT;
  if (jresult_PROPERTY_TYPE_SYMMETRIC_SHORT!=NULL) {
    const char*  jresult_PROPERTY_TYPE_SYMMETRIC_SHORT_bytes = javaEnv->GetStringUTFChars((jstring)jresult_PROPERTY_TYPE_SYMMETRIC_SHORT,NULL);
    handleJavaException(wrapperIntern);
    jsize        jresult_PROPERTY_TYPE_SYMMETRIC_SHORT_size = javaEnv->GetStringUTFLength((jstring)jresult_PROPERTY_TYPE_SYMMETRIC_SHORT);
    handleJavaException(wrapperIntern);
                 result_PROPERTY_TYPE_SYMMETRIC_SHORT = new char[jresult_PROPERTY_TYPE_SYMMETRIC_SHORT_size+1];
    for (int i=0;i<jresult_PROPERTY_TYPE_SYMMETRIC_SHORT_size;i++) {
      result_PROPERTY_TYPE_SYMMETRIC_SHORT[i] = jresult_PROPERTY_TYPE_SYMMETRIC_SHORT_bytes[i];
    }
    result_PROPERTY_TYPE_SYMMETRIC_SHORT[jresult_PROPERTY_TYPE_SYMMETRIC_SHORT_size]=0;
    javaEnv->ReleaseStringUTFChars((jstring)jresult_PROPERTY_TYPE_SYMMETRIC_SHORT, jresult_PROPERTY_TYPE_SYMMETRIC_SHORT_bytes);
    handleJavaException(wrapperIntern);
    javaEnv->DeleteLocalRef(jresult_PROPERTY_TYPE_SYMMETRIC_SHORT);
  } else {
    result_PROPERTY_TYPE_SYMMETRIC_SHORT=NULL;
  }
  this->PROPERTY_TYPE_SYMMETRIC_SHORT = result_PROPERTY_TYPE_SYMMETRIC_SHORT;
  jfieldID fid_PROPERTY_TYPE_ASYMMETRIC_SHORT = javaEnv->GetFieldID(cls, "PROPERTY_TYPE_ASYMMETRIC_SHORT", "Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult_PROPERTY_TYPE_ASYMMETRIC_SHORT = javaEnv->GetObjectField(this->getJavaObject(), fid_PROPERTY_TYPE_ASYMMETRIC_SHORT);
  handleJavaException(wrapperIntern);
  char* result_PROPERTY_TYPE_ASYMMETRIC_SHORT;
  if (jresult_PROPERTY_TYPE_ASYMMETRIC_SHORT!=NULL) {
    const char*  jresult_PROPERTY_TYPE_ASYMMETRIC_SHORT_bytes = javaEnv->GetStringUTFChars((jstring)jresult_PROPERTY_TYPE_ASYMMETRIC_SHORT,NULL);
    handleJavaException(wrapperIntern);
    jsize        jresult_PROPERTY_TYPE_ASYMMETRIC_SHORT_size = javaEnv->GetStringUTFLength((jstring)jresult_PROPERTY_TYPE_ASYMMETRIC_SHORT);
    handleJavaException(wrapperIntern);
                 result_PROPERTY_TYPE_ASYMMETRIC_SHORT = new char[jresult_PROPERTY_TYPE_ASYMMETRIC_SHORT_size+1];
    for (int i=0;i<jresult_PROPERTY_TYPE_ASYMMETRIC_SHORT_size;i++) {
      result_PROPERTY_TYPE_ASYMMETRIC_SHORT[i] = jresult_PROPERTY_TYPE_ASYMMETRIC_SHORT_bytes[i];
    }
    result_PROPERTY_TYPE_ASYMMETRIC_SHORT[jresult_PROPERTY_TYPE_ASYMMETRIC_SHORT_size]=0;
    javaEnv->ReleaseStringUTFChars((jstring)jresult_PROPERTY_TYPE_ASYMMETRIC_SHORT, jresult_PROPERTY_TYPE_ASYMMETRIC_SHORT_bytes);
    handleJavaException(wrapperIntern);
    javaEnv->DeleteLocalRef(jresult_PROPERTY_TYPE_ASYMMETRIC_SHORT);
  } else {
    result_PROPERTY_TYPE_ASYMMETRIC_SHORT=NULL;
  }
  this->PROPERTY_TYPE_ASYMMETRIC_SHORT = result_PROPERTY_TYPE_ASYMMETRIC_SHORT;
  jfieldID fid_PROPERTY_TYPE_TRANSITIVE_SHORT = javaEnv->GetFieldID(cls, "PROPERTY_TYPE_TRANSITIVE_SHORT", "Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult_PROPERTY_TYPE_TRANSITIVE_SHORT = javaEnv->GetObjectField(this->getJavaObject(), fid_PROPERTY_TYPE_TRANSITIVE_SHORT);
  handleJavaException(wrapperIntern);
  char* result_PROPERTY_TYPE_TRANSITIVE_SHORT;
  if (jresult_PROPERTY_TYPE_TRANSITIVE_SHORT!=NULL) {
    const char*  jresult_PROPERTY_TYPE_TRANSITIVE_SHORT_bytes = javaEnv->GetStringUTFChars((jstring)jresult_PROPERTY_TYPE_TRANSITIVE_SHORT,NULL);
    handleJavaException(wrapperIntern);
    jsize        jresult_PROPERTY_TYPE_TRANSITIVE_SHORT_size = javaEnv->GetStringUTFLength((jstring)jresult_PROPERTY_TYPE_TRANSITIVE_SHORT);
    handleJavaException(wrapperIntern);
                 result_PROPERTY_TYPE_TRANSITIVE_SHORT = new char[jresult_PROPERTY_TYPE_TRANSITIVE_SHORT_size+1];
    for (int i=0;i<jresult_PROPERTY_TYPE_TRANSITIVE_SHORT_size;i++) {
      result_PROPERTY_TYPE_TRANSITIVE_SHORT[i] = jresult_PROPERTY_TYPE_TRANSITIVE_SHORT_bytes[i];
    }
    result_PROPERTY_TYPE_TRANSITIVE_SHORT[jresult_PROPERTY_TYPE_TRANSITIVE_SHORT_size]=0;
    javaEnv->ReleaseStringUTFChars((jstring)jresult_PROPERTY_TYPE_TRANSITIVE_SHORT, jresult_PROPERTY_TYPE_TRANSITIVE_SHORT_bytes);
    handleJavaException(wrapperIntern);
    javaEnv->DeleteLocalRef(jresult_PROPERTY_TYPE_TRANSITIVE_SHORT);
  } else {
    result_PROPERTY_TYPE_TRANSITIVE_SHORT=NULL;
  }
  this->PROPERTY_TYPE_TRANSITIVE_SHORT = result_PROPERTY_TYPE_TRANSITIVE_SHORT;
  jfieldID fid_PROPERTY_TYPE_REFLEXIVE_SHORT = javaEnv->GetFieldID(cls, "PROPERTY_TYPE_REFLEXIVE_SHORT", "Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult_PROPERTY_TYPE_REFLEXIVE_SHORT = javaEnv->GetObjectField(this->getJavaObject(), fid_PROPERTY_TYPE_REFLEXIVE_SHORT);
  handleJavaException(wrapperIntern);
  char* result_PROPERTY_TYPE_REFLEXIVE_SHORT;
  if (jresult_PROPERTY_TYPE_REFLEXIVE_SHORT!=NULL) {
    const char*  jresult_PROPERTY_TYPE_REFLEXIVE_SHORT_bytes = javaEnv->GetStringUTFChars((jstring)jresult_PROPERTY_TYPE_REFLEXIVE_SHORT,NULL);
    handleJavaException(wrapperIntern);
    jsize        jresult_PROPERTY_TYPE_REFLEXIVE_SHORT_size = javaEnv->GetStringUTFLength((jstring)jresult_PROPERTY_TYPE_REFLEXIVE_SHORT);
    handleJavaException(wrapperIntern);
                 result_PROPERTY_TYPE_REFLEXIVE_SHORT = new char[jresult_PROPERTY_TYPE_REFLEXIVE_SHORT_size+1];
    for (int i=0;i<jresult_PROPERTY_TYPE_REFLEXIVE_SHORT_size;i++) {
      result_PROPERTY_TYPE_REFLEXIVE_SHORT[i] = jresult_PROPERTY_TYPE_REFLEXIVE_SHORT_bytes[i];
    }
    result_PROPERTY_TYPE_REFLEXIVE_SHORT[jresult_PROPERTY_TYPE_REFLEXIVE_SHORT_size]=0;
    javaEnv->ReleaseStringUTFChars((jstring)jresult_PROPERTY_TYPE_REFLEXIVE_SHORT, jresult_PROPERTY_TYPE_REFLEXIVE_SHORT_bytes);
    handleJavaException(wrapperIntern);
    javaEnv->DeleteLocalRef(jresult_PROPERTY_TYPE_REFLEXIVE_SHORT);
  } else {
    result_PROPERTY_TYPE_REFLEXIVE_SHORT=NULL;
  }
  this->PROPERTY_TYPE_REFLEXIVE_SHORT = result_PROPERTY_TYPE_REFLEXIVE_SHORT;
  jfieldID fid_PROPERTY_TYPE_IRREFLEXIVE_SHORT = javaEnv->GetFieldID(cls, "PROPERTY_TYPE_IRREFLEXIVE_SHORT", "Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult_PROPERTY_TYPE_IRREFLEXIVE_SHORT = javaEnv->GetObjectField(this->getJavaObject(), fid_PROPERTY_TYPE_IRREFLEXIVE_SHORT);
  handleJavaException(wrapperIntern);
  char* result_PROPERTY_TYPE_IRREFLEXIVE_SHORT;
  if (jresult_PROPERTY_TYPE_IRREFLEXIVE_SHORT!=NULL) {
    const char*  jresult_PROPERTY_TYPE_IRREFLEXIVE_SHORT_bytes = javaEnv->GetStringUTFChars((jstring)jresult_PROPERTY_TYPE_IRREFLEXIVE_SHORT,NULL);
    handleJavaException(wrapperIntern);
    jsize        jresult_PROPERTY_TYPE_IRREFLEXIVE_SHORT_size = javaEnv->GetStringUTFLength((jstring)jresult_PROPERTY_TYPE_IRREFLEXIVE_SHORT);
    handleJavaException(wrapperIntern);
                 result_PROPERTY_TYPE_IRREFLEXIVE_SHORT = new char[jresult_PROPERTY_TYPE_IRREFLEXIVE_SHORT_size+1];
    for (int i=0;i<jresult_PROPERTY_TYPE_IRREFLEXIVE_SHORT_size;i++) {
      result_PROPERTY_TYPE_IRREFLEXIVE_SHORT[i] = jresult_PROPERTY_TYPE_IRREFLEXIVE_SHORT_bytes[i];
    }
    result_PROPERTY_TYPE_IRREFLEXIVE_SHORT[jresult_PROPERTY_TYPE_IRREFLEXIVE_SHORT_size]=0;
    javaEnv->ReleaseStringUTFChars((jstring)jresult_PROPERTY_TYPE_IRREFLEXIVE_SHORT, jresult_PROPERTY_TYPE_IRREFLEXIVE_SHORT_bytes);
    handleJavaException(wrapperIntern);
    javaEnv->DeleteLocalRef(jresult_PROPERTY_TYPE_IRREFLEXIVE_SHORT);
  } else {
    result_PROPERTY_TYPE_IRREFLEXIVE_SHORT=NULL;
  }
  this->PROPERTY_TYPE_IRREFLEXIVE_SHORT = result_PROPERTY_TYPE_IRREFLEXIVE_SHORT;
}

void OWLAPIWrapper::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("edu/monash/infotech/OWLAPIWrapper");
  handleJavaException(wrapperIntern);
}

const char* OWLAPIWrapper::loadOntologyFile(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("edu/monash/infotech/OWLAPIWrapper");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "loadOntologyFile", "(Ljava/lang/String;)Ljava/lang/String;");
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

JavaObjectArray* OWLAPIWrapper::getAllOWLClasses()
{
  jclass    cls = javaEnv->FindClass("edu/monash/infotech/OWLAPIWrapper");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getAllOWLClasses", "()[Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
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

JavaObjectArray* OWLAPIWrapper::getSubClasses(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("edu/monash/infotech/OWLAPIWrapper");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSubClasses", "(Ljava/lang/String;)[Ljava/lang/String;");
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

JavaObjectArray* OWLAPIWrapper::getSuperClasses(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("edu/monash/infotech/OWLAPIWrapper");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSuperClasses", "(Ljava/lang/String;)[Ljava/lang/String;");
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

JavaObjectArray* OWLAPIWrapper::getDisjointClasses(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("edu/monash/infotech/OWLAPIWrapper");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getDisjointClasses", "(Ljava/lang/String;)[Ljava/lang/String;");
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

JavaObjectArray* OWLAPIWrapper::getEquivalentClasses(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("edu/monash/infotech/OWLAPIWrapper");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getEquivalentClasses", "(Ljava/lang/String;)[Ljava/lang/String;");
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

JavaObjectArray* OWLAPIWrapper::getIndividuals(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("edu/monash/infotech/OWLAPIWrapper");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getIndividuals", "(Ljava/lang/String;)[Ljava/lang/String;");
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

JavaObjectArray* OWLAPIWrapper::getAllIndividuals()
{
  jclass    cls = javaEnv->FindClass("edu/monash/infotech/OWLAPIWrapper");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getAllIndividuals", "()[Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
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

const char* OWLAPIWrapper::getDefaultNameSpace()
{
  jclass    cls = javaEnv->FindClass("edu/monash/infotech/OWLAPIWrapper");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getDefaultNameSpace", "()Ljava/lang/String;");
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

const char* OWLAPIWrapper::getPropertyTypeByName(const char* arg1, const char* arg2)
{
  jclass    cls = javaEnv->FindClass("edu/monash/infotech/OWLAPIWrapper");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getPropertyTypeByName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
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

JavaObjectArray* OWLAPIWrapper::getPropertyDomainsByName(const char* arg1, const char* arg2)
{
  jclass    cls = javaEnv->FindClass("edu/monash/infotech/OWLAPIWrapper");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getPropertyDomainsByName", "(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;");
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

JavaObjectArray* OWLAPIWrapper::getPropertyRangesByName(const char* arg1, const char* arg2)
{
  jclass    cls = javaEnv->FindClass("edu/monash/infotech/OWLAPIWrapper");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getPropertyRangesByName", "(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;");
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

JavaObjectArray* OWLAPIWrapper::getAllPropertiesNameAndSubType()
{
  jclass    cls = javaEnv->FindClass("edu/monash/infotech/OWLAPIWrapper");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getAllPropertiesNameAndSubType", "()[Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
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

JavaObjectArray* OWLAPIWrapper::getSubProperites(const char* arg1, const char* arg2)
{
  jclass    cls = javaEnv->FindClass("edu/monash/infotech/OWLAPIWrapper");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSubProperites", "(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;");
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

JavaObjectArray* OWLAPIWrapper::getSuperProperites(const char* arg1, const char* arg2)
{
  jclass    cls = javaEnv->FindClass("edu/monash/infotech/OWLAPIWrapper");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSuperProperites", "(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;");
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

JavaObjectArray* OWLAPIWrapper::getDisjointProperties(const char* arg1, const char* arg2)
{
  jclass    cls = javaEnv->FindClass("edu/monash/infotech/OWLAPIWrapper");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getDisjointProperties", "(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;");
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

JavaObjectArray* OWLAPIWrapper::getEquivalentProperties(const char* arg1, const char* arg2)
{
  jclass    cls = javaEnv->FindClass("edu/monash/infotech/OWLAPIWrapper");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getEquivalentProperties", "(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;");
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

JavaObjectArray* OWLAPIWrapper::getAllPropertiesByType(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("edu/monash/infotech/OWLAPIWrapper");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getAllPropertiesByType", "(Ljava/lang/String;)[Ljava/lang/String;");
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

JavaObjectArray* OWLAPIWrapper::getAllDataProperties()
{
  jclass    cls = javaEnv->FindClass("edu/monash/infotech/OWLAPIWrapper");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getAllDataProperties", "()[Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
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

JavaObjectArray* OWLAPIWrapper::getObjectProperties()
{
  jclass    cls = javaEnv->FindClass("edu/monash/infotech/OWLAPIWrapper");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getObjectProperties", "()[Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
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

JavaObjectArray* OWLAPIWrapper::getAllOWLClass()
{
  jclass    cls = javaEnv->FindClass("edu/monash/infotech/OWLAPIWrapper");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getAllOWLClass", "()[Lorg/semanticweb/owlapi/model/OWLClass;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
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
}
}
}
