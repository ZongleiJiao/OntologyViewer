#ifndef org_semanticweb_owlapi_model_OWLOntologyChangeBroadcastStrategy_H
#define org_semanticweb_owlapi_model_OWLOntologyChangeBroadcastStrategy_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntologyChangeListener;
}
}
}
}

namespace java {
namespace util {
class List;
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
class OWLOntologyChangeBroadcastStrategy : public java::lang::Object {
  public:
    OWLOntologyChangeBroadcastStrategy(JavaMarker* dummy);
    OWLOntologyChangeBroadcastStrategy(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void broadcastChanges(org::semanticweb::owlapi::model::OWLOntologyChangeListener* arg1, java::util::List* arg2); // public abstract void org.semanticweb.owlapi.model.OWLOntologyChangeBroadcastStrategy.broadcastChanges(org.semanticweb.owlapi.model.OWLOntologyChangeListener,java.util.List) throws java.lang.Exception

};
}
}
}
}
#endif
