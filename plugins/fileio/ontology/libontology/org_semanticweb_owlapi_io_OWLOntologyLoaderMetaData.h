#ifndef org_semanticweb_owlapi_io_OWLOntologyLoaderMetaData_H
#define org_semanticweb_owlapi_io_OWLOntologyLoaderMetaData_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>
class JavaByteArray;
class JavaBooleanArray;
class JavaCharArray;
class JavaIntArray;
class JavaShortArray;
class JavaLongArray;
class JavaDoubleArray;
class JavaFloatArray;
class JavaObjectArray;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace io {
class OWLOntologyLoaderMetaData : public java::lang::Object {
  public:
    OWLOntologyLoaderMetaData(JavaMarker* dummy);
    OWLOntologyLoaderMetaData(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);

};
}
}
}
}
#endif
