#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLObjectMinCardinality.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLObjectCardinalityRestriction.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLObjectMinCardinality::OWLObjectMinCardinality(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLObjectMinCardinality::OWLObjectMinCardinality(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLObjectMinCardinality::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectMinCardinality");
  handleJavaException(wrapperIntern);
}

void OWLObjectMinCardinality::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectMinCardinality");
  handleJavaException(wrapperIntern);
}
}
}
}
}
