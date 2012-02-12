#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLAnnotationObjectVisitorEx.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLAnnotationAxiomVisitorEx.h>
#include <org_semanticweb_owlapi_model_OWLAnnotationValueVisitorEx.h>
#include <org_semanticweb_owlapi_model_OWLAnnotation.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLAnnotationObjectVisitorEx::OWLAnnotationObjectVisitorEx(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLAnnotationObjectVisitorEx::OWLAnnotationObjectVisitorEx(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLAnnotationObjectVisitorEx::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLAnnotationObjectVisitorEx");
  handleJavaException(wrapperIntern);
}

void OWLAnnotationObjectVisitorEx::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLAnnotationObjectVisitorEx");
  handleJavaException(wrapperIntern);
}

java::lang::Object* OWLAnnotationObjectVisitorEx::visit(org::semanticweb::owlapi::model::OWLAnnotation* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLAnnotationObjectVisitorEx");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/OWLAnnotation;)Ljava/lang/Object;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::Object* result;
  if (jresult!=NULL) {
    result=new java::lang::Object(jresult);
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
