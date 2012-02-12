#ifndef org_semanticweb_owlapi_vocab_Namespaces_H
#define org_semanticweb_owlapi_vocab_Namespaces_H
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
namespace vocab {
class Namespaces : public java::lang::Enum {
  public:
    Namespaces(JavaMarker* dummy);
    Namespaces(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual const char* toString(); // public java.lang.String org.semanticweb.owlapi.vocab.Namespaces.toString()
    virtual JavaObjectArray* values(); // public static final org.semanticweb.owlapi.vocab.Namespaces[] org.semanticweb.owlapi.vocab.Namespaces.values()
    virtual org::semanticweb::owlapi::vocab::Namespaces* valueOf(const char* arg1); // public static org.semanticweb.owlapi.vocab.Namespaces org.semanticweb.owlapi.vocab.Namespaces.valueOf(java.lang.String)

    org::semanticweb::owlapi::vocab::Namespaces* OWL2; // public static final org.semanticweb.owlapi.vocab.Namespaces org.semanticweb.owlapi.vocab.Namespaces.OWL2
    org::semanticweb::owlapi::vocab::Namespaces* OWL11XML; // public static final org.semanticweb.owlapi.vocab.Namespaces org.semanticweb.owlapi.vocab.Namespaces.OWL11XML
    org::semanticweb::owlapi::vocab::Namespaces* OWL11; // public static final org.semanticweb.owlapi.vocab.Namespaces org.semanticweb.owlapi.vocab.Namespaces.OWL11
    org::semanticweb::owlapi::vocab::Namespaces* OWL; // public static final org.semanticweb.owlapi.vocab.Namespaces org.semanticweb.owlapi.vocab.Namespaces.OWL
    org::semanticweb::owlapi::vocab::Namespaces* RDFS; // public static final org.semanticweb.owlapi.vocab.Namespaces org.semanticweb.owlapi.vocab.Namespaces.RDFS
    org::semanticweb::owlapi::vocab::Namespaces* RDF; // public static final org.semanticweb.owlapi.vocab.Namespaces org.semanticweb.owlapi.vocab.Namespaces.RDF
    org::semanticweb::owlapi::vocab::Namespaces* XSD; // public static final org.semanticweb.owlapi.vocab.Namespaces org.semanticweb.owlapi.vocab.Namespaces.XSD
    org::semanticweb::owlapi::vocab::Namespaces* XML; // public static final org.semanticweb.owlapi.vocab.Namespaces org.semanticweb.owlapi.vocab.Namespaces.XML
    org::semanticweb::owlapi::vocab::Namespaces* SWRL; // public static final org.semanticweb.owlapi.vocab.Namespaces org.semanticweb.owlapi.vocab.Namespaces.SWRL
    org::semanticweb::owlapi::vocab::Namespaces* SWRLB; // public static final org.semanticweb.owlapi.vocab.Namespaces org.semanticweb.owlapi.vocab.Namespaces.SWRLB
    org::semanticweb::owlapi::vocab::Namespaces* SKOS; // public static final org.semanticweb.owlapi.vocab.Namespaces org.semanticweb.owlapi.vocab.Namespaces.SKOS
};
}
}
}
}
#endif
