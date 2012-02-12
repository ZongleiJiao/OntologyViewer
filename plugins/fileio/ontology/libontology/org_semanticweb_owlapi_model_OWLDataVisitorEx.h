#ifndef org_semanticweb_owlapi_model_OWLDataVisitorEx_H
#define org_semanticweb_owlapi_model_OWLDataVisitorEx_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDatatype;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataComplementOf;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataOneOf;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataIntersectionOf;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataUnionOf;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDatatypeRestriction;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLLiteral;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLFacetRestriction;
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
class OWLDataVisitorEx : public java::lang::Object {
  public:
    OWLDataVisitorEx(JavaMarker* dummy);
    OWLDataVisitorEx(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLDatatype* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLDataVisitorEx.visit(org.semanticweb.owlapi.model.OWLDatatype)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLDataComplementOf* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLDataVisitorEx.visit(org.semanticweb.owlapi.model.OWLDataComplementOf)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLDataOneOf* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLDataVisitorEx.visit(org.semanticweb.owlapi.model.OWLDataOneOf)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLDataIntersectionOf* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLDataVisitorEx.visit(org.semanticweb.owlapi.model.OWLDataIntersectionOf)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLDataUnionOf* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLDataVisitorEx.visit(org.semanticweb.owlapi.model.OWLDataUnionOf)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLDatatypeRestriction* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLDataVisitorEx.visit(org.semanticweb.owlapi.model.OWLDatatypeRestriction)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLLiteral* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLDataVisitorEx.visit(org.semanticweb.owlapi.model.OWLLiteral)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLFacetRestriction* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLDataVisitorEx.visit(org.semanticweb.owlapi.model.OWLFacetRestriction)

};
}
}
}
}
#endif
