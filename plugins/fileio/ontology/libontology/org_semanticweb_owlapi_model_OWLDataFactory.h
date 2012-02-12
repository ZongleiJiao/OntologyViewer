#ifndef org_semanticweb_owlapi_model_OWLDataFactory_H
#define org_semanticweb_owlapi_model_OWLDataFactory_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLDataFactory;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLClass;
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

namespace java {
namespace lang {
class String;
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class PrefixManager;
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

namespace java {
namespace util {
class Set;
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
class OWLDataProperty;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObjectProperty;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLEntity;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class EntityType;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDatatype;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObjectInverseOf;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObjectPropertyExpression;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLNamedIndividual;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAnonymousIndividual;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAnnotationProperty;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLLiteral;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace vocab {
class OWL2Datatype;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataOneOf;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataComplementOf;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataRange;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDatatypeRestriction;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace vocab {
class OWLFacet;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLFacetRestriction;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataUnionOf;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataIntersectionOf;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObjectIntersectionOf;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataSomeValuesFrom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataPropertyExpression;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataAllValuesFrom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataExactCardinality;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataMaxCardinality;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataMinCardinality;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataHasValue;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObjectComplementOf;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObjectOneOf;
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

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObjectAllValuesFrom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObjectSomeValuesFrom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObjectExactCardinality;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObjectMinCardinality;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObjectMaxCardinality;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObjectHasSelf;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObjectHasValue;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObjectUnionOf;
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
class OWLSubClassOfAxiom;
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
class OWLDisjointUnionAxiom;
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
class OWLSubPropertyChainOfAxiom;
}
}
}
}

namespace java {
namespace util {
class List;
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
class OWLDisjointObjectPropertiesAxiom;
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
class OWLObjectPropertyDomainAxiom;
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
class OWLFunctionalObjectPropertyAxiom;
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
class OWLReflexiveObjectPropertyAxiom;
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
class OWLSymmetricObjectPropertyAxiom;
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
class OWLTransitiveObjectPropertyAxiom;
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
class OWLEquivalentDataPropertiesAxiom;
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
class OWLDataPropertyDomainAxiom;
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
class OWLHasKeyAxiom;
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
class OWLDatatypeDefinitionAxiom;
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
class OWLDifferentIndividualsAxiom;
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
class OWLObjectPropertyAssertionAxiom;
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
class OWLDataPropertyAssertionAxiom;
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
class OWLAnnotation;
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
class OWLAnnotationAssertionAxiom;
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
class OWLImportsDeclaration;
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

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLSubAnnotationPropertyOfAxiom;
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
class OWLDataFactory : public java::lang::Object {
  public:
    OWLDataFactory(JavaMarker* dummy);
    OWLDataFactory(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLClass* getOWLClass(org::semanticweb::owlapi::model::IRI* arg1); // public abstract org.semanticweb.owlapi.model.OWLClass org.semanticweb.owlapi.model.OWLDataFactory.getOWLClass(org.semanticweb.owlapi.model.IRI)
    virtual org::semanticweb::owlapi::model::OWLClass* getOWLClass(const char* arg1, org::semanticweb::owlapi::model::PrefixManager* arg2); // public abstract org.semanticweb.owlapi.model.OWLClass org.semanticweb.owlapi.model.OWLDataFactory.getOWLClass(java.lang.String,org.semanticweb.owlapi.model.PrefixManager)
    virtual org::semanticweb::owlapi::model::OWLEquivalentClassesAxiom* getOWLEquivalentClassesAxiom(java::util::Set* arg1); // public abstract org.semanticweb.owlapi.model.OWLEquivalentClassesAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLEquivalentClassesAxiom(java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLEquivalentClassesAxiom* getOWLEquivalentClassesAxiom(java::util::Set* arg1, java::util::Set* arg2); // public abstract org.semanticweb.owlapi.model.OWLEquivalentClassesAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLEquivalentClassesAxiom(java.util.Set,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLEquivalentClassesAxiom* getOWLEquivalentClassesAxiom(JavaObjectArray* arg1); // public abstract org.semanticweb.owlapi.model.OWLEquivalentClassesAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLEquivalentClassesAxiom(org.semanticweb.owlapi.model.OWLClassExpression[])
    virtual org::semanticweb::owlapi::model::OWLEquivalentClassesAxiom* getOWLEquivalentClassesAxiom(org::semanticweb::owlapi::model::OWLClassExpression* arg1, org::semanticweb::owlapi::model::OWLClassExpression* arg2); // public abstract org.semanticweb.owlapi.model.OWLEquivalentClassesAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLEquivalentClassesAxiom(org.semanticweb.owlapi.model.OWLClassExpression,org.semanticweb.owlapi.model.OWLClassExpression)
    virtual org::semanticweb::owlapi::model::OWLEquivalentClassesAxiom* getOWLEquivalentClassesAxiom(org::semanticweb::owlapi::model::OWLClassExpression* arg1, org::semanticweb::owlapi::model::OWLClassExpression* arg2, java::util::Set* arg3); // public abstract org.semanticweb.owlapi.model.OWLEquivalentClassesAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLEquivalentClassesAxiom(org.semanticweb.owlapi.model.OWLClassExpression,org.semanticweb.owlapi.model.OWLClassExpression,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLDataProperty* getOWLDataProperty(org::semanticweb::owlapi::model::IRI* arg1); // public abstract org.semanticweb.owlapi.model.OWLDataProperty org.semanticweb.owlapi.model.OWLDataFactory.getOWLDataProperty(org.semanticweb.owlapi.model.IRI)
    virtual org::semanticweb::owlapi::model::OWLDataProperty* getOWLDataProperty(const char* arg1, org::semanticweb::owlapi::model::PrefixManager* arg2); // public abstract org.semanticweb.owlapi.model.OWLDataProperty org.semanticweb.owlapi.model.OWLDataFactory.getOWLDataProperty(java.lang.String,org.semanticweb.owlapi.model.PrefixManager)
    virtual org::semanticweb::owlapi::model::OWLObjectProperty* getOWLObjectProperty(org::semanticweb::owlapi::model::IRI* arg1); // public abstract org.semanticweb.owlapi.model.OWLObjectProperty org.semanticweb.owlapi.model.OWLDataFactory.getOWLObjectProperty(org.semanticweb.owlapi.model.IRI)
    virtual org::semanticweb::owlapi::model::OWLObjectProperty* getOWLObjectProperty(const char* arg1, org::semanticweb::owlapi::model::PrefixManager* arg2); // public abstract org.semanticweb.owlapi.model.OWLObjectProperty org.semanticweb.owlapi.model.OWLDataFactory.getOWLObjectProperty(java.lang.String,org.semanticweb.owlapi.model.PrefixManager)
    virtual org::semanticweb::owlapi::model::OWLEntity* getOWLEntity(org::semanticweb::owlapi::model::EntityType* arg1, org::semanticweb::owlapi::model::IRI* arg2); // public abstract org.semanticweb.owlapi.model.OWLEntity org.semanticweb.owlapi.model.OWLDataFactory.getOWLEntity(org.semanticweb.owlapi.model.EntityType,org.semanticweb.owlapi.model.IRI)
    virtual org::semanticweb::owlapi::model::OWLClass* getOWLThing(); // public abstract org.semanticweb.owlapi.model.OWLClass org.semanticweb.owlapi.model.OWLDataFactory.getOWLThing()
    virtual org::semanticweb::owlapi::model::OWLClass* getOWLNothing(); // public abstract org.semanticweb.owlapi.model.OWLClass org.semanticweb.owlapi.model.OWLDataFactory.getOWLNothing()
    virtual org::semanticweb::owlapi::model::OWLObjectProperty* getOWLTopObjectProperty(); // public abstract org.semanticweb.owlapi.model.OWLObjectProperty org.semanticweb.owlapi.model.OWLDataFactory.getOWLTopObjectProperty()
    virtual org::semanticweb::owlapi::model::OWLDataProperty* getOWLTopDataProperty(); // public abstract org.semanticweb.owlapi.model.OWLDataProperty org.semanticweb.owlapi.model.OWLDataFactory.getOWLTopDataProperty()
    virtual org::semanticweb::owlapi::model::OWLObjectProperty* getOWLBottomObjectProperty(); // public abstract org.semanticweb.owlapi.model.OWLObjectProperty org.semanticweb.owlapi.model.OWLDataFactory.getOWLBottomObjectProperty()
    virtual org::semanticweb::owlapi::model::OWLDataProperty* getOWLBottomDataProperty(); // public abstract org.semanticweb.owlapi.model.OWLDataProperty org.semanticweb.owlapi.model.OWLDataFactory.getOWLBottomDataProperty()
    virtual org::semanticweb::owlapi::model::OWLDatatype* getTopDatatype(); // public abstract org.semanticweb.owlapi.model.OWLDatatype org.semanticweb.owlapi.model.OWLDataFactory.getTopDatatype()
    virtual org::semanticweb::owlapi::model::OWLObjectInverseOf* getOWLObjectInverseOf(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1); // public abstract org.semanticweb.owlapi.model.OWLObjectInverseOf org.semanticweb.owlapi.model.OWLDataFactory.getOWLObjectInverseOf(org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual org::semanticweb::owlapi::model::OWLNamedIndividual* getOWLNamedIndividual(org::semanticweb::owlapi::model::IRI* arg1); // public abstract org.semanticweb.owlapi.model.OWLNamedIndividual org.semanticweb.owlapi.model.OWLDataFactory.getOWLNamedIndividual(org.semanticweb.owlapi.model.IRI)
    virtual org::semanticweb::owlapi::model::OWLNamedIndividual* getOWLNamedIndividual(const char* arg1, org::semanticweb::owlapi::model::PrefixManager* arg2); // public abstract org.semanticweb.owlapi.model.OWLNamedIndividual org.semanticweb.owlapi.model.OWLDataFactory.getOWLNamedIndividual(java.lang.String,org.semanticweb.owlapi.model.PrefixManager)
    virtual org::semanticweb::owlapi::model::OWLAnonymousIndividual* getOWLAnonymousIndividual(const char* arg1); // public abstract org.semanticweb.owlapi.model.OWLAnonymousIndividual org.semanticweb.owlapi.model.OWLDataFactory.getOWLAnonymousIndividual(java.lang.String)
    virtual org::semanticweb::owlapi::model::OWLAnonymousIndividual* getOWLAnonymousIndividual(); // public abstract org.semanticweb.owlapi.model.OWLAnonymousIndividual org.semanticweb.owlapi.model.OWLDataFactory.getOWLAnonymousIndividual()
    virtual org::semanticweb::owlapi::model::OWLAnnotationProperty* getOWLAnnotationProperty(org::semanticweb::owlapi::model::IRI* arg1); // public abstract org.semanticweb.owlapi.model.OWLAnnotationProperty org.semanticweb.owlapi.model.OWLDataFactory.getOWLAnnotationProperty(org.semanticweb.owlapi.model.IRI)
    virtual org::semanticweb::owlapi::model::OWLAnnotationProperty* getOWLAnnotationProperty(const char* arg1, org::semanticweb::owlapi::model::PrefixManager* arg2); // public abstract org.semanticweb.owlapi.model.OWLAnnotationProperty org.semanticweb.owlapi.model.OWLDataFactory.getOWLAnnotationProperty(java.lang.String,org.semanticweb.owlapi.model.PrefixManager)
    virtual org::semanticweb::owlapi::model::OWLAnnotationProperty* getRDFSLabel(); // public abstract org.semanticweb.owlapi.model.OWLAnnotationProperty org.semanticweb.owlapi.model.OWLDataFactory.getRDFSLabel()
    virtual org::semanticweb::owlapi::model::OWLAnnotationProperty* getRDFSComment(); // public abstract org.semanticweb.owlapi.model.OWLAnnotationProperty org.semanticweb.owlapi.model.OWLDataFactory.getRDFSComment()
    virtual org::semanticweb::owlapi::model::OWLAnnotationProperty* getRDFSSeeAlso(); // public abstract org.semanticweb.owlapi.model.OWLAnnotationProperty org.semanticweb.owlapi.model.OWLDataFactory.getRDFSSeeAlso()
    virtual org::semanticweb::owlapi::model::OWLAnnotationProperty* getRDFSIsDefinedBy(); // public abstract org.semanticweb.owlapi.model.OWLAnnotationProperty org.semanticweb.owlapi.model.OWLDataFactory.getRDFSIsDefinedBy()
    virtual org::semanticweb::owlapi::model::OWLAnnotationProperty* getOWLVersionInfo(); // public abstract org.semanticweb.owlapi.model.OWLAnnotationProperty org.semanticweb.owlapi.model.OWLDataFactory.getOWLVersionInfo()
    virtual org::semanticweb::owlapi::model::OWLAnnotationProperty* getOWLBackwardCompatibleWith(); // public abstract org.semanticweb.owlapi.model.OWLAnnotationProperty org.semanticweb.owlapi.model.OWLDataFactory.getOWLBackwardCompatibleWith()
    virtual org::semanticweb::owlapi::model::OWLAnnotationProperty* getOWLIncompatibleWith(); // public abstract org.semanticweb.owlapi.model.OWLAnnotationProperty org.semanticweb.owlapi.model.OWLDataFactory.getOWLIncompatibleWith()
    virtual org::semanticweb::owlapi::model::OWLAnnotationProperty* getOWLDeprecated(); // public abstract org.semanticweb.owlapi.model.OWLAnnotationProperty org.semanticweb.owlapi.model.OWLDataFactory.getOWLDeprecated()
    virtual org::semanticweb::owlapi::model::OWLDatatype* getRDFPlainLiteral(); // public abstract org.semanticweb.owlapi.model.OWLDatatype org.semanticweb.owlapi.model.OWLDataFactory.getRDFPlainLiteral()
    virtual org::semanticweb::owlapi::model::OWLDatatype* getOWLDatatype(org::semanticweb::owlapi::model::IRI* arg1); // public abstract org.semanticweb.owlapi.model.OWLDatatype org.semanticweb.owlapi.model.OWLDataFactory.getOWLDatatype(org.semanticweb.owlapi.model.IRI)
    virtual org::semanticweb::owlapi::model::OWLDatatype* getOWLDatatype(const char* arg1, org::semanticweb::owlapi::model::PrefixManager* arg2); // public abstract org.semanticweb.owlapi.model.OWLDatatype org.semanticweb.owlapi.model.OWLDataFactory.getOWLDatatype(java.lang.String,org.semanticweb.owlapi.model.PrefixManager)
    virtual org::semanticweb::owlapi::model::OWLDatatype* getIntegerOWLDatatype(); // public abstract org.semanticweb.owlapi.model.OWLDatatype org.semanticweb.owlapi.model.OWLDataFactory.getIntegerOWLDatatype()
    virtual org::semanticweb::owlapi::model::OWLDatatype* getFloatOWLDatatype(); // public abstract org.semanticweb.owlapi.model.OWLDatatype org.semanticweb.owlapi.model.OWLDataFactory.getFloatOWLDatatype()
    virtual org::semanticweb::owlapi::model::OWLDatatype* getDoubleOWLDatatype(); // public abstract org.semanticweb.owlapi.model.OWLDatatype org.semanticweb.owlapi.model.OWLDataFactory.getDoubleOWLDatatype()
    virtual org::semanticweb::owlapi::model::OWLDatatype* getBooleanOWLDatatype(); // public abstract org.semanticweb.owlapi.model.OWLDatatype org.semanticweb.owlapi.model.OWLDataFactory.getBooleanOWLDatatype()
    virtual org::semanticweb::owlapi::model::OWLLiteral* getOWLLiteral(const char* arg1, org::semanticweb::owlapi::model::OWLDatatype* arg2); // public abstract org.semanticweb.owlapi.model.OWLLiteral org.semanticweb.owlapi.model.OWLDataFactory.getOWLLiteral(java.lang.String,org.semanticweb.owlapi.model.OWLDatatype)
    virtual org::semanticweb::owlapi::model::OWLLiteral* getOWLLiteral(const char* arg1, org::semanticweb::owlapi::vocab::OWL2Datatype* arg2); // public abstract org.semanticweb.owlapi.model.OWLLiteral org.semanticweb.owlapi.model.OWLDataFactory.getOWLLiteral(java.lang.String,org.semanticweb.owlapi.vocab.OWL2Datatype)
    virtual org::semanticweb::owlapi::model::OWLLiteral* getOWLLiteral(int arg1); // public abstract org.semanticweb.owlapi.model.OWLLiteral org.semanticweb.owlapi.model.OWLDataFactory.getOWLLiteral(int)
    virtual org::semanticweb::owlapi::model::OWLLiteral* getOWLLiteral(double arg1); // public abstract org.semanticweb.owlapi.model.OWLLiteral org.semanticweb.owlapi.model.OWLDataFactory.getOWLLiteral(double)
    virtual org::semanticweb::owlapi::model::OWLLiteral* getOWLLiteral(bool arg1); // public abstract org.semanticweb.owlapi.model.OWLLiteral org.semanticweb.owlapi.model.OWLDataFactory.getOWLLiteral(boolean)
    virtual org::semanticweb::owlapi::model::OWLLiteral* getOWLLiteral(float arg1); // public abstract org.semanticweb.owlapi.model.OWLLiteral org.semanticweb.owlapi.model.OWLDataFactory.getOWLLiteral(float)
    virtual org::semanticweb::owlapi::model::OWLLiteral* getOWLLiteral(const char* arg1); // public abstract org.semanticweb.owlapi.model.OWLLiteral org.semanticweb.owlapi.model.OWLDataFactory.getOWLLiteral(java.lang.String)
    virtual org::semanticweb::owlapi::model::OWLLiteral* getOWLLiteral(const char* arg1, const char* arg2); // public abstract org.semanticweb.owlapi.model.OWLLiteral org.semanticweb.owlapi.model.OWLDataFactory.getOWLLiteral(java.lang.String,java.lang.String)
    virtual org::semanticweb::owlapi::model::OWLLiteral* getOWLTypedLiteral(const char* arg1, org::semanticweb::owlapi::model::OWLDatatype* arg2); // public abstract org.semanticweb.owlapi.model.OWLLiteral org.semanticweb.owlapi.model.OWLDataFactory.getOWLTypedLiteral(java.lang.String,org.semanticweb.owlapi.model.OWLDatatype)
    virtual org::semanticweb::owlapi::model::OWLLiteral* getOWLTypedLiteral(const char* arg1, org::semanticweb::owlapi::vocab::OWL2Datatype* arg2); // public abstract org.semanticweb.owlapi.model.OWLLiteral org.semanticweb.owlapi.model.OWLDataFactory.getOWLTypedLiteral(java.lang.String,org.semanticweb.owlapi.vocab.OWL2Datatype)
    virtual org::semanticweb::owlapi::model::OWLLiteral* getOWLTypedLiteral(int arg1); // public abstract org.semanticweb.owlapi.model.OWLLiteral org.semanticweb.owlapi.model.OWLDataFactory.getOWLTypedLiteral(int)
    virtual org::semanticweb::owlapi::model::OWLLiteral* getOWLTypedLiteral(double arg1); // public abstract org.semanticweb.owlapi.model.OWLLiteral org.semanticweb.owlapi.model.OWLDataFactory.getOWLTypedLiteral(double)
    virtual org::semanticweb::owlapi::model::OWLLiteral* getOWLTypedLiteral(bool arg1); // public abstract org.semanticweb.owlapi.model.OWLLiteral org.semanticweb.owlapi.model.OWLDataFactory.getOWLTypedLiteral(boolean)
    virtual org::semanticweb::owlapi::model::OWLLiteral* getOWLTypedLiteral(float arg1); // public abstract org.semanticweb.owlapi.model.OWLLiteral org.semanticweb.owlapi.model.OWLDataFactory.getOWLTypedLiteral(float)
    virtual org::semanticweb::owlapi::model::OWLLiteral* getOWLTypedLiteral(const char* arg1); // public abstract org.semanticweb.owlapi.model.OWLLiteral org.semanticweb.owlapi.model.OWLDataFactory.getOWLTypedLiteral(java.lang.String)
    virtual org::semanticweb::owlapi::model::OWLLiteral* getOWLStringLiteral(const char* arg1, const char* arg2); // public abstract org.semanticweb.owlapi.model.OWLLiteral org.semanticweb.owlapi.model.OWLDataFactory.getOWLStringLiteral(java.lang.String,java.lang.String)
    virtual org::semanticweb::owlapi::model::OWLLiteral* getOWLStringLiteral(const char* arg1); // public abstract org.semanticweb.owlapi.model.OWLLiteral org.semanticweb.owlapi.model.OWLDataFactory.getOWLStringLiteral(java.lang.String)
    virtual org::semanticweb::owlapi::model::OWLDataOneOf* getOWLDataOneOf(java::util::Set* arg1); // public abstract org.semanticweb.owlapi.model.OWLDataOneOf org.semanticweb.owlapi.model.OWLDataFactory.getOWLDataOneOf(java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLDataOneOf* getOWLDataOneOf(JavaObjectArray* arg1); // public abstract org.semanticweb.owlapi.model.OWLDataOneOf org.semanticweb.owlapi.model.OWLDataFactory.getOWLDataOneOf(org.semanticweb.owlapi.model.OWLLiteral[])
    virtual org::semanticweb::owlapi::model::OWLDataComplementOf* getOWLDataComplementOf(org::semanticweb::owlapi::model::OWLDataRange* arg1); // public abstract org.semanticweb.owlapi.model.OWLDataComplementOf org.semanticweb.owlapi.model.OWLDataFactory.getOWLDataComplementOf(org.semanticweb.owlapi.model.OWLDataRange)
    virtual org::semanticweb::owlapi::model::OWLDatatypeRestriction* getOWLDatatypeRestriction(org::semanticweb::owlapi::model::OWLDatatype* arg1, java::util::Set* arg2); // public abstract org.semanticweb.owlapi.model.OWLDatatypeRestriction org.semanticweb.owlapi.model.OWLDataFactory.getOWLDatatypeRestriction(org.semanticweb.owlapi.model.OWLDatatype,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLDatatypeRestriction* getOWLDatatypeRestriction(org::semanticweb::owlapi::model::OWLDatatype* arg1, org::semanticweb::owlapi::vocab::OWLFacet* arg2, org::semanticweb::owlapi::model::OWLLiteral* arg3); // public abstract org.semanticweb.owlapi.model.OWLDatatypeRestriction org.semanticweb.owlapi.model.OWLDataFactory.getOWLDatatypeRestriction(org.semanticweb.owlapi.model.OWLDatatype,org.semanticweb.owlapi.vocab.OWLFacet,org.semanticweb.owlapi.model.OWLLiteral)
    virtual org::semanticweb::owlapi::model::OWLDatatypeRestriction* getOWLDatatypeRestriction(org::semanticweb::owlapi::model::OWLDatatype* arg1, JavaObjectArray* arg2); // public abstract org.semanticweb.owlapi.model.OWLDatatypeRestriction org.semanticweb.owlapi.model.OWLDataFactory.getOWLDatatypeRestriction(org.semanticweb.owlapi.model.OWLDatatype,org.semanticweb.owlapi.model.OWLFacetRestriction[])
    virtual org::semanticweb::owlapi::model::OWLDatatypeRestriction* getOWLDatatypeMinInclusiveRestriction(int arg1); // public abstract org.semanticweb.owlapi.model.OWLDatatypeRestriction org.semanticweb.owlapi.model.OWLDataFactory.getOWLDatatypeMinInclusiveRestriction(int)
    virtual org::semanticweb::owlapi::model::OWLDatatypeRestriction* getOWLDatatypeMinInclusiveRestriction(double arg1); // public abstract org.semanticweb.owlapi.model.OWLDatatypeRestriction org.semanticweb.owlapi.model.OWLDataFactory.getOWLDatatypeMinInclusiveRestriction(double)
    virtual org::semanticweb::owlapi::model::OWLDatatypeRestriction* getOWLDatatypeMaxInclusiveRestriction(int arg1); // public abstract org.semanticweb.owlapi.model.OWLDatatypeRestriction org.semanticweb.owlapi.model.OWLDataFactory.getOWLDatatypeMaxInclusiveRestriction(int)
    virtual org::semanticweb::owlapi::model::OWLDatatypeRestriction* getOWLDatatypeMaxInclusiveRestriction(double arg1); // public abstract org.semanticweb.owlapi.model.OWLDatatypeRestriction org.semanticweb.owlapi.model.OWLDataFactory.getOWLDatatypeMaxInclusiveRestriction(double)
    virtual org::semanticweb::owlapi::model::OWLDatatypeRestriction* getOWLDatatypeMinMaxInclusiveRestriction(int arg1, int arg2); // public abstract org.semanticweb.owlapi.model.OWLDatatypeRestriction org.semanticweb.owlapi.model.OWLDataFactory.getOWLDatatypeMinMaxInclusiveRestriction(int,int)
    virtual org::semanticweb::owlapi::model::OWLDatatypeRestriction* getOWLDatatypeMinMaxInclusiveRestriction(double arg1, double arg2); // public abstract org.semanticweb.owlapi.model.OWLDatatypeRestriction org.semanticweb.owlapi.model.OWLDataFactory.getOWLDatatypeMinMaxInclusiveRestriction(double,double)
    virtual org::semanticweb::owlapi::model::OWLDatatypeRestriction* getOWLDatatypeMinExclusiveRestriction(int arg1); // public abstract org.semanticweb.owlapi.model.OWLDatatypeRestriction org.semanticweb.owlapi.model.OWLDataFactory.getOWLDatatypeMinExclusiveRestriction(int)
    virtual org::semanticweb::owlapi::model::OWLDatatypeRestriction* getOWLDatatypeMinExclusiveRestriction(double arg1); // public abstract org.semanticweb.owlapi.model.OWLDatatypeRestriction org.semanticweb.owlapi.model.OWLDataFactory.getOWLDatatypeMinExclusiveRestriction(double)
    virtual org::semanticweb::owlapi::model::OWLDatatypeRestriction* getOWLDatatypeMaxExclusiveRestriction(int arg1); // public abstract org.semanticweb.owlapi.model.OWLDatatypeRestriction org.semanticweb.owlapi.model.OWLDataFactory.getOWLDatatypeMaxExclusiveRestriction(int)
    virtual org::semanticweb::owlapi::model::OWLDatatypeRestriction* getOWLDatatypeMaxExclusiveRestriction(double arg1); // public abstract org.semanticweb.owlapi.model.OWLDatatypeRestriction org.semanticweb.owlapi.model.OWLDataFactory.getOWLDatatypeMaxExclusiveRestriction(double)
    virtual org::semanticweb::owlapi::model::OWLDatatypeRestriction* getOWLDatatypeMinMaxExclusiveRestriction(int arg1, int arg2); // public abstract org.semanticweb.owlapi.model.OWLDatatypeRestriction org.semanticweb.owlapi.model.OWLDataFactory.getOWLDatatypeMinMaxExclusiveRestriction(int,int)
    virtual org::semanticweb::owlapi::model::OWLDatatypeRestriction* getOWLDatatypeMinMaxExclusiveRestriction(double arg1, double arg2); // public abstract org.semanticweb.owlapi.model.OWLDatatypeRestriction org.semanticweb.owlapi.model.OWLDataFactory.getOWLDatatypeMinMaxExclusiveRestriction(double,double)
    virtual org::semanticweb::owlapi::model::OWLFacetRestriction* getOWLFacetRestriction(org::semanticweb::owlapi::vocab::OWLFacet* arg1, org::semanticweb::owlapi::model::OWLLiteral* arg2); // public abstract org.semanticweb.owlapi.model.OWLFacetRestriction org.semanticweb.owlapi.model.OWLDataFactory.getOWLFacetRestriction(org.semanticweb.owlapi.vocab.OWLFacet,org.semanticweb.owlapi.model.OWLLiteral)
    virtual org::semanticweb::owlapi::model::OWLFacetRestriction* getOWLFacetRestriction(org::semanticweb::owlapi::vocab::OWLFacet* arg1, int arg2); // public abstract org.semanticweb.owlapi.model.OWLFacetRestriction org.semanticweb.owlapi.model.OWLDataFactory.getOWLFacetRestriction(org.semanticweb.owlapi.vocab.OWLFacet,int)
    virtual org::semanticweb::owlapi::model::OWLFacetRestriction* getOWLFacetRestriction(org::semanticweb::owlapi::vocab::OWLFacet* arg1, double arg2); // public abstract org.semanticweb.owlapi.model.OWLFacetRestriction org.semanticweb.owlapi.model.OWLDataFactory.getOWLFacetRestriction(org.semanticweb.owlapi.vocab.OWLFacet,double)
    virtual org::semanticweb::owlapi::model::OWLFacetRestriction* getOWLFacetRestriction(org::semanticweb::owlapi::vocab::OWLFacet* arg1, float arg2); // public abstract org.semanticweb.owlapi.model.OWLFacetRestriction org.semanticweb.owlapi.model.OWLDataFactory.getOWLFacetRestriction(org.semanticweb.owlapi.vocab.OWLFacet,float)
    virtual org::semanticweb::owlapi::model::OWLDataUnionOf* getOWLDataUnionOf(java::util::Set* arg1); // public abstract org.semanticweb.owlapi.model.OWLDataUnionOf org.semanticweb.owlapi.model.OWLDataFactory.getOWLDataUnionOf(java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLDataUnionOf* getOWLDataUnionOf(JavaObjectArray* arg1); // public abstract org.semanticweb.owlapi.model.OWLDataUnionOf org.semanticweb.owlapi.model.OWLDataFactory.getOWLDataUnionOf(org.semanticweb.owlapi.model.OWLDataRange[])
    virtual org::semanticweb::owlapi::model::OWLDataIntersectionOf* getOWLDataIntersectionOf(java::util::Set* arg1); // public abstract org.semanticweb.owlapi.model.OWLDataIntersectionOf org.semanticweb.owlapi.model.OWLDataFactory.getOWLDataIntersectionOf(java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLDataIntersectionOf* getOWLDataIntersectionOf(JavaObjectArray* arg1); // public abstract org.semanticweb.owlapi.model.OWLDataIntersectionOf org.semanticweb.owlapi.model.OWLDataFactory.getOWLDataIntersectionOf(org.semanticweb.owlapi.model.OWLDataRange[])
    virtual org::semanticweb::owlapi::model::OWLObjectIntersectionOf* getOWLObjectIntersectionOf(java::util::Set* arg1); // public abstract org.semanticweb.owlapi.model.OWLObjectIntersectionOf org.semanticweb.owlapi.model.OWLDataFactory.getOWLObjectIntersectionOf(java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLObjectIntersectionOf* getOWLObjectIntersectionOf(JavaObjectArray* arg1); // public abstract org.semanticweb.owlapi.model.OWLObjectIntersectionOf org.semanticweb.owlapi.model.OWLDataFactory.getOWLObjectIntersectionOf(org.semanticweb.owlapi.model.OWLClassExpression[])
    virtual org::semanticweb::owlapi::model::OWLDataSomeValuesFrom* getOWLDataSomeValuesFrom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLDataRange* arg2); // public abstract org.semanticweb.owlapi.model.OWLDataSomeValuesFrom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDataSomeValuesFrom(org.semanticweb.owlapi.model.OWLDataPropertyExpression,org.semanticweb.owlapi.model.OWLDataRange)
    virtual org::semanticweb::owlapi::model::OWLDataAllValuesFrom* getOWLDataAllValuesFrom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLDataRange* arg2); // public abstract org.semanticweb.owlapi.model.OWLDataAllValuesFrom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDataAllValuesFrom(org.semanticweb.owlapi.model.OWLDataPropertyExpression,org.semanticweb.owlapi.model.OWLDataRange)
    virtual org::semanticweb::owlapi::model::OWLDataExactCardinality* getOWLDataExactCardinality(int arg1, org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg2); // public abstract org.semanticweb.owlapi.model.OWLDataExactCardinality org.semanticweb.owlapi.model.OWLDataFactory.getOWLDataExactCardinality(int,org.semanticweb.owlapi.model.OWLDataPropertyExpression)
    virtual org::semanticweb::owlapi::model::OWLDataExactCardinality* getOWLDataExactCardinality(int arg1, org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg2, org::semanticweb::owlapi::model::OWLDataRange* arg3); // public abstract org.semanticweb.owlapi.model.OWLDataExactCardinality org.semanticweb.owlapi.model.OWLDataFactory.getOWLDataExactCardinality(int,org.semanticweb.owlapi.model.OWLDataPropertyExpression,org.semanticweb.owlapi.model.OWLDataRange)
    virtual org::semanticweb::owlapi::model::OWLDataMaxCardinality* getOWLDataMaxCardinality(int arg1, org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg2); // public abstract org.semanticweb.owlapi.model.OWLDataMaxCardinality org.semanticweb.owlapi.model.OWLDataFactory.getOWLDataMaxCardinality(int,org.semanticweb.owlapi.model.OWLDataPropertyExpression)
    virtual org::semanticweb::owlapi::model::OWLDataMaxCardinality* getOWLDataMaxCardinality(int arg1, org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg2, org::semanticweb::owlapi::model::OWLDataRange* arg3); // public abstract org.semanticweb.owlapi.model.OWLDataMaxCardinality org.semanticweb.owlapi.model.OWLDataFactory.getOWLDataMaxCardinality(int,org.semanticweb.owlapi.model.OWLDataPropertyExpression,org.semanticweb.owlapi.model.OWLDataRange)
    virtual org::semanticweb::owlapi::model::OWLDataMinCardinality* getOWLDataMinCardinality(int arg1, org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg2); // public abstract org.semanticweb.owlapi.model.OWLDataMinCardinality org.semanticweb.owlapi.model.OWLDataFactory.getOWLDataMinCardinality(int,org.semanticweb.owlapi.model.OWLDataPropertyExpression)
    virtual org::semanticweb::owlapi::model::OWLDataMinCardinality* getOWLDataMinCardinality(int arg1, org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg2, org::semanticweb::owlapi::model::OWLDataRange* arg3); // public abstract org.semanticweb.owlapi.model.OWLDataMinCardinality org.semanticweb.owlapi.model.OWLDataFactory.getOWLDataMinCardinality(int,org.semanticweb.owlapi.model.OWLDataPropertyExpression,org.semanticweb.owlapi.model.OWLDataRange)
    virtual org::semanticweb::owlapi::model::OWLDataHasValue* getOWLDataHasValue(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLLiteral* arg2); // public abstract org.semanticweb.owlapi.model.OWLDataHasValue org.semanticweb.owlapi.model.OWLDataFactory.getOWLDataHasValue(org.semanticweb.owlapi.model.OWLDataPropertyExpression,org.semanticweb.owlapi.model.OWLLiteral)
    virtual org::semanticweb::owlapi::model::OWLObjectComplementOf* getOWLObjectComplementOf(org::semanticweb::owlapi::model::OWLClassExpression* arg1); // public abstract org.semanticweb.owlapi.model.OWLObjectComplementOf org.semanticweb.owlapi.model.OWLDataFactory.getOWLObjectComplementOf(org.semanticweb.owlapi.model.OWLClassExpression)
    virtual org::semanticweb::owlapi::model::OWLObjectOneOf* getOWLObjectOneOf(java::util::Set* arg1); // public abstract org.semanticweb.owlapi.model.OWLObjectOneOf org.semanticweb.owlapi.model.OWLDataFactory.getOWLObjectOneOf(java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLObjectOneOf* getOWLObjectOneOf(JavaObjectArray* arg1); // public abstract org.semanticweb.owlapi.model.OWLObjectOneOf org.semanticweb.owlapi.model.OWLDataFactory.getOWLObjectOneOf(org.semanticweb.owlapi.model.OWLIndividual[])
    virtual org::semanticweb::owlapi::model::OWLObjectAllValuesFrom* getOWLObjectAllValuesFrom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLClassExpression* arg2); // public abstract org.semanticweb.owlapi.model.OWLObjectAllValuesFrom org.semanticweb.owlapi.model.OWLDataFactory.getOWLObjectAllValuesFrom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression,org.semanticweb.owlapi.model.OWLClassExpression)
    virtual org::semanticweb::owlapi::model::OWLObjectSomeValuesFrom* getOWLObjectSomeValuesFrom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLClassExpression* arg2); // public abstract org.semanticweb.owlapi.model.OWLObjectSomeValuesFrom org.semanticweb.owlapi.model.OWLDataFactory.getOWLObjectSomeValuesFrom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression,org.semanticweb.owlapi.model.OWLClassExpression)
    virtual org::semanticweb::owlapi::model::OWLObjectExactCardinality* getOWLObjectExactCardinality(int arg1, org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg2); // public abstract org.semanticweb.owlapi.model.OWLObjectExactCardinality org.semanticweb.owlapi.model.OWLDataFactory.getOWLObjectExactCardinality(int,org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual org::semanticweb::owlapi::model::OWLObjectExactCardinality* getOWLObjectExactCardinality(int arg1, org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg2, org::semanticweb::owlapi::model::OWLClassExpression* arg3); // public abstract org.semanticweb.owlapi.model.OWLObjectExactCardinality org.semanticweb.owlapi.model.OWLDataFactory.getOWLObjectExactCardinality(int,org.semanticweb.owlapi.model.OWLObjectPropertyExpression,org.semanticweb.owlapi.model.OWLClassExpression)
    virtual org::semanticweb::owlapi::model::OWLObjectMinCardinality* getOWLObjectMinCardinality(int arg1, org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg2); // public abstract org.semanticweb.owlapi.model.OWLObjectMinCardinality org.semanticweb.owlapi.model.OWLDataFactory.getOWLObjectMinCardinality(int,org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual org::semanticweb::owlapi::model::OWLObjectMinCardinality* getOWLObjectMinCardinality(int arg1, org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg2, org::semanticweb::owlapi::model::OWLClassExpression* arg3); // public abstract org.semanticweb.owlapi.model.OWLObjectMinCardinality org.semanticweb.owlapi.model.OWLDataFactory.getOWLObjectMinCardinality(int,org.semanticweb.owlapi.model.OWLObjectPropertyExpression,org.semanticweb.owlapi.model.OWLClassExpression)
    virtual org::semanticweb::owlapi::model::OWLObjectMaxCardinality* getOWLObjectMaxCardinality(int arg1, org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg2); // public abstract org.semanticweb.owlapi.model.OWLObjectMaxCardinality org.semanticweb.owlapi.model.OWLDataFactory.getOWLObjectMaxCardinality(int,org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual org::semanticweb::owlapi::model::OWLObjectMaxCardinality* getOWLObjectMaxCardinality(int arg1, org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg2, org::semanticweb::owlapi::model::OWLClassExpression* arg3); // public abstract org.semanticweb.owlapi.model.OWLObjectMaxCardinality org.semanticweb.owlapi.model.OWLDataFactory.getOWLObjectMaxCardinality(int,org.semanticweb.owlapi.model.OWLObjectPropertyExpression,org.semanticweb.owlapi.model.OWLClassExpression)
    virtual org::semanticweb::owlapi::model::OWLObjectHasSelf* getOWLObjectHasSelf(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1); // public abstract org.semanticweb.owlapi.model.OWLObjectHasSelf org.semanticweb.owlapi.model.OWLDataFactory.getOWLObjectHasSelf(org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual org::semanticweb::owlapi::model::OWLObjectHasValue* getOWLObjectHasValue(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2); // public abstract org.semanticweb.owlapi.model.OWLObjectHasValue org.semanticweb.owlapi.model.OWLDataFactory.getOWLObjectHasValue(org.semanticweb.owlapi.model.OWLObjectPropertyExpression,org.semanticweb.owlapi.model.OWLIndividual)
    virtual org::semanticweb::owlapi::model::OWLObjectUnionOf* getOWLObjectUnionOf(java::util::Set* arg1); // public abstract org.semanticweb.owlapi.model.OWLObjectUnionOf org.semanticweb.owlapi.model.OWLDataFactory.getOWLObjectUnionOf(java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLObjectUnionOf* getOWLObjectUnionOf(JavaObjectArray* arg1); // public abstract org.semanticweb.owlapi.model.OWLObjectUnionOf org.semanticweb.owlapi.model.OWLDataFactory.getOWLObjectUnionOf(org.semanticweb.owlapi.model.OWLClassExpression[])
    virtual org::semanticweb::owlapi::model::OWLDeclarationAxiom* getOWLDeclarationAxiom(org::semanticweb::owlapi::model::OWLEntity* arg1); // public abstract org.semanticweb.owlapi.model.OWLDeclarationAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDeclarationAxiom(org.semanticweb.owlapi.model.OWLEntity)
    virtual org::semanticweb::owlapi::model::OWLDeclarationAxiom* getOWLDeclarationAxiom(org::semanticweb::owlapi::model::OWLEntity* arg1, java::util::Set* arg2); // public abstract org.semanticweb.owlapi.model.OWLDeclarationAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDeclarationAxiom(org.semanticweb.owlapi.model.OWLEntity,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLSubClassOfAxiom* getOWLSubClassOfAxiom(org::semanticweb::owlapi::model::OWLClassExpression* arg1, org::semanticweb::owlapi::model::OWLClassExpression* arg2); // public abstract org.semanticweb.owlapi.model.OWLSubClassOfAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLSubClassOfAxiom(org.semanticweb.owlapi.model.OWLClassExpression,org.semanticweb.owlapi.model.OWLClassExpression)
    virtual org::semanticweb::owlapi::model::OWLSubClassOfAxiom* getOWLSubClassOfAxiom(org::semanticweb::owlapi::model::OWLClassExpression* arg1, org::semanticweb::owlapi::model::OWLClassExpression* arg2, java::util::Set* arg3); // public abstract org.semanticweb.owlapi.model.OWLSubClassOfAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLSubClassOfAxiom(org.semanticweb.owlapi.model.OWLClassExpression,org.semanticweb.owlapi.model.OWLClassExpression,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLDisjointClassesAxiom* getOWLDisjointClassesAxiom(java::util::Set* arg1); // public abstract org.semanticweb.owlapi.model.OWLDisjointClassesAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDisjointClassesAxiom(java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLDisjointClassesAxiom* getOWLDisjointClassesAxiom(JavaObjectArray* arg1); // public abstract org.semanticweb.owlapi.model.OWLDisjointClassesAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDisjointClassesAxiom(org.semanticweb.owlapi.model.OWLClassExpression[])
    virtual org::semanticweb::owlapi::model::OWLDisjointClassesAxiom* getOWLDisjointClassesAxiom(java::util::Set* arg1, java::util::Set* arg2); // public abstract org.semanticweb.owlapi.model.OWLDisjointClassesAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDisjointClassesAxiom(java.util.Set,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLDisjointUnionAxiom* getOWLDisjointUnionAxiom(org::semanticweb::owlapi::model::OWLClass* arg1, java::util::Set* arg2); // public abstract org.semanticweb.owlapi.model.OWLDisjointUnionAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDisjointUnionAxiom(org.semanticweb.owlapi.model.OWLClass,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLDisjointUnionAxiom* getOWLDisjointUnionAxiom(org::semanticweb::owlapi::model::OWLClass* arg1, java::util::Set* arg2, java::util::Set* arg3); // public abstract org.semanticweb.owlapi.model.OWLDisjointUnionAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDisjointUnionAxiom(org.semanticweb.owlapi.model.OWLClass,java.util.Set,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLSubObjectPropertyOfAxiom* getOWLSubObjectPropertyOfAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg2); // public abstract org.semanticweb.owlapi.model.OWLSubObjectPropertyOfAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLSubObjectPropertyOfAxiom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression,org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual org::semanticweb::owlapi::model::OWLSubObjectPropertyOfAxiom* getOWLSubObjectPropertyOfAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg2, java::util::Set* arg3); // public abstract org.semanticweb.owlapi.model.OWLSubObjectPropertyOfAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLSubObjectPropertyOfAxiom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression,org.semanticweb.owlapi.model.OWLObjectPropertyExpression,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLSubPropertyChainOfAxiom* getOWLSubPropertyChainOfAxiom(java::util::List* arg1, org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg2); // public abstract org.semanticweb.owlapi.model.OWLSubPropertyChainOfAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLSubPropertyChainOfAxiom(java.util.List,org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual org::semanticweb::owlapi::model::OWLSubPropertyChainOfAxiom* getOWLSubPropertyChainOfAxiom(java::util::List* arg1, org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg2, java::util::Set* arg3); // public abstract org.semanticweb.owlapi.model.OWLSubPropertyChainOfAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLSubPropertyChainOfAxiom(java.util.List,org.semanticweb.owlapi.model.OWLObjectPropertyExpression,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLEquivalentObjectPropertiesAxiom* getOWLEquivalentObjectPropertiesAxiom(java::util::Set* arg1); // public abstract org.semanticweb.owlapi.model.OWLEquivalentObjectPropertiesAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLEquivalentObjectPropertiesAxiom(java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLEquivalentObjectPropertiesAxiom* getOWLEquivalentObjectPropertiesAxiom(java::util::Set* arg1, java::util::Set* arg2); // public abstract org.semanticweb.owlapi.model.OWLEquivalentObjectPropertiesAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLEquivalentObjectPropertiesAxiom(java.util.Set,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLEquivalentObjectPropertiesAxiom* getOWLEquivalentObjectPropertiesAxiom(JavaObjectArray* arg1); // public abstract org.semanticweb.owlapi.model.OWLEquivalentObjectPropertiesAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLEquivalentObjectPropertiesAxiom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression[])
    virtual org::semanticweb::owlapi::model::OWLEquivalentObjectPropertiesAxiom* getOWLEquivalentObjectPropertiesAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg2); // public abstract org.semanticweb.owlapi.model.OWLEquivalentObjectPropertiesAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLEquivalentObjectPropertiesAxiom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression,org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual org::semanticweb::owlapi::model::OWLEquivalentObjectPropertiesAxiom* getOWLEquivalentObjectPropertiesAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg2, java::util::Set* arg3); // public abstract org.semanticweb.owlapi.model.OWLEquivalentObjectPropertiesAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLEquivalentObjectPropertiesAxiom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression,org.semanticweb.owlapi.model.OWLObjectPropertyExpression,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLDisjointObjectPropertiesAxiom* getOWLDisjointObjectPropertiesAxiom(java::util::Set* arg1); // public abstract org.semanticweb.owlapi.model.OWLDisjointObjectPropertiesAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDisjointObjectPropertiesAxiom(java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLDisjointObjectPropertiesAxiom* getOWLDisjointObjectPropertiesAxiom(JavaObjectArray* arg1); // public abstract org.semanticweb.owlapi.model.OWLDisjointObjectPropertiesAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDisjointObjectPropertiesAxiom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression[])
    virtual org::semanticweb::owlapi::model::OWLDisjointObjectPropertiesAxiom* getOWLDisjointObjectPropertiesAxiom(java::util::Set* arg1, java::util::Set* arg2); // public abstract org.semanticweb.owlapi.model.OWLDisjointObjectPropertiesAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDisjointObjectPropertiesAxiom(java.util.Set,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLInverseObjectPropertiesAxiom* getOWLInverseObjectPropertiesAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg2); // public abstract org.semanticweb.owlapi.model.OWLInverseObjectPropertiesAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLInverseObjectPropertiesAxiom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression,org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual org::semanticweb::owlapi::model::OWLInverseObjectPropertiesAxiom* getOWLInverseObjectPropertiesAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg2, java::util::Set* arg3); // public abstract org.semanticweb.owlapi.model.OWLInverseObjectPropertiesAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLInverseObjectPropertiesAxiom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression,org.semanticweb.owlapi.model.OWLObjectPropertyExpression,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLObjectPropertyDomainAxiom* getOWLObjectPropertyDomainAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLClassExpression* arg2); // public abstract org.semanticweb.owlapi.model.OWLObjectPropertyDomainAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLObjectPropertyDomainAxiom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression,org.semanticweb.owlapi.model.OWLClassExpression)
    virtual org::semanticweb::owlapi::model::OWLObjectPropertyDomainAxiom* getOWLObjectPropertyDomainAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLClassExpression* arg2, java::util::Set* arg3); // public abstract org.semanticweb.owlapi.model.OWLObjectPropertyDomainAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLObjectPropertyDomainAxiom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression,org.semanticweb.owlapi.model.OWLClassExpression,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLObjectPropertyRangeAxiom* getOWLObjectPropertyRangeAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLClassExpression* arg2); // public abstract org.semanticweb.owlapi.model.OWLObjectPropertyRangeAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLObjectPropertyRangeAxiom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression,org.semanticweb.owlapi.model.OWLClassExpression)
    virtual org::semanticweb::owlapi::model::OWLObjectPropertyRangeAxiom* getOWLObjectPropertyRangeAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLClassExpression* arg2, java::util::Set* arg3); // public abstract org.semanticweb.owlapi.model.OWLObjectPropertyRangeAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLObjectPropertyRangeAxiom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression,org.semanticweb.owlapi.model.OWLClassExpression,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLFunctionalObjectPropertyAxiom* getOWLFunctionalObjectPropertyAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1); // public abstract org.semanticweb.owlapi.model.OWLFunctionalObjectPropertyAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLFunctionalObjectPropertyAxiom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual org::semanticweb::owlapi::model::OWLFunctionalObjectPropertyAxiom* getOWLFunctionalObjectPropertyAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, java::util::Set* arg2); // public abstract org.semanticweb.owlapi.model.OWLFunctionalObjectPropertyAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLFunctionalObjectPropertyAxiom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLInverseFunctionalObjectPropertyAxiom* getOWLInverseFunctionalObjectPropertyAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1); // public abstract org.semanticweb.owlapi.model.OWLInverseFunctionalObjectPropertyAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLInverseFunctionalObjectPropertyAxiom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual org::semanticweb::owlapi::model::OWLInverseFunctionalObjectPropertyAxiom* getOWLInverseFunctionalObjectPropertyAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, java::util::Set* arg2); // public abstract org.semanticweb.owlapi.model.OWLInverseFunctionalObjectPropertyAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLInverseFunctionalObjectPropertyAxiom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLReflexiveObjectPropertyAxiom* getOWLReflexiveObjectPropertyAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1); // public abstract org.semanticweb.owlapi.model.OWLReflexiveObjectPropertyAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLReflexiveObjectPropertyAxiom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual org::semanticweb::owlapi::model::OWLReflexiveObjectPropertyAxiom* getOWLReflexiveObjectPropertyAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, java::util::Set* arg2); // public abstract org.semanticweb.owlapi.model.OWLReflexiveObjectPropertyAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLReflexiveObjectPropertyAxiom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLIrreflexiveObjectPropertyAxiom* getOWLIrreflexiveObjectPropertyAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1); // public abstract org.semanticweb.owlapi.model.OWLIrreflexiveObjectPropertyAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLIrreflexiveObjectPropertyAxiom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual org::semanticweb::owlapi::model::OWLIrreflexiveObjectPropertyAxiom* getOWLIrreflexiveObjectPropertyAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, java::util::Set* arg2); // public abstract org.semanticweb.owlapi.model.OWLIrreflexiveObjectPropertyAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLIrreflexiveObjectPropertyAxiom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLSymmetricObjectPropertyAxiom* getOWLSymmetricObjectPropertyAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1); // public abstract org.semanticweb.owlapi.model.OWLSymmetricObjectPropertyAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLSymmetricObjectPropertyAxiom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual org::semanticweb::owlapi::model::OWLSymmetricObjectPropertyAxiom* getOWLSymmetricObjectPropertyAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, java::util::Set* arg2); // public abstract org.semanticweb.owlapi.model.OWLSymmetricObjectPropertyAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLSymmetricObjectPropertyAxiom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLAsymmetricObjectPropertyAxiom* getOWLAsymmetricObjectPropertyAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1); // public abstract org.semanticweb.owlapi.model.OWLAsymmetricObjectPropertyAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLAsymmetricObjectPropertyAxiom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual org::semanticweb::owlapi::model::OWLAsymmetricObjectPropertyAxiom* getOWLAsymmetricObjectPropertyAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, java::util::Set* arg2); // public abstract org.semanticweb.owlapi.model.OWLAsymmetricObjectPropertyAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLAsymmetricObjectPropertyAxiom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLTransitiveObjectPropertyAxiom* getOWLTransitiveObjectPropertyAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1); // public abstract org.semanticweb.owlapi.model.OWLTransitiveObjectPropertyAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLTransitiveObjectPropertyAxiom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual org::semanticweb::owlapi::model::OWLTransitiveObjectPropertyAxiom* getOWLTransitiveObjectPropertyAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, java::util::Set* arg2); // public abstract org.semanticweb.owlapi.model.OWLTransitiveObjectPropertyAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLTransitiveObjectPropertyAxiom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLSubDataPropertyOfAxiom* getOWLSubDataPropertyOfAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg2); // public abstract org.semanticweb.owlapi.model.OWLSubDataPropertyOfAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLSubDataPropertyOfAxiom(org.semanticweb.owlapi.model.OWLDataPropertyExpression,org.semanticweb.owlapi.model.OWLDataPropertyExpression)
    virtual org::semanticweb::owlapi::model::OWLSubDataPropertyOfAxiom* getOWLSubDataPropertyOfAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg2, java::util::Set* arg3); // public abstract org.semanticweb.owlapi.model.OWLSubDataPropertyOfAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLSubDataPropertyOfAxiom(org.semanticweb.owlapi.model.OWLDataPropertyExpression,org.semanticweb.owlapi.model.OWLDataPropertyExpression,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLEquivalentDataPropertiesAxiom* getOWLEquivalentDataPropertiesAxiom(java::util::Set* arg1); // public abstract org.semanticweb.owlapi.model.OWLEquivalentDataPropertiesAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLEquivalentDataPropertiesAxiom(java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLEquivalentDataPropertiesAxiom* getOWLEquivalentDataPropertiesAxiom(java::util::Set* arg1, java::util::Set* arg2); // public abstract org.semanticweb.owlapi.model.OWLEquivalentDataPropertiesAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLEquivalentDataPropertiesAxiom(java.util.Set,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLEquivalentDataPropertiesAxiom* getOWLEquivalentDataPropertiesAxiom(JavaObjectArray* arg1); // public abstract org.semanticweb.owlapi.model.OWLEquivalentDataPropertiesAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLEquivalentDataPropertiesAxiom(org.semanticweb.owlapi.model.OWLDataPropertyExpression[])
    virtual org::semanticweb::owlapi::model::OWLEquivalentDataPropertiesAxiom* getOWLEquivalentDataPropertiesAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg2); // public abstract org.semanticweb.owlapi.model.OWLEquivalentDataPropertiesAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLEquivalentDataPropertiesAxiom(org.semanticweb.owlapi.model.OWLDataPropertyExpression,org.semanticweb.owlapi.model.OWLDataPropertyExpression)
    virtual org::semanticweb::owlapi::model::OWLEquivalentDataPropertiesAxiom* getOWLEquivalentDataPropertiesAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg2, java::util::Set* arg3); // public abstract org.semanticweb.owlapi.model.OWLEquivalentDataPropertiesAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLEquivalentDataPropertiesAxiom(org.semanticweb.owlapi.model.OWLDataPropertyExpression,org.semanticweb.owlapi.model.OWLDataPropertyExpression,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLDisjointDataPropertiesAxiom* getOWLDisjointDataPropertiesAxiom(JavaObjectArray* arg1); // public abstract org.semanticweb.owlapi.model.OWLDisjointDataPropertiesAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDisjointDataPropertiesAxiom(org.semanticweb.owlapi.model.OWLDataPropertyExpression[])
    virtual org::semanticweb::owlapi::model::OWLDisjointDataPropertiesAxiom* getOWLDisjointDataPropertiesAxiom(java::util::Set* arg1); // public abstract org.semanticweb.owlapi.model.OWLDisjointDataPropertiesAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDisjointDataPropertiesAxiom(java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLDisjointDataPropertiesAxiom* getOWLDisjointDataPropertiesAxiom(java::util::Set* arg1, java::util::Set* arg2); // public abstract org.semanticweb.owlapi.model.OWLDisjointDataPropertiesAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDisjointDataPropertiesAxiom(java.util.Set,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLDataPropertyDomainAxiom* getOWLDataPropertyDomainAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLClassExpression* arg2); // public abstract org.semanticweb.owlapi.model.OWLDataPropertyDomainAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDataPropertyDomainAxiom(org.semanticweb.owlapi.model.OWLDataPropertyExpression,org.semanticweb.owlapi.model.OWLClassExpression)
    virtual org::semanticweb::owlapi::model::OWLDataPropertyDomainAxiom* getOWLDataPropertyDomainAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLClassExpression* arg2, java::util::Set* arg3); // public abstract org.semanticweb.owlapi.model.OWLDataPropertyDomainAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDataPropertyDomainAxiom(org.semanticweb.owlapi.model.OWLDataPropertyExpression,org.semanticweb.owlapi.model.OWLClassExpression,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLDataPropertyRangeAxiom* getOWLDataPropertyRangeAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLDataRange* arg2); // public abstract org.semanticweb.owlapi.model.OWLDataPropertyRangeAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDataPropertyRangeAxiom(org.semanticweb.owlapi.model.OWLDataPropertyExpression,org.semanticweb.owlapi.model.OWLDataRange)
    virtual org::semanticweb::owlapi::model::OWLDataPropertyRangeAxiom* getOWLDataPropertyRangeAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLDataRange* arg2, java::util::Set* arg3); // public abstract org.semanticweb.owlapi.model.OWLDataPropertyRangeAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDataPropertyRangeAxiom(org.semanticweb.owlapi.model.OWLDataPropertyExpression,org.semanticweb.owlapi.model.OWLDataRange,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLFunctionalDataPropertyAxiom* getOWLFunctionalDataPropertyAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1); // public abstract org.semanticweb.owlapi.model.OWLFunctionalDataPropertyAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLFunctionalDataPropertyAxiom(org.semanticweb.owlapi.model.OWLDataPropertyExpression)
    virtual org::semanticweb::owlapi::model::OWLFunctionalDataPropertyAxiom* getOWLFunctionalDataPropertyAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, java::util::Set* arg2); // public abstract org.semanticweb.owlapi.model.OWLFunctionalDataPropertyAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLFunctionalDataPropertyAxiom(org.semanticweb.owlapi.model.OWLDataPropertyExpression,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLHasKeyAxiom* getOWLHasKeyAxiom(org::semanticweb::owlapi::model::OWLClassExpression* arg1, java::util::Set* arg2); // public abstract org.semanticweb.owlapi.model.OWLHasKeyAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLHasKeyAxiom(org.semanticweb.owlapi.model.OWLClassExpression,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLHasKeyAxiom* getOWLHasKeyAxiom(org::semanticweb::owlapi::model::OWLClassExpression* arg1, JavaObjectArray* arg2); // public abstract org.semanticweb.owlapi.model.OWLHasKeyAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLHasKeyAxiom(org.semanticweb.owlapi.model.OWLClassExpression,org.semanticweb.owlapi.model.OWLPropertyExpression[])
    virtual org::semanticweb::owlapi::model::OWLHasKeyAxiom* getOWLHasKeyAxiom(org::semanticweb::owlapi::model::OWLClassExpression* arg1, java::util::Set* arg2, java::util::Set* arg3); // public abstract org.semanticweb.owlapi.model.OWLHasKeyAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLHasKeyAxiom(org.semanticweb.owlapi.model.OWLClassExpression,java.util.Set,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLDatatypeDefinitionAxiom* getOWLDatatypeDefinitionAxiom(org::semanticweb::owlapi::model::OWLDatatype* arg1, org::semanticweb::owlapi::model::OWLDataRange* arg2); // public abstract org.semanticweb.owlapi.model.OWLDatatypeDefinitionAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDatatypeDefinitionAxiom(org.semanticweb.owlapi.model.OWLDatatype,org.semanticweb.owlapi.model.OWLDataRange)
    virtual org::semanticweb::owlapi::model::OWLDatatypeDefinitionAxiom* getOWLDatatypeDefinitionAxiom(org::semanticweb::owlapi::model::OWLDatatype* arg1, org::semanticweb::owlapi::model::OWLDataRange* arg2, java::util::Set* arg3); // public abstract org.semanticweb.owlapi.model.OWLDatatypeDefinitionAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDatatypeDefinitionAxiom(org.semanticweb.owlapi.model.OWLDatatype,org.semanticweb.owlapi.model.OWLDataRange,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLSameIndividualAxiom* getOWLSameIndividualAxiom(java::util::Set* arg1); // public abstract org.semanticweb.owlapi.model.OWLSameIndividualAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLSameIndividualAxiom(java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLSameIndividualAxiom* getOWLSameIndividualAxiom(JavaObjectArray* arg1); // public abstract org.semanticweb.owlapi.model.OWLSameIndividualAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLSameIndividualAxiom(org.semanticweb.owlapi.model.OWLIndividual[])
    virtual org::semanticweb::owlapi::model::OWLSameIndividualAxiom* getOWLSameIndividualAxiom(java::util::Set* arg1, java::util::Set* arg2); // public abstract org.semanticweb.owlapi.model.OWLSameIndividualAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLSameIndividualAxiom(java.util.Set,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLDifferentIndividualsAxiom* getOWLDifferentIndividualsAxiom(java::util::Set* arg1); // public abstract org.semanticweb.owlapi.model.OWLDifferentIndividualsAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDifferentIndividualsAxiom(java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLDifferentIndividualsAxiom* getOWLDifferentIndividualsAxiom(JavaObjectArray* arg1); // public abstract org.semanticweb.owlapi.model.OWLDifferentIndividualsAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDifferentIndividualsAxiom(org.semanticweb.owlapi.model.OWLIndividual[])
    virtual org::semanticweb::owlapi::model::OWLDifferentIndividualsAxiom* getOWLDifferentIndividualsAxiom(java::util::Set* arg1, java::util::Set* arg2); // public abstract org.semanticweb.owlapi.model.OWLDifferentIndividualsAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDifferentIndividualsAxiom(java.util.Set,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLClassAssertionAxiom* getOWLClassAssertionAxiom(org::semanticweb::owlapi::model::OWLClassExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2); // public abstract org.semanticweb.owlapi.model.OWLClassAssertionAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLClassAssertionAxiom(org.semanticweb.owlapi.model.OWLClassExpression,org.semanticweb.owlapi.model.OWLIndividual)
    virtual org::semanticweb::owlapi::model::OWLClassAssertionAxiom* getOWLClassAssertionAxiom(org::semanticweb::owlapi::model::OWLClassExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2, java::util::Set* arg3); // public abstract org.semanticweb.owlapi.model.OWLClassAssertionAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLClassAssertionAxiom(org.semanticweb.owlapi.model.OWLClassExpression,org.semanticweb.owlapi.model.OWLIndividual,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLObjectPropertyAssertionAxiom* getOWLObjectPropertyAssertionAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2, org::semanticweb::owlapi::model::OWLIndividual* arg3); // public abstract org.semanticweb.owlapi.model.OWLObjectPropertyAssertionAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLObjectPropertyAssertionAxiom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression,org.semanticweb.owlapi.model.OWLIndividual,org.semanticweb.owlapi.model.OWLIndividual)
    virtual org::semanticweb::owlapi::model::OWLObjectPropertyAssertionAxiom* getOWLObjectPropertyAssertionAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2, org::semanticweb::owlapi::model::OWLIndividual* arg3, java::util::Set* arg4); // public abstract org.semanticweb.owlapi.model.OWLObjectPropertyAssertionAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLObjectPropertyAssertionAxiom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression,org.semanticweb.owlapi.model.OWLIndividual,org.semanticweb.owlapi.model.OWLIndividual,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLNegativeObjectPropertyAssertionAxiom* getOWLNegativeObjectPropertyAssertionAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2, org::semanticweb::owlapi::model::OWLIndividual* arg3); // public abstract org.semanticweb.owlapi.model.OWLNegativeObjectPropertyAssertionAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLNegativeObjectPropertyAssertionAxiom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression,org.semanticweb.owlapi.model.OWLIndividual,org.semanticweb.owlapi.model.OWLIndividual)
    virtual org::semanticweb::owlapi::model::OWLNegativeObjectPropertyAssertionAxiom* getOWLNegativeObjectPropertyAssertionAxiom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2, org::semanticweb::owlapi::model::OWLIndividual* arg3, java::util::Set* arg4); // public abstract org.semanticweb.owlapi.model.OWLNegativeObjectPropertyAssertionAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLNegativeObjectPropertyAssertionAxiom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression,org.semanticweb.owlapi.model.OWLIndividual,org.semanticweb.owlapi.model.OWLIndividual,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLDataPropertyAssertionAxiom* getOWLDataPropertyAssertionAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2, org::semanticweb::owlapi::model::OWLLiteral* arg3); // public abstract org.semanticweb.owlapi.model.OWLDataPropertyAssertionAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDataPropertyAssertionAxiom(org.semanticweb.owlapi.model.OWLDataPropertyExpression,org.semanticweb.owlapi.model.OWLIndividual,org.semanticweb.owlapi.model.OWLLiteral)
    virtual org::semanticweb::owlapi::model::OWLDataPropertyAssertionAxiom* getOWLDataPropertyAssertionAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2, org::semanticweb::owlapi::model::OWLLiteral* arg3, java::util::Set* arg4); // public abstract org.semanticweb.owlapi.model.OWLDataPropertyAssertionAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDataPropertyAssertionAxiom(org.semanticweb.owlapi.model.OWLDataPropertyExpression,org.semanticweb.owlapi.model.OWLIndividual,org.semanticweb.owlapi.model.OWLLiteral,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLDataPropertyAssertionAxiom* getOWLDataPropertyAssertionAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2, int arg3); // public abstract org.semanticweb.owlapi.model.OWLDataPropertyAssertionAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDataPropertyAssertionAxiom(org.semanticweb.owlapi.model.OWLDataPropertyExpression,org.semanticweb.owlapi.model.OWLIndividual,int)
    virtual org::semanticweb::owlapi::model::OWLDataPropertyAssertionAxiom* getOWLDataPropertyAssertionAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2, double arg3); // public abstract org.semanticweb.owlapi.model.OWLDataPropertyAssertionAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDataPropertyAssertionAxiom(org.semanticweb.owlapi.model.OWLDataPropertyExpression,org.semanticweb.owlapi.model.OWLIndividual,double)
    virtual org::semanticweb::owlapi::model::OWLDataPropertyAssertionAxiom* getOWLDataPropertyAssertionAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2, float arg3); // public abstract org.semanticweb.owlapi.model.OWLDataPropertyAssertionAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDataPropertyAssertionAxiom(org.semanticweb.owlapi.model.OWLDataPropertyExpression,org.semanticweb.owlapi.model.OWLIndividual,float)
    virtual org::semanticweb::owlapi::model::OWLDataPropertyAssertionAxiom* getOWLDataPropertyAssertionAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2, bool arg3); // public abstract org.semanticweb.owlapi.model.OWLDataPropertyAssertionAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDataPropertyAssertionAxiom(org.semanticweb.owlapi.model.OWLDataPropertyExpression,org.semanticweb.owlapi.model.OWLIndividual,boolean)
    virtual org::semanticweb::owlapi::model::OWLDataPropertyAssertionAxiom* getOWLDataPropertyAssertionAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2, const char* arg3); // public abstract org.semanticweb.owlapi.model.OWLDataPropertyAssertionAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLDataPropertyAssertionAxiom(org.semanticweb.owlapi.model.OWLDataPropertyExpression,org.semanticweb.owlapi.model.OWLIndividual,java.lang.String)
    virtual org::semanticweb::owlapi::model::OWLNegativeDataPropertyAssertionAxiom* getOWLNegativeDataPropertyAssertionAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2, org::semanticweb::owlapi::model::OWLLiteral* arg3); // public abstract org.semanticweb.owlapi.model.OWLNegativeDataPropertyAssertionAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLNegativeDataPropertyAssertionAxiom(org.semanticweb.owlapi.model.OWLDataPropertyExpression,org.semanticweb.owlapi.model.OWLIndividual,org.semanticweb.owlapi.model.OWLLiteral)
    virtual org::semanticweb::owlapi::model::OWLNegativeDataPropertyAssertionAxiom* getOWLNegativeDataPropertyAssertionAxiom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2, org::semanticweb::owlapi::model::OWLLiteral* arg3, java::util::Set* arg4); // public abstract org.semanticweb.owlapi.model.OWLNegativeDataPropertyAssertionAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLNegativeDataPropertyAssertionAxiom(org.semanticweb.owlapi.model.OWLDataPropertyExpression,org.semanticweb.owlapi.model.OWLIndividual,org.semanticweb.owlapi.model.OWLLiteral,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLAnnotation* getOWLAnnotation(org::semanticweb::owlapi::model::OWLAnnotationProperty* arg1, org::semanticweb::owlapi::model::OWLAnnotationValue* arg2); // public abstract org.semanticweb.owlapi.model.OWLAnnotation org.semanticweb.owlapi.model.OWLDataFactory.getOWLAnnotation(org.semanticweb.owlapi.model.OWLAnnotationProperty,org.semanticweb.owlapi.model.OWLAnnotationValue)
    virtual org::semanticweb::owlapi::model::OWLAnnotation* getOWLAnnotation(org::semanticweb::owlapi::model::OWLAnnotationProperty* arg1, org::semanticweb::owlapi::model::OWLAnnotationValue* arg2, java::util::Set* arg3); // public abstract org.semanticweb.owlapi.model.OWLAnnotation org.semanticweb.owlapi.model.OWLDataFactory.getOWLAnnotation(org.semanticweb.owlapi.model.OWLAnnotationProperty,org.semanticweb.owlapi.model.OWLAnnotationValue,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLAnnotationAssertionAxiom* getOWLAnnotationAssertionAxiom(org::semanticweb::owlapi::model::OWLAnnotationProperty* arg1, org::semanticweb::owlapi::model::OWLAnnotationSubject* arg2, org::semanticweb::owlapi::model::OWLAnnotationValue* arg3); // public abstract org.semanticweb.owlapi.model.OWLAnnotationAssertionAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLAnnotationAssertionAxiom(org.semanticweb.owlapi.model.OWLAnnotationProperty,org.semanticweb.owlapi.model.OWLAnnotationSubject,org.semanticweb.owlapi.model.OWLAnnotationValue)
    virtual org::semanticweb::owlapi::model::OWLAnnotationAssertionAxiom* getOWLAnnotationAssertionAxiom(org::semanticweb::owlapi::model::OWLAnnotationSubject* arg1, org::semanticweb::owlapi::model::OWLAnnotation* arg2); // public abstract org.semanticweb.owlapi.model.OWLAnnotationAssertionAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLAnnotationAssertionAxiom(org.semanticweb.owlapi.model.OWLAnnotationSubject,org.semanticweb.owlapi.model.OWLAnnotation)
    virtual org::semanticweb::owlapi::model::OWLAnnotationAssertionAxiom* getOWLAnnotationAssertionAxiom(org::semanticweb::owlapi::model::OWLAnnotationProperty* arg1, org::semanticweb::owlapi::model::OWLAnnotationSubject* arg2, org::semanticweb::owlapi::model::OWLAnnotationValue* arg3, java::util::Set* arg4); // public abstract org.semanticweb.owlapi.model.OWLAnnotationAssertionAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLAnnotationAssertionAxiom(org.semanticweb.owlapi.model.OWLAnnotationProperty,org.semanticweb.owlapi.model.OWLAnnotationSubject,org.semanticweb.owlapi.model.OWLAnnotationValue,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLAnnotationAssertionAxiom* getOWLAnnotationAssertionAxiom(org::semanticweb::owlapi::model::OWLAnnotationSubject* arg1, org::semanticweb::owlapi::model::OWLAnnotation* arg2, java::util::Set* arg3); // public abstract org.semanticweb.owlapi.model.OWLAnnotationAssertionAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLAnnotationAssertionAxiom(org.semanticweb.owlapi.model.OWLAnnotationSubject,org.semanticweb.owlapi.model.OWLAnnotation,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLAnnotationAssertionAxiom* getDeprecatedOWLAnnotationAssertionAxiom(org::semanticweb::owlapi::model::IRI* arg1); // public abstract org.semanticweb.owlapi.model.OWLAnnotationAssertionAxiom org.semanticweb.owlapi.model.OWLDataFactory.getDeprecatedOWLAnnotationAssertionAxiom(org.semanticweb.owlapi.model.IRI)
    virtual org::semanticweb::owlapi::model::OWLImportsDeclaration* getOWLImportsDeclaration(org::semanticweb::owlapi::model::IRI* arg1); // public abstract org.semanticweb.owlapi.model.OWLImportsDeclaration org.semanticweb.owlapi.model.OWLDataFactory.getOWLImportsDeclaration(org.semanticweb.owlapi.model.IRI)
    virtual org::semanticweb::owlapi::model::OWLAnnotationPropertyDomainAxiom* getOWLAnnotationPropertyDomainAxiom(org::semanticweb::owlapi::model::OWLAnnotationProperty* arg1, org::semanticweb::owlapi::model::IRI* arg2); // public abstract org.semanticweb.owlapi.model.OWLAnnotationPropertyDomainAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLAnnotationPropertyDomainAxiom(org.semanticweb.owlapi.model.OWLAnnotationProperty,org.semanticweb.owlapi.model.IRI)
    virtual org::semanticweb::owlapi::model::OWLAnnotationPropertyDomainAxiom* getOWLAnnotationPropertyDomainAxiom(org::semanticweb::owlapi::model::OWLAnnotationProperty* arg1, org::semanticweb::owlapi::model::IRI* arg2, java::util::Set* arg3); // public abstract org.semanticweb.owlapi.model.OWLAnnotationPropertyDomainAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLAnnotationPropertyDomainAxiom(org.semanticweb.owlapi.model.OWLAnnotationProperty,org.semanticweb.owlapi.model.IRI,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLAnnotationPropertyRangeAxiom* getOWLAnnotationPropertyRangeAxiom(org::semanticweb::owlapi::model::OWLAnnotationProperty* arg1, org::semanticweb::owlapi::model::IRI* arg2); // public abstract org.semanticweb.owlapi.model.OWLAnnotationPropertyRangeAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLAnnotationPropertyRangeAxiom(org.semanticweb.owlapi.model.OWLAnnotationProperty,org.semanticweb.owlapi.model.IRI)
    virtual org::semanticweb::owlapi::model::OWLAnnotationPropertyRangeAxiom* getOWLAnnotationPropertyRangeAxiom(org::semanticweb::owlapi::model::OWLAnnotationProperty* arg1, org::semanticweb::owlapi::model::IRI* arg2, java::util::Set* arg3); // public abstract org.semanticweb.owlapi.model.OWLAnnotationPropertyRangeAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLAnnotationPropertyRangeAxiom(org.semanticweb.owlapi.model.OWLAnnotationProperty,org.semanticweb.owlapi.model.IRI,java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLSubAnnotationPropertyOfAxiom* getOWLSubAnnotationPropertyOfAxiom(org::semanticweb::owlapi::model::OWLAnnotationProperty* arg1, org::semanticweb::owlapi::model::OWLAnnotationProperty* arg2); // public abstract org.semanticweb.owlapi.model.OWLSubAnnotationPropertyOfAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLSubAnnotationPropertyOfAxiom(org.semanticweb.owlapi.model.OWLAnnotationProperty,org.semanticweb.owlapi.model.OWLAnnotationProperty)
    virtual org::semanticweb::owlapi::model::OWLSubAnnotationPropertyOfAxiom* getOWLSubAnnotationPropertyOfAxiom(org::semanticweb::owlapi::model::OWLAnnotationProperty* arg1, org::semanticweb::owlapi::model::OWLAnnotationProperty* arg2, java::util::Set* arg3); // public abstract org.semanticweb.owlapi.model.OWLSubAnnotationPropertyOfAxiom org.semanticweb.owlapi.model.OWLDataFactory.getOWLSubAnnotationPropertyOfAxiom(org.semanticweb.owlapi.model.OWLAnnotationProperty,org.semanticweb.owlapi.model.OWLAnnotationProperty,java.util.Set)
    virtual void purge(); // public abstract void org.semanticweb.owlapi.model.OWLDataFactory.purge()

};
}
}
}
}
#endif
