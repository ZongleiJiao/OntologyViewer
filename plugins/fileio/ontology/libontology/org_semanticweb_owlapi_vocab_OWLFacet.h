#ifndef org_semanticweb_owlapi_vocab_OWLFacet_H
#define org_semanticweb_owlapi_vocab_OWLFacet_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Enum.h>

namespace java {
namespace lang {
class String;
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
namespace vocab {
class OWLFacet : public java::lang::Enum {
  public:
    OWLFacet(JavaMarker* dummy);
    OWLFacet(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual const char* toString(); // public java.lang.String org.semanticweb.owlapi.vocab.OWLFacet.toString()
    virtual JavaObjectArray* values(); // public static final org.semanticweb.owlapi.vocab.OWLFacet[] org.semanticweb.owlapi.vocab.OWLFacet.values()
    virtual org::semanticweb::owlapi::vocab::OWLFacet* valueOf(const char* arg1); // public static org.semanticweb.owlapi.vocab.OWLFacet org.semanticweb.owlapi.vocab.OWLFacet.valueOf(java.lang.String)
    virtual org::semanticweb::owlapi::model::IRI* getIRI(); // public org.semanticweb.owlapi.model.IRI org.semanticweb.owlapi.vocab.OWLFacet.getIRI()
    virtual const char* getShortName(); // public java.lang.String org.semanticweb.owlapi.vocab.OWLFacet.getShortName()
    virtual java::util::Set* getFacets(); // public static java.util.Set org.semanticweb.owlapi.vocab.OWLFacet.getFacets()
    virtual const char* getSymbolicForm(); // public java.lang.String org.semanticweb.owlapi.vocab.OWLFacet.getSymbolicForm()
    virtual java::util::Set* getFacetIRIs(); // public static java.util.Set org.semanticweb.owlapi.vocab.OWLFacet.getFacetIRIs()
    virtual org::semanticweb::owlapi::vocab::OWLFacet* getFacet(org::semanticweb::owlapi::model::IRI* arg1); // public static org.semanticweb.owlapi.vocab.OWLFacet org.semanticweb.owlapi.vocab.OWLFacet.getFacet(org.semanticweb.owlapi.model.IRI)
    virtual org::semanticweb::owlapi::vocab::OWLFacet* getFacetByShortName(const char* arg1); // public static org.semanticweb.owlapi.vocab.OWLFacet org.semanticweb.owlapi.vocab.OWLFacet.getFacetByShortName(java.lang.String)
    virtual org::semanticweb::owlapi::vocab::OWLFacet* getFacetBySymbolicName(const char* arg1); // public static org.semanticweb.owlapi.vocab.OWLFacet org.semanticweb.owlapi.vocab.OWLFacet.getFacetBySymbolicName(java.lang.String)

    org::semanticweb::owlapi::vocab::OWLFacet* LENGTH; // public static final org.semanticweb.owlapi.vocab.OWLFacet org.semanticweb.owlapi.vocab.OWLFacet.LENGTH
    org::semanticweb::owlapi::vocab::OWLFacet* MIN_LENGTH; // public static final org.semanticweb.owlapi.vocab.OWLFacet org.semanticweb.owlapi.vocab.OWLFacet.MIN_LENGTH
    org::semanticweb::owlapi::vocab::OWLFacet* MAX_LENGTH; // public static final org.semanticweb.owlapi.vocab.OWLFacet org.semanticweb.owlapi.vocab.OWLFacet.MAX_LENGTH
    org::semanticweb::owlapi::vocab::OWLFacet* PATTERN; // public static final org.semanticweb.owlapi.vocab.OWLFacet org.semanticweb.owlapi.vocab.OWLFacet.PATTERN
    org::semanticweb::owlapi::vocab::OWLFacet* MIN_INCLUSIVE; // public static final org.semanticweb.owlapi.vocab.OWLFacet org.semanticweb.owlapi.vocab.OWLFacet.MIN_INCLUSIVE
    org::semanticweb::owlapi::vocab::OWLFacet* MIN_EXCLUSIVE; // public static final org.semanticweb.owlapi.vocab.OWLFacet org.semanticweb.owlapi.vocab.OWLFacet.MIN_EXCLUSIVE
    org::semanticweb::owlapi::vocab::OWLFacet* MAX_INCLUSIVE; // public static final org.semanticweb.owlapi.vocab.OWLFacet org.semanticweb.owlapi.vocab.OWLFacet.MAX_INCLUSIVE
    org::semanticweb::owlapi::vocab::OWLFacet* MAX_EXCLUSIVE; // public static final org.semanticweb.owlapi.vocab.OWLFacet org.semanticweb.owlapi.vocab.OWLFacet.MAX_EXCLUSIVE
    org::semanticweb::owlapi::vocab::OWLFacet* TOTAL_DIGITS; // public static final org.semanticweb.owlapi.vocab.OWLFacet org.semanticweb.owlapi.vocab.OWLFacet.TOTAL_DIGITS
    org::semanticweb::owlapi::vocab::OWLFacet* FRACTION_DIGITS; // public static final org.semanticweb.owlapi.vocab.OWLFacet org.semanticweb.owlapi.vocab.OWLFacet.FRACTION_DIGITS
    org::semanticweb::owlapi::vocab::OWLFacet* LANG_RANGE; // public static final org.semanticweb.owlapi.vocab.OWLFacet org.semanticweb.owlapi.vocab.OWLFacet.LANG_RANGE
    java::util::Set* FACET_IRIS; // public static final java.util.Set org.semanticweb.owlapi.vocab.OWLFacet.FACET_IRIS
};
}
}
}
}
#endif
