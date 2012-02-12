#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLOntologyIRIMapper.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_IRI.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLOntologyIRIMapper::OWLOntologyIRIMapper(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLOntologyIRIMapper::OWLOntologyIRIMapper(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLOntologyIRIMapper::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyIRIMapper");
  handleJavaException(wrapperIntern);
}

void OWLOntologyIRIMapper::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyIRIMapper");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::IRI* OWLOntologyIRIMapper::getDocumentIRI(org::semanticweb::owlapi::model::IRI* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLOntologyIRIMapper");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getDocumentIRI", "(Lorg/semanticweb/owlapi/model/IRI;)Lorg/semanticweb/owlapi/model/IRI;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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
}
}
}
}
