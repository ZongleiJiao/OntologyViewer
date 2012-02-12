#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLQuantifiedDataRestriction.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLQuantifiedRestriction.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLQuantifiedDataRestriction::OWLQuantifiedDataRestriction(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLQuantifiedDataRestriction::OWLQuantifiedDataRestriction(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLQuantifiedDataRestriction::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLQuantifiedDataRestriction");
  handleJavaException(wrapperIntern);
}

void OWLQuantifiedDataRestriction::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLQuantifiedDataRestriction");
  handleJavaException(wrapperIntern);
}
}
}
}
}
