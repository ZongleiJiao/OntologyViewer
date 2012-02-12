#ifndef org_semanticweb_owlapi_model_ImportChange_H
#define org_semanticweb_owlapi_model_ImportChange_H
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
class OWLImportsDeclaration;
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
class ImportChange : public org::semanticweb::owlapi::model::OWLOntologyChange {
  public:
    ImportChange(JavaMarker* dummy);
    ImportChange(jobject obj);
    ImportChange(org::semanticweb::owlapi::model::OWLOntology* arg1, org::semanticweb::owlapi::model::OWLImportsDeclaration* arg2); // public org.semanticweb.owlapi.model.ImportChange(org.semanticweb.owlapi.model.OWLOntology,org.semanticweb.owlapi.model.OWLImportsDeclaration)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool isAxiomChange(); // public boolean org.semanticweb.owlapi.model.ImportChange.isAxiomChange()
    virtual org::semanticweb::owlapi::model::OWLAxiom* getAxiom(); // public org.semanticweb.owlapi.model.OWLAxiom org.semanticweb.owlapi.model.ImportChange.getAxiom()
    virtual bool isImportChange(); // public boolean org.semanticweb.owlapi.model.ImportChange.isImportChange()
    virtual org::semanticweb::owlapi::model::OWLImportsDeclaration* getImportDeclaration(); // public org.semanticweb.owlapi.model.OWLImportsDeclaration org.semanticweb.owlapi.model.ImportChange.getImportDeclaration()

};
}
}
}
}
#endif
