#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLCardinalityRestriction.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLQuantifiedRestriction.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLCardinalityRestriction::OWLCardinalityRestriction(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLCardinalityRestriction::OWLCardinalityRestriction(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLCardinalityRestriction::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLCardinalityRestriction");
  handleJavaException(wrapperIntern);
}

void OWLCardinalityRestriction::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLCardinalityRestriction");
  handleJavaException(wrapperIntern);
}

int OWLCardinalityRestriction::getCardinality()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLCardinalityRestriction");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getCardinality", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool OWLCardinalityRestriction::isQualified()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLCardinalityRestriction");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isQualified", "()Z");
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
