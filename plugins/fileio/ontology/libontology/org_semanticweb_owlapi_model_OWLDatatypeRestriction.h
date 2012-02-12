#ifndef org_semanticweb_owlapi_model_OWLDatatypeRestriction_H
#define org_semanticweb_owlapi_model_OWLDatatypeRestriction_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataRange;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDatatype;
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
namespace model {
class OWLDatatypeRestriction : public java::lang::Object {
  public:
    OWLDatatypeRestriction(JavaMarker* dummy);
    OWLDatatypeRestriction(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLDatatype* getDatatype(); // public abstract org.semanticweb.owlapi.model.OWLDatatype org.semanticweb.owlapi.model.OWLDatatypeRestriction.getDatatype()
    virtual java::util::Set* getFacetRestrictions(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLDatatypeRestriction.getFacetRestrictions()

};
}
}
}
}
#endif
