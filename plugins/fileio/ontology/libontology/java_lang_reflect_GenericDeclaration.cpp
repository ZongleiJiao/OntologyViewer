#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_lang_reflect_GenericDeclaration.h>
#include <java_lang_Object.h>
#include <java_lang_reflect_TypeVariable.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace lang {
namespace reflect {

GenericDeclaration::GenericDeclaration(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

GenericDeclaration::GenericDeclaration(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void GenericDeclaration::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/lang/reflect/GenericDeclaration");
  handleJavaException(wrapperIntern);
}

void GenericDeclaration::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/lang/reflect/GenericDeclaration");
  handleJavaException(wrapperIntern);
}

JavaObjectArray* GenericDeclaration::getTypeParameters()
{
  jclass    cls = javaEnv->FindClass("java/lang/reflect/GenericDeclaration");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getTypeParameters", "()[Ljava/lang/reflect/TypeVariable;");
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
