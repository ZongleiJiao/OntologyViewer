#ifndef org_semanticweb_owlapi_model_OWLAnonymousIndividual_H
#define org_semanticweb_owlapi_model_OWLAnonymousIndividual_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLIndividual;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAnnotationValue;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAnnotationSubject;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class NodeID;
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
class OWLAnonymousIndividual : public java::lang::Object {
  public:
    OWLAnonymousIndividual(JavaMarker* dummy);
    OWLAnonymousIndividual(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::NodeID* getID(); // public abstract org.semanticweb.owlapi.model.NodeID org.semanticweb.owlapi.model.OWLAnonymousIndividual.getID()

};
}
}
}
}
#endif
