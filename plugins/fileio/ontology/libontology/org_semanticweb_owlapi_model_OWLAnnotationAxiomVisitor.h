#ifndef org_semanticweb_owlapi_model_OWLAnnotationAxiomVisitor_H
#define org_semanticweb_owlapi_model_OWLAnnotationAxiomVisitor_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAnnotationAssertionAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLSubAnnotationPropertyOfAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAnnotationPropertyDomainAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAnnotationPropertyRangeAxiom;
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
class OWLAnnotationAxiomVisitor : public java::lang::Object {
  public:
    OWLAnnotationAxiomVisitor(JavaMarker* dummy);
    OWLAnnotationAxiomVisitor(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void visit(org::semanticweb::owlapi::model::OWLAnnotationAssertionAxiom* arg1); // public abstract void org.semanticweb.owlapi.model.OWLAnnotationAxiomVisitor.visit(org.semanticweb.owlapi.model.OWLAnnotationAssertionAxiom)
    virtual void visit(org::semanticweb::owlapi::model::OWLSubAnnotationPropertyOfAxiom* arg1); // public abstract void org.semanticweb.owlapi.model.OWLAnnotationAxiomVisitor.visit(org.semanticweb.owlapi.model.OWLSubAnnotationPropertyOfAxiom)
    virtual void visit(org::semanticweb::owlapi::model::OWLAnnotationPropertyDomainAxiom* arg1); // public abstract void org.semanticweb.owlapi.model.OWLAnnotationAxiomVisitor.visit(org.semanticweb.owlapi.model.OWLAnnotationPropertyDomainAxiom)
    virtual void visit(org::semanticweb::owlapi::model::OWLAnnotationPropertyRangeAxiom* arg1); // public abstract void org.semanticweb.owlapi.model.OWLAnnotationAxiomVisitor.visit(org.semanticweb.owlapi.model.OWLAnnotationPropertyRangeAxiom)

};
}
}
}
}
#endif
