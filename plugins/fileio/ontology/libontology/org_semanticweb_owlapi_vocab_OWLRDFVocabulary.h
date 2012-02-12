#ifndef org_semanticweb_owlapi_vocab_OWLRDFVocabulary_H
#define org_semanticweb_owlapi_vocab_OWLRDFVocabulary_H
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
namespace net {
class URI;
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace vocab {
class Namespaces;
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
class OWLRDFVocabulary : public java::lang::Enum {
  public:
    OWLRDFVocabulary(JavaMarker* dummy);
    OWLRDFVocabulary(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual const char* toString(); // public java.lang.String org.semanticweb.owlapi.vocab.OWLRDFVocabulary.toString()
    virtual JavaObjectArray* values(); // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary[] org.semanticweb.owlapi.vocab.OWLRDFVocabulary.values()
    virtual org::semanticweb::owlapi::vocab::OWLRDFVocabulary* valueOf(const char* arg1); // public static org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.valueOf(java.lang.String)
    virtual org::semanticweb::owlapi::model::IRI* getIRI(); // public org.semanticweb.owlapi.model.IRI org.semanticweb.owlapi.vocab.OWLRDFVocabulary.getIRI()
    virtual const char* getShortName(); // public java.lang.String org.semanticweb.owlapi.vocab.OWLRDFVocabulary.getShortName()
    virtual java::net::URI* getURI(); // public java.net.URI org.semanticweb.owlapi.vocab.OWLRDFVocabulary.getURI()
    virtual org::semanticweb::owlapi::vocab::Namespaces* getNamespace(); // public org.semanticweb.owlapi.vocab.Namespaces org.semanticweb.owlapi.vocab.OWLRDFVocabulary.getNamespace()

    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_THING; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_THING
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_NOTHING; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_NOTHING
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_CLASS; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_CLASS
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_ONTOLOGY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_ONTOLOGY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_ONTOLOGY_PROPERTY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_ONTOLOGY_PROPERTY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_IMPORTS; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_IMPORTS
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_VERSION_IRI; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_VERSION_IRI
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_VERSION_INFO; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_VERSION_INFO
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_EQUIVALENT_CLASS; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_EQUIVALENT_CLASS
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_OBJECT_PROPERTY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_OBJECT_PROPERTY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_DATA_PROPERTY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_DATA_PROPERTY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_FUNCTIONAL_PROPERTY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_FUNCTIONAL_PROPERTY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_INVERSE_FUNCTIONAL_PROPERTY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_INVERSE_FUNCTIONAL_PROPERTY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_ANTI_SYMMETRIC_PROPERTY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_ANTI_SYMMETRIC_PROPERTY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_ASYMMETRIC_PROPERTY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_ASYMMETRIC_PROPERTY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_SYMMETRIC_PROPERTY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_SYMMETRIC_PROPERTY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_RESTRICTION; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_RESTRICTION
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_DATA_RESTRICTION; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_DATA_RESTRICTION
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_OBJECT_RESTRICTION; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_OBJECT_RESTRICTION
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_ON_PROPERTY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_ON_PROPERTY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_INTERSECTION_OF; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_INTERSECTION_OF
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_UNION_OF; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_UNION_OF
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_ALL_VALUES_FROM; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_ALL_VALUES_FROM
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_SOME_VALUES_FROM; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_SOME_VALUES_FROM
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_HAS_VALUE; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_HAS_VALUE
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_DISJOINT_WITH; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_DISJOINT_WITH
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_ONE_OF; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_ONE_OF
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_SELF_RESTRICTION; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_SELF_RESTRICTION
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_HAS_SELF; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_HAS_SELF
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_DISJOINT_UNION_OF; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_DISJOINT_UNION_OF
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_MIN_CARDINALITY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_MIN_CARDINALITY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_MIN_QUALIFIED_CARDINALITY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_MIN_QUALIFIED_CARDINALITY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_CARDINALITY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_CARDINALITY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_QUALIFIED_CARDINALITY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_QUALIFIED_CARDINALITY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_ANNOTATION_PROPERTY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_ANNOTATION_PROPERTY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_ANNOTATION; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_ANNOTATION
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_DECLARED_AS; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_DECLARED_AS
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_INDIVIDUAL; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_INDIVIDUAL
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_NAMED_INDIVIDUAL; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_NAMED_INDIVIDUAL
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_DATATYPE; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_DATATYPE
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* RDFS_SUBCLASS_OF; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.RDFS_SUBCLASS_OF
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* RDFS_SUB_PROPERTY_OF; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.RDFS_SUB_PROPERTY_OF
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* RDF_TYPE; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.RDF_TYPE
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* RDF_NIL; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.RDF_NIL
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* RDF_REST; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.RDF_REST
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* RDF_FIRST; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.RDF_FIRST
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* RDF_LIST; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.RDF_LIST
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_MAX_CARDINALITY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_MAX_CARDINALITY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_MAX_QUALIFIED_CARDINALITY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_MAX_QUALIFIED_CARDINALITY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_NEGATIVE_OBJECT_PROPERTY_ASSERTION; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_NEGATIVE_OBJECT_PROPERTY_ASSERTION
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_NEGATIVE_DATA_PROPERTY_ASSERTION; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_NEGATIVE_DATA_PROPERTY_ASSERTION
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_NEGATIVE_PROPERTY_ASSERTION; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_NEGATIVE_PROPERTY_ASSERTION
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* RDFS_LABEL; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.RDFS_LABEL
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* RDFS_COMMENT; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.RDFS_COMMENT
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* RDFS_SEE_ALSO; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.RDFS_SEE_ALSO
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* RDFS_IS_DEFINED_BY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.RDFS_IS_DEFINED_BY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* RDFS_RESOURCE; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.RDFS_RESOURCE
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* RDFS_LITERAL; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.RDFS_LITERAL
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* RDF_PLAIN_LITERAL; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.RDF_PLAIN_LITERAL
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* RDFS_DATATYPE; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.RDFS_DATATYPE
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_TRANSITIVE_PROPERTY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_TRANSITIVE_PROPERTY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_REFLEXIVE_PROPERTY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_REFLEXIVE_PROPERTY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_IRREFLEXIVE_PROPERTY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_IRREFLEXIVE_PROPERTY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_INVERSE_OF; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_INVERSE_OF
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_COMPLEMENT_OF; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_COMPLEMENT_OF
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_DATATYPE_COMPLEMENT_OF; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_DATATYPE_COMPLEMENT_OF
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_ALL_DIFFERENT; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_ALL_DIFFERENT
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_DISTINCT_MEMBERS; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_DISTINCT_MEMBERS
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_SAME_AS; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_SAME_AS
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_DIFFERENT_FROM; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_DIFFERENT_FROM
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_DEPRECATED_PROPERTY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_DEPRECATED_PROPERTY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_EQUIVALENT_PROPERTY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_EQUIVALENT_PROPERTY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_DEPRECATED_CLASS; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_DEPRECATED_CLASS
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_DATA_RANGE; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_DATA_RANGE
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* RDFS_DOMAIN; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.RDFS_DOMAIN
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* RDFS_RANGE; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.RDFS_RANGE
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* RDFS_CLASS; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.RDFS_CLASS
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* RDF_PROPERTY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.RDF_PROPERTY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* RDF_SUBJECT; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.RDF_SUBJECT
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* RDF_PREDICATE; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.RDF_PREDICATE
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* RDF_OBJECT; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.RDF_OBJECT
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_SUBJECT; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_SUBJECT
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_PREDICATE; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_PREDICATE
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_OBJECT; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_OBJECT
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* RDF_DESCRIPTION; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.RDF_DESCRIPTION
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* RDF_XML_LITERAL; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.RDF_XML_LITERAL
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_PRIOR_VERSION; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_PRIOR_VERSION
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_DEPRECATED; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_DEPRECATED
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_BACKWARD_COMPATIBLE_WITH; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_BACKWARD_COMPATIBLE_WITH
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_INCOMPATIBLE_WITH; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_INCOMPATIBLE_WITH
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_OBJECT_PROPERTY_DOMAIN; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_OBJECT_PROPERTY_DOMAIN
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_DATA_PROPERTY_DOMAIN; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_DATA_PROPERTY_DOMAIN
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_DATA_PROPERTY_RANGE; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_DATA_PROPERTY_RANGE
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_OBJECT_PROPERTY_RANGE; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_OBJECT_PROPERTY_RANGE
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_SUB_OBJECT_PROPERTY_OF; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_SUB_OBJECT_PROPERTY_OF
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_SUB_DATA_PROPERTY_OF; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_SUB_DATA_PROPERTY_OF
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_DISJOINT_DATA_PROPERTIES; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_DISJOINT_DATA_PROPERTIES
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_DISJOINT_OBJECT_PROPERTIES; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_DISJOINT_OBJECT_PROPERTIES
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_PROPERTY_DISJOINT_WITH; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_PROPERTY_DISJOINT_WITH
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_EQUIVALENT_DATA_PROPERTIES; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_EQUIVALENT_DATA_PROPERTIES
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_EQUIVALENT_OBJECT_PROPERTIES; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_EQUIVALENT_OBJECT_PROPERTIES
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_FUNCTIONAL_DATA_PROPERTY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_FUNCTIONAL_DATA_PROPERTY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_FUNCTIONAL_OBJECT_PROPERTY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_FUNCTIONAL_OBJECT_PROPERTY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_ON_CLASS; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_ON_CLASS
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_ON_DATA_RANGE; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_ON_DATA_RANGE
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_ON_DATA_TYPE; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_ON_DATA_TYPE
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_WITH_RESTRICTIONS; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_WITH_RESTRICTIONS
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_INVERSE_OBJECT_PROPERTY_EXPRESSION; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_INVERSE_OBJECT_PROPERTY_EXPRESSION
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_AXIOM; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_AXIOM
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_PROPERTY_CHAIN; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_PROPERTY_CHAIN
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_PROPERTY_CHAIN_AXIOM; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_PROPERTY_CHAIN_AXIOM
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_ALL_DISJOINT_CLASSES; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_ALL_DISJOINT_CLASSES
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_MEMBERS; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_MEMBERS
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_ALL_DISJOINT_PROPERTIES; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_ALL_DISJOINT_PROPERTIES
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_TOP_OBJECT_PROPERTY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_TOP_OBJECT_PROPERTY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_BOTTOM_OBJECT_PROPERTY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_BOTTOM_OBJECT_PROPERTY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_TOP_DATA_PROPERTY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_TOP_DATA_PROPERTY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_BOTTOM_DATA_PROPERTY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_BOTTOM_DATA_PROPERTY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_HAS_KEY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_HAS_KEY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_ANNOTATED_SOURCE; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_ANNOTATED_SOURCE
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_ANNOTATED_PROPERTY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_ANNOTATED_PROPERTY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_ANNOTATED_TARGET; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_ANNOTATED_TARGET
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_SOURCE_INDIVIDUAL; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_SOURCE_INDIVIDUAL
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_ASSERTION_PROPERTY; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_ASSERTION_PROPERTY
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_TARGET_INDIVIDUAL; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_TARGET_INDIVIDUAL
    org::semanticweb::owlapi::vocab::OWLRDFVocabulary* OWL_TARGET_VALUE; // public static final org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.vocab.OWLRDFVocabulary.OWL_TARGET_VALUE
    java::util::Set* BUILT_IN_VOCABULARY_IRIS; // public static final java.util.Set org.semanticweb.owlapi.vocab.OWLRDFVocabulary.BUILT_IN_VOCABULARY_IRIS
    java::util::Set* BUILT_IN_ANNOTATION_PROPERTY_IRIS; // public static final java.util.Set org.semanticweb.owlapi.vocab.OWLRDFVocabulary.BUILT_IN_ANNOTATION_PROPERTY_IRIS
};
}
}
}
}
#endif
