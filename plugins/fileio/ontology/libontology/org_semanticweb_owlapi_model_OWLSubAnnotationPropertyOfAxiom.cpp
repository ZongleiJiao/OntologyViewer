#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLSubAnnotationPropertyOfAxiom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLAnnotationAxiom.h>
#include <org_semanticweb_owlapi_model_OWLAnnotationProperty.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLSubAnnotationPropertyOfAxiom::OWLSubAnnotationPropertyOfAxiom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLSubAnnotationPropertyOfAxiom::OWLSubAnnotationPropertyOfAxiom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLSubAnnotationPropertyOfAxiom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSubAnnotationPropertyOfAxiom");
  handleJavaException(wrapperIntern);
}

void OWLSubAnnotationPropertyOfAxiom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSubAnnotationPropertyOfAxiom");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLSubAnnotationPropertyOfAxiom* OWLSubAnnotationPropertyOfAxiom::getAxiomWithoutAnnotations()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSubAnnotationPropertyOfAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getAxiomWithoutAnnotations", "()Lorg/semanticweb/owlapi/model/OWLSubAnnotationPropertyOfAxiom;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLSubAnnotationPropertyOfAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLSubAnnotationPropertyOfAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnnotationProperty* OWLSubAnnotationPropertyOfAxiom::getSubProperty()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSubAnnotationPropertyOfAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSubProperty", "()Lorg/semanticweb/owlapi/model/OWLAnnotationProperty;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLAnnotationProperty* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAnnotationProperty(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLAnnotationProperty* OWLSubAnnotationPropertyOfAxiom::getSuperProperty()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSubAnnotationPropertyOfAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSuperProperty", "()Lorg/semanticweb/owlapi/model/OWLAnnotationProperty;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLAnnotationProperty* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLAnnotationProperty(jresult);
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
