#ifndef org_semanticweb_owlapi_model_OWLHasKeyAxiom_H
#define org_semanticweb_owlapi_model_OWLHasKeyAxiom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLLogicalAxiom;
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
class OWLHasKeyAxiom : public java::lang::Object {
  public:
    OWLHasKeyAxiom(JavaMarker* dummy);
    OWLHasKeyAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLHasKeyAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLHasKeyAxiom org.semanticweb.owlapi.model.OWLHasKeyAxiom.getAxiomWithoutAnnotations()
    virtual org::semanticweb::owlapi::model::OWLClassExpression* getClassExpression(); // public abstract org.semanticweb.owlapi.model.OWLClassExpression org.semanticweb.owlapi.model.OWLHasKeyAxiom.getClassExpression()
    virtual java::util::Set* getPropertyExpressions(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLHasKeyAxiom.getPropertyExpressions()
    virtual java::util::Set* getObjectPropertyExpressions(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLHasKeyAxiom.getObjectPropertyExpressions()
    virtual java::util::Set* getDataPropertyExpressions(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLHasKeyAxiom.getDataPropertyExpressions()

};
}
}
}
}
#endif
