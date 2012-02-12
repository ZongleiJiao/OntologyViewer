#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLPropertyExpressionVisitor.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLObjectProperty.h>
#include <org_semanticweb_owlapi_model_OWLObjectInverseOf.h>
#include <org_semanticweb_owlapi_model_OWLDataProperty.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLPropertyExpressionVisitor::OWLPropertyExpressionVisitor(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLPropertyExpressionVisitor::OWLPropertyExpressionVisitor(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLPropertyExpressionVisitor::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLPropertyExpressionVisitor");
  handleJavaException(wrapperIntern);
}

void OWLPropertyExpressionVisitor::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLPropertyExpressionVisitor");
  handleJavaException(wrapperIntern);
}

void OWLPropertyExpressionVisitor::visit(org::semanticweb::owlapi::model::OWLObjectProperty* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLPropertyExpressionVisitor");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/OWLObjectProperty;)V");
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

void OWLPropertyExpressionVisitor::visit(org::semanticweb::owlapi::model::OWLObjectInverseOf* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLPropertyExpressionVisitor");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/OWLObjectInverseOf;)V");
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

void OWLPropertyExpressionVisitor::visit(org::semanticweb::owlapi::model::OWLDataProperty* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLPropertyExpressionVisitor");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/OWLDataProperty;)V");
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
