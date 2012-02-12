#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <java_io_FilterOutputStream.h>
#include <java_io_OutputStream.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace java {
namespace io {

FilterOutputStream::FilterOutputStream(JavaMarker* dummy)
  : java::io::OutputStream(dummy)
{
  updateAllVariables(wrapperIntern);
}

FilterOutputStream::FilterOutputStream(jobject obj)
  : java::io::OutputStream(obj)
{
  updateAllVariables(wrapperIntern);
}

FilterOutputStream::FilterOutputStream(java::io::OutputStream* arg1)
  : java::io::OutputStream(wrapperIntern)
{
  jclass    cls = javaEnv->FindClass("java/io/FilterOutputStream");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "<init>", "(Ljava/io/OutputStream;)V");
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

void FilterOutputStream::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/io/FilterOutputStream");
  handleJavaException(wrapperIntern);
}

void FilterOutputStream::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("java/io/FilterOutputStream");
  handleJavaException(wrapperIntern);
}

void FilterOutputStream::write(int arg1)
{
  jclass    cls = javaEnv->FindClass("java/io/FilterOutputStream");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "write", "(I)V");
  handleJavaException(wrapperIntern);
  jint jarg1 = (jint)arg1;
  javaEnv->CallVoidMethod(this->getJavaObject(), mid, jarg1);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

void FilterOutputStream::write(JavaByteArray* arg1)
{
  jclass    cls = javaEnv->FindClass("java/io/FilterOutputStream");
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

void FilterOutputStream::write(JavaByteArray* arg1, int arg2, int arg3)
{
  jclass    cls = javaEnv->FindClass("java/io/FilterOutputStream");
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

void FilterOutputStream::flush()
{
  jclass    cls = javaEnv->FindClass("java/io/FilterOutputStream");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "flush", "()V");
  handleJavaException(wrapperIntern);
  javaEnv->CallVoidMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}

void FilterOutputStream::close()
{
  jclass    cls = javaEnv->FindClass("java/io/FilterOutputStream");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "close", "()V");
  handleJavaException(wrapperIntern);
  javaEnv->CallVoidMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  updateAllNonFinalVariables(wrapperIntern);
}
}
}
