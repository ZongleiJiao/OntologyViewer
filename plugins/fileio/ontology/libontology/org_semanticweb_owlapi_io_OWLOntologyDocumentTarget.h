#ifndef org_semanticweb_owlapi_io_OWLOntologyDocumentTarget_H
#define org_semanticweb_owlapi_io_OWLOntologyDocumentTarget_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace io {
class OutputStream;
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
namespace io {
class Writer;
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
class OWLOntologyDocumentTarget : public java::lang::Object {
  public:
    OWLOntologyDocumentTarget(JavaMarker* dummy);
    OWLOntologyDocumentTarget(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::io::OutputStream* getOutputStream(); // public abstract java.io.OutputStream org.semanticweb.owlapi.io.OWLOntologyDocumentTarget.getOutputStream() throws java.io.IOException
    virtual org::semanticweb::owlapi::model::IRI* getDocumentIRI(); // public abstract org.semanticweb.owlapi.model.IRI org.semanticweb.owlapi.io.OWLOntologyDocumentTarget.getDocumentIRI()
    virtual bool isWriterAvailable(); // public abstract boolean org.semanticweb.owlapi.io.OWLOntologyDocumentTarget.isWriterAvailable()
    virtual java::io::Writer* getWriter(); // public abstract java.io.Writer org.semanticweb.owlapi.io.OWLOntologyDocumentTarget.getWriter() throws java.io.IOException
    virtual bool isOutputStreamAvailable(); // public abstract boolean org.semanticweb.owlapi.io.OWLOntologyDocumentTarget.isOutputStreamAvailable()
    virtual bool isDocumentIRIAvailable(); // public abstract boolean org.semanticweb.owlapi.io.OWLOntologyDocumentTarget.isDocumentIRIAvailable()

};
}
}
}
}
#endif
