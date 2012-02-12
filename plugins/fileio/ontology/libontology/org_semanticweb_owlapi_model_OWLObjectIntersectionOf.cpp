#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLObjectIntersectionOf.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLNaryBooleanClassExpression.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLObjectIntersectionOf::OWLObjectIntersectionOf(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLObjectIntersectionOf::OWLObjectIntersectionOf(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLObjectIntersectionOf::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectIntersectionOf");
  handleJavaException(wrapperIntern);
}

void OWLObjectIntersectionOf::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectIntersectionOf");
  handleJavaException(wrapperIntern);
}
}
}
}
}
