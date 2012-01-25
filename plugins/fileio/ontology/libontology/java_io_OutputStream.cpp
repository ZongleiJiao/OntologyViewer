#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_io_OutputStream.h>
#include <java_lang_Object.h>
#include <java_io_Closeable.h>
#include <java_io_Flushable.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace io {

OutputStream::OutputStream(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OutputStream::OutputStream(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

OutputStream::OutputStream()
  : java::lang::Object(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("java/io/OutputStream");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "()V");
  handleJavaException(wrapperIntern);
  jobject o = javaEnv->NewObject(cls, mid);
  handleJavaException(wrapperIntern);
  setJavaObject(o);
  javaEnv->DeleteLocalRef(o);
  updateAllVariables(wrapperIntern);
}

void OutputStream::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/io/OutputStream");
  handleJavaException(wrapperIntern);
}

void OutputStream::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/io/OutputStream");
  handleJavaException(wrapperIntern);
}

void OutputStream::write(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/io/OutputStream");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "write", "(I)V");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

void OutputStream::write(JavaByteArray* arg1)
{
  jclass    cls = javaEnv->FindClass("java/io/OutputStream");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "write", "([B)V");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

void OutputStream::write(JavaByteArray* arg1, int arg2, int arg3)
{
  jclass    cls = javaEnv->FindClass("java/io/OutputStream");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "write", "([BII)V");
  handleJavaException(wrapperIntern);
  jarray jarg1;
  if (arg1!=NULL) {
    jarg1=(jarray)(arg1->getJavaObject());
  } else {
    jarg1=NULL;
  }
  jint jarg2 = (jint)arg2;
  jint jarg3 = (jint)arg3;
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1, jarg2, jarg3);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

void OutputStream::flush()
{
  jclass    cls = javaEnv->FindClass("java/io/OutputStream");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "flush", "()V");
  handleJavaException(wrapperIntern);
  javaEnv->CallVoidMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

void OutputStream::close()
{
  jclass    cls = javaEnv->FindClass("java/io/OutputStream");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "close", "()V");
  handleJavaException(wrapperIntern);
  javaEnv->CallVoidMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
