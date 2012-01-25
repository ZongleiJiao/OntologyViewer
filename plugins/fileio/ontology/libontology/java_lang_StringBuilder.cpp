#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_lang_StringBuilder.h>
#include <java_lang_AbstractStringBuilder.h>
#include <java_io_Serializable.h>
#include <java_lang_CharSequence.h>
#include <java_lang_String.h>
#include <java_lang_Object.h>
#include <java_lang_StringBuffer.h>
#include <java_lang_Appendable.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace lang {

StringBuilder::StringBuilder(JavaMarker* dummy)
  : java::lang::AbstractStringBuilder(dummy)
{
  updateAllVariables(wrapperIntern);
}

StringBuilder::StringBuilder(jobject obj)
  : java::lang::AbstractStringBuilder(obj)
{
  updateAllVariables(wrapperIntern);
}

StringBuilder::StringBuilder()
  : java::lang::AbstractStringBuilder(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "()V");
  handleJavaException(wrapperIntern);
  jobject o = javaEnv->NewObject(cls, mid);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  updateAllVariables(wrapperIntern);
}

StringBuilder::StringBuilder(int arg1)
  : java::lang::AbstractStringBuilder(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "(I)V");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject o = javaEnv->NewObject(cls, mid, jarg1);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  updateAllVariables(wrapperIntern);
}

StringBuilder::StringBuilder(const char* arg1)
  : java::lang::AbstractStringBuilder(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "(Ljava/lang/String;)V");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject o = javaEnv->NewObject(cls, mid, jarg1);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  updateAllVariables(wrapperIntern);
}

StringBuilder::StringBuilder(java::lang::CharSequence* arg1)
  : java::lang::AbstractStringBuilder(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "(Ljava/lang/CharSequence;)V");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject o = javaEnv->NewObject(cls, mid, jarg1);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  updateAllVariables(wrapperIntern);
}

void StringBuilder::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
}

void StringBuilder::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
}

const char* StringBuilder::toString()
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
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

