#ifndef org_semanticweb_owlapi_model_OWLAnnotationAxiomVisitorEx_H
#define org_semanticweb_owlapi_model_OWLAnnotationAxiomVisitorEx_H
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
class OWLAnnotationAxiomVisitorEx : public java::lang::Object {
  public:
    OWLAnnotationAxiomVisitorEx(JavaMarker* dummy);
    OWLAnnotationAxiomVisitorEx(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLAnnotationAssertionAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAnnotationAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLAnnotationAssertionAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLSubAnnotationPropertyOfAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAnnotationAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLSubAnnotationPropertyOfAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLAnnotationPropertyDomainAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAnnotationAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLAnnotationPropertyDomainAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLAnnotationPropertyRangeAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAnnotationAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLAnnotationPropertyRangeAxiom)

};
}
}
}
}
#endif
