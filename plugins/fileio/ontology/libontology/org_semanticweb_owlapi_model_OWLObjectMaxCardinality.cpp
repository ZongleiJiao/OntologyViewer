#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLObjectMaxCardinality.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLObjectCardinalityRestriction.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLObjectMaxCardinality::OWLObjectMaxCardinality(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLObjectMaxCardinality::OWLObjectMaxCardinality(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLObjectMaxCardinality::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectMaxCardinality");
  handleJavaException(wrapperIntern);
}

void OWLObjectMaxCardinality::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectMaxCardinality");
  handleJavaException(wrapperIntern);
}
}
}
}
}
