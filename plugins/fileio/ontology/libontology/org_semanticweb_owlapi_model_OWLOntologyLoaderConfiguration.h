#ifndef org_semanticweb_owlapi_model_OWLOntologyLoaderConfiguration_H
#define org_semanticweb_owlapi_model_OWLOntologyLoaderConfiguration_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy;
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
class OWLOntologyLoaderConfiguration : public java::lang::Object {
  public:
    OWLOntologyLoaderConfiguration(JavaMarker* dummy);
    OWLOntologyLoaderConfiguration(jobject obj);
    OWLOntologyLoaderConfiguration(); // public org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration()

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool isStrict(); // public boolean org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration.isStrict()
    virtual void setSilentMissingImportsHandling(bool arg1); // public void org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration.setSilentMissingImportsHandling(boolean)
    virtual bool isSilentMissingImportsHandling(); // public boolean org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration.isSilentMissingImportsHandling()
    virtual org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy* getMissingOntologyHeaderStrategy(); // public org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration$MissingOntologyHeaderStrategy org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration.getMissingOntologyHeaderStrategy()
    virtual org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration* setMissingOntologyHeaderStrategy(org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy* arg1); // public org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration.setMissingOntologyHeaderStrategy(org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration$MissingOntologyHeaderStrategy)
    virtual org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration* setLoadAnnotationAxioms(bool arg1); // public org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration.setLoadAnnotationAxioms(boolean)
    virtual bool isLoadAnnotationAxioms(); // public boolean org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration.isLoadAnnotationAxioms()
    virtual org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration* setStrict(bool arg1); // public org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration.setStrict(boolean)
    virtual bool isIgnoredImport(org::semanticweb::owlapi::model::IRI* arg1); // public boolean org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration.isIgnoredImport(org.semanticweb.owlapi.model.IRI)
    virtual java::util::Set* getIgnoredImports(); // public java.util.Set org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration.getIgnoredImports()
    virtual org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration* addIgnoredImport(org::semanticweb::owlapi::model::IRI* arg1); // public org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration.addIgnoredImport(org.semanticweb.owlapi.model.IRI)
    virtual org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration* removeIgnoredImport(org::semanticweb::owlapi::model::IRI* arg1); // public org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration.removeIgnoredImport(org.semanticweb.owlapi.model.IRI)
    virtual org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration* clearIgnoredImports(); // public org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration.clearIgnoredImports()

    bool DEFAULT_LOAD_ANNOTATIONS_FLAG_VALUE; // public static final boolean org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration.DEFAULT_LOAD_ANNOTATIONS_FLAG_VALUE
    org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy* DEFAULT_MISSING_ONTOLOGY_HEADER_STRATEGY; // public static final org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration$MissingOntologyHeaderStrategy org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration.DEFAULT_MISSING_ONTOLOGY_HEADER_STRATEGY
};
}
}
}
}
#endif
