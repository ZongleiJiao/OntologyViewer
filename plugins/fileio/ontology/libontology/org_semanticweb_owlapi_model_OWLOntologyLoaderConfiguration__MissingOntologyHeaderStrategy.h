#ifndef org_semanticweb_owlapi_model_OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy_H
#define org_semanticweb_owlapi_model_OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Enum.h>

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
class OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy : public java::lang::Enum {
  public:
    OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy(JavaMarker* dummy);
    OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual JavaObjectArray* values(); // public static final org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration$MissingOntologyHeaderStrategy[] org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration$MissingOntologyHeaderStrategy.values()
    virtual org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy* valueOf(const char* arg1); // public static org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration$MissingOntologyHeaderStrategy org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration$MissingOntologyHeaderStrategy.valueOf(java.lang.String)

    org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy* INCLUDE_GRAPH; // public static final org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration$MissingOntologyHeaderStrategy org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration$MissingOntologyHeaderStrategy.INCLUDE_GRAPH
    org::semanticweb::owlapi::model::OWLOntologyLoaderConfiguration__MissingOntologyHeaderStrategy* IMPORT_GRAPH; // public static final org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration$MissingOntologyHeaderStrategy org.semanticweb.owlapi.model.OWLOntologyLoaderConfiguration$MissingOntologyHeaderStrategy.IMPORT_GRAPH
};
}
}
}
}
#endif
