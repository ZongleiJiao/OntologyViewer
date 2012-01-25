#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_util_Locale.h>
#include <java_lang_Object.h>
#include <java_lang_Cloneable.h>
#include <java_io_Serializable.h>
#include <java_lang_String.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace util {

Locale::Locale(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

Locale::Locale(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

Locale::Locale(const char* arg1, const char* arg2, const char* arg3)
  : java::lang::Object(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("java/util/Locale");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jstring jarg2;
  if (arg2!=NULL) {
    jarg2 = javaEnv->NewStringUTF(arg2);
  } else {
    jarg2=NULL;
  }
  handleJavaException(wrapperIntern);
  jstring jarg3;
  if (arg3!=NULL) {
    jarg3 = javaEnv->NewStringUTF(arg3);
  } else {
    jarg3=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject o = javaEnv->NewObject(cls, mid, jarg1, jarg2, jarg3);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  if (jarg2!=NULL) {
    javaEnv->DeleteLocalRef(jarg2);
  }
  if (jarg3!=NULL) {
    javaEnv->DeleteLocalRef(jarg3);
  }
  updateAllVariables(wrapperIntern);
}

Locale::Locale(const char* arg1, const char* arg2)
  : java::lang::Object(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("java/util/Locale");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jstring jarg2;
  if (arg2!=NULL) {
    jarg2 = javaEnv->NewStringUTF(arg2);
  } else {
    jarg2=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject o = javaEnv->NewObject(cls, mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  if (jarg2!=NULL) {
    javaEnv->DeleteLocalRef(jarg2);
  }
  updateAllVariables(wrapperIntern);
}

Locale::Locale(const char* arg1)
  : java::lang::Object(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("java/util/Locale");
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

void Locale::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/util/Locale");
  handleJavaException(wrapperIntern);
  jfieldID fid_ENGLISH = javaEnv->GetStaticFieldID(cls, "ENGLISH", "Ljava/util/Locale;");
  handleJavaException(wrapperIntern);
  jobject jresult_ENGLISH = javaEnv->GetStaticObjectField(cls, fid_ENGLISH);
  handleJavaException(wrapperIntern);
  java::util::Locale* result_ENGLISH;
  if (jresult_ENGLISH!=NULL) {
    result_ENGLISH=new java::util::Locale(jresult_ENGLISH);
    javaEnv->DeleteLocalRef(jresult_ENGLISH);
  } else {
    result_ENGLISH=NULL;
  }
  this->ENGLISH = result_ENGLISH;
  jfieldID fid_FRENCH = javaEnv->GetStaticFieldID(cls, "FRENCH", "Ljava/util/Locale;");
  handleJavaException(wrapperIntern);
  jobject jresult_FRENCH = javaEnv->GetStaticObjectField(cls, fid_FRENCH);
  handleJavaException(wrapperIntern);
  java::util::Locale* result_FRENCH;
  if (jresult_FRENCH!=NULL) {
    result_FRENCH=new java::util::Locale(jresult_FRENCH);
    javaEnv->DeleteLocalRef(jresult_FRENCH);
  } else {
    result_FRENCH=NULL;
  }
  this->FRENCH = result_FRENCH;
  jfieldID fid_GERMAN = javaEnv->GetStaticFieldID(cls, "GERMAN", "Ljava/util/Locale;");
  handleJavaException(wrapperIntern);
  jobject jresult_GERMAN = javaEnv->GetStaticObjectField(cls, fid_GERMAN);
  handleJavaException(wrapperIntern);
  java::util::Locale* result_GERMAN;
  if (jresult_GERMAN!=NULL) {
    result_GERMAN=new java::util::Locale(jresult_GERMAN);
    javaEnv->DeleteLocalRef(jresult_GERMAN);
  } else {
    result_GERMAN=NULL;
  }
  this->GERMAN = result_GERMAN;
  jfieldID fid_ITALIAN = javaEnv->GetStaticFieldID(cls, "ITALIAN", "Ljava/util/Locale;");
  handleJavaException(wrapperIntern);
  jobject jresult_ITALIAN = javaEnv->GetStaticObjectField(cls, fid_ITALIAN);
  handleJavaException(wrapperIntern);
  java::util::Locale* result_ITALIAN;
  if (jresult_ITALIAN!=NULL) {
    result_ITALIAN=new java::util::Locale(jresult_ITALIAN);
    javaEnv->DeleteLocalRef(jresult_ITALIAN);
  } else {
    result_ITALIAN=NULL;
  }
  this->ITALIAN = result_ITALIAN;
  jfieldID fid_JAPANESE = javaEnv->GetStaticFieldID(cls, "JAPANESE", "Ljava/util/Locale;");
  handleJavaException(wrapperIntern);
  jobject jresult_JAPANESE = javaEnv->GetStaticObjectField(cls, fid_JAPANESE);
  handleJavaException(wrapperIntern);
  java::util::Locale* result_JAPANESE;
  if (jresult_JAPANESE!=NULL) {
    result_JAPANESE=new java::util::Locale(jresult_JAPANESE);
    javaEnv->DeleteLocalRef(jresult_JAPANESE);
  } else {
    result_JAPANESE=NULL;
  }
  this->JAPANESE = result_JAPANESE;
  jfieldID fid_KOREAN = javaEnv->GetStaticFieldID(cls, "KOREAN", "Ljava/util/Locale;");
  handleJavaException(wrapperIntern);
  jobject jresult_KOREAN = javaEnv->GetStaticObjectField(cls, fid_KOREAN);
  handleJavaException(wrapperIntern);
  java::util::Locale* result_KOREAN;
  if (jresult_KOREAN!=NULL) {
    result_KOREAN=new java::util::Locale(jresult_KOREAN);
    javaEnv->DeleteLocalRef(jresult_KOREAN);
  } else {
    result_KOREAN=NULL;
  }
  this->KOREAN = result_KOREAN;
  jfieldID fid_CHINESE = javaEnv->GetStaticFieldID(cls, "CHINESE", "Ljava/util/Locale;");
  handleJavaException(wrapperIntern);
  jobject jresult_CHINESE = javaEnv->GetStaticObjectField(cls, fid_CHINESE);
  handleJavaException(wrapperIntern);
  java::util::Locale* result_CHINESE;
  if (jresult_CHINESE!=NULL) {
    result_CHINESE=new java::util::Locale(jresult_CHINESE);
    javaEnv->DeleteLocalRef(jresult_CHINESE);
  } else {
    result_CHINESE=NULL;
  }
  this->CHINESE = result_CHINESE;
  jfieldID fid_SIMPLIFIED_CHINESE = javaEnv->GetStaticFieldID(cls, "SIMPLIFIED_CHINESE", "Ljava/util/Locale;");
  handleJavaException(wrapperIntern);
  jobject jresult_SIMPLIFIED_CHINESE = javaEnv->GetStaticObjectField(cls, fid_SIMPLIFIED_CHINESE);
  handleJavaException(wrapperIntern);
  java::util::Locale* result_SIMPLIFIED_CHINESE;
  if (jresult_SIMPLIFIED_CHINESE!=NULL) {
    result_SIMPLIFIED_CHINESE=new java::util::Locale(jresult_SIMPLIFIED_CHINESE);
    javaEnv->DeleteLocalRef(jresult_SIMPLIFIED_CHINESE);
  } else {
    result_SIMPLIFIED_CHINESE=NULL;
  }
  this->SIMPLIFIED_CHINESE = result_SIMPLIFIED_CHINESE;
  jfieldID fid_TRADITIONAL_CHINESE = javaEnv->GetStaticFieldID(cls, "TRADITIONAL_CHINESE", "Ljava/util/Locale;");
  handleJavaException(wrapperIntern);
  jobject jresult_TRADITIONAL_CHINESE = javaEnv->GetStaticObjectField(cls, fid_TRADITIONAL_CHINESE);
  handleJavaException(wrapperIntern);
  java::util::Locale* result_TRADITIONAL_CHINESE;
  if (jresult_TRADITIONAL_CHINESE!=NULL) {
    result_TRADITIONAL_CHINESE=new java::util::Locale(jresult_TRADITIONAL_CHINESE);
    javaEnv->DeleteLocalRef(jresult_TRADITIONAL_CHINESE);
  } else {
    result_TRADITIONAL_CHINESE=NULL;
  }
  this->TRADITIONAL_CHINESE = result_TRADITIONAL_CHINESE;
  jfieldID fid_FRANCE = javaEnv->GetStaticFieldID(cls, "FRANCE", "Ljava/util/Locale;");
  handleJavaException(wrapperIntern);
  jobject jresult_FRANCE = javaEnv->GetStaticObjectField(cls, fid_FRANCE);
  handleJavaException(wrapperIntern);
  java::util::Locale* result_FRANCE;
  if (jresult_FRANCE!=NULL) {
    result_FRANCE=new java::util::Locale(jresult_FRANCE);
    javaEnv->DeleteLocalRef(jresult_FRANCE);
  } else {
    result_FRANCE=NULL;
  }
  this->FRANCE = result_FRANCE;
  jfieldID fid_GERMANY = javaEnv->GetStaticFieldID(cls, "GERMANY", "Ljava/util/Locale;");
  handleJavaException(wrapperIntern);
  jobject jresult_GERMANY = javaEnv->GetStaticObjectField(cls, fid_GERMANY);
  handleJavaException(wrapperIntern);
  java::util::Locale* result_GERMANY;
  if (jresult_GERMANY!=NULL) {
    result_GERMANY=new java::util::Locale(jresult_GERMANY);
    javaEnv->DeleteLocalRef(jresult_GERMANY);
  } else {
    result_GERMANY=NULL;
  }
  this->GERMANY = result_GERMANY;
  jfieldID fid_ITALY = javaEnv->GetStaticFieldID(cls, "ITALY", "Ljava/util/Locale;");
  handleJavaException(wrapperIntern);
  jobject jresult_ITALY = javaEnv->GetStaticObjectField(cls, fid_ITALY);
  handleJavaException(wrapperIntern);
  java::util::Locale* result_ITALY;
  if (jresult_ITALY!=NULL) {
    result_ITALY=new java::util::Locale(jresult_ITALY);
    javaEnv->DeleteLocalRef(jresult_ITALY);
  } else {
    result_ITALY=NULL;
  }
  this->ITALY = result_ITALY;
  jfieldID fid_JAPAN = javaEnv->GetStaticFieldID(cls, "JAPAN", "Ljava/util/Locale;");
  handleJavaException(wrapperIntern);
  jobject jresult_JAPAN = javaEnv->GetStaticObjectField(cls, fid_JAPAN);
  handleJavaException(wrapperIntern);
  java::util::Locale* result_JAPAN;
  if (jresult_JAPAN!=NULL) {
    result_JAPAN=new java::util::Locale(jresult_JAPAN);
    javaEnv->DeleteLocalRef(jresult_JAPAN);
  } else {
    result_JAPAN=NULL;
  }
  this->JAPAN = result_JAPAN;
  jfieldID fid_KOREA = javaEnv->GetStaticFieldID(cls, "KOREA", "Ljava/util/Locale;");
  handleJavaException(wrapperIntern);
  jobject jresult_KOREA = javaEnv->GetStaticObjectField(cls, fid_KOREA);
  handleJavaException(wrapperIntern);
  java::util::Locale* result_KOREA;
  if (jresult_KOREA!=NULL) {
    result_KOREA=new java::util::Locale(jresult_KOREA);
    javaEnv->DeleteLocalRef(jresult_KOREA);
  } else {
    result_KOREA=NULL;
  }
  this->KOREA = result_KOREA;
  jfieldID fid_CHINA = javaEnv->GetStaticFieldID(cls, "CHINA", "Ljava/util/Locale;");
  handleJavaException(wrapperIntern);
  jobject jresult_CHINA = javaEnv->GetStaticObjectField(cls, fid_CHINA);
  handleJavaException(wrapperIntern);
  java::util::Locale* result_CHINA;
  if (jresult_CHINA!=NULL) {
    result_CHINA=new java::util::Locale(jresult_CHINA);
    javaEnv->DeleteLocalRef(jresult_CHINA);
  } else {
    result_CHINA=NULL;
  }
  this->CHINA = result_CHINA;
  jfieldID fid_PRC = javaEnv->GetStaticFieldID(cls, "PRC", "Ljava/util/Locale;");
  handleJavaException(wrapperIntern);
  jobject jresult_PRC = javaEnv->GetStaticObjectField(cls, fid_PRC);
  handleJavaException(wrapperIntern);
  java::util::Locale* result_PRC;
  if (jresult_PRC!=NULL) {
    result_PRC=new java::util::Locale(jresult_PRC);
    javaEnv->DeleteLocalRef(jresult_PRC);
  } else {
    result_PRC=NULL;
  }
  this->PRC = result_PRC;
  jfieldID fid_TAIWAN = javaEnv->GetStaticFieldID(cls, "TAIWAN", "Ljava/util/Locale;");
  handleJavaException(wrapperIntern);
  jobject jresult_TAIWAN = javaEnv->GetStaticObjectField(cls, fid_TAIWAN);
  handleJavaException(wrapperIntern);
  java::util::Locale* result_TAIWAN;
  if (jresult_TAIWAN!=NULL) {
    result_TAIWAN=new java::util::Locale(jresult_TAIWAN);
    javaEnv->DeleteLocalRef(jresult_TAIWAN);
  } else {
    result_TAIWAN=NULL;
  }
  this->TAIWAN = result_TAIWAN;
  jfieldID fid_UK = javaEnv->GetStaticFieldID(cls, "UK", "Ljava/util/Locale;");
  handleJavaException(wrapperIntern);
  jobject jresult_UK = javaEnv->GetStaticObjectField(cls, fid_UK);
  handleJavaException(wrapperIntern);
  java::util::Locale* result_UK;
  if (jresult_UK!=NULL) {
    result_UK=new java::util::Locale(jresult_UK);
    javaEnv->DeleteLocalRef(jresult_UK);
  } else {
    result_UK=NULL;
  }
  this->UK = result_UK;
  jfieldID fid_US = javaEnv->GetStaticFieldID(cls, "US", "Ljava/util/Locale;");
  handleJavaException(wrapperIntern);
  jobject jresult_US = javaEnv->GetStaticObjectField(cls, fid_US);
  handleJavaException(wrapperIntern);
  java::util::Locale* result_US;
  if (jresult_US!=NULL) {
    result_US=new java::util::Locale(jresult_US);
    javaEnv->DeleteLocalRef(jresult_US);
  } else {
    result_US=NULL;
  }
  this->US = result_US;
  jfieldID fid_CANADA = javaEnv->GetStaticFieldID(cls, "CANADA", "Ljava/util/Locale;");
  handleJavaException(wrapperIntern);
  jobject jresult_CANADA = javaEnv->GetStaticObjectField(cls, fid_CANADA);
  handleJavaException(wrapperIntern);
  java::util::Locale* result_CANADA;
  if (jresult_CANADA!=NULL) {
    result_CANADA=new java::util::Locale(jresult_CANADA);
    javaEnv->DeleteLocalRef(jresult_CANADA);
  } else {
    result_CANADA=NULL;
  }
  this->CANADA = result_CANADA;
  jfieldID fid_CANADA_FRENCH = javaEnv->GetStaticFieldID(cls, "CANADA_FRENCH", "Ljava/util/Locale;");
  handleJavaException(wrapperIntern);
  jobject jresult_CANADA_FRENCH = javaEnv->GetStaticObjectField(cls, fid_CANADA_FRENCH);
  handleJavaException(wrapperIntern);
  java::util::Locale* result_CANADA_FRENCH;
  if (jresult_CANADA_FRENCH!=NULL) {
    result_CANADA_FRENCH=new java::util::Locale(jresult_CANADA_FRENCH);
    javaEnv->DeleteLocalRef(jresult_CANADA_FRENCH);
  } else {
    result_CANADA_FRENCH=NULL;
  }
  this->CANADA_FRENCH = result_CANADA_FRENCH;
  jfieldID fid_ROOT = javaEnv->GetStaticFieldID(cls, "ROOT", "Ljava/util/Locale;");
  handleJavaException(wrapperIntern);
  jobject jresult_ROOT = javaEnv->GetStaticObjectField(cls, fid_ROOT);
  handleJavaException(wrapperIntern);
  java::util::Locale* result_ROOT;
  if (jresult_ROOT!=NULL) {
    result_ROOT=new java::util::Locale(jresult_ROOT);
    javaEnv->DeleteLocalRef(jresult_ROOT);
  } else {
    result_ROOT=NULL;
  }
  this->ROOT = result_ROOT;
}

void Locale::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/util/Locale");
  handleJavaException(wrapperIntern);
}

bool Locale::equals(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/Locale");
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

const char* Locale::toString()
{
  jclass    cls = javaEnv->FindClass("java/util/Locale");
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

int Locale::hashCode()
{
  jclass    cls = javaEnv->FindClass("java/util/Locale");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "hashCode", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::lang::Object* Locale::clone()
{
  jclass    cls = javaEnv->FindClass("java/util/Locale");
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

const char* Locale::getLanguage()
{
  jclass    cls = javaEnv->FindClass("java/util/Locale");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getLanguage", "()Ljava/lang/String;");
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

java::util::Locale* Locale::getDefault()
{
  jclass    cls = javaEnv->FindClass("java/util/Locale");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "getDefault", "()Ljava/util/Locale;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid);
  handleJavaException(wrapperIntern);
  java::util::Locale* result;
  if (jresult!=NULL) {
    result=new java::util::Locale(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

void Locale::setDefault(java::util::Locale* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/Locale");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "setDefault", "(Ljava/util/Locale;)V");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  javaEnv->CallStaticVoidMethod(cls, mid, jarg1);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

JavaObjectArray* Locale::getAvailableLocales()
{
  jclass    cls = javaEnv->FindClass("java/util/Locale");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
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

JavaObjectArray* Locale::getISOCountries()
{
  jclass    cls = javaEnv->FindClass("java/util/Locale");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "getISOCountries", "()[Ljava/lang/String;");
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

JavaObjectArray* Locale::getISOLanguages()
{
  jclass    cls = javaEnv->FindClass("java/util/Locale");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "getISOLanguages", "()[Ljava/lang/String;");
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

const char* Locale::getCountry()
{
  jclass    cls = javaEnv->FindClass("java/util/Locale");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getCountry", "()Ljava/lang/String;");
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

const char* Locale::getVariant()
{
  jclass    cls = javaEnv->FindClass("java/util/Locale");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getVariant", "()Ljava/lang/String;");
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

const char* Locale::getISO3Language()
{
  jclass    cls = javaEnv->FindClass("java/util/Locale");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getISO3Language", "()Ljava/lang/String;");
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

const char* Locale::getISO3Country()
{
  jclass    cls = javaEnv->FindClass("java/util/Locale");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getISO3Country", "()Ljava/lang/String;");
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

const char* Locale::getDisplayLanguage()
{
  jclass    cls = javaEnv->FindClass("java/util/Locale");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getDisplayLanguage", "()Ljava/lang/String;");
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

const char* Locale::getDisplayLanguage(java::util::Locale* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/Locale");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getDisplayLanguage", "(Ljava/util/Locale;)Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
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

const char* Locale::getDisplayCountry()
{
  jclass    cls = javaEnv->FindClass("java/util/Locale");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getDisplayCountry", "()Ljava/lang/String;");
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

const char* Locale::getDisplayCountry(java::util::Locale* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/Locale");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getDisplayCountry", "(Ljava/util/Locale;)Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
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

const char* Locale::getDisplayVariant()
{
  jclass    cls = javaEnv->FindClass("java/util/Locale");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getDisplayVariant", "()Ljava/lang/String;");
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

const char* Locale::getDisplayVariant(java::util::Locale* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/Locale");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getDisplayVariant", "(Ljava/util/Locale;)Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
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

const char* Locale::getDisplayName()
{
  jclass    cls = javaEnv->FindClass("java/util/Locale");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getDisplayName", "()Ljava/lang/String;");
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

const char* Locale::getDisplayName(java::util::Locale* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/Locale");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getDisplayName", "(Ljava/util/Locale;)Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
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
}
}
