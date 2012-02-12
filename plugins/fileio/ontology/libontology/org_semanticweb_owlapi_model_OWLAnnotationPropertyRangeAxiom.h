#ifndef org_semanticweb_owlapi_model_OWLAnnotationPropertyRangeAxiom_H
#define org_semanticweb_owlapi_model_OWLAnnotationPropertyRangeAxiom_H
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
class OWLAnnotationPropertyRangeAxiom : public java::lang::Object {
  public:
    OWLAnnotationPropertyRangeAxiom(JavaMarker* dummy);
    OWLAnnotationPropertyRangeAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLAnnotationProperty* getProperty(); // public abstract org.semanticweb.owlapi.model.OWLAnnotationProperty org.semanticweb.owlapi.model.OWLAnnotationPropertyRangeAxiom.getProperty()
    virtual org::semanticweb::owlapi::model::OWLAnnotationPropertyRangeAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLAnnotationPropertyRangeAxiom org.semanticweb.owlapi.model.OWLAnnotationPropertyRangeAxiom.getAxiomWithoutAnnotations()
    virtual org::semanticweb::owlapi::model::IRI* getRange(); // public abstract org.semanticweb.owlapi.model.IRI org.semanticweb.owlapi.model.OWLAnnotationPropertyRangeAxiom.getRange()

};
}
}
}
}
#endif
