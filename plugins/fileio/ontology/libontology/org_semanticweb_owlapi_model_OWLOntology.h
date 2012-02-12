#ifndef org_semanticweb_owlapi_model_OWLOntology_H
#define org_semanticweb_owlapi_model_OWLOntology_H
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

namespace java {
namespace util {
class Set;
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class AxiomType;
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
class OWLObjectPropertyExpression;
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
class OWLIndividual;
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
class OWLDatatype;
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
class OWLEntity;
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
class OWLOntologyManager;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntologyID;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAxiom;
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
class OWLOntology : public java::lang::Object {
  public:
    OWLOntology(JavaMarker* dummy);
    OWLOntology(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool isEmpty(); // public abstract boolean org.semanticweb.owlapi.model.OWLOntology.isEmpty()
    virtual java::util::Set* getAnnotations(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getAnnotations()
    virtual java::util::Set* getSignature(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getSignature()
    virtual java::util::Set* getSignature(bool arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getSignature(boolean)
    virtual java::util::Set* getClassesInSignature(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getClassesInSignature()
    virtual java::util::Set* getClassesInSignature(bool arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getClassesInSignature(boolean)
    virtual java::util::Set* getAxioms(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getAxioms()
    virtual java::util::Set* getAxioms(org::semanticweb::owlapi::model::AxiomType* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getAxioms(org.semanticweb.owlapi.model.AxiomType)
    virtual java::util::Set* getAxioms(org::semanticweb::owlapi::model::AxiomType* arg1, bool arg2); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getAxioms(org.semanticweb.owlapi.model.AxiomType,boolean)
    virtual java::util::Set* getAxioms(org::semanticweb::owlapi::model::OWLClass* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getAxioms(org.semanticweb.owlapi.model.OWLClass)
    virtual java::util::Set* getAxioms(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getAxioms(org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual java::util::Set* getAxioms(org::semanticweb::owlapi::model::OWLDataProperty* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getAxioms(org.semanticweb.owlapi.model.OWLDataProperty)
    virtual java::util::Set* getAxioms(org::semanticweb::owlapi::model::OWLIndividual* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getAxioms(org.semanticweb.owlapi.model.OWLIndividual)
    virtual java::util::Set* getAxioms(org::semanticweb::owlapi::model::OWLAnnotationProperty* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getAxioms(org.semanticweb.owlapi.model.OWLAnnotationProperty)
    virtual java::util::Set* getAxioms(org::semanticweb::owlapi::model::OWLDatatype* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getAxioms(org.semanticweb.owlapi.model.OWLDatatype)
    virtual java::util::Set* getIndividualsInSignature(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getIndividualsInSignature()
    virtual java::util::Set* getIndividualsInSignature(bool arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getIndividualsInSignature(boolean)
    virtual bool isAnonymous(); // public abstract boolean org.semanticweb.owlapi.model.OWLOntology.isAnonymous()
    virtual java::util::Set* getAnnotationAssertionAxioms(org::semanticweb::owlapi::model::OWLAnnotationSubject* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getAnnotationAssertionAxioms(org.semanticweb.owlapi.model.OWLAnnotationSubject)
    virtual java::util::Set* getReferencingAxioms(org::semanticweb::owlapi::model::OWLEntity* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getReferencingAxioms(org.semanticweb.owlapi.model.OWLEntity)
    virtual java::util::Set* getReferencingAxioms(org::semanticweb::owlapi::model::OWLEntity* arg1, bool arg2); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getReferencingAxioms(org.semanticweb.owlapi.model.OWLEntity,boolean)
    virtual java::util::Set* getReferencingAxioms(org::semanticweb::owlapi::model::OWLAnonymousIndividual* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getReferencingAxioms(org.semanticweb.owlapi.model.OWLAnonymousIndividual)
    virtual java::util::Set* getDataPropertiesInSignature(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getDataPropertiesInSignature()
    virtual java::util::Set* getDataPropertiesInSignature(bool arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getDataPropertiesInSignature(boolean)
    virtual java::util::Set* getObjectPropertiesInSignature(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getObjectPropertiesInSignature()
    virtual java::util::Set* getObjectPropertiesInSignature(bool arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getObjectPropertiesInSignature(boolean)
    virtual java::util::Set* getDatatypesInSignature(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getDatatypesInSignature()
    virtual java::util::Set* getDatatypesInSignature(bool arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getDatatypesInSignature(boolean)
    virtual org::semanticweb::owlapi::model::OWLOntologyManager* getOWLOntologyManager(); // public abstract org.semanticweb.owlapi.model.OWLOntologyManager org.semanticweb.owlapi.model.OWLOntology.getOWLOntologyManager()
    virtual org::semanticweb::owlapi::model::OWLOntologyID* getOntologyID(); // public abstract org.semanticweb.owlapi.model.OWLOntologyID org.semanticweb.owlapi.model.OWLOntology.getOntologyID()
    virtual java::util::Set* getDirectImportsDocuments(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getDirectImportsDocuments() throws org.semanticweb.owlapi.model.UnknownOWLOntologyException
    virtual java::util::Set* getDirectImports(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getDirectImports() throws org.semanticweb.owlapi.model.UnknownOWLOntologyException
    virtual java::util::Set* getImports(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getImports() throws org.semanticweb.owlapi.model.UnknownOWLOntologyException
    virtual java::util::Set* getImportsClosure(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getImportsClosure() throws org.semanticweb.owlapi.model.UnknownOWLOntologyException
    virtual java::util::Set* getImportsDeclarations(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getImportsDeclarations()
    virtual int getAxiomCount(); // public abstract int org.semanticweb.owlapi.model.OWLOntology.getAxiomCount()
    virtual int getAxiomCount(org::semanticweb::owlapi::model::AxiomType* arg1); // public abstract int org.semanticweb.owlapi.model.OWLOntology.getAxiomCount(org.semanticweb.owlapi.model.AxiomType)
    virtual int getAxiomCount(org::semanticweb::owlapi::model::AxiomType* arg1, bool arg2); // public abstract int org.semanticweb.owlapi.model.OWLOntology.getAxiomCount(org.semanticweb.owlapi.model.AxiomType,boolean)
    virtual java::util::Set* getLogicalAxioms(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getLogicalAxioms()
    virtual int getLogicalAxiomCount(); // public abstract int org.semanticweb.owlapi.model.OWLOntology.getLogicalAxiomCount()
    virtual java::util::Set* getTBoxAxioms(bool arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getTBoxAxioms(boolean)
    virtual java::util::Set* getABoxAxioms(bool arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getABoxAxioms(boolean)
    virtual java::util::Set* getRBoxAxioms(bool arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getRBoxAxioms(boolean)
    virtual bool containsAxiom(org::semanticweb::owlapi::model::OWLAxiom* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLOntology.containsAxiom(org.semanticweb.owlapi.model.OWLAxiom)
    virtual bool containsAxiom(org::semanticweb::owlapi::model::OWLAxiom* arg1, bool arg2); // public abstract boolean org.semanticweb.owlapi.model.OWLOntology.containsAxiom(org.semanticweb.owlapi.model.OWLAxiom,boolean)
    virtual bool containsAxiomIgnoreAnnotations(org::semanticweb::owlapi::model::OWLAxiom* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLOntology.containsAxiomIgnoreAnnotations(org.semanticweb.owlapi.model.OWLAxiom)
    virtual bool containsAxiomIgnoreAnnotations(org::semanticweb::owlapi::model::OWLAxiom* arg1, bool arg2); // public abstract boolean org.semanticweb.owlapi.model.OWLOntology.containsAxiomIgnoreAnnotations(org.semanticweb.owlapi.model.OWLAxiom,boolean)
    virtual java::util::Set* getAxiomsIgnoreAnnotations(org::semanticweb::owlapi::model::OWLAxiom* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getAxiomsIgnoreAnnotations(org.semanticweb.owlapi.model.OWLAxiom)
    virtual java::util::Set* getAxiomsIgnoreAnnotations(org::semanticweb::owlapi::model::OWLAxiom* arg1, bool arg2); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getAxiomsIgnoreAnnotations(org.semanticweb.owlapi.model.OWLAxiom,boolean)
    virtual java::util::Set* getGeneralClassAxioms(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getGeneralClassAxioms()
    virtual java::util::Set* getReferencedAnonymousIndividuals(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getReferencedAnonymousIndividuals()
    virtual java::util::Set* getAnnotationPropertiesInSignature(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getAnnotationPropertiesInSignature()
    virtual bool containsEntityInSignature(org::semanticweb::owlapi::model::OWLEntity* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLOntology.containsEntityInSignature(org.semanticweb.owlapi.model.OWLEntity)
    virtual bool containsEntityInSignature(org::semanticweb::owlapi::model::OWLEntity* arg1, bool arg2); // public abstract boolean org.semanticweb.owlapi.model.OWLOntology.containsEntityInSignature(org.semanticweb.owlapi.model.OWLEntity,boolean)
    virtual bool containsEntityInSignature(org::semanticweb::owlapi::model::IRI* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLOntology.containsEntityInSignature(org.semanticweb.owlapi.model.IRI)
    virtual bool containsEntityInSignature(org::semanticweb::owlapi::model::IRI* arg1, bool arg2); // public abstract boolean org.semanticweb.owlapi.model.OWLOntology.containsEntityInSignature(org.semanticweb.owlapi.model.IRI,boolean)
    virtual bool isDeclared(org::semanticweb::owlapi::model::OWLEntity* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLOntology.isDeclared(org.semanticweb.owlapi.model.OWLEntity)
    virtual bool isDeclared(org::semanticweb::owlapi::model::OWLEntity* arg1, bool arg2); // public abstract boolean org.semanticweb.owlapi.model.OWLOntology.isDeclared(org.semanticweb.owlapi.model.OWLEntity,boolean)
    virtual bool containsClassInSignature(org::semanticweb::owlapi::model::IRI* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLOntology.containsClassInSignature(org.semanticweb.owlapi.model.IRI)
    virtual bool containsClassInSignature(org::semanticweb::owlapi::model::IRI* arg1, bool arg2); // public abstract boolean org.semanticweb.owlapi.model.OWLOntology.containsClassInSignature(org.semanticweb.owlapi.model.IRI,boolean)
    virtual bool containsObjectPropertyInSignature(org::semanticweb::owlapi::model::IRI* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLOntology.containsObjectPropertyInSignature(org.semanticweb.owlapi.model.IRI)
    virtual bool containsObjectPropertyInSignature(org::semanticweb::owlapi::model::IRI* arg1, bool arg2); // public abstract boolean org.semanticweb.owlapi.model.OWLOntology.containsObjectPropertyInSignature(org.semanticweb.owlapi.model.IRI,boolean)
    virtual bool containsDataPropertyInSignature(org::semanticweb::owlapi::model::IRI* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLOntology.containsDataPropertyInSignature(org.semanticweb.owlapi.model.IRI)
    virtual bool containsDataPropertyInSignature(org::semanticweb::owlapi::model::IRI* arg1, bool arg2); // public abstract boolean org.semanticweb.owlapi.model.OWLOntology.containsDataPropertyInSignature(org.semanticweb.owlapi.model.IRI,boolean)
    virtual bool containsAnnotationPropertyInSignature(org::semanticweb::owlapi::model::IRI* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLOntology.containsAnnotationPropertyInSignature(org.semanticweb.owlapi.model.IRI)
    virtual bool containsAnnotationPropertyInSignature(org::semanticweb::owlapi::model::IRI* arg1, bool arg2); // public abstract boolean org.semanticweb.owlapi.model.OWLOntology.containsAnnotationPropertyInSignature(org.semanticweb.owlapi.model.IRI,boolean)
    virtual bool containsIndividualInSignature(org::semanticweb::owlapi::model::IRI* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLOntology.containsIndividualInSignature(org.semanticweb.owlapi.model.IRI)
    virtual bool containsIndividualInSignature(org::semanticweb::owlapi::model::IRI* arg1, bool arg2); // public abstract boolean org.semanticweb.owlapi.model.OWLOntology.containsIndividualInSignature(org.semanticweb.owlapi.model.IRI,boolean)
    virtual bool containsDatatypeInSignature(org::semanticweb::owlapi::model::IRI* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLOntology.containsDatatypeInSignature(org.semanticweb.owlapi.model.IRI)
    virtual bool containsDatatypeInSignature(org::semanticweb::owlapi::model::IRI* arg1, bool arg2); // public abstract boolean org.semanticweb.owlapi.model.OWLOntology.containsDatatypeInSignature(org.semanticweb.owlapi.model.IRI,boolean)
    virtual java::util::Set* getEntitiesInSignature(org::semanticweb::owlapi::model::IRI* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getEntitiesInSignature(org.semanticweb.owlapi.model.IRI)
    virtual java::util::Set* getEntitiesInSignature(org::semanticweb::owlapi::model::IRI* arg1, bool arg2); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getEntitiesInSignature(org.semanticweb.owlapi.model.IRI,boolean)
    virtual java::util::Set* getSubAnnotationPropertyOfAxioms(org::semanticweb::owlapi::model::OWLAnnotationProperty* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getSubAnnotationPropertyOfAxioms(org.semanticweb.owlapi.model.OWLAnnotationProperty)
    virtual java::util::Set* getAnnotationPropertyDomainAxioms(org::semanticweb::owlapi::model::OWLAnnotationProperty* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getAnnotationPropertyDomainAxioms(org.semanticweb.owlapi.model.OWLAnnotationProperty)
    virtual java::util::Set* getAnnotationPropertyRangeAxioms(org::semanticweb::owlapi::model::OWLAnnotationProperty* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getAnnotationPropertyRangeAxioms(org.semanticweb.owlapi.model.OWLAnnotationProperty)
    virtual java::util::Set* getDeclarationAxioms(org::semanticweb::owlapi::model::OWLEntity* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getDeclarationAxioms(org.semanticweb.owlapi.model.OWLEntity)
    virtual java::util::Set* getSubClassAxiomsForSubClass(org::semanticweb::owlapi::model::OWLClass* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getSubClassAxiomsForSubClass(org.semanticweb.owlapi.model.OWLClass)
    virtual java::util::Set* getSubClassAxiomsForSuperClass(org::semanticweb::owlapi::model::OWLClass* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getSubClassAxiomsForSuperClass(org.semanticweb.owlapi.model.OWLClass)
    virtual java::util::Set* getEquivalentClassesAxioms(org::semanticweb::owlapi::model::OWLClass* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getEquivalentClassesAxioms(org.semanticweb.owlapi.model.OWLClass)
    virtual java::util::Set* getDisjointClassesAxioms(org::semanticweb::owlapi::model::OWLClass* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getDisjointClassesAxioms(org.semanticweb.owlapi.model.OWLClass)
    virtual java::util::Set* getDisjointUnionAxioms(org::semanticweb::owlapi::model::OWLClass* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getDisjointUnionAxioms(org.semanticweb.owlapi.model.OWLClass)
    virtual java::util::Set* getHasKeyAxioms(org::semanticweb::owlapi::model::OWLClass* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getHasKeyAxioms(org.semanticweb.owlapi.model.OWLClass)
    virtual java::util::Set* getObjectSubPropertyAxiomsForSubProperty(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getObjectSubPropertyAxiomsForSubProperty(org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual java::util::Set* getObjectSubPropertyAxiomsForSuperProperty(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getObjectSubPropertyAxiomsForSuperProperty(org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual java::util::Set* getObjectPropertyDomainAxioms(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getObjectPropertyDomainAxioms(org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual java::util::Set* getObjectPropertyRangeAxioms(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getObjectPropertyRangeAxioms(org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual java::util::Set* getInverseObjectPropertyAxioms(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getInverseObjectPropertyAxioms(org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual java::util::Set* getEquivalentObjectPropertiesAxioms(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getEquivalentObjectPropertiesAxioms(org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual java::util::Set* getDisjointObjectPropertiesAxioms(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getDisjointObjectPropertiesAxioms(org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual java::util::Set* getFunctionalObjectPropertyAxioms(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getFunctionalObjectPropertyAxioms(org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual java::util::Set* getInverseFunctionalObjectPropertyAxioms(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getInverseFunctionalObjectPropertyAxioms(org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual java::util::Set* getSymmetricObjectPropertyAxioms(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getSymmetricObjectPropertyAxioms(org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual java::util::Set* getAsymmetricObjectPropertyAxioms(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getAsymmetricObjectPropertyAxioms(org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual java::util::Set* getReflexiveObjectPropertyAxioms(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getReflexiveObjectPropertyAxioms(org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual java::util::Set* getIrreflexiveObjectPropertyAxioms(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getIrreflexiveObjectPropertyAxioms(org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual java::util::Set* getTransitiveObjectPropertyAxioms(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getTransitiveObjectPropertyAxioms(org.semanticweb.owlapi.model.OWLObjectPropertyExpression)
    virtual java::util::Set* getDataSubPropertyAxiomsForSubProperty(org::semanticweb::owlapi::model::OWLDataProperty* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getDataSubPropertyAxiomsForSubProperty(org.semanticweb.owlapi.model.OWLDataProperty)
    virtual java::util::Set* getDataSubPropertyAxiomsForSuperProperty(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getDataSubPropertyAxiomsForSuperProperty(org.semanticweb.owlapi.model.OWLDataPropertyExpression)
    virtual java::util::Set* getDataPropertyDomainAxioms(org::semanticweb::owlapi::model::OWLDataProperty* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getDataPropertyDomainAxioms(org.semanticweb.owlapi.model.OWLDataProperty)
    virtual java::util::Set* getDataPropertyRangeAxioms(org::semanticweb::owlapi::model::OWLDataProperty* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getDataPropertyRangeAxioms(org.semanticweb.owlapi.model.OWLDataProperty)
    virtual java::util::Set* getEquivalentDataPropertiesAxioms(org::semanticweb::owlapi::model::OWLDataProperty* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getEquivalentDataPropertiesAxioms(org.semanticweb.owlapi.model.OWLDataProperty)
    virtual java::util::Set* getDisjointDataPropertiesAxioms(org::semanticweb::owlapi::model::OWLDataProperty* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getDisjointDataPropertiesAxioms(org.semanticweb.owlapi.model.OWLDataProperty)
    virtual java::util::Set* getFunctionalDataPropertyAxioms(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getFunctionalDataPropertyAxioms(org.semanticweb.owlapi.model.OWLDataPropertyExpression)
    virtual java::util::Set* getClassAssertionAxioms(org::semanticweb::owlapi::model::OWLIndividual* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getClassAssertionAxioms(org.semanticweb.owlapi.model.OWLIndividual)
    virtual java::util::Set* getClassAssertionAxioms(org::semanticweb::owlapi::model::OWLClassExpression* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getClassAssertionAxioms(org.semanticweb.owlapi.model.OWLClassExpression)
    virtual java::util::Set* getDataPropertyAssertionAxioms(org::semanticweb::owlapi::model::OWLIndividual* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getDataPropertyAssertionAxioms(org.semanticweb.owlapi.model.OWLIndividual)
    virtual java::util::Set* getObjectPropertyAssertionAxioms(org::semanticweb::owlapi::model::OWLIndividual* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getObjectPropertyAssertionAxioms(org.semanticweb.owlapi.model.OWLIndividual)
    virtual java::util::Set* getNegativeObjectPropertyAssertionAxioms(org::semanticweb::owlapi::model::OWLIndividual* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getNegativeObjectPropertyAssertionAxioms(org.semanticweb.owlapi.model.OWLIndividual)
    virtual java::util::Set* getNegativeDataPropertyAssertionAxioms(org::semanticweb::owlapi::model::OWLIndividual* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getNegativeDataPropertyAssertionAxioms(org.semanticweb.owlapi.model.OWLIndividual)
    virtual java::util::Set* getSameIndividualAxioms(org::semanticweb::owlapi::model::OWLIndividual* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getSameIndividualAxioms(org.semanticweb.owlapi.model.OWLIndividual)
    virtual java::util::Set* getDifferentIndividualAxioms(org::semanticweb::owlapi::model::OWLIndividual* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getDifferentIndividualAxioms(org.semanticweb.owlapi.model.OWLIndividual)
    virtual java::util::Set* getDatatypeDefinitions(org::semanticweb::owlapi::model::OWLDatatype* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntology.getDatatypeDefinitions(org.semanticweb.owlapi.model.OWLDatatype)

};
}
}
}
}
#endif
