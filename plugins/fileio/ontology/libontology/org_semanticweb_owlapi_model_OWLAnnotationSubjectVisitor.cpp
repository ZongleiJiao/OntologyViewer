#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLAnnotationSubjectVisitor.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_IRI.h>
#include <org_semanticweb_owlapi_model_OWLAnonymousIndividual.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLAnnotationSubjectVisitor::OWLAnnotationSubjectVisitor(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLAnnotationSubjectVisitor::OWLAnnotationSubjectVisitor(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLAnnotationSubjectVisitor::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLAnnotationSubjectVisitor");
  handleJavaException(wrapperIntern);
}

void OWLAnnotationSubjectVisitor::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLAnnotationSubjectVisitor");
  handleJavaException(wrapperIntern);
}

void OWLAnnotationSubjectVisitor::visit(org::semanticweb::owlapi::model::IRI* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLAnnotationSubjectVisitor");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/IRI;)V");
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

void OWLAnnotationSubjectVisitor::visit(org::semanticweb::owlapi::model::OWLAnonymousIndividual* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLAnnotationSubjectVisitor");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/OWLAnonymousIndividual;)V");
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
