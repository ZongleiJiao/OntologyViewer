#ifndef org_semanticweb_owlapi_model_OWLOntologyStorer_H
#define org_semanticweb_owlapi_model_OWLOntologyStorer_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntologyFormat;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntologyManager;
}
}
}
}

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
class IRI;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace io {
class OWLOntologyDocumentTarget;
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
class OWLOntologyStorer : public java::lang::Object {
  public:
    OWLOntologyStorer(JavaMarker* dummy);
    OWLOntologyStorer(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool canStoreOntology(org::semanticweb::owlapi::model::OWLOntologyFormat* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLOntologyStorer.canStoreOntology(org.semanticweb.owlapi.model.OWLOntologyFormat)
    virtual void storeOntology(org::semanticweb::owlapi::model::OWLOntologyManager* arg1, org::semanticweb::owlapi::model::OWLOntology* arg2, org::semanticweb::owlapi::model::IRI* arg3, org::semanticweb::owlapi::model::OWLOntologyFormat* arg4); // public abstract void org.semanticweb.owlapi.model.OWLOntologyStorer.storeOntology(org.semanticweb.owlapi.model.OWLOntologyManager,org.semanticweb.owlapi.model.OWLOntology,org.semanticweb.owlapi.model.IRI,org.semanticweb.owlapi.model.OWLOntologyFormat) throws org.semanticweb.owlapi.model.OWLOntologyStorageException,java.io.IOException
    virtual void storeOntology(org::semanticweb::owlapi::model::OWLOntologyManager* arg1, org::semanticweb::owlapi::model::OWLOntology* arg2, org::semanticweb::owlapi::io::OWLOntologyDocumentTarget* arg3, org::semanticweb::owlapi::model::OWLOntologyFormat* arg4); // public abstract void org.semanticweb.owlapi.model.OWLOntologyStorer.storeOntology(org.semanticweb.owlapi.model.OWLOntologyManager,org.semanticweb.owlapi.model.OWLOntology,org.semanticweb.owlapi.io.OWLOntologyDocumentTarget,org.semanticweb.owlapi.model.OWLOntologyFormat) throws org.semanticweb.owlapi.model.OWLOntologyStorageException,java.io.IOException

};
}
}
}
}
#endif
