#ifndef org_semanticweb_owlapi_vocab_OWL2Datatype__Category_H
#define org_semanticweb_owlapi_vocab_OWL2Datatype__Category_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Enum.h>

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
namespace vocab {
class OWL2Datatype__Category : public java::lang::Enum {
  public:
    OWL2Datatype__Category(JavaMarker* dummy);
    OWL2Datatype__Category(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual JavaObjectArray* values(); // public static final org.semanticweb.owlapi.vocab.OWL2Datatype$Category[] org.semanticweb.owlapi.vocab.OWL2Datatype$Category.values()
    virtual org::semanticweb::owlapi::vocab::OWL2Datatype__Category* valueOf(const char* arg1); // public static org.semanticweb.owlapi.vocab.OWL2Datatype$Category org.semanticweb.owlapi.vocab.OWL2Datatype$Category.valueOf(java.lang.String)
    virtual const char* getName(); // public java.lang.String org.semanticweb.owlapi.vocab.OWL2Datatype$Category.getName()
    virtual java::util::Set* getFacets(); // public java.util.Set org.semanticweb.owlapi.vocab.OWL2Datatype$Category.getFacets()

    org::semanticweb::owlapi::vocab::OWL2Datatype__Category* UNIVERSAL; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype$Category org.semanticweb.owlapi.vocab.OWL2Datatype$Category.UNIVERSAL
    org::semanticweb::owlapi::vocab::OWL2Datatype__Category* NUMBER; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype$Category org.semanticweb.owlapi.vocab.OWL2Datatype$Category.NUMBER
    org::semanticweb::owlapi::vocab::OWL2Datatype__Category* STRING_WITH_LANGUAGE_TAG; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype$Category org.semanticweb.owlapi.vocab.OWL2Datatype$Category.STRING_WITH_LANGUAGE_TAG
    org::semanticweb::owlapi::vocab::OWL2Datatype__Category* STRING_WITHOUT_LANGUAGE_TAG; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype$Category org.semanticweb.owlapi.vocab.OWL2Datatype$Category.STRING_WITHOUT_LANGUAGE_TAG
    org::semanticweb::owlapi::vocab::OWL2Datatype__Category* BOOLEAN; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype$Category org.semanticweb.owlapi.vocab.OWL2Datatype$Category.BOOLEAN
    org::semanticweb::owlapi::vocab::OWL2Datatype__Category* BINARY; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype$Category org.semanticweb.owlapi.vocab.OWL2Datatype$Category.BINARY
    org::semanticweb::owlapi::vocab::OWL2Datatype__Category* URI; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype$Category org.semanticweb.owlapi.vocab.OWL2Datatype$Category.URI
    org::semanticweb::owlapi::vocab::OWL2Datatype__Category* TIME; // public static final org.semanticweb.owlapi.vocab.OWL2Datatype$Category org.semanticweb.owlapi.vocab.OWL2Datatype$Category.TIME
};
}
}
}
}
#endif
