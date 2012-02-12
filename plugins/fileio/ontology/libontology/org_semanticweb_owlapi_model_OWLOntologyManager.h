#ifndef org_semanticweb_owlapi_model_OWLOntologyManager_H
#define org_semanticweb_owlapi_model_OWLOntologyManager_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntologySetProvider;
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
class OWLOntologyID;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataFactory;
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

namespace java {
namespace io {
class File;
}
}

namespace java {
namespace io {
class InputStream;
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

namespace java {
namespace util {
class Set;
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
namespace util {
class List;
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntologyChange;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntologyFormat;
}
}
}
}

namespace java {
namespace io {
class OutputStream;
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

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntologyIRIMapper;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntologyFactory;
}
}
}
}

namespace java {
namespace util {
class Collection;
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntologyStorer;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntologyChangeListener;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntologyChangeBroadcastStrategy;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class ImpendingOWLOntologyChangeListener;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntologyChangesVetoedListener;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class MissingImportListener;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntologyLoaderListener;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntologyChangeProgressListener;
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
class OWLOntologyManager : public java::lang::Object {
  public:
    OWLOntologyManager(JavaMarker* dummy);
    OWLOntologyManager(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool contains(org::semanticweb::owlapi::model::IRI* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLOntologyManager.contains(org.semanticweb.owlapi.model.IRI)
    virtual bool contains(org::semanticweb::owlapi::model::OWLOntologyID* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLOntologyManager.contains(org.semanticweb.owlapi.model.OWLOntologyID)
    virtual org::semanticweb::owlapi::model::OWLDataFactory* getOWLDataFactory(); // public abstract org.semanticweb.owlapi.model.OWLDataFactory org.semanticweb.owlapi.model.OWLOntologyManager.getOWLDataFactory()
    virtual org::semanticweb::owlapi::model::OWLOntology* loadOntologyFromOntologyDocument(org::semanticweb::owlapi::model::IRI* arg1); // public abstract org.semanticweb.owlapi.model.OWLOntology org.semanticweb.owlapi.model.OWLOntologyManager.loadOntologyFromOntologyDocument(org.semanticweb.owlapi.model.IRI) throws org.semanticweb.owlapi.model.OWLOntologyCreationException
    virtual org::semanticweb::owlapi::model::OWLOntology* loadOntologyFromOntologyDocument(java::io::File* arg1); // public abstract org.semanticweb.owlapi.model.OWLOntology org.semanticweb.owlapi.model.OWLOntologyManager.loadOntologyFromOntologyDocument(java.io.File) throws org.semanticweb.owlapi.model.OWLOntologyCreationException
    virtual org::semanticweb::owlapi::model::OWLOntology* loadOntologyFromOntologyDocument(java::io::InputStream* arg1); // public abstract org.semanticweb.owlapi.model.OWLOntology org.semanticweb.owlapi.model.OWLOntologyManager.loadOntologyFromOntologyDocument(java.io.InputStream) throws org.semanticweb.owlapi.model.OWLOntologyCreationException
    virtual org::semanticweb::owlapi::model::OWLOntology* loadOntologyFromOntologyDocument(org::semanticweb::owlapi::io::OWLOntologyDocumentSource* arg1); // public abstract org.semanticweb.owlapi.model.OWLOntology org.semanticweb.owlapi.model.OWLOntologyManager.loadOntologyFromOntologyDocument(org.semanticweb.owlapi.io.OWLOntologyDocumentSource) throws org.semanticweb.owlapi.model.OWLOntologyCreationException
    virtual org::semanticweb::owlapi::model::OWLOntology* loadOntologyFromOntologyDocument(org::semanticweb::owlapi::io::OWLOntologyDocumentSource* arg1, org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration* arg2); // public abstract org.semanticweb.owlapi.model.OWLOntology org.semanticweb.owlapi.model.OWLOntologyManager.loadOntologyFromOntologyDocument(org.semanticweb.owlapi.io.OWLOntologyDocumentSource,org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration) throws org.semanticweb.owlapi.model.OWLOntologyCreationException
    virtual java::util::Set* getDirectImports(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntologyManager.getDirectImports(org.semanticweb.owlapi.model.OWLOntology)
    virtual java::util::Set* getImports(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntologyManager.getImports(org.semanticweb.owlapi.model.OWLOntology)
    virtual java::util::Set* getImportsClosure(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntologyManager.getImportsClosure(org.semanticweb.owlapi.model.OWLOntology)
    virtual java::util::Set* getOntologies(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntologyManager.getOntologies()
    virtual java::util::Set* getOntologies(org::semanticweb::owlapi::model::OWLAxiom* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntologyManager.getOntologies(org.semanticweb.owlapi.model.OWLAxiom)
    virtual java::util::Set* getVersions(org::semanticweb::owlapi::model::IRI* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLOntologyManager.getVersions(org.semanticweb.owlapi.model.IRI)
    virtual org::semanticweb::owlapi::model::OWLOntology* getOntology(org::semanticweb::owlapi::model::IRI* arg1); // public abstract org.semanticweb.owlapi.model.OWLOntology org.semanticweb.owlapi.model.OWLOntologyManager.getOntology(org.semanticweb.owlapi.model.IRI)
    virtual org::semanticweb::owlapi::model::OWLOntology* getOntology(org::semanticweb::owlapi::model::OWLOntologyID* arg1); // public abstract org.semanticweb.owlapi.model.OWLOntology org.semanticweb.owlapi.model.OWLOntologyManager.getOntology(org.semanticweb.owlapi.model.OWLOntologyID)
    virtual org::semanticweb::owlapi::model::OWLOntology* getImportedOntology(org::semanticweb::owlapi::model::OWLImportsDeclaration* arg1); // public abstract org.semanticweb.owlapi.model.OWLOntology org.semanticweb.owlapi.model.OWLOntologyManager.getImportedOntology(org.semanticweb.owlapi.model.OWLImportsDeclaration)
    virtual java::util::List* getSortedImportsClosure(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract java.util.List org.semanticweb.owlapi.model.OWLOntologyManager.getSortedImportsClosure(org.semanticweb.owlapi.model.OWLOntology)
    virtual java::util::List* applyChanges(java::util::List* arg1); // public abstract java.util.List org.semanticweb.owlapi.model.OWLOntologyManager.applyChanges(java.util.List) throws org.semanticweb.owlapi.model.OWLOntologyRenameException
    virtual java::util::List* addAxioms(org::semanticweb::owlapi::model::OWLOntology* arg1, java::util::Set* arg2); // public abstract java.util.List org.semanticweb.owlapi.model.OWLOntologyManager.addAxioms(org.semanticweb.owlapi.model.OWLOntology,java.util.Set)
    virtual java::util::List* addAxiom(org::semanticweb::owlapi::model::OWLOntology* arg1, org::semanticweb::owlapi::model::OWLAxiom* arg2); // public abstract java.util.List org.semanticweb.owlapi.model.OWLOntologyManager.addAxiom(org.semanticweb.owlapi.model.OWLOntology,org.semanticweb.owlapi.model.OWLAxiom)
    virtual java::util::List* removeAxiom(org::semanticweb::owlapi::model::OWLOntology* arg1, org::semanticweb::owlapi::model::OWLAxiom* arg2); // public abstract java.util.List org.semanticweb.owlapi.model.OWLOntologyManager.removeAxiom(org.semanticweb.owlapi.model.OWLOntology,org.semanticweb.owlapi.model.OWLAxiom)
    virtual java::util::List* removeAxioms(org::semanticweb::owlapi::model::OWLOntology* arg1, java::util::Set* arg2); // public abstract java.util.List org.semanticweb.owlapi.model.OWLOntologyManager.removeAxioms(org.semanticweb.owlapi.model.OWLOntology,java.util.Set)
    virtual java::util::List* applyChange(org::semanticweb::owlapi::model::OWLOntologyChange* arg1); // public abstract java.util.List org.semanticweb.owlapi.model.OWLOntologyManager.applyChange(org.semanticweb.owlapi.model.OWLOntologyChange) throws org.semanticweb.owlapi.model.OWLOntologyRenameException
    virtual org::semanticweb::owlapi::model::OWLOntology* createOntology(); // public abstract org.semanticweb.owlapi.model.OWLOntology org.semanticweb.owlapi.model.OWLOntologyManager.createOntology() throws org.semanticweb.owlapi.model.OWLOntologyCreationException
    virtual org::semanticweb::owlapi::model::OWLOntology* createOntology(java::util::Set* arg1); // public abstract org.semanticweb.owlapi.model.OWLOntology org.semanticweb.owlapi.model.OWLOntologyManager.createOntology(java.util.Set) throws org.semanticweb.owlapi.model.OWLOntologyCreationException
    virtual org::semanticweb::owlapi::model::OWLOntology* createOntology(java::util::Set* arg1, org::semanticweb::owlapi::model::IRI* arg2); // public abstract org.semanticweb.owlapi.model.OWLOntology org.semanticweb.owlapi.model.OWLOntologyManager.createOntology(java.util.Set,org.semanticweb.owlapi.model.IRI) throws org.semanticweb.owlapi.model.OWLOntologyCreationException
    virtual org::semanticweb::owlapi::model::OWLOntology* createOntology(org::semanticweb::owlapi::model::IRI* arg1); // public abstract org.semanticweb.owlapi.model.OWLOntology org.semanticweb.owlapi.model.OWLOntologyManager.createOntology(org.semanticweb.owlapi.model.IRI) throws org.semanticweb.owlapi.model.OWLOntologyCreationException
    virtual org::semanticweb::owlapi::model::OWLOntology* createOntology(org::semanticweb::owlapi::model::OWLOntologyID* arg1); // public abstract org.semanticweb.owlapi.model.OWLOntology org.semanticweb.owlapi.model.OWLOntologyManager.createOntology(org.semanticweb.owlapi.model.OWLOntologyID) throws org.semanticweb.owlapi.model.OWLOntologyCreationException
    virtual org::semanticweb::owlapi::model::OWLOntology* createOntology(org::semanticweb::owlapi::model::IRI* arg1, java::util::Set* arg2, bool arg3); // public abstract org.semanticweb.owlapi.model.OWLOntology org.semanticweb.owlapi.model.OWLOntologyManager.createOntology(org.semanticweb.owlapi.model.IRI,java.util.Set,boolean) throws org.semanticweb.owlapi.model.OWLOntologyCreationException
    virtual org::semanticweb::owlapi::model::OWLOntology* createOntology(org::semanticweb::owlapi::model::IRI* arg1, java::util::Set* arg2); // public abstract org.semanticweb.owlapi.model.OWLOntology org.semanticweb.owlapi.model.OWLOntologyManager.createOntology(org.semanticweb.owlapi.model.IRI,java.util.Set) throws org.semanticweb.owlapi.model.OWLOntologyCreationException
    virtual org::semanticweb::owlapi::model::OWLOntology* loadOntology(org::semanticweb::owlapi::model::IRI* arg1); // public abstract org.semanticweb.owlapi.model.OWLOntology org.semanticweb.owlapi.model.OWLOntologyManager.loadOntology(org.semanticweb.owlapi.model.IRI) throws org.semanticweb.owlapi.model.OWLOntologyCreationException
    virtual void removeOntology(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.removeOntology(org.semanticweb.owlapi.model.OWLOntology)
    virtual org::semanticweb::owlapi::model::IRI* getOntologyDocumentIRI(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract org.semanticweb.owlapi.model.IRI org.semanticweb.owlapi.model.OWLOntologyManager.getOntologyDocumentIRI(org.semanticweb.owlapi.model.OWLOntology)
    virtual void setOntologyDocumentIRI(org::semanticweb::owlapi::model::OWLOntology* arg1, org::semanticweb::owlapi::model::IRI* arg2); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.setOntologyDocumentIRI(org.semanticweb.owlapi.model.OWLOntology,org.semanticweb.owlapi.model.IRI) throws org.semanticweb.owlapi.model.UnknownOWLOntologyException
    virtual org::semanticweb::owlapi::model::OWLOntologyFormat* getOntologyFormat(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract org.semanticweb.owlapi.model.OWLOntologyFormat org.semanticweb.owlapi.model.OWLOntologyManager.getOntologyFormat(org.semanticweb.owlapi.model.OWLOntology) throws org.semanticweb.owlapi.model.UnknownOWLOntologyException
    virtual void setOntologyFormat(org::semanticweb::owlapi::model::OWLOntology* arg1, org::semanticweb::owlapi::model::OWLOntologyFormat* arg2); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.setOntologyFormat(org.semanticweb.owlapi.model.OWLOntology,org.semanticweb.owlapi.model.OWLOntologyFormat)
    virtual void saveOntology(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.saveOntology(org.semanticweb.owlapi.model.OWLOntology) throws org.semanticweb.owlapi.model.OWLOntologyStorageException
    virtual void saveOntology(org::semanticweb::owlapi::model::OWLOntology* arg1, org::semanticweb::owlapi::model::IRI* arg2); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.saveOntology(org.semanticweb.owlapi.model.OWLOntology,org.semanticweb.owlapi.model.IRI) throws org.semanticweb.owlapi.model.OWLOntologyStorageException
    virtual void saveOntology(org::semanticweb::owlapi::model::OWLOntology* arg1, java::io::OutputStream* arg2); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.saveOntology(org.semanticweb.owlapi.model.OWLOntology,java.io.OutputStream) throws org.semanticweb.owlapi.model.OWLOntologyStorageException
    virtual void saveOntology(org::semanticweb::owlapi::model::OWLOntology* arg1, org::semanticweb::owlapi::model::OWLOntologyFormat* arg2); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.saveOntology(org.semanticweb.owlapi.model.OWLOntology,org.semanticweb.owlapi.model.OWLOntologyFormat) throws org.semanticweb.owlapi.model.OWLOntologyStorageException
    virtual void saveOntology(org::semanticweb::owlapi::model::OWLOntology* arg1, org::semanticweb::owlapi::model::OWLOntologyFormat* arg2, org::semanticweb::owlapi::model::IRI* arg3); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.saveOntology(org.semanticweb.owlapi.model.OWLOntology,org.semanticweb.owlapi.model.OWLOntologyFormat,org.semanticweb.owlapi.model.IRI) throws org.semanticweb.owlapi.model.OWLOntologyStorageException
    virtual void saveOntology(org::semanticweb::owlapi::model::OWLOntology* arg1, org::semanticweb::owlapi::model::OWLOntologyFormat* arg2, java::io::OutputStream* arg3); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.saveOntology(org.semanticweb.owlapi.model.OWLOntology,org.semanticweb.owlapi.model.OWLOntologyFormat,java.io.OutputStream) throws org.semanticweb.owlapi.model.OWLOntologyStorageException
    virtual void saveOntology(org::semanticweb::owlapi::model::OWLOntology* arg1, org::semanticweb::owlapi::io::OWLOntologyDocumentTarget* arg2); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.saveOntology(org.semanticweb.owlapi.model.OWLOntology,org.semanticweb.owlapi.io.OWLOntologyDocumentTarget) throws org.semanticweb.owlapi.model.OWLOntologyStorageException
    virtual void saveOntology(org::semanticweb::owlapi::model::OWLOntology* arg1, org::semanticweb::owlapi::model::OWLOntologyFormat* arg2, org::semanticweb::owlapi::io::OWLOntologyDocumentTarget* arg3); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.saveOntology(org.semanticweb.owlapi.model.OWLOntology,org.semanticweb.owlapi.model.OWLOntologyFormat,org.semanticweb.owlapi.io.OWLOntologyDocumentTarget) throws org.semanticweb.owlapi.model.OWLOntologyStorageException
    virtual void addIRIMapper(org::semanticweb::owlapi::model::OWLOntologyIRIMapper* arg1); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.addIRIMapper(org.semanticweb.owlapi.model.OWLOntologyIRIMapper)
    virtual void removeIRIMapper(org::semanticweb::owlapi::model::OWLOntologyIRIMapper* arg1); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.removeIRIMapper(org.semanticweb.owlapi.model.OWLOntologyIRIMapper)
    virtual void clearIRIMappers(); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.clearIRIMappers()
    virtual void addOntologyFactory(org::semanticweb::owlapi::model::OWLOntologyFactory* arg1); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.addOntologyFactory(org.semanticweb.owlapi.model.OWLOntologyFactory)
    virtual void removeOntologyFactory(org::semanticweb::owlapi::model::OWLOntologyFactory* arg1); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.removeOntologyFactory(org.semanticweb.owlapi.model.OWLOntologyFactory)
    virtual java::util::Collection* getOntologyFactories(); // public abstract java.util.Collection org.semanticweb.owlapi.model.OWLOntologyManager.getOntologyFactories()
    virtual void addOntologyStorer(org::semanticweb::owlapi::model::OWLOntologyStorer* arg1); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.addOntologyStorer(org.semanticweb.owlapi.model.OWLOntologyStorer)
    virtual void removeOntologyStorer(org::semanticweb::owlapi::model::OWLOntologyStorer* arg1); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.removeOntologyStorer(org.semanticweb.owlapi.model.OWLOntologyStorer)
    virtual void addOntologyChangeListener(org::semanticweb::owlapi::model::OWLOntologyChangeListener* arg1); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.addOntologyChangeListener(org.semanticweb.owlapi.model.OWLOntologyChangeListener)
    virtual void addOntologyChangeListener(org::semanticweb::owlapi::model::OWLOntologyChangeListener* arg1, org::semanticweb::owlapi::model::OWLOntologyChangeBroadcastStrategy* arg2); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.addOntologyChangeListener(org.semanticweb.owlapi.model.OWLOntologyChangeListener,org.semanticweb.owlapi.model.OWLOntologyChangeBroadcastStrategy)
    virtual void addImpendingOntologyChangeListener(org::semanticweb::owlapi::model::ImpendingOWLOntologyChangeListener* arg1); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.addImpendingOntologyChangeListener(org.semanticweb.owlapi.model.ImpendingOWLOntologyChangeListener)
    virtual void removeImpendingOntologyChangeListener(org::semanticweb::owlapi::model::ImpendingOWLOntologyChangeListener* arg1); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.removeImpendingOntologyChangeListener(org.semanticweb.owlapi.model.ImpendingOWLOntologyChangeListener)
    virtual void addOntologyChangesVetoedListener(org::semanticweb::owlapi::model::OWLOntologyChangesVetoedListener* arg1); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.addOntologyChangesVetoedListener(org.semanticweb.owlapi.model.OWLOntologyChangesVetoedListener)
    virtual void removeOntologyChangesVetoedListener(org::semanticweb::owlapi::model::OWLOntologyChangesVetoedListener* arg1); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.removeOntologyChangesVetoedListener(org.semanticweb.owlapi.model.OWLOntologyChangesVetoedListener)
    virtual void setDefaultChangeBroadcastStrategy(org::semanticweb::owlapi::model::OWLOntologyChangeBroadcastStrategy* arg1); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.setDefaultChangeBroadcastStrategy(org.semanticweb.owlapi.model.OWLOntologyChangeBroadcastStrategy)
    virtual void removeOntologyChangeListener(org::semanticweb::owlapi::model::OWLOntologyChangeListener* arg1); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.removeOntologyChangeListener(org.semanticweb.owlapi.model.OWLOntologyChangeListener)
    virtual void makeLoadImportRequest(org::semanticweb::owlapi::model::OWLImportsDeclaration* arg1); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.makeLoadImportRequest(org.semanticweb.owlapi.model.OWLImportsDeclaration) throws org.semanticweb.owlapi.model.UnloadableImportException
    virtual void makeLoadImportRequest(org::semanticweb::owlapi::model::OWLImportsDeclaration* arg1, org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration* arg2); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.makeLoadImportRequest(org.semanticweb.owlapi.model.OWLImportsDeclaration,org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration) throws org.semanticweb.owlapi.model.UnloadableImportException
    virtual void setSilentMissingImportsHandling(bool arg1); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.setSilentMissingImportsHandling(boolean)
    virtual bool isSilentMissingImportsHandling(); // public abstract boolean org.semanticweb.owlapi.model.OWLOntologyManager.isSilentMissingImportsHandling()
    virtual void addMissingImportListener(org::semanticweb::owlapi::model::MissingImportListener* arg1); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.addMissingImportListener(org.semanticweb.owlapi.model.MissingImportListener)
    virtual void removeMissingImportListener(org::semanticweb::owlapi::model::MissingImportListener* arg1); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.removeMissingImportListener(org.semanticweb.owlapi.model.MissingImportListener)
    virtual void addOntologyLoaderListener(org::semanticweb::owlapi::model::OWLOntologyLoaderListener* arg1); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.addOntologyLoaderListener(org.semanticweb.owlapi.model.OWLOntologyLoaderListener)
    virtual void removeOntologyLoaderListener(org::semanticweb::owlapi::model::OWLOntologyLoaderListener* arg1); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.removeOntologyLoaderListener(org.semanticweb.owlapi.model.OWLOntologyLoaderListener)
    virtual void addOntologyChangeProgessListener(org::semanticweb::owlapi::model::OWLOntologyChangeProgressListener* arg1); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.addOntologyChangeProgessListener(org.semanticweb.owlapi.model.OWLOntologyChangeProgressListener)
    virtual void removeOntologyChangeProgessListener(org::semanticweb::owlapi::model::OWLOntologyChangeProgressListener* arg1); // public abstract void org.semanticweb.owlapi.model.OWLOntologyManager.removeOntologyChangeProgessListener(org.semanticweb.owlapi.model.OWLOntologyChangeProgressListener)

};
}
}
}
}
#endif
