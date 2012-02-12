#ifndef org_semanticweb_owlapi_model_SetOntologyID_H
#define org_semanticweb_owlapi_model_SetOntologyID_H
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
class OWLOntologyID;
}
}
}
}

namespace java {
namespace lang {
class Object;
}
}

namespace java {
namespace lang {
class String;
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
class SetOntologyID : public org::semanticweb::owlapi::model::OWLOntologyChange {
  public:
    SetOntologyID(JavaMarker* dummy);
    SetOntologyID(jobject obj);
    SetOntologyID(org::semanticweb::owlapi::model::OWLOntology* arg1, org::semanticweb::owlapi::model::OWLOntologyID* arg2); // public org.semanticweb.owlapi.model.SetOntologyID(org.semanticweb.owlapi.model.OWLOntology,org.semanticweb.owlapi.model.OWLOntologyID)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool equals(java::lang::Object* arg1); // public boolean org.semanticweb.owlapi.model.SetOntologyID.equals(java.lang.Object)
    virtual const char* toString(); // public java.lang.String org.semanticweb.owlapi.model.SetOntologyID.toString()
    virtual int hashCode(); // public int org.semanticweb.owlapi.model.SetOntologyID.hashCode()
    virtual void accept(org::semanticweb::owlapi::model::OWLOntologyChangeVisitor* arg1); // public void org.semanticweb.owlapi.model.SetOntologyID.accept(org.semanticweb.owlapi.model.OWLOntologyChangeVisitor)
    virtual java::lang::Object* accept(org::semanticweb::owlapi::model::OWLOntologyChangeVisitorEx* arg1); // public java.lang.Object org.semanticweb.owlapi.model.SetOntologyID.accept(org.semanticweb.owlapi.model.OWLOntologyChangeVisitorEx)
    virtual bool isAxiomChange(); // public boolean org.semanticweb.owlapi.model.SetOntologyID.isAxiomChange()
    virtual org::semanticweb::owlapi::model::OWLAxiom* getAxiom(); // public org.semanticweb.owlapi.model.OWLAxiom org.semanticweb.owlapi.model.SetOntologyID.getAxiom()
    virtual bool isImportChange(); // public boolean org.semanticweb.owlapi.model.SetOntologyID.isImportChange()
    virtual org::semanticweb::owlapi::model::OWLOntologyID* getOriginalOntologyID(); // public org.semanticweb.owlapi.model.OWLOntologyID org.semanticweb.owlapi.model.SetOntologyID.getOriginalOntologyID()
    virtual org::semanticweb::owlapi::model::OWLOntologyID* getNewOntologyID(); // public org.semanticweb.owlapi.model.OWLOntologyID org.semanticweb.owlapi.model.SetOntologyID.getNewOntologyID()

};
}
}
}
}
#endif
