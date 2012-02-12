#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLObjectCardinalityRestriction.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLCardinalityRestriction.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLObjectCardinalityRestriction::OWLObjectCardinalityRestriction(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLObjectCardinalityRestriction::OWLObjectCardinalityRestriction(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLObjectCardinalityRestriction::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectCardinalityRestriction");
  handleJavaException(wrapperIntern);
}

void OWLObjectCardinalityRestriction::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectCardinalityRestriction");
  handleJavaException(wrapperIntern);
}
}
}
}
}
