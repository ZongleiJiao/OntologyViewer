#ifndef org_semanticweb_owlapi_model_OWLPropertyDomainAxiom_H
#define org_semanticweb_owlapi_model_OWLPropertyDomainAxiom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLUnaryPropertyAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLSubClassOfAxiomShortCut;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLClassExpression;
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
class OWLPropertyDomainAxiom : public java::lang::Object {
  public:
    OWLPropertyDomainAxiom(JavaMarker* dummy);
    OWLPropertyDomainAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLClassExpression* getDomain(); // public abstract org.semanticweb.owlapi.model.OWLClassExpression org.semanticweb.owlapi.model.OWLPropertyDomainAxiom.getDomain()

};
}
}
}
}
#endif
