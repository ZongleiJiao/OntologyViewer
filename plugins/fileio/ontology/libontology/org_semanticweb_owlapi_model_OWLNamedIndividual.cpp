#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLNamedIndividual.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLIndividual.h>
#include <org_semanticweb_owlapi_model_OWLLogicalEntity.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLNamedIndividual::OWLNamedIndividual(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLNamedIndividual::OWLNamedIndividual(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLNamedIndividual::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLNamedIndividual");
  handleJavaException(wrapperIntern);
}

void OWLNamedIndividual::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLNamedIndividual");
  handleJavaException(wrapperIntern);
}
}
}
}
}
