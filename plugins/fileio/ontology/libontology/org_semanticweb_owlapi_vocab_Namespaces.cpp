#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_vocab_Namespaces.h>
#include <java_lang_Enum.h>
#include <java_lang_String.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace vocab {

Namespaces::Namespaces(JavaMarker* dummy)
  : java::lang::Enum(dummy)
{
  updateAllVariables(wrapperIntern);
}

Namespaces::Namespaces(jobject obj)
  : java::lang::Enum(obj)
{
  updateAllVariables(wrapperIntern);
}

void Namespaces::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/Namespaces");
  handleJavaException(wrapperIntern);
  jfieldID fid_OWL2 = javaEnv->GetStaticFieldID(cls, "OWL2", "Lorg/semanticweb/owlapi/vocab/Namespaces;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL2 = javaEnv->GetStaticObjectField(cls, fid_OWL2);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::Namespaces* result_OWL2;
  if (jresult_OWL2!=NULL) {
    result_OWL2=new org::semanticweb::owlapi::vocab::Namespaces(jresult_OWL2);
    javaEnv->DeleteLocalRef(jresult_OWL2);
  } else {
    result_OWL2=NULL;
  }
  this->OWL2 = result_OWL2;
  jfieldID fid_OWL11XML = javaEnv->GetStaticFieldID(cls, "OWL11XML", "Lorg/semanticweb/owlapi/vocab/Namespaces;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL11XML = javaEnv->GetStaticObjectField(cls, fid_OWL11XML);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::Namespaces* result_OWL11XML;
  if (jresult_OWL11XML!=NULL) {
    result_OWL11XML=new org::semanticweb::owlapi::vocab::Namespaces(jresult_OWL11XML);
    javaEnv->DeleteLocalRef(jresult_OWL11XML);
  } else {
    result_OWL11XML=NULL;
  }
  this->OWL11XML = result_OWL11XML;
  jfieldID fid_OWL11 = javaEnv->GetStaticFieldID(cls, "OWL11", "Lorg/semanticweb/owlapi/vocab/Namespaces;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL11 = javaEnv->GetStaticObjectField(cls, fid_OWL11);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::Namespaces* result_OWL11;
  if (jresult_OWL11!=NULL) {
    result_OWL11=new org::semanticweb::owlapi::vocab::Namespaces(jresult_OWL11);
    javaEnv->DeleteLocalRef(jresult_OWL11);
  } else {
    result_OWL11=NULL;
  }
  this->OWL11 = result_OWL11;
  jfieldID fid_OWL = javaEnv->GetStaticFieldID(cls, "OWL", "Lorg/semanticweb/owlapi/vocab/Namespaces;");
  handleJavaException(wrapperIntern);
  jobject jresult_OWL = javaEnv->GetStaticObjectField(cls, fid_OWL);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::Namespaces* result_OWL;
  if (jresult_OWL!=NULL) {
    result_OWL=new org::semanticweb::owlapi::vocab::Namespaces(jresult_OWL);
    javaEnv->DeleteLocalRef(jresult_OWL);
  } else {
    result_OWL=NULL;
  }
  this->OWL = result_OWL;
  jfieldID fid_RDFS = javaEnv->GetStaticFieldID(cls, "RDFS", "Lorg/semanticweb/owlapi/vocab/Namespaces;");
  handleJavaException(wrapperIntern);
  jobject jresult_RDFS = javaEnv->GetStaticObjectField(cls, fid_RDFS);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::Namespaces* result_RDFS;
  if (jresult_RDFS!=NULL) {
    result_RDFS=new org::semanticweb::owlapi::vocab::Namespaces(jresult_RDFS);
    javaEnv->DeleteLocalRef(jresult_RDFS);
  } else {
    result_RDFS=NULL;
  }
  this->RDFS = result_RDFS;
  jfieldID fid_RDF = javaEnv->GetStaticFieldID(cls, "RDF", "Lorg/semanticweb/owlapi/vocab/Namespaces;");
  handleJavaException(wrapperIntern);
  jobject jresult_RDF = javaEnv->GetStaticObjectField(cls, fid_RDF);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::Namespaces* result_RDF;
  if (jresult_RDF!=NULL) {
    result_RDF=new org::semanticweb::owlapi::vocab::Namespaces(jresult_RDF);
    javaEnv->DeleteLocalRef(jresult_RDF);
  } else {
    result_RDF=NULL;
  }
  this->RDF = result_RDF;
  jfieldID fid_XSD = javaEnv->GetStaticFieldID(cls, "XSD", "Lorg/semanticweb/owlapi/vocab/Namespaces;");
  handleJavaException(wrapperIntern);
  jobject jresult_XSD = javaEnv->GetStaticObjectField(cls, fid_XSD);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::Namespaces* result_XSD;
  if (jresult_XSD!=NULL) {
    result_XSD=new org::semanticweb::owlapi::vocab::Namespaces(jresult_XSD);
    javaEnv->DeleteLocalRef(jresult_XSD);
  } else {
    result_XSD=NULL;
  }
  this->XSD = result_XSD;
  jfieldID fid_XML = javaEnv->GetStaticFieldID(cls, "XML", "Lorg/semanticweb/owlapi/vocab/Namespaces;");
  handleJavaException(wrapperIntern);
  jobject jresult_XML = javaEnv->GetStaticObjectField(cls, fid_XML);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::Namespaces* result_XML;
  if (jresult_XML!=NULL) {
    result_XML=new org::semanticweb::owlapi::vocab::Namespaces(jresult_XML);
    javaEnv->DeleteLocalRef(jresult_XML);
  } else {
    result_XML=NULL;
  }
  this->XML = result_XML;
  jfieldID fid_SWRL = javaEnv->GetStaticFieldID(cls, "SWRL", "Lorg/semanticweb/owlapi/vocab/Namespaces;");
  handleJavaException(wrapperIntern);
  jobject jresult_SWRL = javaEnv->GetStaticObjectField(cls, fid_SWRL);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::Namespaces* result_SWRL;
  if (jresult_SWRL!=NULL) {
    result_SWRL=new org::semanticweb::owlapi::vocab::Namespaces(jresult_SWRL);
    javaEnv->DeleteLocalRef(jresult_SWRL);
  } else {
    result_SWRL=NULL;
  }
  this->SWRL = result_SWRL;
  jfieldID fid_SWRLB = javaEnv->GetStaticFieldID(cls, "SWRLB", "Lorg/semanticweb/owlapi/vocab/Namespaces;");
  handleJavaException(wrapperIntern);
  jobject jresult_SWRLB = javaEnv->GetStaticObjectField(cls, fid_SWRLB);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::Namespaces* result_SWRLB;
  if (jresult_SWRLB!=NULL) {
    result_SWRLB=new org::semanticweb::owlapi::vocab::Namespaces(jresult_SWRLB);
    javaEnv->DeleteLocalRef(jresult_SWRLB);
  } else {
    result_SWRLB=NULL;
  }
  this->SWRLB = result_SWRLB;
  jfieldID fid_SKOS = javaEnv->GetStaticFieldID(cls, "SKOS", "Lorg/semanticweb/owlapi/vocab/Namespaces;");
  handleJavaException(wrapperIntern);
  jobject jresult_SKOS = javaEnv->GetStaticObjectField(cls, fid_SKOS);
  handleJavaException(wrapperIntern);
  org::semanticweb::owlapi::vocab::Namespaces* result_SKOS;
  if (jresult_SKOS!=NULL) {
    result_SKOS=new org::semanticweb::owlapi::vocab::Namespaces(jresult_SKOS);
    javaEnv->DeleteLocalRef(jresult_SKOS);
  } else {
    result_SKOS=NULL;
  }
  this->SKOS = result_SKOS;
}

void Namespaces::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/Namespaces");
  handleJavaException(wrapperIntern);
}

const char* Namespaces::toString()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/Namespaces");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "toString", "()Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  char* result;
  if (jresult!=NULL) {
    const char*  jresult_bytes = javaEnv->GetStringUTFChars((jstring)jresult,NULL);
    handleJavaException(wrapperIntern);
    jsize        jresult_size = javaEnv->GetStringUTFLength((jstring)jresult);
    handleJavaException(wrapperIntern);
                 result = new char[jresult_size+1];
    for (int i=0;i<jresult_size;i++) {
      result[i] = jresult_bytes[i];
    }
    result[jresult_size]=0;
    javaEnv->ReleaseStringUTFChars((jstring)jresult, jresult_bytes);
    handleJavaException(wrapperIntern);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

JavaObjectArray* Namespaces::values()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/Namespaces");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "values", "()[Lorg/semanticweb/owlapi/vocab/Namespaces;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid);
  handleJavaException(wrapperIntern);
  JavaObjectArray* result;
  if (jresult!=NULL) {
    result=new JavaObjectArray((jarray)jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

org::semanticweb::owlapi::vocab::Namespaces* Namespaces::valueOf(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/vocab/Namespaces");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/semanticweb/owlapi/vocab/Namespaces;");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid, jarg1);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  org::semanticweb::owlapi::vocab::Namespaces* result;
  if (jresult!=NULL) {
    result=new org::semanticweb::owlapi::vocab::Namespaces(jresult);
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
