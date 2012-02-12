#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_ClassExpressionType.h>
#include <java_lang_Enum.h>
#include <java_lang_String.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

ClassExpressionType::ClassExpressionType(JavaMarker* dummy)
  : java::lang::Enum(dummy)
{
  updateAllVariables(wrapperIntern);
}

ClassExpressionType::ClassExpressionType(jobject obj)
  : java::lang::Enum(obj)
{
  updateAllVariables(wrapperIntern);
}

void ClassExpressionType::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/ClassExpressionType");
  handleJavaException(wrapperIntern);
  jfieldID fid_OWL_CLASS = javaEnv->GetStaticFieldID(cls, "OWL_CLASS", "Lorg/semanticweb/owlapi/model/ClassExpressionType;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL_CLASS = javaEnv->GetStaticObjectField(cls, fid_OWL_CLASS);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::ClassExpressionType* result_OWL_CLASS;
  if (jresult_OWL_CLASS!=NULL) {
    result_OWL_CLASS=new org::semanticweb::owlapi::model::ClassExpressionType(jresult_OWL_CLASS);
    javaEnv->DeleteLocalRef(jresult_OWL_CLASS);
  } else {
    result_OWL_CLASS=NULL;
  }
  this->OWL_CLASS = result_OWL_CLASS;
  jfieldID fid_OBJECT_SOME_VALUES_FROM = javaEnv->GetStaticFieldID(cls, "OBJECT_SOME_VALUES_FROM", "Lorg/semanticweb/owlapi/model/ClassExpressionType;");
  handleJavaException(wrapperIntern);
  jobject jresult_OBJECT_SOME_VALUES_FROM = javaEnv->GetStaticObjectField(cls, fid_OBJECT_SOME_VALUES_FROM);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::ClassExpressionType* result_OBJECT_SOME_VALUES_FROM;
  if (jresult_OBJECT_SOME_VALUES_FROM!=NULL) {
    result_OBJECT_SOME_VALUES_FROM=new org::semanticweb::owlapi::model::ClassExpressionType(jresult_OBJECT_SOME_VALUES_FROM);
    javaEnv->DeleteLocalRef(jresult_OBJECT_SOME_VALUES_FROM);
  } else {
    result_OBJECT_SOME_VALUES_FROM=NULL;
  }
  this->OBJECT_SOME_VALUES_FROM = result_OBJECT_SOME_VALUES_FROM;
  jfieldID fid_OBJECT_ALL_VALUES_FROM = javaEnv->GetStaticFieldID(cls, "OBJECT_ALL_VALUES_FROM", "Lorg/semanticweb/owlapi/model/ClassExpressionType;");
  handleJavaException(wrapperIntern);
  jobject jresult_OBJECT_ALL_VALUES_FROM = javaEnv->GetStaticObjectField(cls, fid_OBJECT_ALL_VALUES_FROM);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::ClassExpressionType* result_OBJECT_ALL_VALUES_FROM;
  if (jresult_OBJECT_ALL_VALUES_FROM!=NULL) {
    result_OBJECT_ALL_VALUES_FROM=new org::semanticweb::owlapi::model::ClassExpressionType(jresult_OBJECT_ALL_VALUES_FROM);
    javaEnv->DeleteLocalRef(jresult_OBJECT_ALL_VALUES_FROM);
  } else {
    result_OBJECT_ALL_VALUES_FROM=NULL;
  }
  this->OBJECT_ALL_VALUES_FROM = result_OBJECT_ALL_VALUES_FROM;
  jfieldID fid_OBJECT_MIN_CARDINALITY = javaEnv->GetStaticFieldID(cls, "OBJECT_MIN_CARDINALITY", "Lorg/semanticweb/owlapi/model/ClassExpressionType;");
  handleJavaException(wrapperIntern);
  jobject jresult_OBJECT_MIN_CARDINALITY = javaEnv->GetStaticObjectField(cls, fid_OBJECT_MIN_CARDINALITY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::ClassExpressionType* result_OBJECT_MIN_CARDINALITY;
  if (jresult_OBJECT_MIN_CARDINALITY!=NULL) {
    result_OBJECT_MIN_CARDINALITY=new org::semanticweb::owlapi::model::ClassExpressionType(jresult_OBJECT_MIN_CARDINALITY);
    javaEnv->DeleteLocalRef(jresult_OBJECT_MIN_CARDINALITY);
  } else {
    result_OBJECT_MIN_CARDINALITY=NULL;
  }
  this->OBJECT_MIN_CARDINALITY = result_OBJECT_MIN_CARDINALITY;
  jfieldID fid_OBJECT_MAX_CARDINALITY = javaEnv->GetStaticFieldID(cls, "OBJECT_MAX_CARDINALITY", "Lorg/semanticweb/owlapi/model/ClassExpressionType;");
  handleJavaException(wrapperIntern);
  jobject jresult_OBJECT_MAX_CARDINALITY = javaEnv->GetStaticObjectField(cls, fid_OBJECT_MAX_CARDINALITY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::ClassExpressionType* result_OBJECT_MAX_CARDINALITY;
  if (jresult_OBJECT_MAX_CARDINALITY!=NULL) {
    result_OBJECT_MAX_CARDINALITY=new org::semanticweb::owlapi::model::ClassExpressionType(jresult_OBJECT_MAX_CARDINALITY);
    javaEnv->DeleteLocalRef(jresult_OBJECT_MAX_CARDINALITY);
  } else {
    result_OBJECT_MAX_CARDINALITY=NULL;
  }
  this->OBJECT_MAX_CARDINALITY = result_OBJECT_MAX_CARDINALITY;
  jfieldID fid_OBJECT_EXACT_CARDINALITY = javaEnv->GetStaticFieldID(cls, "OBJECT_EXACT_CARDINALITY", "Lorg/semanticweb/owlapi/model/ClassExpressionType;");
  handleJavaException(wrapperIntern);
  jobject jresult_OBJECT_EXACT_CARDINALITY = javaEnv->GetStaticObjectField(cls, fid_OBJECT_EXACT_CARDINALITY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::ClassExpressionType* result_OBJECT_EXACT_CARDINALITY;
  if (jresult_OBJECT_EXACT_CARDINALITY!=NULL) {
    result_OBJECT_EXACT_CARDINALITY=new org::semanticweb::owlapi::model::ClassExpressionType(jresult_OBJECT_EXACT_CARDINALITY);
    javaEnv->DeleteLocalRef(jresult_OBJECT_EXACT_CARDINALITY);
  } else {
    result_OBJECT_EXACT_CARDINALITY=NULL;
  }
  this->OBJECT_EXACT_CARDINALITY = result_OBJECT_EXACT_CARDINALITY;
  jfieldID fid_OBJECT_HAS_VALUE = javaEnv->GetStaticFieldID(cls, "OBJECT_HAS_VALUE", "Lorg/semanticweb/owlapi/model/ClassExpressionType;");
  handleJavaException(wrapperIntern);
  jobject jresult_OBJECT_HAS_VALUE = javaEnv->GetStaticObjectField(cls, fid_OBJECT_HAS_VALUE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::ClassExpressionType* result_OBJECT_HAS_VALUE;
  if (jresult_OBJECT_HAS_VALUE!=NULL) {
    result_OBJECT_HAS_VALUE=new org::semanticweb::owlapi::model::ClassExpressionType(jresult_OBJECT_HAS_VALUE);
    javaEnv->DeleteLocalRef(jresult_OBJECT_HAS_VALUE);
  } else {
    result_OBJECT_HAS_VALUE=NULL;
  }
  this->OBJECT_HAS_VALUE = result_OBJECT_HAS_VALUE;
  jfieldID fid_OBJECT_HAS_SELF = javaEnv->GetStaticFieldID(cls, "OBJECT_HAS_SELF", "Lorg/semanticweb/owlapi/model/ClassExpressionType;");
  handleJavaException(wrapperIntern);
  jobject jresult_OBJECT_HAS_SELF = javaEnv->GetStaticObjectField(cls, fid_OBJECT_HAS_SELF);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::ClassExpressionType* result_OBJECT_HAS_SELF;
  if (jresult_OBJECT_HAS_SELF!=NULL) {
    result_OBJECT_HAS_SELF=new org::semanticweb::owlapi::model::ClassExpressionType(jresult_OBJECT_HAS_SELF);
    javaEnv->DeleteLocalRef(jresult_OBJECT_HAS_SELF);
  } else {
    result_OBJECT_HAS_SELF=NULL;
  }
  this->OBJECT_HAS_SELF = result_OBJECT_HAS_SELF;
  jfieldID fid_DATA_SOME_VALUES_FROM = javaEnv->GetStaticFieldID(cls, "DATA_SOME_VALUES_FROM", "Lorg/semanticweb/owlapi/model/ClassExpressionType;");
  handleJavaException(wrapperIntern);
  jobject jresult_DATA_SOME_VALUES_FROM = javaEnv->GetStaticObjectField(cls, fid_DATA_SOME_VALUES_FROM);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::ClassExpressionType* result_DATA_SOME_VALUES_FROM;
  if (jresult_DATA_SOME_VALUES_FROM!=NULL) {
    result_DATA_SOME_VALUES_FROM=new org::semanticweb::owlapi::model::ClassExpressionType(jresult_DATA_SOME_VALUES_FROM);
    javaEnv->DeleteLocalRef(jresult_DATA_SOME_VALUES_FROM);
  } else {
    result_DATA_SOME_VALUES_FROM=NULL;
  }
  this->DATA_SOME_VALUES_FROM = result_DATA_SOME_VALUES_FROM;
  jfieldID fid_DATA_ALL_VALUES_FROM = javaEnv->GetStaticFieldID(cls, "DATA_ALL_VALUES_FROM", "Lorg/semanticweb/owlapi/model/ClassExpressionType;");
  handleJavaException(wrapperIntern);
  jobject jresult_DATA_ALL_VALUES_FROM = javaEnv->GetStaticObjectField(cls, fid_DATA_ALL_VALUES_FROM);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::ClassExpressionType* result_DATA_ALL_VALUES_FROM;
  if (jresult_DATA_ALL_VALUES_FROM!=NULL) {
    result_DATA_ALL_VALUES_FROM=new org::semanticweb::owlapi::model::ClassExpressionType(jresult_DATA_ALL_VALUES_FROM);
    javaEnv->DeleteLocalRef(jresult_DATA_ALL_VALUES_FROM);
  } else {
    result_DATA_ALL_VALUES_FROM=NULL;
  }
  this->DATA_ALL_VALUES_FROM = result_DATA_ALL_VALUES_FROM;
  jfieldID fid_DATA_MIN_CARDINALITY = javaEnv->GetStaticFieldID(cls, "DATA_MIN_CARDINALITY", "Lorg/semanticweb/owlapi/model/ClassExpressionType;");
  handleJavaException(wrapperIntern);
  jobject jresult_DATA_MIN_CARDINALITY = javaEnv->GetStaticObjectField(cls, fid_DATA_MIN_CARDINALITY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::ClassExpressionType* result_DATA_MIN_CARDINALITY;
  if (jresult_DATA_MIN_CARDINALITY!=NULL) {
    result_DATA_MIN_CARDINALITY=new org::semanticweb::owlapi::model::ClassExpressionType(jresult_DATA_MIN_CARDINALITY);
    javaEnv->DeleteLocalRef(jresult_DATA_MIN_CARDINALITY);
  } else {
    result_DATA_MIN_CARDINALITY=NULL;
  }
  this->DATA_MIN_CARDINALITY = result_DATA_MIN_CARDINALITY;
  jfieldID fid_DATA_MAX_CARDINALITY = javaEnv->GetStaticFieldID(cls, "DATA_MAX_CARDINALITY", "Lorg/semanticweb/owlapi/model/ClassExpressionType;");
  handleJavaException(wrapperIntern);
  jobject jresult_DATA_MAX_CARDINALITY = javaEnv->GetStaticObjectField(cls, fid_DATA_MAX_CARDINALITY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::ClassExpressionType* result_DATA_MAX_CARDINALITY;
  if (jresult_DATA_MAX_CARDINALITY!=NULL) {
    result_DATA_MAX_CARDINALITY=new org::semanticweb::owlapi::model::ClassExpressionType(jresult_DATA_MAX_CARDINALITY);
    javaEnv->DeleteLocalRef(jresult_DATA_MAX_CARDINALITY);
  } else {
    result_DATA_MAX_CARDINALITY=NULL;
  }
  this->DATA_MAX_CARDINALITY = result_DATA_MAX_CARDINALITY;
  jfieldID fid_DATA_EXACT_CARDINALITY = javaEnv->GetStaticFieldID(cls, "DATA_EXACT_CARDINALITY", "Lorg/semanticweb/owlapi/model/ClassExpressionType;");
  handleJavaException(wrapperIntern);
  jobject jresult_DATA_EXACT_CARDINALITY = javaEnv->GetStaticObjectField(cls, fid_DATA_EXACT_CARDINALITY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::ClassExpressionType* result_DATA_EXACT_CARDINALITY;
  if (jresult_DATA_EXACT_CARDINALITY!=NULL) {
    result_DATA_EXACT_CARDINALITY=new org::semanticweb::owlapi::model::ClassExpressionType(jresult_DATA_EXACT_CARDINALITY);
    javaEnv->DeleteLocalRef(jresult_DATA_EXACT_CARDINALITY);
  } else {
    result_DATA_EXACT_CARDINALITY=NULL;
  }
  this->DATA_EXACT_CARDINALITY = result_DATA_EXACT_CARDINALITY;
  jfieldID fid_DATA_HAS_VALUE = javaEnv->GetStaticFieldID(cls, "DATA_HAS_VALUE", "Lorg/semanticweb/owlapi/model/ClassExpressionType;");
  handleJavaException(wrapperIntern);
  jobject jresult_DATA_HAS_VALUE = javaEnv->GetStaticObjectField(cls, fid_DATA_HAS_VALUE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::ClassExpressionType* result_DATA_HAS_VALUE;
  if (jresult_DATA_HAS_VALUE!=NULL) {
    result_DATA_HAS_VALUE=new org::semanticweb::owlapi::model::ClassExpressionType(jresult_DATA_HAS_VALUE);
    javaEnv->DeleteLocalRef(jresult_DATA_HAS_VALUE);
  } else {
    result_DATA_HAS_VALUE=NULL;
  }
  this->DATA_HAS_VALUE = result_DATA_HAS_VALUE;
  jfieldID fid_OBJECT_INTERSECTION_OF = javaEnv->GetStaticFieldID(cls, "OBJECT_INTERSECTION_OF", "Lorg/semanticweb/owlapi/model/ClassExpressionType;");
  handleJavaException(wrapperIntern);
  jobject jresult_OBJECT_INTERSECTION_OF = javaEnv->GetStaticObjectField(cls, fid_OBJECT_INTERSECTION_OF);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::ClassExpressionType* result_OBJECT_INTERSECTION_OF;
  if (jresult_OBJECT_INTERSECTION_OF!=NULL) {
    result_OBJECT_INTERSECTION_OF=new org::semanticweb::owlapi::model::ClassExpressionType(jresult_OBJECT_INTERSECTION_OF);
    javaEnv->DeleteLocalRef(jresult_OBJECT_INTERSECTION_OF);
  } else {
    result_OBJECT_INTERSECTION_OF=NULL;
  }
  this->OBJECT_INTERSECTION_OF = result_OBJECT_INTERSECTION_OF;
  jfieldID fid_OBJECT_UNION_OF = javaEnv->GetStaticFieldID(cls, "OBJECT_UNION_OF", "Lorg/semanticweb/owlapi/model/ClassExpressionType;");
  handleJavaException(wrapperIntern);
  jobject jresult_OBJECT_UNION_OF = javaEnv->GetStaticObjectField(cls, fid_OBJECT_UNION_OF);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::ClassExpressionType* result_OBJECT_UNION_OF;
  if (jresult_OBJECT_UNION_OF!=NULL) {
    result_OBJECT_UNION_OF=new org::semanticweb::owlapi::model::ClassExpressionType(jresult_OBJECT_UNION_OF);
    javaEnv->DeleteLocalRef(jresult_OBJECT_UNION_OF);
  } else {
    result_OBJECT_UNION_OF=NULL;
  }
  this->OBJECT_UNION_OF = result_OBJECT_UNION_OF;
  jfieldID fid_OBJECT_COMPLEMENT_OF = javaEnv->GetStaticFieldID(cls, "OBJECT_COMPLEMENT_OF", "Lorg/semanticweb/owlapi/model/ClassExpressionType;");
  handleJavaException(wrapperIntern);
  jobject jresult_OBJECT_COMPLEMENT_OF = javaEnv->GetStaticObjectField(cls, fid_OBJECT_COMPLEMENT_OF);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::ClassExpressionType* result_OBJECT_COMPLEMENT_OF;
  if (jresult_OBJECT_COMPLEMENT_OF!=NULL) {
    result_OBJECT_COMPLEMENT_OF=new org::semanticweb::owlapi::model::ClassExpressionType(jresult_OBJECT_COMPLEMENT_OF);
    javaEnv->DeleteLocalRef(jresult_OBJECT_COMPLEMENT_OF);
  } else {
    result_OBJECT_COMPLEMENT_OF=NULL;
  }
  this->OBJECT_COMPLEMENT_OF = result_OBJECT_COMPLEMENT_OF;
  jfieldID fid_OBJECT_ONE_OF = javaEnv->GetStaticFieldID(cls, "OBJECT_ONE_OF", "Lorg/semanticweb/owlapi/model/ClassExpressionType;");
  handleJavaException(wrapperIntern);
  jobject jresult_OBJECT_ONE_OF = javaEnv->GetStaticObjectField(cls, fid_OBJECT_ONE_OF);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::ClassExpressionType* result_OBJECT_ONE_OF;
  if (jresult_OBJECT_ONE_OF!=NULL) {
    result_OBJECT_ONE_OF=new org::semanticweb::owlapi::model::ClassExpressionType(jresult_OBJECT_ONE_OF);
    javaEnv->DeleteLocalRef(jresult_OBJECT_ONE_OF);
  } else {
    result_OBJECT_ONE_OF=NULL;
  }
  this->OBJECT_ONE_OF = result_OBJECT_ONE_OF;
}

void ClassExpressionType::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/ClassExpressionType");
  handleJavaException(wrapperIntern);
}

const char* ClassExpressionType::toString()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/ClassExpressionType");
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

JavaObjectArray* ClassExpressionType::values()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/ClassExpressionType");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "values", "()[Lorg/semanticweb/owlapi/model/ClassExpressionType;");
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

org::semanticweb::owlapi::model::ClassExpressionType* ClassExpressionType::valueOf(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/ClassExpressionType");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/semanticweb/owlapi/model/ClassExpressionType;");
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

const char* ClassExpressionType::getName()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/ClassExpressionType");
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
}
}
}
}
