#ifndef org_semanticweb_owlapi_model_NodeID_H
#define org_semanticweb_owlapi_model_NodeID_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace lang {
class Comparable;
}
}

namespace java {
namespace lang {
class String;
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
class NodeID : public java::lang::Object {
  public:
    NodeID(JavaMarker* dummy);
    NodeID(jobject obj);
    NodeID(); // public org.semanticweb.owlapi.model.NodeID()

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual const char* getID(); // public abstract java.lang.String org.semanticweb.owlapi.model.NodeID.getID()
    virtual org::semanticweb::owlapi::model::NodeID* getNodeID(const char* arg1); // public static org.semanticweb.owlapi.model.NodeID org.semanticweb.owlapi.model.NodeID.getNodeID(java.lang.String)
    virtual org::semanticweb::owlapi::model::NodeID* getNodeID(); // public static org.semanticweb.owlapi.model.NodeID org.semanticweb.owlapi.model.NodeID.getNodeID()

};
}
}
}
}
#endif
