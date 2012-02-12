#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLSubPropertyChainOfAxiom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLObjectPropertyAxiom.h>
#include <org_semanticweb_owlapi_model_OWLObjectPropertyExpression.h>
#include <java_util_List.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLSubPropertyChainOfAxiom::OWLSubPropertyChainOfAxiom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLSubPropertyChainOfAxiom::OWLSubPropertyChainOfAxiom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLSubPropertyChainOfAxiom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSubPropertyChainOfAxiom");
  handleJavaException(wrapperIntern);
}

void OWLSubPropertyChainOfAxiom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSubPropertyChainOfAxiom");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLSubPropertyChainOfAxiom* OWLSubPropertyChainOfAxiom::getAxiomWithoutAnnotations()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSubPropertyChainOfAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getAxiomWithoutAnnotations", "()Lorg/semanticweb/owlapi/model/OWLSubPropertyChainOfAxiom;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLSubPropertyChainOfAxiom* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLSubPropertyChainOfAxiom(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::OWLObjectPropertyExpression* OWLSubPropertyChainOfAxiom::getSuperProperty()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSubPropertyChainOfAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSuperProperty", "()Lorg/semanticweb/owlapi/model/OWLObjectPropertyExpression;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::OWLObjectPropertyExpression* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::OWLObjectPropertyExpression(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::util::List* OWLSubPropertyChainOfAxiom::getPropertyChain()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSubPropertyChainOfAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getPropertyChain", "()Ljava/util/List;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::util::List* result;
  if (jresult!=NULL) {
    result=new java::util::List(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool OWLSubPropertyChainOfAxiom::isEncodingOfTransitiveProperty()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLSubPropertyChainOfAxiom");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isEncodingOfTransitiveProperty", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
}
}
