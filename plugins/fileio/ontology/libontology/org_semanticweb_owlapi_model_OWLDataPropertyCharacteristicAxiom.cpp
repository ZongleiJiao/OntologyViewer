#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLDataPropertyCharacteristicAxiom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLDataPropertyAxiom.h>
#include <org_semanticweb_owlapi_model_OWLUnaryPropertyAxiom.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLDataPropertyCharacteristicAxiom::OWLDataPropertyCharacteristicAxiom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLDataPropertyCharacteristicAxiom::OWLDataPropertyCharacteristicAxiom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLDataPropertyCharacteristicAxiom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataPropertyCharacteristicAxiom");
  handleJavaException(wrapperIntern);
}

void OWLDataPropertyCharacteristicAxiom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataPropertyCharacteristicAxiom");
  handleJavaException(wrapperIntern);
}
}
}
}
}
