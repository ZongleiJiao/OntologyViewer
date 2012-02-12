#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLQuantifiedObjectRestriction.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLQuantifiedRestriction.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLQuantifiedObjectRestriction::OWLQuantifiedObjectRestriction(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLQuantifiedObjectRestriction::OWLQuantifiedObjectRestriction(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLQuantifiedObjectRestriction::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLQuantifiedObjectRestriction");
  handleJavaException(wrapperIntern);
}

void OWLQuantifiedObjectRestriction::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLQuantifiedObjectRestriction");
  handleJavaException(wrapperIntern);
}
}
}
}
}
