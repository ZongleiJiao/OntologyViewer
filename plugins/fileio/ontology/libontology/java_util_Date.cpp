#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_util_Date.h>
#include <java_lang_Object.h>
#include <java_io_Serializable.h>
#include <java_lang_Cloneable.h>
#include <java_lang_Comparable.h>
#include <java_lang_String.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace util {

Date::Date(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

Date::Date(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

Date::Date()
  : java::lang::Object(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "()V");
  handleJavaException(wrapperIntern);
  jobject o = javaEnv->NewObject(cls, mid);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  updateAllVariables(wrapperIntern);
}

Date::Date(long arg1)
  : java::lang::Object(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "(J)V");
  handleJavaException(wrapperIntern);
  jlong jarg1 = (jlong)arg1;
  jobject o = javaEnv->NewObject(cls, mid, jarg1);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  updateAllVariables(wrapperIntern);
}

Date::Date(int arg1, int arg2, int arg3)
  : java::lang::Object(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "(III)V");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jint jarg2 = (jint)arg2;
  jint jarg3 = (jint)arg3;
  jobject o = javaEnv->NewObject(cls, mid, jarg1, jarg2, jarg3);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  updateAllVariables(wrapperIntern);
}

Date::Date(int arg1, int arg2, int arg3, int arg4, int arg5)
  : java::lang::Object(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "(IIIII)V");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jint jarg2 = (jint)arg2;
  jint jarg3 = (jint)arg3;
  jint jarg4 = (jint)arg4;
  jint jarg5 = (jint)arg5;
  jobject o = javaEnv->NewObject(cls, mid, jarg1, jarg2, jarg3, jarg4, jarg5);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  updateAllVariables(wrapperIntern);
}

Date::Date(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6)
  : java::lang::Object(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "(IIIIII)V");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jint jarg2 = (jint)arg2;
  jint jarg3 = (jint)arg3;
  jint jarg4 = (jint)arg4;
  jint jarg5 = (jint)arg5;
  jint jarg6 = (jint)arg6;
  jobject o = javaEnv->NewObject(cls, mid, jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  updateAllVariables(wrapperIntern);
}

Date::Date(const char* arg1)
  : java::lang::Object(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
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

void Date::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
}

void Date::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
}

bool Date::equals(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
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

const char* Date::toString()
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
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

int Date::hashCode()
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "hashCode", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::Object* Date::clone()
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "clone", "()Ljava/lang/Object;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::lang::Object* result;
  if (jresult!=NULL) {
    result=new java::lang::Object(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int Date::compareTo(java::util::Date* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "compareTo", "(Ljava/util/Date;)I");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int Date::compareTo(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "compareTo", "(Ljava/lang/Object;)I");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

long Date::parse(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "parse", "(Ljava/lang/String;)J");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jlong jresult=javaEnv->CallStaticLongMethod(cls, mid, jarg1);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  long result = (long)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool Date::after(java::util::Date* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "after", "(Ljava/util/Date;)Z");
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

bool Date::before(java::util::Date* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "before", "(Ljava/util/Date;)Z");
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

void Date::setTime(long arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "setTime", "(J)V");
  handleJavaException(wrapperIntern);
  jlong jarg1 = (jlong)arg1;
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

long Date::getTime()
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getTime", "()J");
  handleJavaException(wrapperIntern);
  jlong jresult=javaEnv->CallLongMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  long result = (long)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int Date::getYear()
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getYear", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int Date::getMonth()
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getMonth", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int Date::getDate()
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getDate", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int Date::getHours()
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getHours", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int Date::getMinutes()
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getMinutes", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int Date::getSeconds()
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getSeconds", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

long Date::UTC(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6)
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "UTC", "(IIIIII)J");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  jint jarg2 = (jint)arg2;
  jint jarg3 = (jint)arg3;
  jint jarg4 = (jint)arg4;
  jint jarg5 = (jint)arg5;
  jint jarg6 = (jint)arg6;
  jlong jresult=javaEnv->CallStaticLongMethod(cls, mid, jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
  handleJavaException(wrapperIntern);
  long result = (long)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

void Date::setYear(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "setYear", "(I)V");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

void Date::setMonth(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "setMonth", "(I)V");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

void Date::setDate(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "setDate", "(I)V");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

int Date::getDay()
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getDay", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

void Date::setHours(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "setHours", "(I)V");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

void Date::setMinutes(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "setMinutes", "(I)V");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

void Date::setSeconds(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "setSeconds", "(I)V");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

const char* Date::toLocaleString()
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "toLocaleString", "()Ljava/lang/String;");
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

const char* Date::toGMTString()
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "toGMTString", "()Ljava/lang/String;");
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

int Date::getTimezoneOffset()
{
  jclass    cls = javaEnv->FindClass("java/util/Date");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getTimezoneOffset", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
