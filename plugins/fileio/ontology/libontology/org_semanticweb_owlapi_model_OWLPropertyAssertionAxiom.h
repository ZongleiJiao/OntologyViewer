#ifndef org_semanticweb_owlapi_model_OWLPropertyAssertionAxiom_H
#define org_semanticweb_owlapi_model_OWLPropertyAssertionAxiom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLIndividualAxiom;
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
class OWLPropertyExpression;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLPropertyAssertionObject;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLIndividual;
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
class OWLPropertyAssertionAxiom : public java::lang::Object {
  public:
    OWLPropertyAssertionAxiom(JavaMarker* dummy);
    OWLPropertyAssertionAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLPropertyExpression* getProperty(); // public abstract org.semanticweb.owlapi.model.OWLPropertyExpression org.semanticweb.owlapi.model.OWLPropertyAssertionAxiom.getProperty()
    virtual org::semanticweb::owlapi::model::OWLPropertyAssertionObject* getObject(); // public abstract org.semanticweb.owlapi.model.OWLPropertyAssertionObject org.semanticweb.owlapi.model.OWLPropertyAssertionAxiom.getObject()
    virtual org::semanticweb::owlapi::model::OWLIndividual* getSubject(); // public abstract org.semanticweb.owlapi.model.OWLIndividual org.semanticweb.owlapi.model.OWLPropertyAssertionAxiom.getSubject()

};
}
}
}
}
#endif
