#include <string.h>
#include <jni.h>
#include <java_marker.h>
#include <java_array.h>
#include <org_semanticweb_owlapi_model_OWLNaryBooleanClassExpression.h>
#include <java_lang_Object.h>
#include <org_semanticweb_owlapi_model_OWLBooleanClassExpression.h>
#include <java_util_Set.h>
#include <java_util_List.h>
extern JNIEnv     *javaEnv;
extern JavaMarker *wrapperIntern;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {

OWLNaryBooleanClassExpression::OWLNaryBooleanClassExpression(JavaMarker* dummy)
  : java::lang::Object(dummy)
{
  updateAllVariables(wrapperIntern);
}

OWLNaryBooleanClassExpression::OWLNaryBooleanClassExpression(jobject obj)
  : java::lang::Object(obj)
{
  updateAllVariables(wrapperIntern);
}

void OWLNaryBooleanClassExpression::updateAllVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLNaryBooleanClassExpression");
  handleJavaException(wrapperIntern);
}

void OWLNaryBooleanClassExpression::updateAllNonFinalVariables(JavaMarker* dummy)
{
  jclass cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLNaryBooleanClassExpression");
  handleJavaException(wrapperIntern);
}

java::util::Set* OWLNaryBooleanClassExpression::getOperands()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLNaryBooleanClassExpression");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOperands", "()Ljava/util/Set;");
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

java::util::List* OWLNaryBooleanClassExpression::getOperandsAsList()
{
  jclass    cls = javaEnv->FindClass("org/semanticweb/owlapi/model/OWLNaryBooleanClassExpression");
  handleJavaException(wrapperIntern);
  jmethodID mid = javaEnv->GetMethodID(cls, "getOperandsAsList", "()Ljava/util/List;");
  handleJavaException(wrapperIntern);
  jobject jresult=javaEnv->CallObjectMethod(this->getJavaObject(), mid);
  handleJavaException(wrapperIntern);
  java::util::List* result;
  if (jresult!=NULL) {
    result=new java::util::List(jresult);
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
}
