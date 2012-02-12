#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLDataSomeValuesFrom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLQuantifiedDataRestriction.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLDataSomeValuesFrom::OWLDataSomeValuesFrom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLDataSomeValuesFrom::OWLDataSomeValuesFrom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLDataSomeValuesFrom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataSomeValuesFrom");
  handleJavaException(wrapperIntern);
}

void OWLDataSomeValuesFrom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLDataSomeValuesFrom");
  handleJavaException(wrapperIntern);
}
}
}
}
}
