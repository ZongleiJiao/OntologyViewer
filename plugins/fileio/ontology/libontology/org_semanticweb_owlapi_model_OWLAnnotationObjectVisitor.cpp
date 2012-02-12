#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLAnnotationObjectVisitor.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLAnnotationAxiomVisitor.h>
#include <org_semanticweb_owlapi_model_OWLAnnotationValueVisitor.h>
#include <org_semanticweb_owlapi_model_OWLAnnotation.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLAnnotationObjectVisitor::OWLAnnotationObjectVisitor(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLAnnotationObjectVisitor::OWLAnnotationObjectVisitor(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLAnnotationObjectVisitor::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLAnnotationObjectVisitor");
  handleJavaException(wrapperIntern);
}

void OWLAnnotationObjectVisitor::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLAnnotationObjectVisitor");
  handleJavaException(wrapperIntern);
}

void OWLAnnotationObjectVisitor::visit(org::semanticweb::owlapi::model::OWLAnnotation* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLAnnotationObjectVisitor");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/OWLAnnotation;)V");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
}
}
