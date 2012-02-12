#ifndef org_semanticweb_owlapi_model_OWLOntologyFactory_H
#define org_semanticweb_owlapi_model_OWLOntologyFactory_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

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
class OWLOntologyID;
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
namespace model {
class OWLOntologyFactory__OWLOntologyCreationHandler;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace io {
class OWLOntologyDocumentSource;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntologyLoaderConfiguration;
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
class OWLOntologyFactory : public java::lang::Object {
  public:
    OWLOntologyFactory(JavaMarker* dummy);
    OWLOntologyFactory(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void setOWLOntologyManager(org::semanticweb::owlapi::model::OWLOntologyManager* arg1); // public abstract void org.semanticweb.owlapi.model.OWLOntologyFactory.setOWLOntologyManager(org.semanticweb.owlapi.model.OWLOntologyManager)
    virtual org::semanticweb::owlapi::model::OWLOntology* createOWLOntology(org::semanticweb::owlapi::model::OWLOntologyID* arg1, org::semanticweb::owlapi::model::IRI* arg2, org::semanticweb::owlapi::model::OWLOntologyFactory__OWLOntologyCreationHandler* arg3); // public abstract org.semanticweb.owlapi.model.OWLOntology org.semanticweb.owlapi.model.OWLOntologyFactory.createOWLOntology(org.semanticweb.owlapi.model.OWLOntologyID,org.semanticweb.owlapi.model.IRI,org.semanticweb.owlapi.model.OWLOntologyFactory$OWLOntologyCreationHandler) throws org.semanticweb.owlapi.model.OWLOntologyCreationException
    virtual org::semanticweb::owlapi::model::OWLOntology* loadOWLOntology(org::semanticweb::owlapi::io::OWLOntologyDocumentSource* arg1, org::semanticweb::owlapi::model::OWLOntologyFactory__OWLOntologyCreationHandler* arg2); // public abstract org.semanticweb.owlapi.model.OWLOntology org.semanticweb.owlapi.model.OWLOntologyFactory.loadOWLOntology(org.semanticweb.owlapi.io.OWLOntologyDocumentSource,org.semanticweb.owlapi.model.OWLOntologyFactory$OWLOntologyCreationHandler) throws org.semanticweb.owlapi.model.OWLOntologyCreationException
    virtual org::semanticweb::owlapi::model::OWLOntology* loadOWLOntology(org::semanticweb::owlapi::io::OWLOntologyDocumentSource* arg1, org::semanticweb::owlapi::model::OWLOntologyFactory__OWLOntologyCreationHandler* arg2, org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration* arg3); // public abstract org.semanticweb.owlapi.model.OWLOntology org.semanticweb.owlapi.model.OWLOntologyFactory.loadOWLOntology(org.semanticweb.owlapi.io.OWLOntologyDocumentSource,org.semanticweb.owlapi.model.OWLOntologyFactory$OWLOntologyCreationHandler,org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration) throws org.semanticweb.owlapi.model.OWLOntologyCreationException
    virtual bool canCreateFromDocumentIRI(org::semanticweb::owlapi::model::IRI* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLOntologyFactory.canCreateFromDocumentIRI(org.semanticweb.owlapi.model.IRI)
    virtual bool canLoad(org::semanticweb::owlapi::io::OWLOntologyDocumentSource* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLOntologyFactory.canLoad(org.semanticweb.owlapi.io.OWLOntologyDocumentSource)

};
}
}
}
}
#endif
