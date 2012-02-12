#ifndef org_semanticweb_owlapi_model_OWLOntologyChangeProgressListener_H
#define org_semanticweb_owlapi_model_OWLOntologyChangeProgressListener_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntologyChange;
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
class OWLOntologyChangeProgressListener : public java::lang::Object {
  public:
    OWLOntologyChangeProgressListener(JavaMarker* dummy);
    OWLOntologyChangeProgressListener(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void end(); // public abstract void org.semanticweb.owlapi.model.OWLOntologyChangeProgressListener.end()
    virtual void begin(int arg1); // public abstract void org.semanticweb.owlapi.model.OWLOntologyChangeProgressListener.begin(int)
    virtual void appliedChange(org::semanticweb::owlapi::model::OWLOntologyChange* arg1); // public abstract void org.semanticweb.owlapi.model.OWLOntologyChangeProgressListener.appliedChange(org.semanticweb.owlapi.model.OWLOntologyChange)

};
}
}
}
}
#endif
