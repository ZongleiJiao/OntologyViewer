#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_util_regex_Pattern.h>
#include <java_lang_Object.h>
#include <java_io_Serializable.h>
#include <java_lang_String.h>
#include <java_lang_CharSequence.h>
#include <java_util_regex_Matcher.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace util {
namespace regex {

Pattern::Pattern(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

Pattern::Pattern(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void Pattern::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/util/regex/Pattern");
  handleJavaException(wrapperIntern);
  jfieldID fid_UNIX_LINES = javaEnv->GetStaticFieldID(cls, "UNIX_LINES", "I");
  handleJavaException(wrapperIntern);
  jint jresult_UNIX_LINES = javaEnv->GetStaticIntField(cls, fid_UNIX_LINES);
  handleJavaException(wrapperIntern);
  int result_UNIX_LINES = (int)jresult_UNIX_LINES;
  this->UNIX_LINES = result_UNIX_LINES;
  jfieldID fid_CASE_INSENSITIVE = javaEnv->GetStaticFieldID(cls, "CASE_INSENSITIVE", "I");
  handleJavaException(wrapperIntern);
  jint jresult_CASE_INSENSITIVE = javaEnv->GetStaticIntField(cls, fid_CASE_INSENSITIVE);
  handleJavaException(wrapperIntern);
  int result_CASE_INSENSITIVE = (int)jresult_CASE_INSENSITIVE;
  this->CASE_INSENSITIVE = result_CASE_INSENSITIVE;
  jfieldID fid_COMMENTS = javaEnv->GetStaticFieldID(cls, "COMMENTS", "I");
  handleJavaException(wrapperIntern);
  jint jresult_COMMENTS = javaEnv->GetStaticIntField(cls, fid_COMMENTS);
  handleJavaException(wrapperIntern);
  int result_COMMENTS = (int)jresult_COMMENTS;
  this->COMMENTS = result_COMMENTS;
  jfieldID fid_MULTILINE = javaEnv->GetStaticFieldID(cls, "MULTILINE", "I");
  handleJavaException(wrapperIntern);
  jint jresult_MULTILINE = javaEnv->GetStaticIntField(cls, fid_MULTILINE);
  handleJavaException(wrapperIntern);
  int result_MULTILINE = (int)jresult_MULTILINE;
  this->MULTILINE = result_MULTILINE;
  jfieldID fid_LITERAL = javaEnv->GetStaticFieldID(cls, "LITERAL", "I");
  handleJavaException(wrapperIntern);
  jint jresult_LITERAL = javaEnv->GetStaticIntField(cls, fid_LITERAL);
  handleJavaException(wrapperIntern);
  int result_LITERAL = (int)jresult_LITERAL;
  this->LITERAL = result_LITERAL;
  jfieldID fid_DOTALL = javaEnv->GetStaticFieldID(cls, "DOTALL", "I");
  handleJavaException(wrapperIntern);
  jint jresult_DOTALL = javaEnv->GetStaticIntField(cls, fid_DOTALL);
  handleJavaException(wrapperIntern);
  int result_DOTALL = (int)jresult_DOTALL;
  this->DOTALL = result_DOTALL;
  jfieldID fid_UNICODE_CASE = javaEnv->GetStaticFieldID(cls, "UNICODE_CASE", "I");
  handleJavaException(wrapperIntern);
  jint jresult_UNICODE_CASE = javaEnv->GetStaticIntField(cls, fid_UNICODE_CASE);
  handleJavaException(wrapperIntern);
  int result_UNICODE_CASE = (int)jresult_UNICODE_CASE;
  this->UNICODE_CASE = result_UNICODE_CASE;
  jfieldID fid_CANON_EQ = javaEnv->GetStaticFieldID(cls, "CANON_EQ", "I");
  handleJavaException(wrapperIntern);
  jint jresult_CANON_EQ = javaEnv->GetStaticIntField(cls, fid_CANON_EQ);
  handleJavaException(wrapperIntern);
  int result_CANON_EQ = (int)jresult_CANON_EQ;
  this->CANON_EQ = result_CANON_EQ;
}

void Pattern::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/util/regex/Pattern");
  handleJavaException(wrapperIntern);
}

const char* Pattern::toString()
{
  jclass    cls = javaEnv->FindClass("java/util/regex/Pattern");
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

int Pattern::flags()
{
  jclass    cls = javaEnv->FindClass("java/util/regex/Pattern");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "flags", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool Pattern::matches(const char* arg1, java::lang::CharSequence* arg2)
{
  jclass    cls = javaEnv->FindClass("java/util/regex/Pattern");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "matches", "(Ljava/lang/String;Ljava/lang/CharSequence;)Z");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jboolean jresult=javaEnv->CallStaticBooleanMethod(cls, mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

JavaObjectArray* Pattern::split(java::lang::CharSequence* arg1, int arg2)
{
  jclass    cls = javaEnv->FindClass("java/util/regex/Pattern");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "split", "(Ljava/lang/CharSequence;I)[Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jint jarg2 = (jint)arg2;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2);
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

JavaObjectArray* Pattern::split(java::lang::CharSequence* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/regex/Pattern");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "split", "(Ljava/lang/CharSequence;)[Ljava/lang/String;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

java::util::regex::Pattern* Pattern::compile(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/regex/Pattern");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "compile", "(Ljava/lang/String;)Ljava/util/regex/Pattern;");
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
  java::util::regex::Pattern* result;
  if (jresult!=NULL) {
    result=new java::util::regex::Pattern(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::util::regex::Pattern* Pattern::compile(const char* arg1, int arg2)
{
  jclass    cls = javaEnv->FindClass("java/util/regex/Pattern");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "compile", "(Ljava/lang/String;I)Ljava/util/regex/Pattern;");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jint jarg2 = (jint)arg2;
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid, jarg1, jarg2);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  java::util::regex::Pattern* result;
  if (jresult!=NULL) {
    result=new java::util::regex::Pattern(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::util::regex::Matcher* Pattern::matcher(java::lang::CharSequence* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/regex/Pattern");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "matcher", "(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::util::regex::Matcher* result;
  if (jresult!=NULL) {
    result=new java::util::regex::Matcher(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

const char* Pattern::pattern()
{
  jclass    cls = javaEnv->FindClass("java/util/regex/Pattern");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "pattern", "()Ljava/lang/String;");
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

const char* Pattern::quote(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("java/util/regex/Pattern");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "quote", "(Ljava/lang/String;)Ljava/lang/String;");
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
}
