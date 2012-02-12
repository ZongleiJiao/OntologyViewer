#ifndef org_semanticweb_owlapi_model_OWLSubPropertyChainOfAxiom_H
#define org_semanticweb_owlapi_model_OWLSubPropertyChainOfAxiom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObjectPropertyAxiom;
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

namespace java {
namespace util {
class List;
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
class OWLSubPropertyChainOfAxiom : public java::lang::Object {
  public:
    OWLSubPropertyChainOfAxiom(JavaMarker* dummy);
    OWLSubPropertyChainOfAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLSubPropertyChainOfAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLSubPropertyChainOfAxiom org.semanticweb.owlapi.model.OWLSubPropertyChainOfAxiom.getAxiomWithoutAnnotations()
    virtual org::semanticweb::owlapi::model::OWLObjectPropertyExpression* getSuperProperty(); // public abstract org.semanticweb.owlapi.model.OWLObjectPropertyExpression org.semanticweb.owlapi.model.OWLSubPropertyChainOfAxiom.getSuperProperty()
    virtual java::util::List* getPropertyChain(); // public abstract java.util.List org.semanticweb.owlapi.model.OWLSubPropertyChainOfAxiom.getPropertyChain()
    virtual bool isEncodingOfTransitiveProperty(); // public abstract boolean org.semanticweb.owlapi.model.OWLSubPropertyChainOfAxiom.isEncodingOfTransitiveProperty()

};
}
}
}
}
#endif
