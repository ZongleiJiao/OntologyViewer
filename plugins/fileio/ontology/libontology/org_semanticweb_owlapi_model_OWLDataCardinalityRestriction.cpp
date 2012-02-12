#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLDataCardinalityRestriction.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLCardinalityRestriction.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLDataCardinalityRestriction::OWLDataCardinalityRestriction(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLDataCardinalityRestriction::OWLDataCardinalityRestriction(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLDataCardinalityRestriction::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataCardinalityRestriction");
  handleJavaException(wrapperIntern);
}

void OWLDataCardinalityRestriction::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataCardinalityRestriction");
  handleJavaException(wrapperIntern);
}
}
}
}
}
