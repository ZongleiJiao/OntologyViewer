#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_nio_charset_CharsetEncoder.h>
#include <java_lang_Object.h>
#include <java_nio_charset_Charset.h>
#include <java_nio_charset_CoderResult.h>
#include <java_nio_CharBuffer.h>
#include <java_nio_ByteBuffer.h>
#include <java_lang_CharSequence.h>
#include <java_nio_charset_CodingErrorAction.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace nio {
namespace charset {

CharsetEncoder::CharsetEncoder(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

CharsetEncoder::CharsetEncoder(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void CharsetEncoder::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/nio/charset/CharsetEncoder");
  handleJavaException(wrapperIntern);
}

void CharsetEncoder::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/nio/charset/CharsetEncoder");
  handleJavaException(wrapperIntern);
}

java::nio::charset::Charset* CharsetEncoder::charset()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetEncoder");
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

JavaByteArray* CharsetEncoder::replacement()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetEncoder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "replacement", "()[B");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  JavaByteArray* result;
  if (jresult!=NULL) {
    result=new JavaByteArray((jarray)jresult);
    javaEnv->DeleteLocalRef(jresult);
  } else {
    result=NULL;
  }
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

java::nio::charset::CoderResult* CharsetEncoder::encode(java::nio::CharBuffer* arg1, java::nio::ByteBuffer* arg2, bool arg3)
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetEncoder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "encode", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;Z)Ljava/nio/charset/CoderResult;");
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

java::nio::ByteBuffer* CharsetEncoder::encode(java::nio::CharBuffer* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetEncoder");
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

java::nio::charset::CoderResult* CharsetEncoder::flush(java::nio::ByteBuffer* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetEncoder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "flush", "(Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;");
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

java::nio::charset::CharsetEncoder* CharsetEncoder::reset()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetEncoder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "reset", "()Ljava/nio/charset/CharsetEncoder;");
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

bool CharsetEncoder::canEncode(char arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetEncoder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "canEncode", "(C)Z");
  handleJavaException(wrapperIntern);
  jchar jarg1 = (jchar)arg1;
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool CharsetEncoder::canEncode(java::lang::CharSequence* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetEncoder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "canEncode", "(Ljava/lang/CharSequence;)Z");
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

java::nio::charset::CharsetEncoder* CharsetEncoder::onMalformedInput(java::nio::charset::CodingErrorAction* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetEncoder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "onMalformedInput", "(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetEncoder;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

java::nio::charset::CharsetEncoder* CharsetEncoder::onUnmappableCharacter(java::nio::charset::CodingErrorAction* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetEncoder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "onUnmappableCharacter", "(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetEncoder;");
  handleJavaException(wrapperIntern);
  jobject jarg1;
  if (arg1!=NULL) {
    jarg1=arg1->getJavaObject();
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

java::nio::charset::CodingErrorAction* CharsetEncoder::malformedInputAction()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetEncoder");
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

java::nio::charset::CodingErrorAction* CharsetEncoder::unmappableCharacterAction()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetEncoder");
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

java::nio::charset::CharsetEncoder* CharsetEncoder::replaceWith(JavaByteArray* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetEncoder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "replaceWith", "([B)Ljava/nio/charset/CharsetEncoder;");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid, jarg1);
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

bool CharsetEncoder::isLegalReplacement(JavaByteArray* arg1)
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetEncoder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "isLegalReplacement", "([B)Z");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

float CharsetEncoder::averageBytesPerChar()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetEncoder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "averageBytesPerChar", "()F");
  handleJavaException(wrapperIntern);
  jdouble jresult=javaEnv->CallFloatMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  float result = (float)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

float CharsetEncoder::maxBytesPerChar()
{
  jclass    cls = javaEnv->FindClass("java/nio/charset/CharsetEncoder");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "maxBytesPerChar", "()F");
  handleJavaException(wrapperIntern);
  jdouble jresult=javaEnv->CallFloatMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  float result = (float)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
}
