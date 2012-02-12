#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLAnnotationAxiom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLAxiom.h>
#include <org_semanticweb_owlapi_model_OWLAnnotationObject.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLAnnotationAxiom::OWLAnnotationAxiom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLAnnotationAxiom::OWLAnnotationAxiom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLAnnotationAxiom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLAnnotationAxiom");
  handleJavaException(wrapperIntern);
}

void OWLAnnotationAxiom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLAnnotationAxiom");
  handleJavaException(wrapperIntern);
}
}
}
}
}
