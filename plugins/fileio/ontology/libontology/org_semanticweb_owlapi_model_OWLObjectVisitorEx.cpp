#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLObjectVisitorEx.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLAxiomVisitorEx.h>
#include <org_semanticweb_owlapi_model_OWLClassExpressionVisitorEx.h>
#include <org_semanticweb_owlapi_model_OWLDataVisitorEx.h>
#include <org_semanticweb_owlapi_model_OWLPropertyExpressionVisitorEx.h>
#include <org_semanticweb_owlapi_model_OWLEntityVisitorEx.h>
#include <org_semanticweb_owlapi_model_OWLAnnotationObjectVisitorEx.h>
#include <org_semanticweb_owlapi_model_SWRLObjectVisitorEx.h>
#include <org_semanticweb_owlapi_model_OWLNamedObjectVisitorEx.h>
#include <org_semanticweb_owlapi_model_OWLIndividualVisitorEx.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLObjectVisitorEx::OWLObjectVisitorEx(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLObjectVisitorEx::OWLObjectVisitorEx(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLObjectVisitorEx::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectVisitorEx");
  handleJavaException(wrapperIntern);
}

void OWLObjectVisitorEx::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectVisitorEx");
  handleJavaException(wrapperIntern);
}
}
}
}
}
