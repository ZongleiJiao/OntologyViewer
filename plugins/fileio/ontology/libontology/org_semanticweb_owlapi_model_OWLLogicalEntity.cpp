#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLLogicalEntity.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLEntity.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLLogicalEntity::OWLLogicalEntity(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLLogicalEntity::OWLLogicalEntity(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLLogicalEntity::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLLogicalEntity");
  handleJavaException(wrapperIntern);
}

void OWLLogicalEntity::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLLogicalEntity");
  handleJavaException(wrapperIntern);
}
}
}
}
}
