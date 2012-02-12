#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_io_OWLOntologyDocumentSource.h>
#include <java_lang_Object.h>
#include <java_io_InputStream.h>
#include <java_io_Reader.h>
#include <org_semanticweb_owlapi_model_IRI.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace io {

OWLOntologyDocumentSource::OWLOntologyDocumentSource(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLOntologyDocumentSource::OWLOntologyDocumentSource(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLOntologyDocumentSource::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/io/OWLOntologyDocumentSource");
  handleJavaException(wrapperIntern);
}

void OWLOntologyDocumentSource::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/io/OWLOntologyDocumentSource");
  handleJavaException(wrapperIntern);
}

java::io::InputStream* OWLOntologyDocumentSource::getInputStream()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/io/OWLOntologyDocumentSource");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getInputStream", "()Ljava/io/InputStream;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::io::InputStream* result;
  if (jresult!=NULL) {
    result=new java::io::InputStream(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool OWLOntologyDocumentSource::isReaderAvailable()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/io/OWLOntologyDocumentSource");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isReaderAvailable", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::io::Reader* OWLOntologyDocumentSource::getReader()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/io/OWLOntologyDocumentSource");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getReader", "()Ljava/io/Reader;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::io::Reader* result;
  if (jresult!=NULL) {
    result=new java::io::Reader(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool OWLOntologyDocumentSource::isInputStreamAvailable()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/io/OWLOntologyDocumentSource");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isInputStreamAvailable", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::model::IRI* OWLOntologyDocumentSource::getDocumentIRI()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/io/OWLOntologyDocumentSource");
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
}
}
}
}
