#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_lang_reflect_Member.h>
#include <java_lang_Object.h>
#include <java_lang_String.h>
#include <java_lang_Class.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace lang {
namespace reflect {

Member::Member(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

Member::Member(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void Member::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/lang/reflect/Member");
  handleJavaException(wrapperIntern);
  jfieldID fid_PUBLIC = javaEnv->GetStaticFieldID(cls, "PUBLIC", "I");
  handleJavaException(wrapperIntern);
  jint jresult_PUBLIC = javaEnv->GetStaticIntField(cls, fid_PUBLIC);
  handleJavaException(wrapperIntern);
  int result_PUBLIC = (int)jresult_PUBLIC;
  this->PUBLIC = result_PUBLIC;
  jfieldID fid_DECLARED = javaEnv->GetStaticFieldID(cls, "DECLARED", "I");
  handleJavaException(wrapperIntern);
  jint jresult_DECLARED = javaEnv->GetStaticIntField(cls, fid_DECLARED);
  handleJavaException(wrapperIntern);
  int result_DECLARED = (int)jresult_DECLARED;
  this->DECLARED = result_DECLARED;
}

void Member::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/lang/reflect/Member");
  handleJavaException(wrapperIntern);
}

int Member::getModifiers()
{
  jclass    cls = javaEnv->FindClass("java/lang/reflect/Member");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getModifiers", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

const char* Member::getName()
{
  jclass    cls = javaEnv->FindClass("java/lang/reflect/Member");
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

bool Member::isSynthetic()
{
  jclass    cls = javaEnv->FindClass("java/lang/reflect/Member");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isSynthetic", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::Class* Member::getDeclaringClass()
{
  jclass    cls = javaEnv->FindClass("java/lang/reflect/Member");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getDeclaringClass", "()Ljava/lang/Class;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::lang::Class* result;
  if (jresult!=NULL) {
    result=new java::lang::Class(jresult);
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
