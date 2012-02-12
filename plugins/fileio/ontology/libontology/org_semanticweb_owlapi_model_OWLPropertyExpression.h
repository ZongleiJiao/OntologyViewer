#ifndef org_semanticweb_owlapi_model_OWLPropertyExpression_H
#define org_semanticweb_owlapi_model_OWLPropertyExpression_H
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
class OWLPropertyExpressionVisitor;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLPropertyExpressionVisitorEx;
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
class OWLPropertyExpression : public java::lang::Object {
  public:
    OWLPropertyExpression(JavaMarker* dummy);
    OWLPropertyExpression(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void accept(org::semanticweb::owlapi::model::OWLPropertyExpressionVisitor* arg1); // public abstract void org.semanticweb.owlapi.model.OWLPropertyExpression.accept(org.semanticweb.owlapi.model.OWLPropertyExpressionVisitor)
    virtual java::lang::Object* accept(org::semanticweb::owlapi::model::OWLPropertyExpressionVisitorEx* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLPropertyExpression.accept(org.semanticweb.owlapi.model.OWLPropertyExpressionVisitorEx)
    virtual java::util::Set* getDisjointProperties(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLPropertyExpression.getDisjointProperties(org.semanticweb.owlapi.model.OWLOntology)
    virtual java::util::Set* getDisjointProperties(java::util::Set* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLPropertyExpression.getDisjointProperties(java.util.Set)
    virtual java::util::Set* getEquivalentProperties(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLPropertyExpression.getEquivalentProperties(org.semanticweb.owlapi.model.OWLOntology)
    virtual java::util::Set* getEquivalentProperties(java::util::Set* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLPropertyExpression.getEquivalentProperties(java.util.Set)
    virtual bool isObjectPropertyExpression(); // public abstract boolean org.semanticweb.owlapi.model.OWLPropertyExpression.isObjectPropertyExpression()
    virtual bool isFunctional(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLPropertyExpression.isFunctional(org.semanticweb.owlapi.model.OWLOntology)
    virtual bool isFunctional(java::util::Set* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLPropertyExpression.isFunctional(java.util.Set)
    virtual bool isDataPropertyExpression(); // public abstract boolean org.semanticweb.owlapi.model.OWLPropertyExpression.isDataPropertyExpression()
    virtual java::util::Set* getDomains(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLPropertyExpression.getDomains(org.semanticweb.owlapi.model.OWLOntology)
    virtual java::util::Set* getDomains(java::util::Set* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLPropertyExpression.getDomains(java.util.Set)
    virtual java::util::Set* getRanges(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLPropertyExpression.getRanges(org.semanticweb.owlapi.model.OWLOntology)
    virtual java::util::Set* getRanges(java::util::Set* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLPropertyExpression.getRanges(java.util.Set)
    virtual java::util::Set* getSubProperties(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLPropertyExpression.getSubProperties(org.semanticweb.owlapi.model.OWLOntology)
    virtual java::util::Set* getSubProperties(java::util::Set* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLPropertyExpression.getSubProperties(java.util.Set)
    virtual java::util::Set* getSuperProperties(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLPropertyExpression.getSuperProperties(org.semanticweb.owlapi.model.OWLOntology)
    virtual java::util::Set* getSuperProperties(java::util::Set* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLPropertyExpression.getSuperProperties(java.util.Set)
    virtual bool isAnonymous(); // public abstract boolean org.semanticweb.owlapi.model.OWLPropertyExpression.isAnonymous()
    virtual bool isOWLTopObjectProperty(); // public abstract boolean org.semanticweb.owlapi.model.OWLPropertyExpression.isOWLTopObjectProperty()
    virtual bool isOWLBottomObjectProperty(); // public abstract boolean org.semanticweb.owlapi.model.OWLPropertyExpression.isOWLBottomObjectProperty()
    virtual bool isOWLTopDataProperty(); // public abstract boolean org.semanticweb.owlapi.model.OWLPropertyExpression.isOWLTopDataProperty()
    virtual bool isOWLBottomDataProperty(); // public abstract boolean org.semanticweb.owlapi.model.OWLPropertyExpression.isOWLBottomDataProperty()

};
}
}
}
}
#endif
