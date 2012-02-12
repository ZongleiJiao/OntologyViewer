#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLSubPropertyAxiom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLPropertyAxiom.h>
#include <org_semanticweb_owlapi_model_OWLPropertyExpression.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLSubPropertyAxiom::OWLSubPropertyAxiom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLSubPropertyAxiom::OWLSubPropertyAxiom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLSubPropertyAxiom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSubPropertyAxiom");
  handleJavaException(wrapperIntern);
}

void OWLSubPropertyAxiom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSubPropertyAxiom");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLPropertyExpression* OWLSubPropertyAxiom::getSubProperty()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSubPropertyAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSubProperty", "()Lorg/semanticweb/owlapi/model/OWLPropertyExpression;");
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

org::semanticweb::owlapi::model::OWLPropertyExpression* OWLSubPropertyAxiom::getSuperProperty()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSubPropertyAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSuperProperty", "()Lorg/semanticweb/owlapi/model/OWLPropertyExpression;");
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
