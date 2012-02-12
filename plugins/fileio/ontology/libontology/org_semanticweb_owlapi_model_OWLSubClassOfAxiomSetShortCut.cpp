#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLSubClassOfAxiomSetShortCut.h>
#include <java_lang_Object.h>
#include <java_util_Set.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLSubClassOfAxiomSetShortCut::OWLSubClassOfAxiomSetShortCut(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLSubClassOfAxiomSetShortCut::OWLSubClassOfAxiomSetShortCut(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLSubClassOfAxiomSetShortCut::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSubClassOfAxiomSetShortCut");
  handleJavaException(wrapperIntern);
}

void OWLSubClassOfAxiomSetShortCut::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSubClassOfAxiomSetShortCut");
  handleJavaException(wrapperIntern);
}

java::util::Set* OWLSubClassOfAxiomSetShortCut::asOWLSubClassOfAxioms()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSubClassOfAxiomSetShortCut");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "asOWLSubClassOfAxioms", "()Ljava/util/Set;");
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
