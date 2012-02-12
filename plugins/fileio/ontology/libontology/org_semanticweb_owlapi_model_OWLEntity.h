#ifndef org_semanticweb_owlapi_model_OWLEntity_H
#define org_semanticweb_owlapi_model_OWLEntity_H
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
class OWLNamedObject;
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
class OWLOntology;
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
class OWLEntityVisitor;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLEntityVisitorEx;
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
class OWLClass;
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
class OWLDataProperty;
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
class OWLDatatype;
}
}
}
}

namespace java {
namespace lang {
class String;
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
class OWLEntity : public java::lang::Object {
  public:
    OWLEntity(JavaMarker* dummy);
    OWLEntity(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::util::Set* getAnnotations(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLEntity.getAnnotations(org.semanticweb.owlapi.model.OWLOntology)
    virtual java::util::Set* getAnnotations(org::semanticweb::owlapi::model::OWLOntology* arg1, org::semanticweb::owlapi::model::OWLAnnotationProperty* arg2); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLEntity.getAnnotations(org.semanticweb.owlapi.model.OWLOntology,org.semanticweb.owlapi.model.OWLAnnotationProperty)
    virtual void accept(org::semanticweb::owlapi::model::OWLEntityVisitor* arg1); // public abstract void org.semanticweb.owlapi.model.OWLEntity.accept(org.semanticweb.owlapi.model.OWLEntityVisitor)
    virtual java::lang::Object* accept(org::semanticweb::owlapi::model::OWLEntityVisitorEx* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLEntity.accept(org.semanticweb.owlapi.model.OWLEntityVisitorEx)
    virtual bool isType(org::semanticweb::owlapi::model::EntityType* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLEntity.isType(org.semanticweb.owlapi.model.EntityType)
    virtual org::semanticweb::owlapi::model::OWLClass* asOWLClass(); // public abstract org.semanticweb.owlapi.model.OWLClass org.semanticweb.owlapi.model.OWLEntity.asOWLClass()
    virtual org::semanticweb::owlapi::model::EntityType* getEntityType(); // public abstract org.semanticweb.owlapi.model.EntityType org.semanticweb.owlapi.model.OWLEntity.getEntityType()
    virtual org::semanticweb::owlapi::model::OWLEntity* getOWLEntity(org::semanticweb::owlapi::model::EntityType* arg1); // public abstract org.semanticweb.owlapi.model.OWLEntity org.semanticweb.owlapi.model.OWLEntity.getOWLEntity(org.semanticweb.owlapi.model.EntityType)
    virtual java::util::Set* getAnnotationAssertionAxioms(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLEntity.getAnnotationAssertionAxioms(org.semanticweb.owlapi.model.OWLOntology)
    virtual bool isBuiltIn(); // public abstract boolean org.semanticweb.owlapi.model.OWLEntity.isBuiltIn()
    virtual bool isOWLClass(); // public abstract boolean org.semanticweb.owlapi.model.OWLEntity.isOWLClass()
    virtual bool isOWLObjectProperty(); // public abstract boolean org.semanticweb.owlapi.model.OWLEntity.isOWLObjectProperty()
    virtual org::semanticweb::owlapi::model::OWLObjectProperty* asOWLObjectProperty(); // public abstract org.semanticweb.owlapi.model.OWLObjectProperty org.semanticweb.owlapi.model.OWLEntity.asOWLObjectProperty()
    virtual bool isOWLDataProperty(); // public abstract boolean org.semanticweb.owlapi.model.OWLEntity.isOWLDataProperty()
    virtual org::semanticweb::owlapi::model::OWLDataProperty* asOWLDataProperty(); // public abstract org.semanticweb.owlapi.model.OWLDataProperty org.semanticweb.owlapi.model.OWLEntity.asOWLDataProperty()
    virtual bool isOWLNamedIndividual(); // public abstract boolean org.semanticweb.owlapi.model.OWLEntity.isOWLNamedIndividual()
    virtual org::semanticweb::owlapi::model::OWLNamedIndividual* asOWLNamedIndividual(); // public abstract org.semanticweb.owlapi.model.OWLNamedIndividual org.semanticweb.owlapi.model.OWLEntity.asOWLNamedIndividual()
    virtual bool isOWLDatatype(); // public abstract boolean org.semanticweb.owlapi.model.OWLEntity.isOWLDatatype()
    virtual org::semanticweb::owlapi::model::OWLDatatype* asOWLDatatype(); // public abstract org.semanticweb.owlapi.model.OWLDatatype org.semanticweb.owlapi.model.OWLEntity.asOWLDatatype()
    virtual bool isOWLAnnotationProperty(); // public abstract boolean org.semanticweb.owlapi.model.OWLEntity.isOWLAnnotationProperty()
    virtual org::semanticweb::owlapi::model::OWLAnnotationProperty* asOWLAnnotationProperty(); // public abstract org.semanticweb.owlapi.model.OWLAnnotationProperty org.semanticweb.owlapi.model.OWLEntity.asOWLAnnotationProperty()
    virtual const char* toStringID(); // public abstract java.lang.String org.semanticweb.owlapi.model.OWLEntity.toStringID()
    virtual java::util::Set* getReferencingAxioms(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLEntity.getReferencingAxioms(org.semanticweb.owlapi.model.OWLOntology)
    virtual java::util::Set* getReferencingAxioms(org::semanticweb::owlapi::model::OWLOntology* arg1, bool arg2); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLEntity.getReferencingAxioms(org.semanticweb.owlapi.model.OWLOntology,boolean)

};
}
}
}
}
#endif
