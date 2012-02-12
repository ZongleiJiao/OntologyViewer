#ifndef org_semanticweb_owlapi_model_OWLAxiomChange_H
#define org_semanticweb_owlapi_model_OWLAxiomChange_H
#include <jni.h>
#include <java_marker.h>
#include <org_semanticweb_owlapi_model_OWLOntologyChange.h>

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
class OWLAxiom;
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
class OWLAxiomChange : public org::semanticweb::owlapi::model::OWLOntologyChange {
  public:
    OWLAxiomChange(JavaMarker* dummy);
    OWLAxiomChange(jobject obj);
    OWLAxiomChange(org::semanticweb::owlapi::model::OWLOntology* arg1, org::semanticweb::owlapi::model::OWLAxiom* arg2); // public org.semanticweb.owlapi.model.OWLAxiomChange(org.semanticweb.owlapi.model.OWLOntology,org.semanticweb.owlapi.model.OWLAxiom)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool isAxiomChange(); // public boolean org.semanticweb.owlapi.model.OWLAxiomChange.isAxiomChange()
    virtual org::semanticweb::owlapi::model::OWLAxiom* getAxiom(); // public org.semanticweb.owlapi.model.OWLAxiom org.semanticweb.owlapi.model.OWLAxiomChange.getAxiom()
    virtual bool isImportChange(); // public boolean org.semanticweb.owlapi.model.OWLAxiomChange.isImportChange()
    virtual java::util::Set* getEntities(); // public java.util.Set org.semanticweb.owlapi.model.OWLAxiomChange.getEntities()

};
}
}
}
}
#endif
