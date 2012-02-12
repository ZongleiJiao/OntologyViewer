#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLObjectVisitor.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLAxiomVisitor.h>
#include <org_semanticweb_owlapi_model_OWLClassExpressionVisitor.h>
#include <org_semanticweb_owlapi_model_OWLDataVisitor.h>
#include <org_semanticweb_owlapi_model_OWLPropertyExpressionVisitor.h>
#include <org_semanticweb_owlapi_model_OWLEntityVisitor.h>
#include <org_semanticweb_owlapi_model_OWLAnnotationAxiomVisitor.h>
#include <org_semanticweb_owlapi_model_OWLIndividualVisitor.h>
#include <org_semanticweb_owlapi_model_OWLAnnotationValueVisitor.h>
#include <org_semanticweb_owlapi_model_OWLAnnotationObjectVisitor.h>
#include <org_semanticweb_owlapi_model_SWRLObjectVisitor.h>
#include <org_semanticweb_owlapi_model_OWLOntology.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLObjectVisitor::OWLObjectVisitor(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLObjectVisitor::OWLObjectVisitor(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLObjectVisitor::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectVisitor");
  handleJavaException(wrapperIntern);
}

void OWLObjectVisitor::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectVisitor");
  handleJavaException(wrapperIntern);
}

void OWLObjectVisitor::visit(org::semanticweb::owlapi::model::OWLOntology* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectVisitor");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/OWLOntology;)V");
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
