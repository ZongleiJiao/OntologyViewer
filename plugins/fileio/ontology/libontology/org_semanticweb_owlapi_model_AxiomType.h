#ifndef org_semanticweb_owlapi_model_AxiomType_H
#define org_semanticweb_owlapi_model_AxiomType_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

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
class AxiomType : public java::lang::Object {
  public:
    AxiomType(JavaMarker* dummy);
    AxiomType(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual const char* toString(); // public java.lang.String org.semanticweb.owlapi.model.AxiomType.toString()
    virtual const char* getName(); // public java.lang.String org.semanticweb.owlapi.model.AxiomType.getName()
    virtual int getIndex(); // public int org.semanticweb.owlapi.model.AxiomType.getIndex()
    virtual org::semanticweb::owlapi::model::AxiomType* getAxiomType(const char* arg1); // public static org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.getAxiomType(java.lang.String)
    virtual bool isLogical(); // public boolean org.semanticweb.owlapi.model.AxiomType.isLogical()
    virtual bool isOWL2Axiom(); // public boolean org.semanticweb.owlapi.model.AxiomType.isOWL2Axiom()
    virtual bool isNonSyntacticOWL2Axiom(); // public boolean org.semanticweb.owlapi.model.AxiomType.isNonSyntacticOWL2Axiom()
    virtual java::util::Set* getAxiomsWithoutTypes(java::util::Set* arg1, JavaObjectArray* arg2); // public static java.util.Set org.semanticweb.owlapi.model.AxiomType.getAxiomsWithoutTypes(java.util.Set,org.semanticweb.owlapi.model.AxiomType[])
    virtual java::util::Set* getAxiomsOfTypes(java::util::Set* arg1, JavaObjectArray* arg2); // public static java.util.Set org.semanticweb.owlapi.model.AxiomType.getAxiomsOfTypes(java.util.Set,org.semanticweb.owlapi.model.AxiomType[])
    virtual bool isAxiomType(const char* arg1); // public boolean org.semanticweb.owlapi.model.AxiomType.isAxiomType(java.lang.String)

    int index; // public final int org.semanticweb.owlapi.model.AxiomType.index
    java::util::Set* AXIOM_TYPES; // public static final java.util.Set org.semanticweb.owlapi.model.AxiomType.AXIOM_TYPES
    org::semanticweb::owlapi::model::AxiomType* DECLARATION; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.DECLARATION
    org::semanticweb::owlapi::model::AxiomType* EQUIVALENT_CLASSES; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.EQUIVALENT_CLASSES
    org::semanticweb::owlapi::model::AxiomType* SUBCLASS_OF; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.SUBCLASS_OF
    org::semanticweb::owlapi::model::AxiomType* DISJOINT_CLASSES; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.DISJOINT_CLASSES
    org::semanticweb::owlapi::model::AxiomType* DISJOINT_UNION; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.DISJOINT_UNION
    org::semanticweb::owlapi::model::AxiomType* CLASS_ASSERTION; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.CLASS_ASSERTION
    org::semanticweb::owlapi::model::AxiomType* SAME_INDIVIDUAL; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.SAME_INDIVIDUAL
    org::semanticweb::owlapi::model::AxiomType* DIFFERENT_INDIVIDUALS; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.DIFFERENT_INDIVIDUALS
    org::semanticweb::owlapi::model::AxiomType* OBJECT_PROPERTY_ASSERTION; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.OBJECT_PROPERTY_ASSERTION
    org::semanticweb::owlapi::model::AxiomType* NEGATIVE_OBJECT_PROPERTY_ASSERTION; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.NEGATIVE_OBJECT_PROPERTY_ASSERTION
    org::semanticweb::owlapi::model::AxiomType* DATA_PROPERTY_ASSERTION; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.DATA_PROPERTY_ASSERTION
    org::semanticweb::owlapi::model::AxiomType* NEGATIVE_DATA_PROPERTY_ASSERTION; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.NEGATIVE_DATA_PROPERTY_ASSERTION
    org::semanticweb::owlapi::model::AxiomType* EQUIVALENT_OBJECT_PROPERTIES; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.EQUIVALENT_OBJECT_PROPERTIES
    org::semanticweb::owlapi::model::AxiomType* SUB_OBJECT_PROPERTY; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.SUB_OBJECT_PROPERTY
    org::semanticweb::owlapi::model::AxiomType* INVERSE_OBJECT_PROPERTIES; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.INVERSE_OBJECT_PROPERTIES
    org::semanticweb::owlapi::model::AxiomType* FUNCTIONAL_OBJECT_PROPERTY; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.FUNCTIONAL_OBJECT_PROPERTY
    org::semanticweb::owlapi::model::AxiomType* INVERSE_FUNCTIONAL_OBJECT_PROPERTY; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.INVERSE_FUNCTIONAL_OBJECT_PROPERTY
    org::semanticweb::owlapi::model::AxiomType* SYMMETRIC_OBJECT_PROPERTY; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.SYMMETRIC_OBJECT_PROPERTY
    org::semanticweb::owlapi::model::AxiomType* ASYMMETRIC_OBJECT_PROPERTY; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.ASYMMETRIC_OBJECT_PROPERTY
    org::semanticweb::owlapi::model::AxiomType* TRANSITIVE_OBJECT_PROPERTY; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.TRANSITIVE_OBJECT_PROPERTY
    org::semanticweb::owlapi::model::AxiomType* REFLEXIVE_OBJECT_PROPERTY; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.REFLEXIVE_OBJECT_PROPERTY
    org::semanticweb::owlapi::model::AxiomType* IRREFLEXIVE_OBJECT_PROPERTY; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.IRREFLEXIVE_OBJECT_PROPERTY
    org::semanticweb::owlapi::model::AxiomType* OBJECT_PROPERTY_DOMAIN; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.OBJECT_PROPERTY_DOMAIN
    org::semanticweb::owlapi::model::AxiomType* OBJECT_PROPERTY_RANGE; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.OBJECT_PROPERTY_RANGE
    org::semanticweb::owlapi::model::AxiomType* DISJOINT_OBJECT_PROPERTIES; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.DISJOINT_OBJECT_PROPERTIES
    org::semanticweb::owlapi::model::AxiomType* SUB_PROPERTY_CHAIN_OF; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.SUB_PROPERTY_CHAIN_OF
    org::semanticweb::owlapi::model::AxiomType* EQUIVALENT_DATA_PROPERTIES; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.EQUIVALENT_DATA_PROPERTIES
    org::semanticweb::owlapi::model::AxiomType* SUB_DATA_PROPERTY; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.SUB_DATA_PROPERTY
    org::semanticweb::owlapi::model::AxiomType* FUNCTIONAL_DATA_PROPERTY; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.FUNCTIONAL_DATA_PROPERTY
    org::semanticweb::owlapi::model::AxiomType* DATA_PROPERTY_DOMAIN; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.DATA_PROPERTY_DOMAIN
    org::semanticweb::owlapi::model::AxiomType* DATA_PROPERTY_RANGE; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.DATA_PROPERTY_RANGE
    org::semanticweb::owlapi::model::AxiomType* DISJOINT_DATA_PROPERTIES; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.DISJOINT_DATA_PROPERTIES
    org::semanticweb::owlapi::model::AxiomType* HAS_KEY; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.HAS_KEY
    org::semanticweb::owlapi::model::AxiomType* SWRL_RULE; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.SWRL_RULE
    org::semanticweb::owlapi::model::AxiomType* ANNOTATION_ASSERTION; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.ANNOTATION_ASSERTION
    org::semanticweb::owlapi::model::AxiomType* SUB_ANNOTATION_PROPERTY_OF; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.SUB_ANNOTATION_PROPERTY_OF
    org::semanticweb::owlapi::model::AxiomType* ANNOTATION_PROPERTY_RANGE; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.ANNOTATION_PROPERTY_RANGE
    org::semanticweb::owlapi::model::AxiomType* ANNOTATION_PROPERTY_DOMAIN; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.ANNOTATION_PROPERTY_DOMAIN
    org::semanticweb::owlapi::model::AxiomType* DATATYPE_DEFINITION; // public static final org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.AxiomType.DATATYPE_DEFINITION
    java::util::Set* TBoxAxiomTypes; // public static final java.util.Set org.semanticweb.owlapi.model.AxiomType.TBoxAxiomTypes
    java::util::Set* ABoxAxiomTypes; // public static final java.util.Set org.semanticweb.owlapi.model.AxiomType.ABoxAxiomTypes
    java::util::Set* RBoxAxiomTypes; // public static final java.util.Set org.semanticweb.owlapi.model.AxiomType.RBoxAxiomTypes
};
}
}
}
}
#endif
