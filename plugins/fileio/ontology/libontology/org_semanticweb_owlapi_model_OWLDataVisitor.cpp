#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLDataVisitor.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLDataRangeVisitor.h>
#include <org_semanticweb_owlapi_model_OWLLiteral.h>
#include <org_semanticweb_owlapi_model_OWLFacetRestriction.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLDataVisitor::OWLDataVisitor(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLDataVisitor::OWLDataVisitor(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLDataVisitor::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataVisitor");
  handleJavaException(wrapperIntern);
}

void OWLDataVisitor::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataVisitor");
  handleJavaException(wrapperIntern);
}

void OWLDataVisitor::visit(org::semanticweb::owlapi::model::OWLLiteral* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataVisitor");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/OWLLiteral;)V");
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

void OWLDataVisitor::visit(org::semanticweb::owlapi::model::OWLFacetRestriction* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataVisitor");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "visit", "(Lorg/semanticweb/owlapi/model/OWLFacetRestriction;)V");
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
