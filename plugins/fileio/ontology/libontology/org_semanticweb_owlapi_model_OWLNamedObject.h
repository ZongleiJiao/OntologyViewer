#ifndef org_semanticweb_owlapi_model_OWLNamedObject_H
#define org_semanticweb_owlapi_model_OWLNamedObject_H
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
class OWLNamedObjectVisitor;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class IRI;
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
class OWLNamedObject : public java::lang::Object {
  public:
    OWLNamedObject(JavaMarker* dummy);
    OWLNamedObject(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void accept(org::semanticweb::owlapi::model::OWLNamedObjectVisitor* arg1); // public abstract void org.semanticweb.owlapi.model.OWLNamedObject.accept(org.semanticweb.owlapi.model.OWLNamedObjectVisitor)
    virtual org::semanticweb::owlapi::model::IRI* getIRI(); // public abstract org.semanticweb.owlapi.model.IRI org.semanticweb.owlapi.model.OWLNamedObject.getIRI()

};
}
}
}
}
#endif
