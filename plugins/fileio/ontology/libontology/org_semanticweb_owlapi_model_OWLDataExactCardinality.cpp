#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLDataExactCardinality.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLDataCardinalityRestriction.h>
#include <org_semanticweb_owlapi_model_OWLClassExpression.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLDataExactCardinality::OWLDataExactCardinality(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLDataExactCardinality::OWLDataExactCardinality(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLDataExactCardinality::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataExactCardinality");
  handleJavaException(wrapperIntern);
}

void OWLDataExactCardinality::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataExactCardinality");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLClassExpression* OWLDataExactCardinality::asIntersectionOfMinMax()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataExactCardinality");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "asIntersectionOfMinMax", "()Lorg/semanticweb/owlapi/model/OWLClassExpression;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLClassExpression* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLClassExpression(jresult);
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
