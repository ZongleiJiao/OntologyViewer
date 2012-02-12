#ifndef org_semanticweb_owlapi_model_IRI_H
#define org_semanticweb_owlapi_model_IRI_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAnnotationSubject;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAnnotationValue;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLPredicate;
}
}
}
}

namespace java {
namespace lang {
class String;
}
}

namespace java {
namespace io {
class File;
}
}

namespace java {
namespace net {
class URI;
}
}

namespace java {
namespace net {
class URL;
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
class IRI : public java::lang::Object {
  public:
    IRI(JavaMarker* dummy);
    IRI(jobject obj);
    IRI(); // public org.semanticweb.owlapi.model.IRI()

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::IRI* resolve(const char* arg1); // public abstract org.semanticweb.owlapi.model.IRI org.semanticweb.owlapi.model.IRI.resolve(java.lang.String)
    virtual bool isAbsolute(); // public abstract boolean org.semanticweb.owlapi.model.IRI.isAbsolute()
    virtual org::semanticweb::owlapi::model::IRI* create(const char* arg1); // public static org.semanticweb.owlapi.model.IRI org.semanticweb.owlapi.model.IRI.create(java.lang.String)
    virtual org::semanticweb::owlapi::model::IRI* create(java::io::File* arg1); // public static org.semanticweb.owlapi.model.IRI org.semanticweb.owlapi.model.IRI.create(java.io.File)
    virtual org::semanticweb::owlapi::model::IRI* create(java::net::URI* arg1); // public static org.semanticweb.owlapi.model.IRI org.semanticweb.owlapi.model.IRI.create(java.net.URI)
    virtual org::semanticweb::owlapi::model::IRI* create(java::net::URL* arg1); // public static org.semanticweb.owlapi.model.IRI org.semanticweb.owlapi.model.IRI.create(java.net.URL) throws java.net.URISyntaxException
    virtual java::net::URI* toURI(); // public abstract java.net.URI org.semanticweb.owlapi.model.IRI.toURI()
    virtual const char* getScheme(); // public abstract java.lang.String org.semanticweb.owlapi.model.IRI.getScheme()
    virtual const char* getFragment(); // public abstract java.lang.String org.semanticweb.owlapi.model.IRI.getFragment()
    virtual const char* toQuotedString(); // public abstract java.lang.String org.semanticweb.owlapi.model.IRI.toQuotedString()
    virtual const char* getStart(); // public abstract java.lang.String org.semanticweb.owlapi.model.IRI.getStart()
    virtual bool isReservedVocabulary(); // public abstract boolean org.semanticweb.owlapi.model.IRI.isReservedVocabulary()
    virtual bool isThing(); // public abstract boolean org.semanticweb.owlapi.model.IRI.isThing()
    virtual bool isNothing(); // public abstract boolean org.semanticweb.owlapi.model.IRI.isNothing()
    virtual bool isPlainLiteral(); // public abstract boolean org.semanticweb.owlapi.model.IRI.isPlainLiteral()
    virtual org::semanticweb::owlapi::model::IRI* generateDocumentIRI(); // public static org.semanticweb.owlapi.model.IRI org.semanticweb.owlapi.model.IRI.generateDocumentIRI()

};
}
}
}
}
#endif
