#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLObjectHasSelf.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLRestriction.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLObjectHasSelf::OWLObjectHasSelf(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLObjectHasSelf::OWLObjectHasSelf(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLObjectHasSelf::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectHasSelf");
  handleJavaException(wrapperIntern);
}

void OWLObjectHasSelf::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLObjectHasSelf");
  handleJavaException(wrapperIntern);
}
}
}
}
}
