#ifndef org_semanticweb_owlapi_model_OWLOntologyFormat_H
#define org_semanticweb_owlapi_model_OWLOntologyFormat_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace vocab {
class PrefixOWLOntologyFormat;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace io {
class OWLOntologyLoaderMetaData;
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
class OWLOntologyFormat : public java::lang::Object {
  public:
    OWLOntologyFormat(JavaMarker* dummy);
    OWLOntologyFormat(jobject obj);
    OWLOntologyFormat(); // public org.semanticweb.owlapi.model.OWLOntologyFormat()

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool equals(java::lang::Object* arg1); // public boolean org.semanticweb.owlapi.model.OWLOntologyFormat.equals(java.lang.Object)
    virtual int hashCode(); // public int org.semanticweb.owlapi.model.OWLOntologyFormat.hashCode()
    virtual void setParameter(java::lang::Object* arg1, java::lang::Object* arg2); // public void org.semanticweb.owlapi.model.OWLOntologyFormat.setParameter(java.lang.Object,java.lang.Object)
    virtual java::lang::Object* getParameter(java::lang::Object* arg1, java::lang::Object* arg2); // public java.lang.Object org.semanticweb.owlapi.model.OWLOntologyFormat.getParameter(java.lang.Object,java.lang.Object)
    virtual bool isPrefixOWLOntologyFormat(); // public boolean org.semanticweb.owlapi.model.OWLOntologyFormat.isPrefixOWLOntologyFormat()
    virtual org::semanticweb::owlapi::vocab::PrefixOWLOntologyFormat* asPrefixOWLOntologyFormat(); // public org.semanticweb.owlapi.vocab.PrefixOWLOntologyFormat org.semanticweb.owlapi.model.OWLOntologyFormat.asPrefixOWLOntologyFormat()
    virtual org::semanticweb::owlapi::io::OWLOntologyLoaderMetaData* getOntologyLoaderMetaData(); // public org.semanticweb.owlapi.io.OWLOntologyLoaderMetaData org.semanticweb.owlapi.model.OWLOntologyFormat.getOntologyLoaderMetaData()
    virtual void setOntologyLoaderMetaData(org::semanticweb::owlapi::io::OWLOntologyLoaderMetaData* arg1); // public void org.semanticweb.owlapi.model.OWLOntologyFormat.setOntologyLoaderMetaData(org.semanticweb.owlapi.io.OWLOntologyLoaderMetaData)

};
}
}
}
}
#endif
