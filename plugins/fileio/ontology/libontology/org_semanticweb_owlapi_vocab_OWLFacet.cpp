#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_vocab_OWLFacet.h>
#include <java_lang_Enum.h>
#include <java_lang_String.h>
#include <org_semanticweb_owlapi_model_IRI.h>
#include <java_util_Set.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace vocab {

OWLFacet::OWLFacet(JavaMarker* dummy)
  : java::lang::Enum(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLFacet::OWLFacet(jobject obj)
  : java::lang::Enum(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLFacet::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWLFacet");
  handleJavaException(wrapperIntern);
  jfieldID fid_LENGTH = javaEnv->GetStaticFieldID(cls, "LENGTH", "Lorg/semanticweb/owlapi/vocab/OWLFacet;");
  handleJavaException(wrapperIntern);
  jobject jresult_LENGTH = javaEnv->GetStaticObjectField(cls, fid_LENGTH);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLFacet* result_LENGTH;
  if (jresult_LENGTH!=NULL) {
    result_LENGTH=new org::semanticweb::owlapi::vocab::OWLFacet(jresult_LENGTH);
    javaEnv->DeleteLocalRef(jresult_LENGTH);
  } else {
    result_LENGTH=NULL;
  }
  this->LENGTH = result_LENGTH;
  jfieldID fid_MIN_LENGTH = javaEnv->GetStaticFieldID(cls, "MIN_LENGTH", "Lorg/semanticweb/owlapi/vocab/OWLFacet;");
  handleJavaException(wrapperIntern);
  jobject jresult_MIN_LENGTH = javaEnv->GetStaticObjectField(cls, fid_MIN_LENGTH);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLFacet* result_MIN_LENGTH;
  if (jresult_MIN_LENGTH!=NULL) {
    result_MIN_LENGTH=new org::semanticweb::owlapi::vocab::OWLFacet(jresult_MIN_LENGTH);
    javaEnv->DeleteLocalRef(jresult_MIN_LENGTH);
  } else {
    result_MIN_LENGTH=NULL;
  }
  this->MIN_LENGTH = result_MIN_LENGTH;
  jfieldID fid_MAX_LENGTH = javaEnv->GetStaticFieldID(cls, "MAX_LENGTH", "Lorg/semanticweb/owlapi/vocab/OWLFacet;");
  handleJavaException(wrapperIntern);
  jobject jresult_MAX_LENGTH = javaEnv->GetStaticObjectField(cls, fid_MAX_LENGTH);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLFacet* result_MAX_LENGTH;
  if (jresult_MAX_LENGTH!=NULL) {
    result_MAX_LENGTH=new org::semanticweb::owlapi::vocab::OWLFacet(jresult_MAX_LENGTH);
    javaEnv->DeleteLocalRef(jresult_MAX_LENGTH);
  } else {
    result_MAX_LENGTH=NULL;
  }
  this->MAX_LENGTH = result_MAX_LENGTH;
  jfieldID fid_PATTERN = javaEnv->GetStaticFieldID(cls, "PATTERN", "Lorg/semanticweb/owlapi/vocab/OWLFacet;");
  handleJavaException(wrapperIntern);
  jobject jresult_PATTERN = javaEnv->GetStaticObjectField(cls, fid_PATTERN);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLFacet* result_PATTERN;
  if (jresult_PATTERN!=NULL) {
    result_PATTERN=new org::semanticweb::owlapi::vocab::OWLFacet(jresult_PATTERN);
    javaEnv->DeleteLocalRef(jresult_PATTERN);
  } else {
    result_PATTERN=NULL;
  }
  this->PATTERN = result_PATTERN;
  jfieldID fid_MIN_INCLUSIVE = javaEnv->GetStaticFieldID(cls, "MIN_INCLUSIVE", "Lorg/semanticweb/owlapi/vocab/OWLFacet;");
  handleJavaException(wrapperIntern);
  jobject jresult_MIN_INCLUSIVE = javaEnv->GetStaticObjectField(cls, fid_MIN_INCLUSIVE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLFacet* result_MIN_INCLUSIVE;
  if (jresult_MIN_INCLUSIVE!=NULL) {
    result_MIN_INCLUSIVE=new org::semanticweb::owlapi::vocab::OWLFacet(jresult_MIN_INCLUSIVE);
    javaEnv->DeleteLocalRef(jresult_MIN_INCLUSIVE);
  } else {
    result_MIN_INCLUSIVE=NULL;
  }
  this->MIN_INCLUSIVE = result_MIN_INCLUSIVE;
  jfieldID fid_MIN_EXCLUSIVE = javaEnv->GetStaticFieldID(cls, "MIN_EXCLUSIVE", "Lorg/semanticweb/owlapi/vocab/OWLFacet;");
  handleJavaException(wrapperIntern);
  jobject jresult_MIN_EXCLUSIVE = javaEnv->GetStaticObjectField(cls, fid_MIN_EXCLUSIVE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLFacet* result_MIN_EXCLUSIVE;
  if (jresult_MIN_EXCLUSIVE!=NULL) {
    result_MIN_EXCLUSIVE=new org::semanticweb::owlapi::vocab::OWLFacet(jresult_MIN_EXCLUSIVE);
    javaEnv->DeleteLocalRef(jresult_MIN_EXCLUSIVE);
  } else {
    result_MIN_EXCLUSIVE=NULL;
  }
  this->MIN_EXCLUSIVE = result_MIN_EXCLUSIVE;
  jfieldID fid_MAX_INCLUSIVE = javaEnv->GetStaticFieldID(cls, "MAX_INCLUSIVE", "Lorg/semanticweb/owlapi/vocab/OWLFacet;");
  handleJavaException(wrapperIntern);
  jobject jresult_MAX_INCLUSIVE = javaEnv->GetStaticObjectField(cls, fid_MAX_INCLUSIVE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLFacet* result_MAX_INCLUSIVE;
  if (jresult_MAX_INCLUSIVE!=NULL) {
    result_MAX_INCLUSIVE=new org::semanticweb::owlapi::vocab::OWLFacet(jresult_MAX_INCLUSIVE);
    javaEnv->DeleteLocalRef(jresult_MAX_INCLUSIVE);
  } else {
    result_MAX_INCLUSIVE=NULL;
  }
  this->MAX_INCLUSIVE = result_MAX_INCLUSIVE;
  jfieldID fid_MAX_EXCLUSIVE = javaEnv->GetStaticFieldID(cls, "MAX_EXCLUSIVE", "Lorg/semanticweb/owlapi/vocab/OWLFacet;");
  handleJavaException(wrapperIntern);
  jobject jresult_MAX_EXCLUSIVE = javaEnv->GetStaticObjectField(cls, fid_MAX_EXCLUSIVE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLFacet* result_MAX_EXCLUSIVE;
  if (jresult_MAX_EXCLUSIVE!=NULL) {
    result_MAX_EXCLUSIVE=new org::semanticweb::owlapi::vocab::OWLFacet(jresult_MAX_EXCLUSIVE);
    javaEnv->DeleteLocalRef(jresult_MAX_EXCLUSIVE);
  } else {
    result_MAX_EXCLUSIVE=NULL;
  }
  this->MAX_EXCLUSIVE = result_MAX_EXCLUSIVE;
  jfieldID fid_TOTAL_DIGITS = javaEnv->GetStaticFieldID(cls, "TOTAL_DIGITS", "Lorg/semanticweb/owlapi/vocab/OWLFacet;");
  handleJavaException(wrapperIntern);
  jobject jresult_TOTAL_DIGITS = javaEnv->GetStaticObjectField(cls, fid_TOTAL_DIGITS);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLFacet* result_TOTAL_DIGITS;
  if (jresult_TOTAL_DIGITS!=NULL) {
    result_TOTAL_DIGITS=new org::semanticweb::owlapi::vocab::OWLFacet(jresult_TOTAL_DIGITS);
    javaEnv->DeleteLocalRef(jresult_TOTAL_DIGITS);
  } else {
    result_TOTAL_DIGITS=NULL;
  }
  this->TOTAL_DIGITS = result_TOTAL_DIGITS;
  jfieldID fid_FRACTION_DIGITS = javaEnv->GetStaticFieldID(cls, "FRACTION_DIGITS", "Lorg/semanticweb/owlapi/vocab/OWLFacet;");
  handleJavaException(wrapperIntern);
  jobject jresult_FRACTION_DIGITS = javaEnv->GetStaticObjectField(cls, fid_FRACTION_DIGITS);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLFacet* result_FRACTION_DIGITS;
  if (jresult_FRACTION_DIGITS!=NULL) {
    result_FRACTION_DIGITS=new org::semanticweb::owlapi::vocab::OWLFacet(jresult_FRACTION_DIGITS);
    javaEnv->DeleteLocalRef(jresult_FRACTION_DIGITS);
  } else {
    result_FRACTION_DIGITS=NULL;
  }
  this->FRACTION_DIGITS = result_FRACTION_DIGITS;
  jfieldID fid_LANG_RANGE = javaEnv->GetStaticFieldID(cls, "LANG_RANGE", "Lorg/semanticweb/owlapi/vocab/OWLFacet;");
  handleJavaException(wrapperIntern);
  jobject jresult_LANG_RANGE = javaEnv->GetStaticObjectField(cls, fid_LANG_RANGE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLFacet* result_LANG_RANGE;
  if (jresult_LANG_RANGE!=NULL) {
    result_LANG_RANGE=new org::semanticweb::owlapi::vocab::OWLFacet(jresult_LANG_RANGE);
    javaEnv->DeleteLocalRef(jresult_LANG_RANGE);
  } else {
    result_LANG_RANGE=NULL;
  }
  this->LANG_RANGE = result_LANG_RANGE;
  jfieldID fid_FACET_IRIS = javaEnv->GetStaticFieldID(cls, "FACET_IRIS", "Ljava/util/Set;");
  handleJavaException(wrapperIntern);
  jobject jresult_FACET_IRIS = javaEnv->GetStaticObjectField(cls, fid_FACET_IRIS);
  handleJavaException(wrapperIntern);
  java::util::Set* result_FACET_IRIS;
  if (jresult_FACET_IRIS!=NULL) {
    result_FACET_IRIS=new java::util::Set(jresult_FACET_IRIS);
    javaEnv->DeleteLocalRef(jresult_FACET_IRIS);
  } else {
    result_FACET_IRIS=NULL;
  }
  this->FACET_IRIS = result_FACET_IRIS;
}

void OWLFacet::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWLFacet");
  handleJavaException(wrapperIntern);
}

const char* OWLFacet::toString()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWLFacet");
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

JavaObjectArray* OWLFacet::values()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWLFacet");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "values", "()[Lorg/semanticweb/owlapi/vocab/OWLFacet;");
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

org::semanticweb::owlapi::vocab::OWLFacet* OWLFacet::valueOf(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWLFacet");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/semanticweb/owlapi/vocab/OWLFacet;");
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
  org::semanticweb::owlapi::vocab::OWLFacet* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::vocab::OWLFacet(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::IRI* OWLFacet::getIRI()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWLFacet");
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

const char* OWLFacet::getShortName()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWLFacet");
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

java::util::Set* OWLFacet::getFacets()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWLFacet");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "getFacets", "()Ljava/util/Set;");
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

const char* OWLFacet::getSymbolicForm()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWLFacet");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSymbolicForm", "()Ljava/lang/String;");
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

java::util::Set* OWLFacet::getFacetIRIs()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWLFacet");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "getFacetIRIs", "()Ljava/util/Set;");
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

org::semanticweb::owlapi::vocab::OWLFacet* OWLFacet::getFacet(org::semanticweb::owlapi::model::IRI* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWLFacet");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "getFacet", "(Lorg/semanticweb/owlapi/model/IRI;)Lorg/semanticweb/owlapi/vocab/OWLFacet;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWLFacet* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::vocab::OWLFacet(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::vocab::OWLFacet* OWLFacet::getFacetByShortName(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWLFacet");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "getFacetByShortName", "(Ljava/lang/String;)Lorg/semanticweb/owlapi/vocab/OWLFacet;");
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
  org::semanticweb::owlapi::vocab::OWLFacet* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::vocab::OWLFacet(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::vocab::OWLFacet* OWLFacet::getFacetBySymbolicName(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWLFacet");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "getFacetBySymbolicName", "(Ljava/lang/String;)Lorg/semanticweb/owlapi/vocab/OWLFacet;");
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
  org::semanticweb::owlapi::vocab::OWLFacet* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::vocab::OWLFacet(jresult);
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
