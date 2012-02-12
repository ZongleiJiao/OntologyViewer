#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLDataProperty.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLDataPropertyExpression.h>
#include <org_semanticweb_owlapi_model_OWLProperty.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLDataProperty::OWLDataProperty(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLDataProperty::OWLDataProperty(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLDataProperty::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataProperty");
  handleJavaException(wrapperIntern);
}

void OWLDataProperty::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataProperty");
  handleJavaException(wrapperIntern);
}
}
}
}
}
