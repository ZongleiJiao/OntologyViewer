#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_SWRLDifferentIndividualsAtom.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_SWRLBinaryAtom.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

SWRLDifferentIndividualsAtom::SWRLDifferentIndividualsAtom(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

SWRLDifferentIndividualsAtom::SWRLDifferentIndividualsAtom(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void SWRLDifferentIndividualsAtom::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLDifferentIndividualsAtom");
  handleJavaException(wrapperIntern);
}

void SWRLDifferentIndividualsAtom::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/SWRLDifferentIndividualsAtom");
  handleJavaException(wrapperIntern);
}
}
}
}
}
