#ifndef org_semanticweb_owlapi_vocab_OWL2Datatype_H
#define org_semanticweb_owlapi_vocab_OWL2Datatype_H
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

namespace java {
namespace util {
namespace regex {
class Pattern;
}
}
}

namespace java {
namespace net {
class URI;
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace vocab {
class OWL2Datatype__Category;
}
}
}
}

namespace java {
namespace util {
class Collection;
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
class OWL2Datatype : public java::lang::Enum {
  public:
    OWL2Datatype(JavaMarker* dummy);
    OWL2Datatype(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual JavaObjectArray* values(); // public static final org.semanticweb.owlapi.vocab.OWL2Datatype[] org.semanticweb.owlapi.vocab.OWL2Datatype.values()
    virtual org::semanticweb::owlapi::vocab::OWL2Datatype* valueOf(const char* arg1); // public static org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.valueOf(java.lang.String)
    virtual bool isFinite(); // public boolean org.semanticweb.owlapi.vocab.OWL2Datatype.isFinite()
    virtual org::semanticweb::owlapi::model::IRI* getIRI(); // public org.semanticweb.owlapi.model.IRI org.semanticweb.owlapi.vocab.OWL2Datatype.getIRI()
    virtual bool isBuiltIn(org::semanticweb::owlapi::model::IRI* arg1); // public static boolean org.semanticweb.owlapi.vocab.OWL2Datatype.isBuiltIn(org.semanticweb.owlapi.model.IRI)
    virtual org::semanticweb::owlapi::vocab::OWL2Datatype* getDatatype(org::semanticweb::owlapi::model::IRI* arg1); // public static org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.getDatatype(org.semanticweb.owlapi.model.IRI)
    virtual java::util::Set* getDatatypeIRIs(); // public static java.util.Set org.semanticweb.owlapi.vocab.OWL2Datatype.getDatatypeIRIs()
    virtual java::util::regex::Pattern* getPattern(); // public java.util.regex.Pattern org.semanticweb.owlapi.vocab.OWL2Datatype.getPattern()
    virtual const char* getShortName(); // public java.lang.String org.semanticweb.owlapi.vocab.OWL2Datatype.getShortName()
    virtual java::net::URI* getURI(); // public java.net.URI org.semanticweb.owlapi.vocab.OWL2Datatype.getURI()
    virtual org::semanticweb::owlapi::vocab::OWL2Datatype__Category* getCategory(); // public org.semanticweb.owlapi.vocab.OWL2Datatype$Category org.semanticweb.owlapi.vocab.OWL2Datatype.getCategory()
    virtual bool isNumeric(); // public boolean org.semanticweb.owlapi.vocab.OWL2Datatype.isNumeric()
    virtual java::util::Collection* getFacets(); // public java.util.Collection org.semanticweb.owlapi.vocab.OWL2Datatype.getFacets()
    virtual bool isInLexicalSpace(const char* arg1); // public boolean org.semanticweb.owlapi.vocab.OWL2Datatype.isInLexicalSpace(java.lang.String)

    org::semanticweb::owlapi::vocab::OWL2Datatype* RDF_XML_LITERAL; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.RDF_XML_LITERAL
    org::semanticweb::owlapi::vocab::OWL2Datatype* RDFS_LITERAL; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.RDFS_LITERAL
    org::semanticweb::owlapi::vocab::OWL2Datatype* RDF_PLAIN_LITERAL; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.RDF_PLAIN_LITERAL
    org::semanticweb::owlapi::vocab::OWL2Datatype* OWL_REAL; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.OWL_REAL
    org::semanticweb::owlapi::vocab::OWL2Datatype* OWL_RATIONAL; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.OWL_RATIONAL
    org::semanticweb::owlapi::vocab::OWL2Datatype* XSD_DECIMAL; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.XSD_DECIMAL
    org::semanticweb::owlapi::vocab::OWL2Datatype* XSD_INTEGER; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.XSD_INTEGER
    org::semanticweb::owlapi::vocab::OWL2Datatype* XSD_NON_NEGATIVE_INTEGER; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.XSD_NON_NEGATIVE_INTEGER
    org::semanticweb::owlapi::vocab::OWL2Datatype* XSD_NON_POSITIVE_INTEGER; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.XSD_NON_POSITIVE_INTEGER
    org::semanticweb::owlapi::vocab::OWL2Datatype* XSD_POSITIVE_INTEGER; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.XSD_POSITIVE_INTEGER
    org::semanticweb::owlapi::vocab::OWL2Datatype* XSD_NEGATIVE_INTEGER; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.XSD_NEGATIVE_INTEGER
    org::semanticweb::owlapi::vocab::OWL2Datatype* XSD_LONG; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.XSD_LONG
    org::semanticweb::owlapi::vocab::OWL2Datatype* XSD_INT; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.XSD_INT
    org::semanticweb::owlapi::vocab::OWL2Datatype* XSD_SHORT; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.XSD_SHORT
    org::semanticweb::owlapi::vocab::OWL2Datatype* XSD_BYTE; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.XSD_BYTE
    org::semanticweb::owlapi::vocab::OWL2Datatype* XSD_UNSIGNED_LONG; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.XSD_UNSIGNED_LONG
    org::semanticweb::owlapi::vocab::OWL2Datatype* XSD_UNSIGNED_INT; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.XSD_UNSIGNED_INT
    org::semanticweb::owlapi::vocab::OWL2Datatype* XSD_UNSIGNED_SHORT; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.XSD_UNSIGNED_SHORT
    org::semanticweb::owlapi::vocab::OWL2Datatype* XSD_UNSIGNED_BYTE; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.XSD_UNSIGNED_BYTE
    org::semanticweb::owlapi::vocab::OWL2Datatype* XSD_DOUBLE; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.XSD_DOUBLE
    org::semanticweb::owlapi::vocab::OWL2Datatype* XSD_FLOAT; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.XSD_FLOAT
    org::semanticweb::owlapi::vocab::OWL2Datatype* XSD_STRING; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.XSD_STRING
    org::semanticweb::owlapi::vocab::OWL2Datatype* XSD_NORMALIZED_STRING; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.XSD_NORMALIZED_STRING
    org::semanticweb::owlapi::vocab::OWL2Datatype* XSD_TOKEN; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.XSD_TOKEN
    org::semanticweb::owlapi::vocab::OWL2Datatype* XSD_LANGUAGE; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.XSD_LANGUAGE
    org::semanticweb::owlapi::vocab::OWL2Datatype* XSD_NAME; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.XSD_NAME
    org::semanticweb::owlapi::vocab::OWL2Datatype* XSD_NCNAME; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.XSD_NCNAME
    org::semanticweb::owlapi::vocab::OWL2Datatype* XSD_NMTOKEN; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.XSD_NMTOKEN
    org::semanticweb::owlapi::vocab::OWL2Datatype* XSD_BOOLEAN; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.XSD_BOOLEAN
    org::semanticweb::owlapi::vocab::OWL2Datatype* XSD_HEX_BINARY; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.XSD_HEX_BINARY
    org::semanticweb::owlapi::vocab::OWL2Datatype* XSD_BASE_64_BINARY; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.XSD_BASE_64_BINARY
    org::semanticweb::owlapi::vocab::OWL2Datatype* XSD_ANY_URI; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.XSD_ANY_URI
    org::semanticweb::owlapi::vocab::OWL2Datatype* XSD_DATE_TIME; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.XSD_DATE_TIME
    org::semanticweb::owlapi::vocab::OWL2Datatype* XSD_DATE_TIME_STAMP; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.vocab.OWL2Datatype.XSD_DATE_TIME_STAMP
};
}
}
}
}
#endif
