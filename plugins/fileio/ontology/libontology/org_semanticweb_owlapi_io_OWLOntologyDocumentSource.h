#ifndef org_semanticweb_owlapi_io_OWLOntologyDocumentSource_H
#define org_semanticweb_owlapi_io_OWLOntologyDocumentSource_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace io {
class InputStream;
}
}

namespace java {
namespace io {
class Reader;
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
namespace io {
class OWLOntologyDocumentSource : public java::lang::Object {
  public:
    OWLOntologyDocumentSource(JavaMarker* dummy);
    OWLOntologyDocumentSource(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::io::InputStream* getInputStream(); // public abstract java.io.InputStream org.semanticweb.owlapi.io.OWLOntologyDocumentSource.getInputStream()
    virtual bool isReaderAvailable(); // public abstract boolean org.semanticweb.owlapi.io.OWLOntologyDocumentSource.isReaderAvailable()
    virtual java::io::Reader* getReader(); // public abstract java.io.Reader org.semanticweb.owlapi.io.OWLOntologyDocumentSource.getReader()
    virtual bool isInputStreamAvailable(); // public abstract boolean org.semanticweb.owlapi.io.OWLOntologyDocumentSource.isInputStreamAvailable()
    virtual org::semanticweb::owlapi::model::IRI* getDocumentIRI(); // public abstract org.semanticweb.owlapi.model.IRI org.semanticweb.owlapi.io.OWLOntologyDocumentSource.getDocumentIRI()

};
}
}
}
}
#endif
