#ifndef org_semanticweb_owlapi_model_OWLClassAssertionAxiom_H
#define org_semanticweb_owlapi_model_OWLClassAssertionAxiom_H
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
class OWLClassExpression;
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
class OWLClassAssertionAxiom : public java::lang::Object {
  public:
    OWLClassAssertionAxiom(JavaMarker* dummy);
    OWLClassAssertionAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLClassAssertionAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLClassAssertionAxiom org.semanticweb.owlapi.model.OWLClassAssertionAxiom.getAxiomWithoutAnnotations()
    virtual org::semanticweb::owlapi::model::OWLClassExpression* getClassExpression(); // public abstract org.semanticweb.owlapi.model.OWLClassExpression org.semanticweb.owlapi.model.OWLClassAssertionAxiom.getClassExpression()
    virtual org::semanticweb::owlapi::model::OWLIndividual* getIndividual(); // public abstract org.semanticweb.owlapi.model.OWLIndividual org.semanticweb.owlapi.model.OWLClassAssertionAxiom.getIndividual()

};
}
}
}
}
#endif
