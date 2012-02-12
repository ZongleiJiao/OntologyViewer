#ifndef org_semanticweb_owlapi_model_OWLAnnotationPropertyDomainAxiom_H
#define org_semanticweb_owlapi_model_OWLAnnotationPropertyDomainAxiom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAnnotationAxiom;
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
class IRI;
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
class OWLAnnotationPropertyDomainAxiom : public java::lang::Object {
  public:
    OWLAnnotationPropertyDomainAxiom(JavaMarker* dummy);
    OWLAnnotationPropertyDomainAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLAnnotationProperty* getProperty(); // public abstract org.semanticweb.owlapi.model.OWLAnnotationProperty org.semanticweb.owlapi.model.OWLAnnotationPropertyDomainAxiom.getProperty()
    virtual org::semanticweb::owlapi::model::OWLAnnotationPropertyDomainAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLAnnotationPropertyDomainAxiom org.semanticweb.owlapi.model.OWLAnnotationPropertyDomainAxiom.getAxiomWithoutAnnotations()
    virtual org::semanticweb::owlapi::model::IRI* getDomain(); // public abstract org.semanticweb.owlapi.model.IRI org.semanticweb.owlapi.model.OWLAnnotationPropertyDomainAxiom.getDomain()

};
}
}
}
}
#endif
