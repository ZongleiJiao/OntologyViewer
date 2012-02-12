#ifndef org_semanticweb_owlapi_model_SWRLObject_H
#define org_semanticweb_owlapi_model_SWRLObject_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObject;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLObjectVisitor;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLObjectVisitorEx;
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
class SWRLObject : public java::lang::Object {
  public:
    SWRLObject(JavaMarker* dummy);
    SWRLObject(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void accept(org::semanticweb::owlapi::model::SWRLObjectVisitor* arg1); // public abstract void org.semanticweb.owlapi.model.SWRLObject.accept(org.semanticweb.owlapi.model.SWRLObjectVisitor)
    virtual java::lang::Object* accept(org::semanticweb::owlapi::model::SWRLObjectVisitorEx* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.SWRLObject.accept(org.semanticweb.owlapi.model.SWRLObjectVisitorEx)

};
}
}
}
}
#endif
