#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy.h>
#include <java_lang_Enum.h>
#include <java_lang_String.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy::OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy(JavaMarker* dummy)
  : java::lang::Enum(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy::OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy(jobject obj)
  : java::lang::Enum(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration$MissingOntologyHeaderStrategy");
  handleJavaException(wrapperIntern);
  jfieldID fid_INCLUDE_GRAPH = javaEnv->GetStaticFieldID(cls, "INCLUDE_GRAPH", "Lorg/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration$MissingOntologyHeaderStrategy;");
  handleJavaException(wrapperIntern);
  jobject jresult_INCLUDE_GRAPH = javaEnv->GetStaticObjectField(cls, fid_INCLUDE_GRAPH);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy* result_INCLUDE_GRAPH;
  if (jresult_INCLUDE_GRAPH!=NULL) {
    result_INCLUDE_GRAPH=new org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy(jresult_INCLUDE_GRAPH);
    javaEnv->DeleteLocalRef(jresult_INCLUDE_GRAPH);
  } else {
    result_INCLUDE_GRAPH=NULL;
  }
  this->INCLUDE_GRAPH = result_INCLUDE_GRAPH;
  jfieldID fid_IMPORT_GRAPH = javaEnv->GetStaticFieldID(cls, "IMPORT_GRAPH", "Lorg/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration$MissingOntologyHeaderStrategy;");
  handleJavaException(wrapperIntern);
  jobject jresult_IMPORT_GRAPH = javaEnv->GetStaticObjectField(cls, fid_IMPORT_GRAPH);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy* result_IMPORT_GRAPH;
  if (jresult_IMPORT_GRAPH!=NULL) {
    result_IMPORT_GRAPH=new org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy(jresult_IMPORT_GRAPH);
    javaEnv->DeleteLocalRef(jresult_IMPORT_GRAPH);
  } else {
    result_IMPORT_GRAPH=NULL;
  }
  this->IMPORT_GRAPH = result_IMPORT_GRAPH;
}

void OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration$MissingOntologyHeaderStrategy");
  handleJavaException(wrapperIntern);
}

JavaObjectArray* OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy::values()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration$MissingOntologyHeaderStrategy");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "values", "()[Lorg/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration$MissingOntologyHeaderStrategy;");
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

org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy* OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy::valueOf(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration$MissingOntologyHeaderStrategy");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration$MissingOntologyHeaderStrategy;");
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
  org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy(jresult);
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
