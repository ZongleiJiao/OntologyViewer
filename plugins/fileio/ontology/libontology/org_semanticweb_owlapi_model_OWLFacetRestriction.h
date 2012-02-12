#ifndef org_semanticweb_owlapi_model_OWLFacetRestriction_H
#define org_semanticweb_owlapi_model_OWLFacetRestriction_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObject;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataVisitor;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataVisitorEx;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace vocab {
class OWLFacet;
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
class OWLFacetRestriction : public java::lang::Object {
  public:
    OWLFacetRestriction(JavaMarker* dummy);
    OWLFacetRestriction(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void accept(org::semanticweb::owlapi::model::OWLDataVisitor* arg1); // public abstract void org.semanticweb.owlapi.model.OWLFacetRestriction.accept(org.semanticweb.owlapi.model.OWLDataVisitor)
    virtual java::lang::Object* accept(org::semanticweb::owlapi::model::OWLDataVisitorEx* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLFacetRestriction.accept(org.semanticweb.owlapi.model.OWLDataVisitorEx)
    virtual org::semanticweb::owlapi::vocab::OWLFacet* getFacet(); // public abstract org.semanticweb.owlapi.vocab.OWLFacet org.semanticweb.owlapi.model.OWLFacetRestriction.getFacet()
    virtual org::semanticweb::owlapi::model::OWLLiteral* getFacetValue(); // public abstract org.semanticweb.owlapi.model.OWLLiteral org.semanticweb.owlapi.model.OWLFacetRestriction.getFacetValue()

};
}
}
}
}
#endif
