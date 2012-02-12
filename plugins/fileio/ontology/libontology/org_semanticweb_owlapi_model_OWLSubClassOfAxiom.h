#ifndef org_semanticweb_owlapi_model_OWLSubClassOfAxiom_H
#define org_semanticweb_owlapi_model_OWLSubClassOfAxiom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLClassAxiom;
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
class OWLSubClassOfAxiom : public java::lang::Object {
  public:
    OWLSubClassOfAxiom(JavaMarker* dummy);
    OWLSubClassOfAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLClassExpression* getSuperClass(); // public abstract org.semanticweb.owlapi.model.OWLClassExpression org.semanticweb.owlapi.model.OWLSubClassOfAxiom.getSuperClass()
    virtual org::semanticweb::owlapi::model::OWLSubClassOfAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLSubClassOfAxiom org.semanticweb.owlapi.model.OWLSubClassOfAxiom.getAxiomWithoutAnnotations()
    virtual org::semanticweb::owlapi::model::OWLClassExpression* getSubClass(); // public abstract org.semanticweb.owlapi.model.OWLClassExpression org.semanticweb.owlapi.model.OWLSubClassOfAxiom.getSubClass()
    virtual bool isGCI(); // public abstract boolean org.semanticweb.owlapi.model.OWLSubClassOfAxiom.isGCI()

};
}
}
}
}
#endif
