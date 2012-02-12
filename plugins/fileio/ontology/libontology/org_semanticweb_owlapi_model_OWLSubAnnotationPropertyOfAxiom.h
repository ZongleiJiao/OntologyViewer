#ifndef org_semanticweb_owlapi_model_OWLSubAnnotationPropertyOfAxiom_H
#define org_semanticweb_owlapi_model_OWLSubAnnotationPropertyOfAxiom_H
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
class OWLSubAnnotationPropertyOfAxiom : public java::lang::Object {
  public:
    OWLSubAnnotationPropertyOfAxiom(JavaMarker* dummy);
    OWLSubAnnotationPropertyOfAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLSubAnnotationPropertyOfAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLSubAnnotationPropertyOfAxiom org.semanticweb.owlapi.model.OWLSubAnnotationPropertyOfAxiom.getAxiomWithoutAnnotations()
    virtual org::semanticweb::owlapi::model::OWLAnnotationProperty* getSubProperty(); // public abstract org.semanticweb.owlapi.model.OWLAnnotationProperty org.semanticweb.owlapi.model.OWLSubAnnotationPropertyOfAxiom.getSubProperty()
    virtual org::semanticweb::owlapi::model::OWLAnnotationProperty* getSuperProperty(); // public abstract org.semanticweb.owlapi.model.OWLAnnotationProperty org.semanticweb.owlapi.model.OWLSubAnnotationPropertyOfAxiom.getSuperProperty()

};
}
}
}
}
#endif
