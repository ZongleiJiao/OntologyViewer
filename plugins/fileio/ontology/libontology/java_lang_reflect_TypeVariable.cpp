#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_lang_reflect_TypeVariable.h>
#include <java_lang_Object.h>
#include <java_lang_reflect_Type.h>
#include <java_lang_String.h>
#include <java_lang_reflect_GenericDeclaration.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace lang {
namespace reflect {

TypeVariable::TypeVariable(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

TypeVariable::TypeVariable(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void TypeVariable::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/lang/reflect/TypeVariable");
  handleJavaException(wrapperIntern);
}

void TypeVariable::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/lang/reflect/TypeVariable");
  handleJavaException(wrapperIntern);
}

const char* TypeVariable::getName()
{
  jclass    cls = javaEnv->FindClass("java/lang/reflect/TypeVariable");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getName", "()Ljava/lang/String;");
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

JavaObjectArray* TypeVariable::getBounds()
{
  jclass    cls = javaEnv->FindClass("java/lang/reflect/TypeVariable");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getBounds", "()[Ljava/lang/reflect/Type;");
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

java::lang::reflect::GenericDeclaration* TypeVariable::getGenericDeclaration()
{
  jclass    cls = javaEnv->FindClass("java/lang/reflect/TypeVariable");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getGenericDeclaration", "()Ljava/lang/reflect/GenericDeclaration;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::lang::reflect::GenericDeclaration* result;
  if (jresult!=NULL) {
    result=new java::lang::reflect::GenericDeclaration(jresult);
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
