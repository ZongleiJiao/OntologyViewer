#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLDataIntersectionOf.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLNaryDataRange.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLDataIntersectionOf::OWLDataIntersectionOf(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLDataIntersectionOf::OWLDataIntersectionOf(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLDataIntersectionOf::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataIntersectionOf");
  handleJavaException(wrapperIntern);
}

void OWLDataIntersectionOf::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataIntersectionOf");
  handleJavaException(wrapperIntern);
}
}
}
}
}
