#ifndef org_semanticweb_owlapi_model_MissingImportListener_H
#define org_semanticweb_owlapi_model_MissingImportListener_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class MissingImportEvent;
}
}
}
}
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
namespace model {
class MissingImportListener : public java::lang::Object {
  public:
    MissingImportListener(JavaMarker* dummy);
    MissingImportListener(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void importMissing(org::semanticweb::owlapi::model::MissingImportEvent* arg1); // public abstract void org.semanticweb.owlapi.model.MissingImportListener.importMissing(org.semanticweb.owlapi.model.MissingImportEvent)

};
}
}
}
}
#endif
