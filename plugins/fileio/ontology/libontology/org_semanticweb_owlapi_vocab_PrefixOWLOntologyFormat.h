#ifndef org_semanticweb_owlapi_vocab_PrefixOWLOntologyFormat_H
#define org_semanticweb_owlapi_vocab_PrefixOWLOntologyFormat_H
#include <jni.h>
#include <java_marker.h>
#include <org_semanticweb_owlapi_model_OWLOntologyFormat.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class PrefixManager;
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
namespace lang {
class String;
}
}

namespace java {
namespace util {
class Set;
}
}

namespace java {
namespace util {
class Map;
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
namespace vocab {
class PrefixOWLOntologyFormat : public org::semanticweb::owlapi::model::OWLOntologyFormat {
  public:
    PrefixOWLOntologyFormat(JavaMarker* dummy);
    PrefixOWLOntologyFormat(jobject obj);
    PrefixOWLOntologyFormat(); // public org.semanticweb.owlapi.vocab.PrefixOWLOntologyFormat()

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::IRI* getIRI(const char* arg1); // public org.semanticweb.owlapi.model.IRI org.semanticweb.owlapi.vocab.PrefixOWLOntologyFormat.getIRI(java.lang.String)
    virtual java::util::Set* getPrefixNames(); // public java.util.Set org.semanticweb.owlapi.vocab.PrefixOWLOntologyFormat.getPrefixNames()
    virtual void setDefaultPrefix(const char* arg1); // public void org.semanticweb.owlapi.vocab.PrefixOWLOntologyFormat.setDefaultPrefix(java.lang.String)
    virtual const char* getPrefixIRI(org::semanticweb::owlapi::model::IRI* arg1); // public java.lang.String org.semanticweb.owlapi.vocab.PrefixOWLOntologyFormat.getPrefixIRI(org.semanticweb.owlapi.model.IRI)
    virtual const char* getDefaultPrefix(); // public java.lang.String org.semanticweb.owlapi.vocab.PrefixOWLOntologyFormat.getDefaultPrefix()
    virtual bool containsPrefixMapping(const char* arg1); // public boolean org.semanticweb.owlapi.vocab.PrefixOWLOntologyFormat.containsPrefixMapping(java.lang.String)
    virtual java::util::Map* getPrefixName2PrefixMap(); // public java.util.Map org.semanticweb.owlapi.vocab.PrefixOWLOntologyFormat.getPrefixName2PrefixMap()
    virtual const char* getPrefix(const char* arg1); // public java.lang.String org.semanticweb.owlapi.vocab.PrefixOWLOntologyFormat.getPrefix(java.lang.String)
    virtual void setPrefix(const char* arg1, const char* arg2); // public void org.semanticweb.owlapi.vocab.PrefixOWLOntologyFormat.setPrefix(java.lang.String,java.lang.String)
    virtual void clearPrefixes(); // public void org.semanticweb.owlapi.vocab.PrefixOWLOntologyFormat.clearPrefixes()
    virtual void copyPrefixesFrom(org::semanticweb::owlapi::vocab::PrefixOWLOntologyFormat* arg1); // public void org.semanticweb.owlapi.vocab.PrefixOWLOntologyFormat.copyPrefixesFrom(org.semanticweb.owlapi.vocab.PrefixOWLOntologyFormat)
    virtual void copyPrefixesFrom(org::semanticweb::owlapi::model::PrefixManager* arg1); // public void org.semanticweb.owlapi.vocab.PrefixOWLOntologyFormat.copyPrefixesFrom(org.semanticweb.owlapi.model.PrefixManager)

};
}
}
}
}
#endif
