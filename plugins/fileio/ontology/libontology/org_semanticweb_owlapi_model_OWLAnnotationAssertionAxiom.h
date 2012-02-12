#ifndef org_semanticweb_owlapi_model_OWLAnnotationAssertionAxiom_H
#define org_semanticweb_owlapi_model_OWLAnnotationAssertionAxiom_H
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
class OWLAnnotationValue;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAnnotation;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAnnotationSubject;
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
class OWLAnnotationAssertionAxiom : public java::lang::Object {
  public:
    OWLAnnotationAssertionAxiom(JavaMarker* dummy);
    OWLAnnotationAssertionAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLAnnotationProperty* getProperty(); // public abstract org.semanticweb.owlapi.model.OWLAnnotationProperty org.semanticweb.owlapi.model.OWLAnnotationAssertionAxiom.getProperty()
    virtual org::semanticweb::owlapi::model::OWLAnnotationValue* getValue(); // public abstract org.semanticweb.owlapi.model.OWLAnnotationValue org.semanticweb.owlapi.model.OWLAnnotationAssertionAxiom.getValue()
    virtual org::semanticweb::owlapi::model::OWLAnnotation* getAnnotation(); // public abstract org.semanticweb.owlapi.model.OWLAnnotation org.semanticweb.owlapi.model.OWLAnnotationAssertionAxiom.getAnnotation()
    virtual org::semanticweb::owlapi::model::OWLAnnotationAssertionAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLAnnotationAssertionAxiom org.semanticweb.owlapi.model.OWLAnnotationAssertionAxiom.getAxiomWithoutAnnotations()
    virtual org::semanticweb::owlapi::model::OWLAnnotationSubject* getSubject(); // public abstract org.semanticweb.owlapi.model.OWLAnnotationSubject org.semanticweb.owlapi.model.OWLAnnotationAssertionAxiom.getSubject()
    virtual bool isDeprecatedIRIAssertion(); // public abstract boolean org.semanticweb.owlapi.model.OWLAnnotationAssertionAxiom.isDeprecatedIRIAssertion()

};
}
}
}
}
#endif
