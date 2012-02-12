#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLEquivalentDataPropertiesAxiom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLNaryPropertyAxiom.h>
#include <org_semanticweb_owlapi_model_OWLDataPropertyAxiom.h>
#include <java_util_Set.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLEquivalentDataPropertiesAxiom::OWLEquivalentDataPropertiesAxiom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLEquivalentDataPropertiesAxiom::OWLEquivalentDataPropertiesAxiom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLEquivalentDataPropertiesAxiom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLEquivalentDataPropertiesAxiom");
  handleJavaException(wrapperIntern);
}

void OWLEquivalentDataPropertiesAxiom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLEquivalentDataPropertiesAxiom");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLEquivalentDataPropertiesAxiom* OWLEquivalentDataPropertiesAxiom::getAxiomWithoutAnnotations()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLEquivalentDataPropertiesAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getAxiomWithoutAnnotations", "()Lorg/semanticweb/owlapi/model/OWLEquivalentDataPropertiesAxiom;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLEquivalentDataPropertiesAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLEquivalentDataPropertiesAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::util::Set* OWLEquivalentDataPropertiesAxiom::asSubDataPropertyOfAxioms()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLEquivalentDataPropertiesAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "asSubDataPropertyOfAxioms", "()Ljava/util/Set;");
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
