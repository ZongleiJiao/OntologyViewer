#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLObjectHasValue.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLHasValueRestriction.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLObjectHasValue::OWLObjectHasValue(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLObjectHasValue::OWLObjectHasValue(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLObjectHasValue::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectHasValue");
  handleJavaException(wrapperIntern);
}

void OWLObjectHasValue::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectHasValue");
  handleJavaException(wrapperIntern);
}
}
}
}
}
