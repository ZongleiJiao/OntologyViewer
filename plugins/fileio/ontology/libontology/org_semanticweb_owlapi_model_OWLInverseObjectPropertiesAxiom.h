#ifndef org_semanticweb_owlapi_model_OWLInverseObjectPropertiesAxiom_H
#define org_semanticweb_owlapi_model_OWLInverseObjectPropertiesAxiom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLNaryPropertyAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObjectPropertyAxiom;
}
}
}
}

namespace java {
namespace util {
class Set;
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
class OWLInverseObjectPropertiesAxiom : public java::lang::Object {
  public:
    OWLInverseObjectPropertiesAxiom(JavaMarker* dummy);
    OWLInverseObjectPropertiesAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLInverseObjectPropertiesAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLInverseObjectPropertiesAxiom org.semanticweb.owlapi.model.OWLInverseObjectPropertiesAxiom.getAxiomWithoutAnnotations()
    virtual java::util::Set* asSubObjectPropertyOfAxioms(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLInverseObjectPropertiesAxiom.asSubObjectPropertyOfAxioms()
    virtual org::semanticweb::owlapi::model::OWLObjectPropertyExpression* getFirstProperty(); // public abstract org.semanticweb.owlapi.model.OWLObjectPropertyExpression org.semanticweb.owlapi.model.OWLInverseObjectPropertiesAxiom.getFirstProperty()
    virtual org::semanticweb::owlapi::model::OWLObjectPropertyExpression* getSecondProperty(); // public abstract org.semanticweb.owlapi.model.OWLObjectPropertyExpression org.semanticweb.owlapi.model.OWLInverseObjectPropertiesAxiom.getSecondProperty()

};
}
}
}
}
#endif
