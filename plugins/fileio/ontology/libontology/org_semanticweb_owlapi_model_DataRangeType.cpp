#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_DataRangeType.h>
#include <java_lang_Enum.h>
#include <java_lang_String.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

DataRangeType::DataRangeType(JavaMarker* dummy)
  : java::lang::Enum(dummy)
{
  updateAllVariables(wrapperIntern);
}

DataRangeType::DataRangeType(jobject obj)
  : java::lang::Enum(obj)
{
  updateAllVariables(wrapperIntern);
}

void DataRangeType::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/DataRangeType");
  handleJavaException(wrapperIntern);
  jfieldID fid_DATATYPE = javaEnv->GetStaticFieldID(cls, "DATATYPE", "Lorg/semanticweb/owlapi/model/DataRangeType;");
  handleJavaException(wrapperIntern);
  jobject jresult_DATATYPE = javaEnv->GetStaticObjectField(cls, fid_DATATYPE);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::DataRangeType* result_DATATYPE;
  if (jresult_DATATYPE!=NULL) {
    result_DATATYPE=new org::semanticweb::owlapi::model::DataRangeType(jresult_DATATYPE);
    javaEnv->DeleteLocalRef(jresult_DATATYPE);
  } else {
    result_DATATYPE=NULL;
  }
  this->DATATYPE = result_DATATYPE;
  jfieldID fid_DATA_ONE_OF = javaEnv->GetStaticFieldID(cls, "DATA_ONE_OF", "Lorg/semanticweb/owlapi/model/DataRangeType;");
  handleJavaException(wrapperIntern);
  jobject jresult_DATA_ONE_OF = javaEnv->GetStaticObjectField(cls, fid_DATA_ONE_OF);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::DataRangeType* result_DATA_ONE_OF;
  if (jresult_DATA_ONE_OF!=NULL) {
    result_DATA_ONE_OF=new org::semanticweb::owlapi::model::DataRangeType(jresult_DATA_ONE_OF);
    javaEnv->DeleteLocalRef(jresult_DATA_ONE_OF);
  } else {
    result_DATA_ONE_OF=NULL;
  }
  this->DATA_ONE_OF = result_DATA_ONE_OF;
  jfieldID fid_DATATYPE_RESTRICTION = javaEnv->GetStaticFieldID(cls, "DATATYPE_RESTRICTION", "Lorg/semanticweb/owlapi/model/DataRangeType;");
  handleJavaException(wrapperIntern);
  jobject jresult_DATATYPE_RESTRICTION = javaEnv->GetStaticObjectField(cls, fid_DATATYPE_RESTRICTION);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::DataRangeType* result_DATATYPE_RESTRICTION;
  if (jresult_DATATYPE_RESTRICTION!=NULL) {
    result_DATATYPE_RESTRICTION=new org::semanticweb::owlapi::model::DataRangeType(jresult_DATATYPE_RESTRICTION);
    javaEnv->DeleteLocalRef(jresult_DATATYPE_RESTRICTION);
  } else {
    result_DATATYPE_RESTRICTION=NULL;
  }
  this->DATATYPE_RESTRICTION = result_DATATYPE_RESTRICTION;
  jfieldID fid_DATA_COMPLEMENT_OF = javaEnv->GetStaticFieldID(cls, "DATA_COMPLEMENT_OF", "Lorg/semanticweb/owlapi/model/DataRangeType;");
  handleJavaException(wrapperIntern);
  jobject jresult_DATA_COMPLEMENT_OF = javaEnv->GetStaticObjectField(cls, fid_DATA_COMPLEMENT_OF);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::DataRangeType* result_DATA_COMPLEMENT_OF;
  if (jresult_DATA_COMPLEMENT_OF!=NULL) {
    result_DATA_COMPLEMENT_OF=new org::semanticweb::owlapi::model::DataRangeType(jresult_DATA_COMPLEMENT_OF);
    javaEnv->DeleteLocalRef(jresult_DATA_COMPLEMENT_OF);
  } else {
    result_DATA_COMPLEMENT_OF=NULL;
  }
  this->DATA_COMPLEMENT_OF = result_DATA_COMPLEMENT_OF;
  jfieldID fid_DATA_UNION_OF = javaEnv->GetStaticFieldID(cls, "DATA_UNION_OF", "Lorg/semanticweb/owlapi/model/DataRangeType;");
  handleJavaException(wrapperIntern);
  jobject jresult_DATA_UNION_OF = javaEnv->GetStaticObjectField(cls, fid_DATA_UNION_OF);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::DataRangeType* result_DATA_UNION_OF;
  if (jresult_DATA_UNION_OF!=NULL) {
    result_DATA_UNION_OF=new org::semanticweb::owlapi::model::DataRangeType(jresult_DATA_UNION_OF);
    javaEnv->DeleteLocalRef(jresult_DATA_UNION_OF);
  } else {
    result_DATA_UNION_OF=NULL;
  }
  this->DATA_UNION_OF = result_DATA_UNION_OF;
  jfieldID fid_DATA_INTERSECTION_OF = javaEnv->GetStaticFieldID(cls, "DATA_INTERSECTION_OF", "Lorg/semanticweb/owlapi/model/DataRangeType;");
  handleJavaException(wrapperIntern);
  jobject jresult_DATA_INTERSECTION_OF = javaEnv->GetStaticObjectField(cls, fid_DATA_INTERSECTION_OF);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::DataRangeType* result_DATA_INTERSECTION_OF;
  if (jresult_DATA_INTERSECTION_OF!=NULL) {
    result_DATA_INTERSECTION_OF=new org::semanticweb::owlapi::model::DataRangeType(jresult_DATA_INTERSECTION_OF);
    javaEnv->DeleteLocalRef(jresult_DATA_INTERSECTION_OF);
  } else {
    result_DATA_INTERSECTION_OF=NULL;
  }
  this->DATA_INTERSECTION_OF = result_DATA_INTERSECTION_OF;
}

void DataRangeType::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/DataRangeType");
  handleJavaException(wrapperIntern);
}

JavaObjectArray* DataRangeType::values()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/DataRangeType");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "values", "()[Lorg/semanticweb/owlapi/model/DataRangeType;");
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

org::semanticweb::owlapi::model::DataRangeType* DataRangeType::valueOf(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/DataRangeType");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/semanticweb/owlapi/model/DataRangeType;");
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
  org::semanticweb::owlapi::model::DataRangeType* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::DataRangeType(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

const char* DataRangeType::getName()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/DataRangeType");
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
