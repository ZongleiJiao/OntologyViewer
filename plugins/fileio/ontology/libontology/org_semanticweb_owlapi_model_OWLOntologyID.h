#ifndef org_semanticweb_owlapi_model_OWLOntologyID_H
#define org_semanticweb_owlapi_model_OWLOntologyID_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace lang {
class Comparable;
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

namespace java {
namespace lang {
class String;
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
class OWLOntologyID : public java::lang::Object {
  public:
    OWLOntologyID(JavaMarker* dummy);
    OWLOntologyID(jobject obj);
    OWLOntologyID(org::semanticweb::owlapi::model::IRI* arg1); // public org.semanticweb.owlapi.model.OWLOntologyID(org.semanticweb.owlapi.model.IRI)
    OWLOntologyID(org::semanticweb::owlapi::model::IRI* arg1, org::semanticweb::owlapi::model::IRI* arg2); // public org.semanticweb.owlapi.model.OWLOntologyID(org.semanticweb.owlapi.model.IRI,org.semanticweb.owlapi.model.IRI)
    OWLOntologyID(); // public org.semanticweb.owlapi.model.OWLOntologyID()

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool equals(java::lang::Object* arg1); // public boolean org.semanticweb.owlapi.model.OWLOntologyID.equals(java.lang.Object)
    virtual const char* toString(); // public java.lang.String org.semanticweb.owlapi.model.OWLOntologyID.toString()
    virtual int hashCode(); // public int org.semanticweb.owlapi.model.OWLOntologyID.hashCode()
    virtual int compareTo(org::semanticweb::owlapi::model::OWLOntologyID* arg1); // public int org.semanticweb.owlapi.model.OWLOntologyID.compareTo(org.semanticweb.owlapi.model.OWLOntologyID)
    virtual int compareTo(java::lang::Object* arg1); // public int org.semanticweb.owlapi.model.OWLOntologyID.compareTo(java.lang.Object)
    virtual bool isAnonymous(); // public boolean org.semanticweb.owlapi.model.OWLOntologyID.isAnonymous()
    virtual bool isOWL2DLOntologyID(); // public boolean org.semanticweb.owlapi.model.OWLOntologyID.isOWL2DLOntologyID()
    virtual org::semanticweb::owlapi::model::IRI* getOntologyIRI(); // public org.semanticweb.owlapi.model.IRI org.semanticweb.owlapi.model.OWLOntologyID.getOntologyIRI()
    virtual org::semanticweb::owlapi::model::IRI* getVersionIRI(); // public org.semanticweb.owlapi.model.IRI org.semanticweb.owlapi.model.OWLOntologyID.getVersionIRI()
    virtual org::semanticweb::owlapi::model::IRI* getDefaultDocumentIRI(); // public org.semanticweb.owlapi.model.IRI org.semanticweb.owlapi.model.OWLOntologyID.getDefaultDocumentIRI()

};
}
}
}
}
#endif
