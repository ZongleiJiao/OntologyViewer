#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLAxiomChange.h>
#include <org_semanticweb_owlapi_model_OWLOntologyChange.h>
#include <org_semanticweb_owlapi_model_OWLOntology.h>
#include <org_semanticweb_owlapi_model_OWLAxiom.h>
#include <java_util_Set.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLAxiomChange::OWLAxiomChange(JavaMarker* dummy)
  : org::semanticweb::owlapi::model::OWLOntologyChange(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLAxiomChange::OWLAxiomChange(jobject obj)
  : org::semanticweb::owlapi::model::OWLOntologyChange(obj)
{
  updateAllVariables(wrapperIntern);
}

OWLAxiomChange::OWLAxiomChange(org::semanticweb::owlapi::model::OWLOntology* arg1, org::semanticweb::owlapi::model::OWLAxiom* arg2)
  : org::semanticweb::owlapi::model::OWLOntologyChange(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLAxiomChange");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "(Lorg/semanticweb/owlapi/model/OWLOntology;Lorg/semanticweb/owlapi/model/OWLAxiom;)V");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject o = javaEnv->NewObject(cls, mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  updateAllVariables(wrapperIntern);
}

void OWLAxiomChange::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLAxiomChange");
  handleJavaException(wrapperIntern);
}

void OWLAxiomChange::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLAxiomChange");
  handleJavaException(wrapperIntern);
}

bool OWLAxiomChange::isAxiomChange()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLAxiomChange");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isAxiomChange", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAxiom* OWLAxiomChange::getAxiom()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLAxiomChange");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getAxiom", "()Lorg/semanticweb/owlapi/model/OWLAxiom;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool OWLAxiomChange::isImportChange()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLAxiomChange");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isImportChange", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::util::Set* OWLAxiomChange::getEntities()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLAxiomChange");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getEntities", "()Ljava/util/Set;");
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
