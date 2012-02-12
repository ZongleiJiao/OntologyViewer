#ifndef org_semanticweb_owlapi_model_RemoveAxiom_H
#define org_semanticweb_owlapi_model_RemoveAxiom_H
#include <jni.h>
#include <java_marker.h>
#include <org_semanticweb_owlapi_model_OWLAxiomChange.h>

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
class RemoveAxiom : public org::semanticweb::owlapi::model::OWLAxiomChange {
  public:
    RemoveAxiom(JavaMarker* dummy);
    RemoveAxiom(jobject obj);
    RemoveAxiom(org::semanticweb::owlapi::model::OWLOntology* arg1, org::semanticweb::owlapi::model::OWLAxiom* arg2); // public org.semanticweb.owlapi.model.RemoveAxiom(org.semanticweb.owlapi.model.OWLOntology,org.semanticweb.owlapi.model.OWLAxiom)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool equals(java::lang::Object* arg1); // public boolean org.semanticweb.owlapi.model.RemoveAxiom.equals(java.lang.Object)
    virtual const char* toString(); // public java.lang.String org.semanticweb.owlapi.model.RemoveAxiom.toString()
    virtual int hashCode(); // public int org.semanticweb.owlapi.model.RemoveAxiom.hashCode()
    virtual void accept(org::semanticweb::owlapi::model::OWLOntologyChangeVisitor* arg1); // public void org.semanticweb.owlapi.model.RemoveAxiom.accept(org.semanticweb.owlapi.model.OWLOntologyChangeVisitor)
    virtual java::lang::Object* accept(org::semanticweb::owlapi::model::OWLOntologyChangeVisitorEx* arg1); // public java.lang.Object org.semanticweb.owlapi.model.RemoveAxiom.accept(org.semanticweb.owlapi.model.OWLOntologyChangeVisitorEx)

};
}
}
}
}
#endif
