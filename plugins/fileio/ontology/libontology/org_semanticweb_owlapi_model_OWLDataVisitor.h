#ifndef org_semanticweb_owlapi_model_OWLDataVisitor_H
#define org_semanticweb_owlapi_model_OWLDataVisitor_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataRangeVisitor;
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
class OWLDataVisitor : public java::lang::Object {
  public:
    OWLDataVisitor(JavaMarker* dummy);
    OWLDataVisitor(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void visit(org::semanticweb::owlapi::model::OWLLiteral* arg1); // public abstract void org.semanticweb.owlapi.model.OWLDataVisitor.visit(org.semanticweb.owlapi.model.OWLLiteral)
    virtual void visit(org::semanticweb::owlapi::model::OWLFacetRestriction* arg1); // public abstract void org.semanticweb.owlapi.model.OWLDataVisitor.visit(org.semanticweb.owlapi.model.OWLFacetRestriction)

};
}
}
}
}
#endif
