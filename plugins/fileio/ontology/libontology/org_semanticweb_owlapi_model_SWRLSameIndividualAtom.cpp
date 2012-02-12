#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_SWRLSameIndividualAtom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_SWRLBinaryAtom.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

SWRLSameIndividualAtom::SWRLSameIndividualAtom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

SWRLSameIndividualAtom::SWRLSameIndividualAtom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void SWRLSameIndividualAtom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLSameIndividualAtom");
  handleJavaException(wrapperIntern);
}

void SWRLSameIndividualAtom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLSameIndividualAtom");
  handleJavaException(wrapperIntern);
}
}
}
}
}
