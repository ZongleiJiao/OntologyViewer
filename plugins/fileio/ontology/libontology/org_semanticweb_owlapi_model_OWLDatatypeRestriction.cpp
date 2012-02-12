#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLDatatypeRestriction.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLDataRange.h>
#include <org_semanticweb_owlapi_model_OWLDatatype.h>
#include <java_util_Set.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLDatatypeRestriction::OWLDatatypeRestriction(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLDatatypeRestriction::OWLDatatypeRestriction(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLDatatypeRestriction::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDatatypeRestriction");
  handleJavaException(wrapperIntern);
}

void OWLDatatypeRestriction::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDatatypeRestriction");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLDatatype* OWLDatatypeRestriction::getDatatype()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDatatypeRestriction");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getDatatype", "()Lorg/semanticweb/owlapi/model/OWLDatatype;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLDatatype* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLDatatype(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::util::Set* OWLDatatypeRestriction::getFacetRestrictions()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDatatypeRestriction");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getFacetRestrictions", "()Ljava/util/Set;");
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
