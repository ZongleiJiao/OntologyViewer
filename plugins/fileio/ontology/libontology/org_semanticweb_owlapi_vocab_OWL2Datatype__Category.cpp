#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_vocab_OWL2Datatype__Category.h>
#include <java_lang_Enum.h>
#include <java_lang_String.h>
#include <java_util_Set.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace vocab {

OWL2Datatype__Category::OWL2Datatype__Category(JavaMarker* dummy)
  : java::lang::Enum(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWL2Datatype__Category::OWL2Datatype__Category(jobject obj)
  : java::lang::Enum(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWL2Datatype__Category::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWL2Datatype$Category");
  handleJavaException(wrapperIntern);
  jfieldID fid_UNIVERSAL = javaEnv->GetStaticFieldID(cls, "UNIVERSAL", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype$Category;");
  handleJavaException(wrapperIntern);
  jobject jresult_UNIVERSAL = javaEnv->GetStaticObjectField(cls, fid_UNIVERSAL);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype__Category* result_UNIVERSAL;
  if (jresult_UNIVERSAL!=NULL) {
    result_UNIVERSAL=new org::semanticweb::owlapi::vocab::OWL2Datatype__Category(jresult_UNIVERSAL);
    javaEnv->DeleteLocalRef(jresult_UNIVERSAL);
  } else {
    result_UNIVERSAL=NULL;
  }
  this->UNIVERSAL = result_UNIVERSAL;
  jfieldID fid_NUMBER = javaEnv->GetStaticFieldID(cls, "NUMBER", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype$Category;");
  handleJavaException(wrapperIntern);
  jobject jresult_NUMBER = javaEnv->GetStaticObjectField(cls, fid_NUMBER);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype__Category* result_NUMBER;
  if (jresult_NUMBER!=NULL) {
    result_NUMBER=new org::semanticweb::owlapi::vocab::OWL2Datatype__Category(jresult_NUMBER);
    javaEnv->DeleteLocalRef(jresult_NUMBER);
  } else {
    result_NUMBER=NULL;
  }
  this->NUMBER = result_NUMBER;
  jfieldID fid_STRING_WITH_LANGUAGE_TAG = javaEnv->GetStaticFieldID(cls, "STRING_WITH_LANGUAGE_TAG", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype$Category;");
  handleJavaException(wrapperIntern);
  jobject jresult_STRING_WITH_LANGUAGE_TAG = javaEnv->GetStaticObjectField(cls, fid_STRING_WITH_LANGUAGE_TAG);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype__Category* result_STRING_WITH_LANGUAGE_TAG;
  if (jresult_STRING_WITH_LANGUAGE_TAG!=NULL) {
    result_STRING_WITH_LANGUAGE_TAG=new org::semanticweb::owlapi::vocab::OWL2Datatype__Category(jresult_STRING_WITH_LANGUAGE_TAG);
    javaEnv->DeleteLocalRef(jresult_STRING_WITH_LANGUAGE_TAG);
  } else {
    result_STRING_WITH_LANGUAGE_TAG=NULL;
  }
  this->STRING_WITH_LANGUAGE_TAG = result_STRING_WITH_LANGUAGE_TAG;
  jfieldID fid_STRING_WITHOUT_LANGUAGE_TAG = javaEnv->GetStaticFieldID(cls, "STRING_WITHOUT_LANGUAGE_TAG", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype$Category;");
  handleJavaException(wrapperIntern);
  jobject jresult_STRING_WITHOUT_LANGUAGE_TAG = javaEnv->GetStaticObjectField(cls, fid_STRING_WITHOUT_LANGUAGE_TAG);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype__Category* result_STRING_WITHOUT_LANGUAGE_TAG;
  if (jresult_STRING_WITHOUT_LANGUAGE_TAG!=NULL) {
    result_STRING_WITHOUT_LANGUAGE_TAG=new org::semanticweb::owlapi::vocab::OWL2Datatype__Category(jresult_STRING_WITHOUT_LANGUAGE_TAG);
    javaEnv->DeleteLocalRef(jresult_STRING_WITHOUT_LANGUAGE_TAG);
  } else {
    result_STRING_WITHOUT_LANGUAGE_TAG=NULL;
  }
  this->STRING_WITHOUT_LANGUAGE_TAG = result_STRING_WITHOUT_LANGUAGE_TAG;
  jfieldID fid_BOOLEAN = javaEnv->GetStaticFieldID(cls, "BOOLEAN", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype$Category;");
  handleJavaException(wrapperIntern);
  jobject jresult_BOOLEAN = javaEnv->GetStaticObjectField(cls, fid_BOOLEAN);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype__Category* result_BOOLEAN;
  if (jresult_BOOLEAN!=NULL) {
    result_BOOLEAN=new org::semanticweb::owlapi::vocab::OWL2Datatype__Category(jresult_BOOLEAN);
    javaEnv->DeleteLocalRef(jresult_BOOLEAN);
  } else {
    result_BOOLEAN=NULL;
  }
  this->BOOLEAN = result_BOOLEAN;
  jfieldID fid_BINARY = javaEnv->GetStaticFieldID(cls, "BINARY", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype$Category;");
  handleJavaException(wrapperIntern);
  jobject jresult_BINARY = javaEnv->GetStaticObjectField(cls, fid_BINARY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype__Category* result_BINARY;
  if (jresult_BINARY!=NULL) {
    result_BINARY=new org::semanticweb::owlapi::vocab::OWL2Datatype__Category(jresult_BINARY);
    javaEnv->DeleteLocalRef(jresult_BINARY);
  } else {
    result_BINARY=NULL;
  }
  this->BINARY = result_BINARY;
  jfieldID fid_URI = javaEnv->GetStaticFieldID(cls, "URI", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype$Category;");
  handleJavaException(wrapperIntern);
  jobject jresult_URI = javaEnv->GetStaticObjectField(cls, fid_URI);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype__Category* result_URI;
  if (jresult_URI!=NULL) {
    result_URI=new org::semanticweb::owlapi::vocab::OWL2Datatype__Category(jresult_URI);
    javaEnv->DeleteLocalRef(jresult_URI);
  } else {
    result_URI=NULL;
  }
  this->URI = result_URI;
  jfieldID fid_TIME = javaEnv->GetStaticFieldID(cls, "TIME", "Lorg/semanticweb/owlapi/vocab/OWL2Datatype$Category;");
  handleJavaException(wrapperIntern);
  jobject jresult_TIME = javaEnv->GetStaticObjectField(cls, fid_TIME);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype__Category* result_TIME;
  if (jresult_TIME!=NULL) {
    result_TIME=new org::semanticweb::owlapi::vocab::OWL2Datatype__Category(jresult_TIME);
    javaEnv->DeleteLocalRef(jresult_TIME);
  } else {
    result_TIME=NULL;
  }
  this->TIME = result_TIME;
}

void OWL2Datatype__Category::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWL2Datatype$Category");
  handleJavaException(wrapperIntern);
}

JavaObjectArray* OWL2Datatype__Category::values()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWL2Datatype$Category");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "values", "()[Lorg/semanticweb/owlapi/vocab/OWL2Datatype$Category;");
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

org::semanticweb::owlapi::vocab::OWL2Datatype__Category* OWL2Datatype__Category::valueOf(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWL2Datatype$Category");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/semanticweb/owlapi/vocab/OWL2Datatype$Category;");
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

const char* OWL2Datatype__Category::getName()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWL2Datatype$Category");
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

java::util::Set* OWL2Datatype__Category::getFacets()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/OWL2Datatype$Category");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getFacets", "()Ljava/util/Set;");
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
