#ifndef org_semanticweb_owlapi_model_OWLClassExpression_H
#define org_semanticweb_owlapi_model_OWLClassExpression_H
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
class OWLPropertyRange;
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
class OWLClassExpressionVisitor;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLClassExpressionVisitorEx;
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
class ClassExpressionType;
}
}
}
}

namespace java {
namespace util {
class Set;
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
class OWLClassExpression : public java::lang::Object {
  public:
    OWLClassExpression(JavaMarker* dummy);
    OWLClassExpression(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void accept(org::semanticweb::owlapi::model::OWLClassExpressionVisitor* arg1); // public abstract void org.semanticweb.owlapi.model.OWLClassExpression.accept(org.semanticweb.owlapi.model.OWLClassExpressionVisitor)
    virtual java::lang::Object* accept(org::semanticweb::owlapi::model::OWLClassExpressionVisitorEx* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLClassExpression.accept(org.semanticweb.owlapi.model.OWLClassExpressionVisitorEx)
    virtual bool isAnonymous(); // public abstract boolean org.semanticweb.owlapi.model.OWLClassExpression.isAnonymous()
    virtual org::semanticweb::owlapi::model::OWLClass* asOWLClass(); // public abstract org.semanticweb.owlapi.model.OWLClass org.semanticweb.owlapi.model.OWLClassExpression.asOWLClass()
    virtual org::semanticweb::owlapi::model::ClassExpressionType* getClassExpressionType(); // public abstract org.semanticweb.owlapi.model.ClassExpressionType org.semanticweb.owlapi.model.OWLClassExpression.getClassExpressionType()
    virtual bool isClassExpressionLiteral(); // public abstract boolean org.semanticweb.owlapi.model.OWLClassExpression.isClassExpressionLiteral()
    virtual bool isOWLThing(); // public abstract boolean org.semanticweb.owlapi.model.OWLClassExpression.isOWLThing()
    virtual bool isOWLNothing(); // public abstract boolean org.semanticweb.owlapi.model.OWLClassExpression.isOWLNothing()
    virtual org::semanticweb::owlapi::model::OWLClassExpression* getNNF(); // public abstract org.semanticweb.owlapi.model.OWLClassExpression org.semanticweb.owlapi.model.OWLClassExpression.getNNF()
    virtual org::semanticweb::owlapi::model::OWLClassExpression* getComplementNNF(); // public abstract org.semanticweb.owlapi.model.OWLClassExpression org.semanticweb.owlapi.model.OWLClassExpression.getComplementNNF()
    virtual org::semanticweb::owlapi::model::OWLClassExpression* getObjectComplementOf(); // public abstract org.semanticweb.owlapi.model.OWLClassExpression org.semanticweb.owlapi.model.OWLClassExpression.getObjectComplementOf()
    virtual java::util::Set* asConjunctSet(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLClassExpression.asConjunctSet()
    virtual bool containsConjunct(org::semanticweb::owlapi::model::OWLClassExpression* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLClassExpression.containsConjunct(org.semanticweb.owlapi.model.OWLClassExpression)
    virtual java::util::Set* asDisjunctSet(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLClassExpression.asDisjunctSet()

};
}
}
}
}
#endif
