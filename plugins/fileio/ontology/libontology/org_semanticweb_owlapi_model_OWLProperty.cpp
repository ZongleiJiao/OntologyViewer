#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLProperty.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLPropertyExpression.h>
#include <org_semanticweb_owlapi_model_OWLLogicalEntity.h>
#include <org_semanticweb_owlapi_model_OWLNamedObject.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLProperty::OWLProperty(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLProperty::OWLProperty(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLProperty::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLProperty");
  handleJavaException(wrapperIntern);
}

void OWLProperty::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLProperty");
  handleJavaException(wrapperIntern);
}
}
}
}
}
