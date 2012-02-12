#ifndef org_semanticweb_owlapi_model_OWLIndividual_H
#define org_semanticweb_owlapi_model_OWLIndividual_H
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
class OWLPropertyAssertionObject;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLIndividualVisitor;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLIndividualVisitorEx;
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

namespace java {
namespace lang {
class String;
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

namespace java {
namespace util {
class Map;
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
class OWLDataPropertyExpression;
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
class OWLIndividual : public java::lang::Object {
  public:
    OWLIndividual(JavaMarker* dummy);
    OWLIndividual(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void accept(org::semanticweb::owlapi::model::OWLIndividualVisitor* arg1); // public abstract void org.semanticweb.owlapi.model.OWLIndividual.accept(org.semanticweb.owlapi.model.OWLIndividualVisitor)
    virtual java::lang::Object* accept(org::semanticweb::owlapi::model::OWLIndividualVisitorEx* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLIndividual.accept(org.semanticweb.owlapi.model.OWLIndividualVisitorEx)
    virtual bool isAnonymous(); // public abstract boolean org.semanticweb.owlapi.model.OWLIndividual.isAnonymous()
    virtual org::semanticweb::owlapi::model::OWLNamedIndividual* asOWLNamedIndividual(); // public abstract org.semanticweb.owlapi.model.OWLNamedIndividual org.semanticweb.owlapi.model.OWLIndividual.asOWLNamedIndividual()
    virtual const char* toStringID(); // public abstract java.lang.String org.semanticweb.owlapi.model.OWLIndividual.toStringID()
    virtual bool isNamed(); // public abstract boolean org.semanticweb.owlapi.model.OWLIndividual.isNamed()
    virtual org::semanticweb::owlapi::model::OWLAnonymousIndividual* asOWLAnonymousIndividual(); // public abstract org.semanticweb.owlapi.model.OWLAnonymousIndividual org.semanticweb.owlapi.model.OWLIndividual.asOWLAnonymousIndividual()
    virtual java::util::Set* getTypes(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLIndividual.getTypes(org.semanticweb.owlapi.model.OWLOntology)
    virtual java::util::Set* getTypes(java::util::Set* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLIndividual.getTypes(java.util.Set)
    virtual java::util::Map* getObjectPropertyValues(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract java.util.Map org.semanticweb.owlapi.model.OWLIndividual.getObjectPropertyValues(org.semanticweb.owlapi.model.OWLOntology)
    virtual java::util::Set* getObjectPropertyValues(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLOntology* arg2); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLIndividual.getObjectPropertyValues(org.semanticweb.owlapi.model.OWLObjectPropertyExpression,org.semanticweb.owlapi.model.OWLOntology)
    virtual bool hasObjectPropertyValue(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2, org::semanticweb::owlapi::model::OWLOntology* arg3); // public abstract boolean org.semanticweb.owlapi.model.OWLIndividual.hasObjectPropertyValue(org.semanticweb.owlapi.model.OWLObjectPropertyExpression,org.semanticweb.owlapi.model.OWLIndividual,org.semanticweb.owlapi.model.OWLOntology)
    virtual bool hasNegativeObjectPropertyValue(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLIndividual* arg2, org::semanticweb::owlapi::model::OWLOntology* arg3); // public abstract boolean org.semanticweb.owlapi.model.OWLIndividual.hasNegativeObjectPropertyValue(org.semanticweb.owlapi.model.OWLObjectPropertyExpression,org.semanticweb.owlapi.model.OWLIndividual,org.semanticweb.owlapi.model.OWLOntology)
    virtual java::util::Map* getNegativeObjectPropertyValues(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract java.util.Map org.semanticweb.owlapi.model.OWLIndividual.getNegativeObjectPropertyValues(org.semanticweb.owlapi.model.OWLOntology)
    virtual java::util::Map* getDataPropertyValues(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract java.util.Map org.semanticweb.owlapi.model.OWLIndividual.getDataPropertyValues(org.semanticweb.owlapi.model.OWLOntology)
    virtual java::util::Set* getDataPropertyValues(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLOntology* arg2); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLIndividual.getDataPropertyValues(org.semanticweb.owlapi.model.OWLDataPropertyExpression,org.semanticweb.owlapi.model.OWLOntology)
    virtual java::util::Map* getNegativeDataPropertyValues(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract java.util.Map org.semanticweb.owlapi.model.OWLIndividual.getNegativeDataPropertyValues(org.semanticweb.owlapi.model.OWLOntology)
    virtual bool hasNegativeDataPropertyValue(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::OWLLiteral* arg2, org::semanticweb::owlapi::model::OWLOntology* arg3); // public abstract boolean org.semanticweb.owlapi.model.OWLIndividual.hasNegativeDataPropertyValue(org.semanticweb.owlapi.model.OWLDataPropertyExpression,org.semanticweb.owlapi.model.OWLLiteral,org.semanticweb.owlapi.model.OWLOntology)
    virtual java::util::Set* getSameIndividuals(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLIndividual.getSameIndividuals(org.semanticweb.owlapi.model.OWLOntology)
    virtual java::util::Set* getDifferentIndividuals(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLIndividual.getDifferentIndividuals(org.semanticweb.owlapi.model.OWLOntology)

};
}
}
}
}
#endif
