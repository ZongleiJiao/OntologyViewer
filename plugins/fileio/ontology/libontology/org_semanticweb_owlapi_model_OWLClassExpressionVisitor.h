#ifndef org_semanticweb_owlapi_model_OWLClassExpressionVisitor_H
#define org_semanticweb_owlapi_model_OWLClassExpressionVisitor_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

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
class OWLObjectIntersectionOf;
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
class OWLObjectComplementOf;
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
class OWLObjectAllValuesFrom;
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
class OWLObjectMinCardinality;
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
class OWLObjectOneOf;
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
class OWLDataAllValuesFrom;
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
class OWLDataMinCardinality;
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
class OWLClassExpressionVisitor : public java::lang::Object {
  public:
    OWLClassExpressionVisitor(JavaMarker* dummy);
    OWLClassExpressionVisitor(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void visit(org::semanticweb::owlapi::model::OWLClass* arg1); // public abstract void org.semanticweb.owlapi.model.OWLClassExpressionVisitor.visit(org.semanticweb.owlapi.model.OWLClass)
    virtual void visit(org::semanticweb::owlapi::model::OWLObjectIntersectionOf* arg1); // public abstract void org.semanticweb.owlapi.model.OWLClassExpressionVisitor.visit(org.semanticweb.owlapi.model.OWLObjectIntersectionOf)
    virtual void visit(org::semanticweb::owlapi::model::OWLObjectUnionOf* arg1); // public abstract void org.semanticweb.owlapi.model.OWLClassExpressionVisitor.visit(org.semanticweb.owlapi.model.OWLObjectUnionOf)
    virtual void visit(org::semanticweb::owlapi::model::OWLObjectComplementOf* arg1); // public abstract void org.semanticweb.owlapi.model.OWLClassExpressionVisitor.visit(org.semanticweb.owlapi.model.OWLObjectComplementOf)
    virtual void visit(org::semanticweb::owlapi::model::OWLObjectSomeValuesFrom* arg1); // public abstract void org.semanticweb.owlapi.model.OWLClassExpressionVisitor.visit(org.semanticweb.owlapi.model.OWLObjectSomeValuesFrom)
    virtual void visit(org::semanticweb::owlapi::model::OWLObjectAllValuesFrom* arg1); // public abstract void org.semanticweb.owlapi.model.OWLClassExpressionVisitor.visit(org.semanticweb.owlapi.model.OWLObjectAllValuesFrom)
    virtual void visit(org::semanticweb::owlapi::model::OWLObjectHasValue* arg1); // public abstract void org.semanticweb.owlapi.model.OWLClassExpressionVisitor.visit(org.semanticweb.owlapi.model.OWLObjectHasValue)
    virtual void visit(org::semanticweb::owlapi::model::OWLObjectMinCardinality* arg1); // public abstract void org.semanticweb.owlapi.model.OWLClassExpressionVisitor.visit(org.semanticweb.owlapi.model.OWLObjectMinCardinality)
    virtual void visit(org::semanticweb::owlapi::model::OWLObjectExactCardinality* arg1); // public abstract void org.semanticweb.owlapi.model.OWLClassExpressionVisitor.visit(org.semanticweb.owlapi.model.OWLObjectExactCardinality)
    virtual void visit(org::semanticweb::owlapi::model::OWLObjectMaxCardinality* arg1); // public abstract void org.semanticweb.owlapi.model.OWLClassExpressionVisitor.visit(org.semanticweb.owlapi.model.OWLObjectMaxCardinality)
    virtual void visit(org::semanticweb::owlapi::model::OWLObjectHasSelf* arg1); // public abstract void org.semanticweb.owlapi.model.OWLClassExpressionVisitor.visit(org.semanticweb.owlapi.model.OWLObjectHasSelf)
    virtual void visit(org::semanticweb::owlapi::model::OWLObjectOneOf* arg1); // public abstract void org.semanticweb.owlapi.model.OWLClassExpressionVisitor.visit(org.semanticweb.owlapi.model.OWLObjectOneOf)
    virtual void visit(org::semanticweb::owlapi::model::OWLDataSomeValuesFrom* arg1); // public abstract void org.semanticweb.owlapi.model.OWLClassExpressionVisitor.visit(org.semanticweb.owlapi.model.OWLDataSomeValuesFrom)
    virtual void visit(org::semanticweb::owlapi::model::OWLDataAllValuesFrom* arg1); // public abstract void org.semanticweb.owlapi.model.OWLClassExpressionVisitor.visit(org.semanticweb.owlapi.model.OWLDataAllValuesFrom)
    virtual void visit(org::semanticweb::owlapi::model::OWLDataHasValue* arg1); // public abstract void org.semanticweb.owlapi.model.OWLClassExpressionVisitor.visit(org.semanticweb.owlapi.model.OWLDataHasValue)
    virtual void visit(org::semanticweb::owlapi::model::OWLDataMinCardinality* arg1); // public abstract void org.semanticweb.owlapi.model.OWLClassExpressionVisitor.visit(org.semanticweb.owlapi.model.OWLDataMinCardinality)
    virtual void visit(org::semanticweb::owlapi::model::OWLDataExactCardinality* arg1); // public abstract void org.semanticweb.owlapi.model.OWLClassExpressionVisitor.visit(org.semanticweb.owlapi.model.OWLDataExactCardinality)
    virtual void visit(org::semanticweb::owlapi::model::OWLDataMaxCardinality* arg1); // public abstract void org.semanticweb.owlapi.model.OWLClassExpressionVisitor.visit(org.semanticweb.owlapi.model.OWLDataMaxCardinality)

};
}
}
}
}
#endif
