#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_io_InputStream.h>
#include <java_lang_Object.h>
#include <java_io_Closeable.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace io {

InputStream::InputStream(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

InputStream::InputStream(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

InputStream::InputStream()
  : java::lang::Object(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("java/io/InputStream");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "()V");
  handleJavaException(wrapperIntern);
  jobject o = javaEnv->NewObject(cls, mid);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  updateAllVariables(wrapperIntern);
}

void InputStream::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/io/InputStream");
  handleJavaException(wrapperIntern);
}

void InputStream::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/io/InputStream");
  handleJavaException(wrapperIntern);
}

void InputStream::close()
{
  jclass    cls = javaEnv->FindClass("java/io/InputStream");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "close", "()V");
  handleJavaException(wrapperIntern);
  javaEnv->CallVoidMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

void InputStream::mark(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/io/InputStream");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "mark", "(I)V");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

void InputStream::reset()
{
  jclass    cls = javaEnv->FindClass("java/io/InputStream");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "reset", "()V");
  handleJavaException(wrapperIntern);
  javaEnv->CallVoidMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

int InputStream::read()
{
  jclass    cls = javaEnv->FindClass("java/io/InputStream");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "read", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int InputStream::read(JavaByteArray* arg1)
{
  jclass    cls = javaEnv->FindClass("java/io/InputStream");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "read", "([B)I");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int InputStream::read(JavaByteArray* arg1, int arg2, int arg3)
{
  jclass    cls = javaEnv->FindClass("java/io/InputStream");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "read", "([BII)I");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jint jarg2 = (jint)arg2;
  jint jarg3 = (jint)arg3;
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

long InputStream::skip(long arg1)
{
  jclass    cls = javaEnv->FindClass("java/io/InputStream");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "skip", "(J)J");
  handleJavaException(wrapperIntern);
  jlong jarg1 = (jlong)arg1;
  jlong jresult=javaEnv->CallLongMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  long result = (long)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

int InputStream::available()
{
  jclass    cls = javaEnv->FindClass("java/io/InputStream");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "available", "()I");
  handleJavaException(wrapperIntern);
  jint jresult=javaEnv->CallIntMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  int result = (int)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}

bool InputStream::markSupported()
{
  jclass    cls = javaEnv->FindClass("java/io/InputStream");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "markSupported", "()Z");
  handleJavaException(wrapperIntern);
  jboolean jresult=javaEnv->CallBooleanMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  bool result = (bool)jresult;
  return result;
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
