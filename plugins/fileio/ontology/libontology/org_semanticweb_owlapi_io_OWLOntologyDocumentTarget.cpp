#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_io_OWLOntologyDocumentTarget.h>
#include <java_lang_Object.h>
#include <java_io_OutputStream.h>
#include <org_semanticweb_owlapi_model_IRI.h>
#include <java_io_Writer.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace io {

OWLOntologyDocumentTarget::OWLOntologyDocumentTarget(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLOntologyDocumentTarget::OWLOntologyDocumentTarget(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLOntologyDocumentTarget::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/io/OWLOntologyDocumentTarget");
  handleJavaException(wrapperIntern);
}

void OWLOntologyDocumentTarget::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/io/OWLOntologyDocumentTarget");
  handleJavaException(wrapperIntern);
}

java::io::OutputStream* OWLOntologyDocumentTarget::getOutputStream()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/io/OWLOntologyDocumentTarget");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOutputStream", "()Ljava/io/OutputStream;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::io::OutputStream* result;
  if (jresult!=NULL) {
    result=new java::io::OutputStream(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::IRI* OWLOntologyDocumentTarget::getDocumentIRI()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/io/OWLOntologyDocumentTarget");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getDocumentIRI", "()Lorg/semanticweb/owlapi/model/IRI;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::model::IRI* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::model::IRI(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool OWLOntologyDocumentTarget::isWriterAvailable()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/io/OWLOntologyDocumentTarget");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isWriterAvailable", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::io::Writer* OWLOntologyDocumentTarget::getWriter()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/io/OWLOntologyDocumentTarget");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getWriter", "()Ljava/io/Writer;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::io::Writer* result;
  if (jresult!=NULL) {
    result=new java::io::Writer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool OWLOntologyDocumentTarget::isOutputStreamAvailable()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/io/OWLOntologyDocumentTarget");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isOutputStreamAvailable", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool OWLOntologyDocumentTarget::isDocumentIRIAvailable()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/io/OWLOntologyDocumentTarget");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isDocumentIRIAvailable", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
}
}
