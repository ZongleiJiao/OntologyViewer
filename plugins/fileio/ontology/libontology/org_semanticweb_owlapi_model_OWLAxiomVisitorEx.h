#ifndef org_semanticweb_owlapi_model_OWLAxiomVisitorEx_H
#define org_semanticweb_owlapi_model_OWLAxiomVisitorEx_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAnnotationAxiomVisitorEx;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLSubClassOfAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLNegativeObjectPropertyAssertionAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAsymmetricObjectPropertyAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLReflexiveObjectPropertyAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDisjointClassesAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataPropertyDomainAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObjectPropertyDomainAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLEquivalentObjectPropertiesAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLNegativeDataPropertyAssertionAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDifferentIndividualsAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDisjointDataPropertiesAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDisjointObjectPropertiesAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObjectPropertyRangeAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObjectPropertyAssertionAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLFunctionalObjectPropertyAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLSubObjectPropertyOfAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDisjointUnionAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDeclarationAxiom;
}
}
}
}

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
class OWLSymmetricObjectPropertyAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataPropertyRangeAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLFunctionalDataPropertyAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLEquivalentDataPropertiesAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLClassAssertionAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLEquivalentClassesAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataPropertyAssertionAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLTransitiveObjectPropertyAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLIrreflexiveObjectPropertyAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLSubDataPropertyOfAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLInverseFunctionalObjectPropertyAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLSameIndividualAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLSubPropertyChainOfAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLInverseObjectPropertiesAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLHasKeyAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDatatypeDefinitionAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLRule;
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
class OWLAxiomVisitorEx : public java::lang::Object {
  public:
    OWLAxiomVisitorEx(JavaMarker* dummy);
    OWLAxiomVisitorEx(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLSubClassOfAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLSubClassOfAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLNegativeObjectPropertyAssertionAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLNegativeObjectPropertyAssertionAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLAsymmetricObjectPropertyAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLAsymmetricObjectPropertyAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLReflexiveObjectPropertyAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLReflexiveObjectPropertyAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLDisjointClassesAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLDisjointClassesAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLDataPropertyDomainAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLDataPropertyDomainAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLObjectPropertyDomainAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLObjectPropertyDomainAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLEquivalentObjectPropertiesAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLEquivalentObjectPropertiesAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLNegativeDataPropertyAssertionAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLNegativeDataPropertyAssertionAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLDifferentIndividualsAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLDifferentIndividualsAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLDisjointDataPropertiesAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLDisjointDataPropertiesAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLDisjointObjectPropertiesAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLDisjointObjectPropertiesAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLObjectPropertyRangeAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLObjectPropertyRangeAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLObjectPropertyAssertionAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLObjectPropertyAssertionAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLFunctionalObjectPropertyAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLFunctionalObjectPropertyAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLSubObjectPropertyOfAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLSubObjectPropertyOfAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLDisjointUnionAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLDisjointUnionAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLDeclarationAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLDeclarationAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLAnnotationAssertionAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLAnnotationAssertionAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLSymmetricObjectPropertyAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLSymmetricObjectPropertyAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLDataPropertyRangeAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLDataPropertyRangeAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLFunctionalDataPropertyAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLFunctionalDataPropertyAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLEquivalentDataPropertiesAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLEquivalentDataPropertiesAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLClassAssertionAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLClassAssertionAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLEquivalentClassesAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLEquivalentClassesAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLDataPropertyAssertionAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLDataPropertyAssertionAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLTransitiveObjectPropertyAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLTransitiveObjectPropertyAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLIrreflexiveObjectPropertyAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLIrreflexiveObjectPropertyAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLSubDataPropertyOfAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLSubDataPropertyOfAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLInverseFunctionalObjectPropertyAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLInverseFunctionalObjectPropertyAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLSameIndividualAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLSameIndividualAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLSubPropertyChainOfAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLSubPropertyChainOfAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLInverseObjectPropertiesAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLInverseObjectPropertiesAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLHasKeyAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLHasKeyAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLDatatypeDefinitionAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.OWLDatatypeDefinitionAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::SWRLRule* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiomVisitorEx.visit(org.semanticweb.owlapi.model.SWRLRule)

};
}
}
}
}
#endif
