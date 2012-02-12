#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLBooleanClassExpression.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLAnonymousClassExpression.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLBooleanClassExpression::OWLBooleanClassExpression(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLBooleanClassExpression::OWLBooleanClassExpression(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLBooleanClassExpression::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLBooleanClassExpression");
  handleJavaException(wrapperIntern);
}

void OWLBooleanClassExpression::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLBooleanClassExpression");
  handleJavaException(wrapperIntern);
}
}
}
}
}
