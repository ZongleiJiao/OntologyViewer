#ifndef org_semanticweb_owlapi_model_OWLImportsDeclaration_H
#define org_semanticweb_owlapi_model_OWLImportsDeclaration_H
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
namespace net {
class URI;
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
class OWLImportsDeclaration : public java::lang::Object {
  public:
    OWLImportsDeclaration(JavaMarker* dummy);
    OWLImportsDeclaration(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::IRI* getIRI(); // public abstract org.semanticweb.owlapi.model.IRI org.semanticweb.owlapi.model.OWLImportsDeclaration.getIRI()
    virtual java::net::URI* getURI(); // public abstract java.net.URI org.semanticweb.owlapi.model.OWLImportsDeclaration.getURI()

};
}
}
}
}
#endif
