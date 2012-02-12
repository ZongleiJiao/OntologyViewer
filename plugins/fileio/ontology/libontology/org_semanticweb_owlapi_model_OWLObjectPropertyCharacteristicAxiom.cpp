#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLObjectPropertyCharacteristicAxiom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLObjectPropertyAxiom.h>
#include <org_semanticweb_owlapi_model_OWLUnaryPropertyAxiom.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLObjectPropertyCharacteristicAxiom::OWLObjectPropertyCharacteristicAxiom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLObjectPropertyCharacteristicAxiom::OWLObjectPropertyCharacteristicAxiom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLObjectPropertyCharacteristicAxiom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectPropertyCharacteristicAxiom");
  handleJavaException(wrapperIntern);
}

void OWLObjectPropertyCharacteristicAxiom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectPropertyCharacteristicAxiom");
  handleJavaException(wrapperIntern);
}
}
}
}
}
