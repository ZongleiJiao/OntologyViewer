#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_lang_AbstractStringBuilder.h>
#include <java_lang_Object.h>
#include <java_lang_Appendable.h>
#include <java_lang_CharSequence.h>
#include <java_lang_String.h>
#include <java_lang_StringBuffer.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace lang {

AbstractStringBuilder::AbstractStringBuilder(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

AbstractStringBuilder::AbstractStringBuilder(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void AbstractStringBuilder::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
}

void AbstractStringBuilder::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
}

const char* AbstractStringBuilder::toString()
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
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

java::lang::AbstractStringBuilder* AbstractStringBuilder::append(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "(Ljava/lang/Object;)Ljava/lang/AbstractStringBuilder;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::AbstractStringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::AbstractStringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::AbstractStringBuilder* AbstractStringBuilder::append(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "(Ljava/lang/String;)Ljava/lang/AbstractStringBuilder;");
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
  java::lang::AbstractStringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::AbstractStringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::AbstractStringBuilder* AbstractStringBuilder::append(java::lang::StringBuffer* arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "(Ljava/lang/StringBuffer;)Ljava/lang/AbstractStringBuilder;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::AbstractStringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::AbstractStringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::AbstractStringBuilder* AbstractStringBuilder::append(java::lang::CharSequence* arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/lang/AbstractStringBuilder;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::AbstractStringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::AbstractStringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::AbstractStringBuilder* AbstractStringBuilder::append(java::lang::CharSequence* arg1, int arg2, int arg3)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/lang/AbstractStringBuilder;");
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
  java::lang::AbstractStringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::AbstractStringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::AbstractStringBuilder* AbstractStringBuilder::append(JavaCharArray* arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "([C)Ljava/lang/AbstractStringBuilder;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::AbstractStringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::AbstractStringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::AbstractStringBuilder* AbstractStringBuilder::append(JavaCharArray* arg1, int arg2, int arg3)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "([CII)Ljava/lang/AbstractStringBuilder;");
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
  java::lang::AbstractStringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::AbstractStringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::AbstractStringBuilder* AbstractStringBuilder::append(bool arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "(Z)Ljava/lang/AbstractStringBuilder;");
  handleJavaException(wrapperIntern);
  jboolean jarg1 = (jboolean)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::AbstractStringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::AbstractStringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::AbstractStringBuilder* AbstractStringBuilder::append(char arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "(C)Ljava/lang/AbstractStringBuilder;");
  handleJavaException(wrapperIntern);
  jchar jarg1 = (jchar)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::AbstractStringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::AbstractStringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::AbstractStringBuilder* AbstractStringBuilder::append(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "(I)Ljava/lang/AbstractStringBuilder;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::AbstractStringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::AbstractStringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::AbstractStringBuilder* AbstractStringBuilder::append(long arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "(J)Ljava/lang/AbstractStringBuilder;");
  handleJavaException(wrapperIntern);
  jlong jarg1 = (jlong)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::AbstractStringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::AbstractStringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::AbstractStringBuilder* AbstractStringBuilder::append(float arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "(F)Ljava/lang/AbstractStringBuilder;");
  handleJavaException(wrapperIntern);
  jfloat jarg1 = (jfloat)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::AbstractStringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::AbstractStringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::AbstractStringBuilder* AbstractStringBuilder::append(double arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "append", "(D)Ljava/lang/AbstractStringBuilder;");
  handleJavaException(wrapperIntern);
  jdouble jarg1 = (jdouble)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::AbstractStringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::AbstractStringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int AbstractStringBuilder::indexOf(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
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

int AbstractStringBuilder::indexOf(const char* arg1, int arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
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

int AbstractStringBuilder::length()
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "length", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

char AbstractStringBuilder::charAt(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
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

int AbstractStringBuilder::codePointAt(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
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

int AbstractStringBuilder::codePointBefore(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
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

int AbstractStringBuilder::codePointCount(int arg1, int arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
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

int AbstractStringBuilder::offsetByCodePoints(int arg1, int arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
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

void AbstractStringBuilder::getChars(int arg1, int arg2, JavaCharArray* arg3, int arg4)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
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

int AbstractStringBuilder::lastIndexOf(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
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

int AbstractStringBuilder::lastIndexOf(const char* arg1, int arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
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

const char* AbstractStringBuilder::substring(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
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

const char* AbstractStringBuilder::substring(int arg1, int arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
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

java::lang::CharSequence* AbstractStringBuilder::subSequence(int arg1, int arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
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

java::lang::AbstractStringBuilder* AbstractStringBuilder::replace(int arg1, int arg2, const char* arg3)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "replace", "(IILjava/lang/String;)Ljava/lang/AbstractStringBuilder;");
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
  java::lang::AbstractStringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::AbstractStringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int AbstractStringBuilder::capacity()
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "capacity", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

void AbstractStringBuilder::ensureCapacity(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "ensureCapacity", "(I)V");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

void AbstractStringBuilder::trimToSize()
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "trimToSize", "()V");
  handleJavaException(wrapperIntern);
  javaEnv->CallVoidMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

void AbstractStringBuilder::setLength(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "setLength", "(I)V");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

void AbstractStringBuilder::setCharAt(int arg1, char arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "setCharAt", "(IC)V");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jchar jarg2 = (jchar)arg2;
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::AbstractStringBuilder* AbstractStringBuilder::appendCodePoint(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "appendCodePoint", "(I)Ljava/lang/AbstractStringBuilder;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::AbstractStringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::AbstractStringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::AbstractStringBuilder* AbstractStringBuilder::delete_(int arg1, int arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "delete_", "(II)Ljava/lang/AbstractStringBuilder;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jint jarg2 = (jint)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  java::lang::AbstractStringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::AbstractStringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::AbstractStringBuilder* AbstractStringBuilder::deleteCharAt(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "deleteCharAt", "(I)Ljava/lang/AbstractStringBuilder;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::lang::AbstractStringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::AbstractStringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::AbstractStringBuilder* AbstractStringBuilder::insert(int arg1, JavaCharArray* arg2, int arg3, int arg4)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "insert", "(I[CII)Ljava/lang/AbstractStringBuilder;");
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
  java::lang::AbstractStringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::AbstractStringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::AbstractStringBuilder* AbstractStringBuilder::insert(int arg1, java::lang::Object* arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "insert", "(ILjava/lang/Object;)Ljava/lang/AbstractStringBuilder;");
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
  java::lang::AbstractStringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::AbstractStringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::AbstractStringBuilder* AbstractStringBuilder::insert(int arg1, const char* arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "insert", "(ILjava/lang/String;)Ljava/lang/AbstractStringBuilder;");
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
  java::lang::AbstractStringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::AbstractStringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::AbstractStringBuilder* AbstractStringBuilder::insert(int arg1, JavaCharArray* arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "insert", "(I[C)Ljava/lang/AbstractStringBuilder;");
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
  java::lang::AbstractStringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::AbstractStringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::AbstractStringBuilder* AbstractStringBuilder::insert(int arg1, java::lang::CharSequence* arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "insert", "(ILjava/lang/CharSequence;)Ljava/lang/AbstractStringBuilder;");
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
  java::lang::AbstractStringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::AbstractStringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::AbstractStringBuilder* AbstractStringBuilder::insert(int arg1, java::lang::CharSequence* arg2, int arg3, int arg4)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "insert", "(ILjava/lang/CharSequence;II)Ljava/lang/AbstractStringBuilder;");
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
  java::lang::AbstractStringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::AbstractStringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::AbstractStringBuilder* AbstractStringBuilder::insert(int arg1, bool arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "insert", "(IZ)Ljava/lang/AbstractStringBuilder;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jboolean jarg2 = (jboolean)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  java::lang::AbstractStringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::AbstractStringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::AbstractStringBuilder* AbstractStringBuilder::insert(int arg1, char arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "insert", "(IC)Ljava/lang/AbstractStringBuilder;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jchar jarg2 = (jchar)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  java::lang::AbstractStringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::AbstractStringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::AbstractStringBuilder* AbstractStringBuilder::insert(int arg1, int arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "insert", "(II)Ljava/lang/AbstractStringBuilder;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jint jarg2 = (jint)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  java::lang::AbstractStringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::AbstractStringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::AbstractStringBuilder* AbstractStringBuilder::insert(int arg1, long arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "insert", "(IJ)Ljava/lang/AbstractStringBuilder;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jlong jarg2 = (jlong)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  java::lang::AbstractStringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::AbstractStringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::AbstractStringBuilder* AbstractStringBuilder::insert(int arg1, float arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "insert", "(IF)Ljava/lang/AbstractStringBuilder;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jfloat jarg2 = (jfloat)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  java::lang::AbstractStringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::AbstractStringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::AbstractStringBuilder* AbstractStringBuilder::insert(int arg1, double arg2)
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "insert", "(ID)Ljava/lang/AbstractStringBuilder;");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jdouble jarg2 = (jdouble)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  java::lang::AbstractStringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::AbstractStringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::AbstractStringBuilder* AbstractStringBuilder::reverse()
{
  jclass    cls = javaEnv->FindClass("java/lang/AbstractStringBuilder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "reverse", "()Ljava/lang/AbstractStringBuilder;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::lang::AbstractStringBuilder* result;
  if (jresult!=NULL) {
    result=new java::lang::AbstractStringBuilder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
