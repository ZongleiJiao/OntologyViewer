#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_nio_charset_Charset.h>
#include <java_lang_Object.h>
#include <java_lang_Comparable.h>
#include <java_lang_String.h>
#include <java_nio_CharBuffer.h>
#include <java_nio_ByteBuffer.h>
#include <java_util_Set.h>
#include <java_util_SortedMap.h>
#include <java_util_Locale.h>
#include <java_nio_charset_CharsetDecoder.h>
#include <java_nio_charset_CharsetEncoder.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace nio {
namespace charset {

Charset::Charset(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

Charset::Charset(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void Charset::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/nio/charset/Charset");
  handleJavaException(wrapperIntern);
}

void Charset::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/nio/charset/Charset");
  handleJavaException(wrapperIntern);
}

const char* Charset::name()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/Charset");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "name", "()Ljava/lang/String;");
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

java::nio::charset::Charset* Charset::forName(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/Charset");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "forName", "(Ljava/lang/String;)Ljava/nio/charset/Charset;");
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
  java::nio::charset::Charset* result;
  if (jresult!=NULL) {
    result=new java::nio::charset::Charset(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool Charset::equals(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/Charset");
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

const char* Charset::toString()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/Charset");
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

int Charset::hashCode()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/Charset");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "hashCode", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int Charset::compareTo(java::nio::charset::Charset* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/Charset");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "compareTo", "(Ljava/nio/charset/Charset;)I");
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

int Charset::compareTo(java::lang::Object* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/Charset");
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

bool Charset::contains(java::nio::charset::Charset* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/Charset");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "contains", "(Ljava/nio/charset/Charset;)Z");
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

java::nio::CharBuffer* Charset::decode(java::nio::ByteBuffer* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/Charset");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "decode", "(Ljava/nio/ByteBuffer;)Ljava/nio/CharBuffer;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::nio::CharBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::CharBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteBuffer* Charset::encode(java::nio::CharBuffer* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/Charset");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "encode", "(Ljava/nio/CharBuffer;)Ljava/nio/ByteBuffer;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::nio::ByteBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::ByteBuffer* Charset::encode(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/Charset");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "encode", "(Ljava/lang/String;)Ljava/nio/ByteBuffer;");
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
  java::nio::ByteBuffer* result;
  if (jresult!=NULL) {
    result=new java::nio::ByteBuffer(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::charset::Charset* Charset::defaultCharset()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/Charset");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "defaultCharset", "()Ljava/nio/charset/Charset;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid);
  handleJavaException(wrapperIntern);
  java::nio::charset::Charset* result;
  if (jresult!=NULL) {
    result=new java::nio::charset::Charset(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::util::Set* Charset::aliases()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/Charset");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "aliases", "()Ljava/util/Set;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::util::Set* result;
  if (jresult!=NULL) {
    result=new java::util::Set(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool Charset::isSupported(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/Charset");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "isSupported", "(Ljava/lang/String;)Z");
  handleJavaException(wrapperIntern);
  jstring jarg1;
  if (arg1!=NULL) {
    jarg1 = javaEnv->NewStringUTF(arg1);
  } else {
    jarg1=NULL;
  }
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallStaticBooleanMethod(cls, mid, jarg1);
  handleJavaException(wrapperIntern);
  if (jarg1!=NULL) {
    javaEnv->DeleteLocalRef(jarg1);
  }
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::util::SortedMap* Charset::availableCharsets()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/Charset");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetStaticMethodID(cls, "availableCharsets", "()Ljava/util/SortedMap;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallStaticObjectMethod(cls, mid);
  handleJavaException(wrapperIntern);
  java::util::SortedMap* result;
  if (jresult!=NULL) {
    result=new java::util::SortedMap(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

const char* Charset::displayName()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/Charset");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "displayName", "()Ljava/lang/String;");
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

const char* Charset::displayName(java::util::Locale* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/Charset");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "displayName", "(Ljava/util/Locale;)Ljava/lang/String;");
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

bool Charset::isRegistered()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/Charset");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isRegistered", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::charset::CharsetDecoder* Charset::newDecoder()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/Charset");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "newDecoder", "()Ljava/nio/charset/CharsetDecoder;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::nio::charset::CharsetDecoder* result;
  if (jresult!=NULL) {
    result=new java::nio::charset::CharsetDecoder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::charset::CharsetEncoder* Charset::newEncoder()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/Charset");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "newEncoder", "()Ljava/nio/charset/CharsetEncoder;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::nio::charset::CharsetEncoder* result;
  if (jresult!=NULL) {
    result=new java::nio::charset::CharsetEncoder(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool Charset::canEncode()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/Charset");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "canEncode", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
}
