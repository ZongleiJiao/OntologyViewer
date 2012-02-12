#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLObjectAllValuesFrom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLQuantifiedObjectRestriction.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLObjectAllValuesFrom::OWLObjectAllValuesFrom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLObjectAllValuesFrom::OWLObjectAllValuesFrom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLObjectAllValuesFrom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectAllValuesFrom");
  handleJavaException(wrapperIntern);
}

void OWLObjectAllValuesFrom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectAllValuesFrom");
  handleJavaException(wrapperIntern);
}
}
}
}
}
