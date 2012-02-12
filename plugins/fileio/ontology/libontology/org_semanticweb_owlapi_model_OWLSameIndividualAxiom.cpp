#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLSameIndividualAxiom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLNaryIndividualAxiom.h>
#include <java_util_Set.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLSameIndividualAxiom::OWLSameIndividualAxiom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLSameIndividualAxiom::OWLSameIndividualAxiom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLSameIndividualAxiom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSameIndividualAxiom");
  handleJavaException(wrapperIntern);
}

void OWLSameIndividualAxiom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSameIndividualAxiom");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLSameIndividualAxiom* OWLSameIndividualAxiom::getAxiomWithoutAnnotations()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSameIndividualAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getAxiomWithoutAnnotations", "()Lorg/semanticweb/owlapi/model/OWLSameIndividualAxiom;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLSameIndividualAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLSameIndividualAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::util::Set* OWLSameIndividualAxiom::asPairwiseAxioms()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSameIndividualAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "asPairwiseAxioms", "()Ljava/util/Set;");
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

bool OWLSameIndividualAxiom::containsAnonymousIndividuals()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSameIndividualAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "containsAnonymousIndividuals", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
}
}
