#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLUnaryPropertyAxiom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLPropertyAxiom.h>
#include <org_semanticweb_owlapi_model_OWLPropertyExpression.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLUnaryPropertyAxiom::OWLUnaryPropertyAxiom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLUnaryPropertyAxiom::OWLUnaryPropertyAxiom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLUnaryPropertyAxiom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLUnaryPropertyAxiom");
  handleJavaException(wrapperIntern);
}

void OWLUnaryPropertyAxiom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLUnaryPropertyAxiom");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLPropertyExpression* OWLUnaryPropertyAxiom::getProperty()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLUnaryPropertyAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getProperty", "()Lorg/semanticweb/owlapi/model/OWLPropertyExpression;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLPropertyExpression* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLPropertyExpression(jresult);
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
