#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLObjectProperty.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLObjectPropertyExpression.h>
#include <org_semanticweb_owlapi_model_OWLProperty.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLObjectProperty::OWLObjectProperty(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLObjectProperty::OWLObjectProperty(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLObjectProperty::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectProperty");
  handleJavaException(wrapperIntern);
}

void OWLObjectProperty::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectProperty");
  handleJavaException(wrapperIntern);
}
}
}
}
}
