#ifndef org_semanticweb_owlapi_model_RemoveImport_H
#define org_semanticweb_owlapi_model_RemoveImport_H
#include <jni.h>
#include <java_marker.h>
#include <org_semanticweb_owlapi_model_ImportChange.h>

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
class RemoveImport : public org::semanticweb::owlapi::model::ImportChange {
  public:
    RemoveImport(JavaMarker* dummy);
    RemoveImport(jobject obj);
    RemoveImport(org::semanticweb::owlapi::model::OWLOntology* arg1, org::semanticweb::owlapi::model::OWLImportsDeclaration* arg2); // public org.semanticweb.owlapi.model.RemoveImport(org.semanticweb.owlapi.model.OWLOntology,org.semanticweb.owlapi.model.OWLImportsDeclaration)

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool equals(java::lang::Object* arg1); // public boolean org.semanticweb.owlapi.model.RemoveImport.equals(java.lang.Object)
    virtual const char* toString(); // public java.lang.String org.semanticweb.owlapi.model.RemoveImport.toString()
    virtual int hashCode(); // public int org.semanticweb.owlapi.model.RemoveImport.hashCode()
    virtual void accept(org::semanticweb::owlapi::model::OWLOntologyChangeVisitor* arg1); // public void org.semanticweb.owlapi.model.RemoveImport.accept(org.semanticweb.owlapi.model.OWLOntologyChangeVisitor)
    virtual java::lang::Object* accept(org::semanticweb::owlapi::model::OWLOntologyChangeVisitorEx* arg1); // public java.lang.Object org.semanticweb.owlapi.model.RemoveImport.accept(org.semanticweb.owlapi.model.OWLOntologyChangeVisitorEx)

};
}
}
}
}
#endif
