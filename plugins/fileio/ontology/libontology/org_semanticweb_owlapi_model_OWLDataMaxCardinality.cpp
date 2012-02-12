#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLDataMaxCardinality.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLDataCardinalityRestriction.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLDataMaxCardinality::OWLDataMaxCardinality(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLDataMaxCardinality::OWLDataMaxCardinality(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLDataMaxCardinality::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataMaxCardinality");
  handleJavaException(wrapperIntern);
}

void OWLDataMaxCardinality::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataMaxCardinality");
  handleJavaException(wrapperIntern);
}
}
}
}
}
