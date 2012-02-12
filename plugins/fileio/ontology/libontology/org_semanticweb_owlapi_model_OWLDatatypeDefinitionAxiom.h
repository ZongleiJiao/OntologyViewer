#ifndef org_semanticweb_owlapi_model_OWLDatatypeDefinitionAxiom_H
#define org_semanticweb_owlapi_model_OWLDatatypeDefinitionAxiom_H
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
class OWLAxiomVisitor;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAxiomVisitorEx;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDatatype;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataRange;
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
class OWLDatatypeDefinitionAxiom : public java::lang::Object {
  public:
    OWLDatatypeDefinitionAxiom(JavaMarker* dummy);
    OWLDatatypeDefinitionAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void accept(org::semanticweb::owlapi::model::OWLAxiomVisitor* arg1); // public abstract void org.semanticweb.owlapi.model.OWLDatatypeDefinitionAxiom.accept(org.semanticweb.owlapi.model.OWLAxiomVisitor)
    virtual java::lang::Object* accept(org::semanticweb::owlapi::model::OWLAxiomVisitorEx* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLDatatypeDefinitionAxiom.accept(org.semanticweb.owlapi.model.OWLAxiomVisitorEx)
    virtual org::semanticweb::owlapi::model::OWLDatatype* getDatatype(); // public abstract org.semanticweb.owlapi.model.OWLDatatype org.semanticweb.owlapi.model.OWLDatatypeDefinitionAxiom.getDatatype()
    virtual org::semanticweb::owlapi::model::OWLDataRange* getDataRange(); // public abstract org.semanticweb.owlapi.model.OWLDataRange org.semanticweb.owlapi.model.OWLDatatypeDefinitionAxiom.getDataRange()

};
}
}
}
}
#endif
