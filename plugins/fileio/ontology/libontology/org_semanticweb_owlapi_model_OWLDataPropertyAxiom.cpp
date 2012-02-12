#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLDataPropertyAxiom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLLogicalAxiom.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLDataPropertyAxiom::OWLDataPropertyAxiom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLDataPropertyAxiom::OWLDataPropertyAxiom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLDataPropertyAxiom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataPropertyAxiom");
  handleJavaException(wrapperIntern);
}

void OWLDataPropertyAxiom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataPropertyAxiom");
  handleJavaException(wrapperIntern);
}
}
}
}
}
