#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_nio_charset_CharsetDecoder.h>
#include <java_lang_Object.h>
#include <java_nio_charset_Charset.h>
#include <java_lang_String.h>
#include <java_nio_charset_CoderResult.h>
#include <java_nio_ByteBuffer.h>
#include <java_nio_CharBuffer.h>
#include <java_nio_charset_CodingErrorAction.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace nio {
namespace charset {

CharsetDecoder::CharsetDecoder(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

CharsetDecoder::CharsetDecoder(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void CharsetDecoder::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/nio/charset/CharsetDecoder");
  handleJavaException(wrapperIntern);
}

void CharsetDecoder::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/nio/charset/CharsetDecoder");
  handleJavaException(wrapperIntern);
}

java::nio::charset::Charset* CharsetDecoder::charset()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetDecoder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "charset", "()Ljava/nio/charset/Charset;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
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

const char* CharsetDecoder::replacement()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetDecoder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "replacement", "()Ljava/lang/String;");
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

java::nio::charset::CoderResult* CharsetDecoder::decode(java::nio::ByteBuffer* arg1, java::nio::CharBuffer* arg2, bool arg3)
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetDecoder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "decode", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;Z)Ljava/nio/charset/CoderResult;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jarg2;
  if (arg2!=NULL) {
    jarg2=arg2->getJavaObject();
  } else {
    jarg2=NULL;
  }
  jboolean jarg3 = (jboolean)arg3;
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3);
  handleJavaException(wrapperIntern);
  java::nio::charset::CoderResult* result;
  if (jresult!=NULL) {
    result=new java::nio::charset::CoderResult(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::CharBuffer* CharsetDecoder::decode(java::nio::ByteBuffer* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetDecoder");
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

java::nio::charset::CoderResult* CharsetDecoder::flush(java::nio::CharBuffer* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetDecoder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "flush", "(Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  java::nio::charset::CoderResult* result;
  if (jresult!=NULL) {
    result=new java::nio::charset::CoderResult(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::charset::CharsetDecoder* CharsetDecoder::reset()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetDecoder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "reset", "()Ljava/nio/charset/CharsetDecoder;");
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

java::nio::charset::CharsetDecoder* CharsetDecoder::onMalformedInput(java::nio::charset::CodingErrorAction* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetDecoder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "onMalformedInput", "(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetDecoder;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

java::nio::charset::CharsetDecoder* CharsetDecoder::onUnmappableCharacter(java::nio::charset::CodingErrorAction* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetDecoder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "onUnmappableCharacter", "(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetDecoder;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

float CharsetDecoder::maxCharsPerByte()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetDecoder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "maxCharsPerByte", "()F");
  handleJavaException(wrapperIntern);
  jdouble jresult=javaEnv->CallFloatMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  float result = (float)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

float CharsetDecoder::averageCharsPerByte()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetDecoder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "averageCharsPerByte", "()F");
  handleJavaException(wrapperIntern);
  jdouble jresult=javaEnv->CallFloatMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  float result = (float)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::charset::CodingErrorAction* CharsetDecoder::malformedInputAction()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetDecoder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "malformedInputAction", "()Ljava/nio/charset/CodingErrorAction;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::nio::charset::CodingErrorAction* result;
  if (jresult!=NULL) {
    result=new java::nio::charset::CodingErrorAction(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::charset::CodingErrorAction* CharsetDecoder::unmappableCharacterAction()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetDecoder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "unmappableCharacterAction", "()Ljava/nio/charset/CodingErrorAction;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::nio::charset::CodingErrorAction* result;
  if (jresult!=NULL) {
    result=new java::nio::charset::CodingErrorAction(jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::charset::CharsetDecoder* CharsetDecoder::replaceWith(const char* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetDecoder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "replaceWith", "(Ljava/lang/String;)Ljava/nio/charset/CharsetDecoder;");
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

bool CharsetDecoder::isAutoDetecting()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetDecoder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isAutoDetecting", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool CharsetDecoder::isCharsetDetected()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetDecoder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isCharsetDetected", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::charset::Charset* CharsetDecoder::detectedCharset()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetDecoder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "detectedCharset", "()Ljava/nio/charset/Charset;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
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
}
}
}
