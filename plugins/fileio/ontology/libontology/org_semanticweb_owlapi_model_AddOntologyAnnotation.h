#ifndef org_semanticweb_owlapi_model_AddOntologyAnnotation_H
#define org_semanticweb_owlapi_model_AddOntologyAnnotation_H
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
class OWLAnnotation;
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
class AddOntologyAnnotation : public org::semanticweb::owlapi::model::OWLOntologyChange {
  public:
    AddOntologyAnnotation(JavaMarker* dummy);
    AddOntologyAnnotation(jobject obj);
    AddOntologyAnnotation(org::semanticweb::owlapi::model::OWLOntology* arg1, org::semanticweb::owlapi::model::OWLAnnotation* arg2); // public org.semanticweb.owlapi.model.AddOntologyAnnotation(org.semanticweb.owlapi.model.OWLOntology,org.semanticweb.owlapi.model.OWLAnnotation)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool equals(java::lang::Object* arg1); // public boolean org.semanticweb.owlapi.model.AddOntologyAnnotation.equals(java.lang.Object)
    virtual const char* toString(); // public java.lang.String org.semanticweb.owlapi.model.AddOntologyAnnotation.toString()
    virtual int hashCode(); // public int org.semanticweb.owlapi.model.AddOntologyAnnotation.hashCode()
    virtual org::semanticweb::owlapi::model::OWLAnnotation* getAnnotation(); // public org.semanticweb.owlapi.model.OWLAnnotation org.semanticweb.owlapi.model.AddOntologyAnnotation.getAnnotation()
    virtual void accept(org::semanticweb::owlapi::model::OWLOntologyChangeVisitor* arg1); // public void org.semanticweb.owlapi.model.AddOntologyAnnotation.accept(org.semanticweb.owlapi.model.OWLOntologyChangeVisitor)
    virtual java::lang::Object* accept(org::semanticweb::owlapi::model::OWLOntologyChangeVisitorEx* arg1); // public java.lang.Object org.semanticweb.owlapi.model.AddOntologyAnnotation.accept(org.semanticweb.owlapi.model.OWLOntologyChangeVisitorEx)
    virtual bool isAxiomChange(); // public boolean org.semanticweb.owlapi.model.AddOntologyAnnotation.isAxiomChange()
    virtual org::semanticweb::owlapi::model::OWLAxiom* getAxiom(); // public org.semanticweb.owlapi.model.OWLAxiom org.semanticweb.owlapi.model.AddOntologyAnnotation.getAxiom()
    virtual bool isImportChange(); // public boolean org.semanticweb.owlapi.model.AddOntologyAnnotation.isImportChange()

};
}
}
}
}
#endif
