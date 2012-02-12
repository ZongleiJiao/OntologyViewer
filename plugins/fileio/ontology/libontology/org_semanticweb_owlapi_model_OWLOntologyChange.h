#ifndef org_semanticweb_owlapi_model_OWLOntologyChange_H
#define org_semanticweb_owlapi_model_OWLOntologyChange_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntology;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntologyChangeVisitor;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntologyChangeVisitorEx;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAxiom;
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
class OWLOntologyChange : public java::lang::Object {
  public:
    OWLOntologyChange(JavaMarker* dummy);
    OWLOntologyChange(jobject obj);
    OWLOntologyChange(org::semanticweb::owlapi::model::OWLOntology* arg1); // public org.semanticweb.owlapi.model.OWLOntologyChange(org.semanticweb.owlapi.model.OWLOntology)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void accept(org::semanticweb::owlapi::model::OWLOntologyChangeVisitor* arg1); // public abstract void org.semanticweb.owlapi.model.OWLOntologyChange.accept(org.semanticweb.owlapi.model.OWLOntologyChangeVisitor)
    virtual java::lang::Object* accept(org::semanticweb::owlapi::model::OWLOntologyChangeVisitorEx* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLOntologyChange.accept(org.semanticweb.owlapi.model.OWLOntologyChangeVisitorEx)
    virtual org::semanticweb::owlapi::model::OWLOntology* getOntology(); // public org.semanticweb.owlapi.model.OWLOntology org.semanticweb.owlapi.model.OWLOntologyChange.getOntology()
    virtual bool isAxiomChange(); // public abstract boolean org.semanticweb.owlapi.model.OWLOntologyChange.isAxiomChange()
    virtual org::semanticweb::owlapi::model::OWLAxiom* getAxiom(); // public abstract org.semanticweb.owlapi.model.OWLAxiom org.semanticweb.owlapi.model.OWLOntologyChange.getAxiom()
    virtual bool isImportChange(); // public abstract boolean org.semanticweb.owlapi.model.OWLOntologyChange.isImportChange()

};
}
}
}
}
#endif
