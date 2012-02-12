#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLDatatype.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLDataRange.h>
#include <org_semanticweb_owlapi_model_OWLLogicalEntity.h>
#include <org_semanticweb_owlapi_model_OWLNamedObject.h>
#include <org_semanticweb_owlapi_vocab_OWL2Datatype.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLDatatype::OWLDatatype(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLDatatype::OWLDatatype(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLDatatype::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDatatype");
  handleJavaException(wrapperIntern);
}

void OWLDatatype::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDatatype");
  handleJavaException(wrapperIntern);
}

org::semanticweb::owlapi::vocab::OWL2Datatype* OWLDatatype::getBuiltInDatatype()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDatatype");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getBuiltInDatatype", "()Lorg/semanticweb/owlapi/vocab/OWL2Datatype;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::OWL2Datatype* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::vocab::OWL2Datatype(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool OWLDatatype::isString()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDatatype");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isString", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool OWLDatatype::isInteger()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDatatype");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isInteger", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool OWLDatatype::isFloat()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDatatype");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isFloat", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool OWLDatatype::isDouble()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDatatype");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isDouble", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool OWLDatatype::isBoolean()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDatatype");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isBoolean", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool OWLDatatype::isRDFPlainLiteral()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDatatype");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isRDFPlainLiteral", "()Z");
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