java::lang::StringBuilder* StringBuilder::append(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "(Ljava/lang/Object;)Ljava/lang/StringBuilder;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::StringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::StringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::StringBuilder* StringBuilder::append(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "(Ljava/lang/String;)Ljava/lang/StringBuilder;");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  java::lang::StringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::StringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::StringBuilder* StringBuilder::append(java::lang::StringBuffer* arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "(Ljava/lang/StringBuffer;)Ljava/lang/StringBuilder;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::StringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::StringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::StringBuilder* StringBuilder::append(java::lang::CharSequence* arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::StringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::StringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::StringBuilder* StringBuilder::append(java::lang::CharSequence* arg1, int arg2, int arg3)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/lang/StringBuilder;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jint jarg2 = (jint)arg2;
  jint jarg3 = (jint)arg3;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3);
  handleJavaException(wrapperIntern);
  java::lang::StringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::StringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::StringBuilder* StringBuilder::append(JavaCharArray* arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "([C)Ljava/lang/StringBuilder;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::StringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::StringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::StringBuilder* StringBuilder::append(JavaCharArray* arg1, int arg2, int arg3)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "([CII)Ljava/lang/StringBuilder;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jint jarg2 = (jint)arg2;
  jint jarg3 = (jint)arg3;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3);
  handleJavaException(wrapperIntern);
  java::lang::StringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::StringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::StringBuilder* StringBuilder::append(bool arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "(Z)Ljava/lang/StringBuilder;");
  handleJavaException(wrapperIntern);
  jboolean jarg1 = (jboolean)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::StringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::StringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::StringBuilder* StringBuilder::append(char arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "(C)Ljava/lang/StringBuilder;");
  handleJavaException(wrapperIntern);
  jchar jarg1 = (jchar)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::StringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::StringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::StringBuilder* StringBuilder::append(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "(I)Ljava/lang/StringBuilder;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::StringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::StringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::StringBuilder* StringBuilder::append(long arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "(J)Ljava/lang/StringBuilder;");
  handleJavaException(wrapperIntern);
  jlong jarg1 = (jlong)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::StringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::StringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::StringBuilder* StringBuilder::append(float arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "(F)Ljava/lang/StringBuilder;");
  handleJavaException(wrapperIntern);
  jfloat jarg1 = (jfloat)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::StringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::StringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::StringBuilder* StringBuilder::append(double arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "(D)Ljava/lang/StringBuilder;");
  handleJavaException(wrapperIntern);
  jdouble jarg1 = (jdouble)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::StringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::StringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int StringBuilder::indexOf(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "indexOf", "(Ljava/lang/String;)I");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int StringBuilder::indexOf(const char* arg1, int arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "indexOf", "(Ljava/lang/String;I)I");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jint jarg2 = (jint)arg2;
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int StringBuilder::length()
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "length", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

char StringBuilder::charAt(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "charAt", "(I)C");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jchar jresult=javaEnv->CallCharMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  char result = (char)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int StringBuilder::codePointAt(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "codePointAt", "(I)I");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int StringBuilder::codePointBefore(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "codePointBefore", "(I)I");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int StringBuilder::codePointCount(int arg1, int arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "codePointCount", "(II)I");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jint jarg2 = (jint)arg2;
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int StringBuilder::offsetByCodePoints(int arg1, int arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "offsetByCodePoints", "(II)I");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jint jarg2 = (jint)arg2;
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

void StringBuilder::getChars(int arg1, int arg2, JavaCharArray* arg3, int arg4)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getChars", "(II[CI)V");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jint jarg2 = (jint)arg2;
  jarray jarg3;
  if (arg3!=NULL) {
    jarg3=(jarray)(arg3->getJavaObject());
  } else {
    jarg3=NULL;
  }
  jint jarg4 = (jint)arg4;
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3, jarg4);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

int StringBuilder::lastIndexOf(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "lastIndexOf", "(Ljava/lang/String;)I");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int StringBuilder::lastIndexOf(const char* arg1, int arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "lastIndexOf", "(Ljava/lang/String;I)I");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jint jarg2 = (jint)arg2;
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

const char* StringBuilder::substring(int arg1, int arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "substring", "(II)Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jint jarg2 = (jint)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
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

const char* StringBuilder::substring(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "substring", "(I)Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

java::lang::CharSequence* StringBuilder::subSequence(int arg1, int arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "subSequence", "(II)Ljava/lang/CharSequence;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jint jarg2 = (jint)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  java::lang::CharSequence* result;
  if (jresult!=NULL) {
    result=new java::lang::CharSequence(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::StringBuilder* StringBuilder::replace(int arg1, int arg2, const char* arg3)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "replace", "(IILjava/lang/String;)Ljava/lang/StringBuilder;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jint jarg2 = (jint)arg2;
  jstring jarg3;
  if (arg3!=NULL) {
    jarg3 = javaEnv->NewStringUTF(arg3);
  } else {
    jarg3=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3);
  handleJavaException(wrapperIntern);
  if (jarg3!=NULL) {
    javaEnv->DeleteLocalRef(jarg3);
  }
  java::lang::StringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::StringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int StringBuilder::capacity()
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "capacity", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

void StringBuilder::ensureCapacity(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "ensureCapacity", "(I)V");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

void StringBuilder::trimToSize()
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "trimToSize", "()V");
  handleJavaException(wrapperIntern);
  javaEnv->CallVoidMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

void StringBuilder::setLength(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "setLength", "(I)V");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

void StringBuilder::setCharAt(int arg1, char arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "setCharAt", "(IC)V");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jchar jarg2 = (jchar)arg2;
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::StringBuilder* StringBuilder::appendCodePoint(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "appendCodePoint", "(I)Ljava/lang/StringBuilder;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::StringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::StringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::StringBuilder* StringBuilder::delete_(int arg1, int arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "delete_", "(II)Ljava/lang/StringBuilder;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jint jarg2 = (jint)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  java::lang::StringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::StringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::StringBuilder* StringBuilder::deleteCharAt(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "deleteCharAt", "(I)Ljava/lang/StringBuilder;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::StringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::StringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::StringBuilder* StringBuilder::insert(int arg1, JavaCharArray* arg2, int arg3, int arg4)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "insert", "(I[CII)Ljava/lang/StringBuilder;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jarray jarg2;
  if (arg2!=NULL) {
    jarg2=(jarray)(arg2->getJavaObject());
  } else {
    jarg2=NULL;
  }
  jint jarg3 = (jint)arg3;
  jint jarg4 = (jint)arg4;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3, jarg4);
  handleJavaException(wrapperIntern);
  java::lang::StringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::StringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::StringBuilder* StringBuilder::insert(int arg1, java::lang::Object* arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "insert", "(ILjava/lang/Object;)Ljava/lang/StringBuilder;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  java::lang::StringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::StringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::StringBuilder* StringBuilder::insert(int arg1, const char* arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "insert", "(ILjava/lang/String;)Ljava/lang/StringBuilder;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jstring jarg2;
  if (arg2!=NULL) {
    jarg2 = javaEnv->NewStringUTF(arg2);
  } else {
    jarg2=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  if (jarg2!=NULL) {
    javaEnv->DeleteLocalRef(jarg2);
  }
  java::lang::StringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::StringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::StringBuilder* StringBuilder::insert(int arg1, JavaCharArray* arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "insert", "(I[C)Ljava/lang/StringBuilder;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jarray jarg2;
  if (arg2!=NULL) {
    jarg2=(jarray)(arg2->getJavaObject());
  } else {
    jarg2=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  java::lang::StringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::StringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::StringBuilder* StringBuilder::insert(int arg1, java::lang::CharSequence* arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "insert", "(ILjava/lang/CharSequence;)Ljava/lang/StringBuilder;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  java::lang::StringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::StringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::StringBuilder* StringBuilder::insert(int arg1, java::lang::CharSequence* arg2, int arg3, int arg4)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "insert", "(ILjava/lang/CharSequence;II)Ljava/lang/StringBuilder;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jint jarg3 = (jint)arg3;
  jint jarg4 = (jint)arg4;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3, jarg4);
  handleJavaException(wrapperIntern);
  java::lang::StringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::StringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::StringBuilder* StringBuilder::insert(int arg1, bool arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "insert", "(IZ)Ljava/lang/StringBuilder;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jboolean jarg2 = (jboolean)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  java::lang::StringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::StringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::StringBuilder* StringBuilder::insert(int arg1, char arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "insert", "(IC)Ljava/lang/StringBuilder;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jchar jarg2 = (jchar)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  java::lang::StringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::StringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::StringBuilder* StringBuilder::insert(int arg1, int arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "insert", "(II)Ljava/lang/StringBuilder;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jint jarg2 = (jint)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  java::lang::StringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::StringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::StringBuilder* StringBuilder::insert(int arg1, long arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "insert", "(IJ)Ljava/lang/StringBuilder;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jlong jarg2 = (jlong)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  java::lang::StringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::StringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::StringBuilder* StringBuilder::insert(int arg1, float arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "insert", "(IF)Ljava/lang/StringBuilder;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jfloat jarg2 = (jfloat)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  java::lang::StringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::StringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::StringBuilder* StringBuilder::insert(int arg1, double arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "insert", "(ID)Ljava/lang/StringBuilder;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jdouble jarg2 = (jdouble)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  java::lang::StringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::StringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::StringBuilder* StringBuilder::reverse()
{
  jclass    cls = javaEnv->FindClass("java/lang/StringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "reverse", "()Ljava/lang/StringBuilder;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::lang::StringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::StringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
