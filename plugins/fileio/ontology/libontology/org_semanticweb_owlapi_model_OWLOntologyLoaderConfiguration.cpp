#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLOntologyLoaderConfiguration.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy.h>
#include <org_semanticweb_owlapi_model_IRI.h>
#include <java_util_Set.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLOntologyLoaderConfiguration::OWLOntologyLoaderConfiguration(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLOntologyLoaderConfiguration::OWLOntologyLoaderConfiguration(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

OWLOntologyLoaderConfiguration::OWLOntologyLoaderConfiguration()
  : java::lang::Object(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "()V");
  handleJavaException(wrapperIntern);
  jobject o = javaEnv->NewObject(cls, mid);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  updateAllVariables(wrapperIntern);
}

void OWLOntologyLoaderConfiguration::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration");
  handleJavaException(wrapperIntern);
  jfieldID fid_DEFAULT_LOAD_ANNOTATIONS_FLAG_VALUE = javaEnv->GetStaticFieldID(cls, "DEFAULT_LOAD_ANNOTATIONS_FLAG_VALUE", "Z");
  handleJavaException(wrapperIntern);
  jboolean jresult_DEFAULT_LOAD_ANNOTATIONS_FLAG_VALUE = javaEnv->GetStaticBooleanField(cls, fid_DEFAULT_LOAD_ANNOTATIONS_FLAG_VALUE);
  handleJavaException(wrapperIntern);
  bool result_DEFAULT_LOAD_ANNOTATIONS_FLAG_VALUE = (bool)jresult_DEFAULT_LOAD_ANNOTATIONS_FLAG_VALUE;
  this->DEFAULT_LOAD_ANNOTATIONS_FLAG_VALUE = result_DEFAULT_LOAD_ANNOTATIONS_FLAG_VALUE;
  jfieldID fid_DEFAULT_MISSING_ONTOLOGY_HEADER_STRATEGY = javaEnv->GetStaticFieldID(cls, "DEFAULT_MISSING_ONTOLOGY_HEADER_STRATEGY", "Lorg/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration$MissingOntologyHeaderStrategy;");
  handleJavaException(wrapperIntern);
  jobject jresult_DEFAULT_MISSING_ONTOLOGY_HEADER_STRATEGY = javaEnv->GetStaticObjectField(cls, fid_DEFAULT_MISSING_ONTOLOGY_HEADER_STRATEGY);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy* result_DEFAULT_MISSING_ONTOLOGY_HEADER_STRATEGY;
  if (jresult_DEFAULT_MISSING_ONTOLOGY_HEADER_STRATEGY!=NULL) {
    result_DEFAULT_MISSING_ONTOLOGY_HEADER_STRATEGY=new org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy(jresult_DEFAULT_MISSING_ONTOLOGY_HEADER_STRATEGY);
    javaEnv->DeleteLocalRef(jresult_DEFAULT_MISSING_ONTOLOGY_HEADER_STRATEGY);
  } else {
    result_DEFAULT_MISSING_ONTOLOGY_HEADER_STRATEGY=NULL;
  }
  this->DEFAULT_MISSING_ONTOLOGY_HEADER_STRATEGY = result_DEFAULT_MISSING_ONTOLOGY_HEADER_STRATEGY;
}

void OWLOntologyLoaderConfiguration::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration");
  handleJavaException(wrapperIntern);
}

bool OWLOntologyLoaderConfiguration::isStrict()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isStrict", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

void OWLOntologyLoaderConfiguration::setSilentMissingImportsHandling(bool arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "setSilentMissingImportsHandling", "(Z)V");
  handleJavaException(wrapperIntern);
  jboolean jarg1 = (jboolean)arg1;
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

bool OWLOntologyLoaderConfiguration::isSilentMissingImportsHandling()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isSilentMissingImportsHandling", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy* OWLOntologyLoaderConfiguration::getMissingOntologyHeaderStrategy()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getMissingOntologyHeaderStrategy", "()Lorg/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration$MissingOntologyHeaderStrategy;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
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

org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration* OWLOntologyLoaderConfiguration::setMissingOntologyHeaderStrategy(org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "setMissingOntologyHeaderStrategy", "(Lorg/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration$MissingOntologyHeaderStrategy;)Lorg/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration* OWLOntologyLoaderConfiguration::setLoadAnnotationAxioms(bool arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "setLoadAnnotationAxioms", "(Z)Lorg/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration;");
  handleJavaException(wrapperIntern);
  jboolean jarg1 = (jboolean)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool OWLOntologyLoaderConfiguration::isLoadAnnotationAxioms()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isLoadAnnotationAxioms", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration* OWLOntologyLoaderConfiguration::setStrict(bool arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "setStrict", "(Z)Lorg/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration;");
  handleJavaException(wrapperIntern);
  jboolean jarg1 = (jboolean)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool OWLOntologyLoaderConfiguration::isIgnoredImport(org::semanticweb::owlapi::model::IRI* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isIgnoredImport", "(Lorg/semanticweb/owlapi/model/IRI;)Z");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::util::Set* OWLOntologyLoaderConfiguration::getIgnoredImports()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getIgnoredImports", "()Ljava/util/Set;");
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

org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration* OWLOntologyLoaderConfiguration::addIgnoredImport(org::semanticweb::owlapi::model::IRI* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "addIgnoredImport", "(Lorg/semanticweb/owlapi/model/IRI;)Lorg/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration* OWLOntologyLoaderConfiguration::removeIgnoredImport(org::semanticweb::owlapi::model::IRI* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "removeIgnoredImport", "(Lorg/semanticweb/owlapi/model/IRI;)Lorg/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration* OWLOntologyLoaderConfiguration::clearIgnoredImports()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "clearIgnoredImports", "()Lorg/semanticweb/owlapi/model/OWLOntologyLoaderConfiguration;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration(jresult);
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
