#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_lang_reflect_AnnotatedElement.h>
#include <java_lang_Object.h>
#include <java_lang_annotation_Annotation.h>
#include <java_lang_Class.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace lang {
namespace reflect {

AnnotatedElement::AnnotatedElement(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

AnnotatedElement::AnnotatedElement(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void AnnotatedElement::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/lang/reflect/AnnotatedElement");
  handleJavaException(wrapperIntern);
}

void AnnotatedElement::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/lang/reflect/AnnotatedElement");
  handleJavaException(wrapperIntern);
}

java::lang::annotation::Annotation* AnnotatedElement::getAnnotation(java::lang::Class* arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/reflect/AnnotatedElement");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::annotation::Annotation* result;
  if (jresult!=NULL) {
    result=new java::lang::annotation::Annotation(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool AnnotatedElement::isAnnotationPresent(java::lang::Class* arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/reflect/AnnotatedElement");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isAnnotationPresent", "(Ljava/lang/Class;)Z");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

JavaObjectArray* AnnotatedElement::getAnnotations()
{
  jclass    cls = javaEnv->FindClass("java/lang/reflect/AnnotatedElement");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getAnnotations", "()[Ljava/lang/annotation/Annotation;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
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

JavaObjectArray* AnnotatedElement::getDeclaredAnnotations()
{
  jclass    cls = javaEnv->FindClass("java/lang/reflect/AnnotatedElement");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getDeclaredAnnotations", "()[Ljava/lang/annotation/Annotation;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
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
}
}
}
