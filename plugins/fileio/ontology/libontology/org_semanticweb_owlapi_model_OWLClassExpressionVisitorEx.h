#ifndef org_semanticweb_owlapi_model_OWLClassExpressionVisitorEx_H
#define org_semanticweb_owlapi_model_OWLClassExpressionVisitorEx_H
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
class OWLClassExpressionVisitorEx : public java::lang::Object {
  public:
    OWLClassExpressionVisitorEx(JavaMarker* dummy);
    OWLClassExpressionVisitorEx(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLClass* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLClassExpressionVisitorEx.visit(org.semanticweb.owlapi.model.OWLClass)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLObjectIntersectionOf* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLClassExpressionVisitorEx.visit(org.semanticweb.owlapi.model.OWLObjectIntersectionOf)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLObjectUnionOf* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLClassExpressionVisitorEx.visit(org.semanticweb.owlapi.model.OWLObjectUnionOf)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLObjectComplementOf* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLClassExpressionVisitorEx.visit(org.semanticweb.owlapi.model.OWLObjectComplementOf)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLObjectSomeValuesFrom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLClassExpressionVisitorEx.visit(org.semanticweb.owlapi.model.OWLObjectSomeValuesFrom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLObjectAllValuesFrom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLClassExpressionVisitorEx.visit(org.semanticweb.owlapi.model.OWLObjectAllValuesFrom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLObjectHasValue* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLClassExpressionVisitorEx.visit(org.semanticweb.owlapi.model.OWLObjectHasValue)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLObjectMinCardinality* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLClassExpressionVisitorEx.visit(org.semanticweb.owlapi.model.OWLObjectMinCardinality)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLObjectExactCardinality* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLClassExpressionVisitorEx.visit(org.semanticweb.owlapi.model.OWLObjectExactCardinality)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLObjectMaxCardinality* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLClassExpressionVisitorEx.visit(org.semanticweb.owlapi.model.OWLObjectMaxCardinality)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLObjectHasSelf* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLClassExpressionVisitorEx.visit(org.semanticweb.owlapi.model.OWLObjectHasSelf)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLObjectOneOf* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLClassExpressionVisitorEx.visit(org.semanticweb.owlapi.model.OWLObjectOneOf)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLDataSomeValuesFrom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLClassExpressionVisitorEx.visit(org.semanticweb.owlapi.model.OWLDataSomeValuesFrom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLDataAllValuesFrom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLClassExpressionVisitorEx.visit(org.semanticweb.owlapi.model.OWLDataAllValuesFrom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLDataHasValue* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLClassExpressionVisitorEx.visit(org.semanticweb.owlapi.model.OWLDataHasValue)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLDataMinCardinality* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLClassExpressionVisitorEx.visit(org.semanticweb.owlapi.model.OWLDataMinCardinality)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLDataExactCardinality* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLClassExpressionVisitorEx.visit(org.semanticweb.owlapi.model.OWLDataExactCardinality)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLDataMaxCardinality* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLClassExpressionVisitorEx.visit(org.semanticweb.owlapi.model.OWLDataMaxCardinality)

};
}
}
}
}
#endif
