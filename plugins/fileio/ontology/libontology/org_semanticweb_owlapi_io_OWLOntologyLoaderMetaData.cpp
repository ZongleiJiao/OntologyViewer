#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_io_OWLOntologyLoaderMetaData.h>
#include <java_lang_Object.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace io {

OWLOntologyLoaderMetaData::OWLOntologyLoaderMetaData(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLOntologyLoaderMetaData::OWLOntologyLoaderMetaData(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLOntologyLoaderMetaData::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/io/OWLOntologyLoaderMetaData");
  handleJavaException(wrapperIntern);
}

void OWLOntologyLoaderMetaData::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/io/OWLOntologyLoaderMetaData");
  handleJavaException(wrapperIntern);
}
}
}
}
}
