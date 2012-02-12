#ifndef org_semanticweb_owlapi_model_OWLObjectPropertyExpression_H
#define org_semanticweb_owlapi_model_OWLObjectPropertyExpression_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

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
class SWRLPredicate;
}
}
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
class Set;
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
class OWLObjectPropertyExpression : public java::lang::Object {
  public:
    OWLObjectPropertyExpression(JavaMarker* dummy);
    OWLObjectPropertyExpression(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool isInverseFunctional(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLObjectPropertyExpression.isInverseFunctional(org.semanticweb.owlapi.model.OWLOntology)
    virtual bool isInverseFunctional(java::util::Set* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLObjectPropertyExpression.isInverseFunctional(java.util.Set)
    virtual java::util::Set* getInverses(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLObjectPropertyExpression.getInverses(org.semanticweb.owlapi.model.OWLOntology)
    virtual java::util::Set* getInverses(java::util::Set* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLObjectPropertyExpression.getInverses(java.util.Set)
    virtual bool isAsymmetric(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLObjectPropertyExpression.isAsymmetric(org.semanticweb.owlapi.model.OWLOntology)
    virtual bool isAsymmetric(java::util::Set* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLObjectPropertyExpression.isAsymmetric(java.util.Set)
    virtual bool isIrreflexive(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLObjectPropertyExpression.isIrreflexive(org.semanticweb.owlapi.model.OWLOntology)
    virtual bool isIrreflexive(java::util::Set* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLObjectPropertyExpression.isIrreflexive(java.util.Set)
    virtual bool isReflexive(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLObjectPropertyExpression.isReflexive(org.semanticweb.owlapi.model.OWLOntology)
    virtual bool isReflexive(java::util::Set* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLObjectPropertyExpression.isReflexive(java.util.Set)
    virtual bool isSymmetric(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLObjectPropertyExpression.isSymmetric(org.semanticweb.owlapi.model.OWLOntology)
    virtual bool isSymmetric(java::util::Set* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLObjectPropertyExpression.isSymmetric(java.util.Set)
    virtual bool isTransitive(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLObjectPropertyExpression.isTransitive(org.semanticweb.owlapi.model.OWLOntology)
    virtual bool isTransitive(java::util::Set* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLObjectPropertyExpression.isTransitive(java.util.Set)
    virtual org::semanticweb::owlapi::model::OWLObjectProperty* asOWLObjectProperty(); // public abstract org.semanticweb.owlapi.model.OWLObjectProperty org.semanticweb.owlapi.model.OWLObjectPropertyExpression.asOWLObjectProperty()
    virtual org::semanticweb::owlapi::model::OWLObjectPropertyExpression* getInverseProperty(); // public abstract org.semanticweb.owlapi.model.OWLObjectPropertyExpression org.semanticweb.owlapi.model.OWLObjectPropertyExpression.getInverseProperty()
    virtual org::semanticweb::owlapi::model::OWLObjectPropertyExpression* getSimplified(); // public abstract org.semanticweb.owlapi.model.OWLObjectPropertyExpression org.semanticweb.owlapi.model.OWLObjectPropertyExpression.getSimplified()
    virtual org::semanticweb::owlapi::model::OWLObjectProperty* getNamedProperty(); // public abstract org.semanticweb.owlapi.model.OWLObjectProperty org.semanticweb.owlapi.model.OWLObjectPropertyExpression.getNamedProperty()

};
}
}
}
}
#endif
