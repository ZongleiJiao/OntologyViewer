#ifndef org_semanticweb_owlapi_model_OWLDataRangeVisitor_H
#define org_semanticweb_owlapi_model_OWLDataRangeVisitor_H
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
class OWLDataOneOf;
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
class OWLDataRangeVisitor : public java::lang::Object {
  public:
    OWLDataRangeVisitor(JavaMarker* dummy);
    OWLDataRangeVisitor(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void visit(org::semanticweb::owlapi::model::OWLDatatype* arg1); // public abstract void org.semanticweb.owlapi.model.OWLDataRangeVisitor.visit(org.semanticweb.owlapi.model.OWLDatatype)
    virtual void visit(org::semanticweb::owlapi::model::OWLDataOneOf* arg1); // public abstract void org.semanticweb.owlapi.model.OWLDataRangeVisitor.visit(org.semanticweb.owlapi.model.OWLDataOneOf)
    virtual void visit(org::semanticweb::owlapi::model::OWLDataComplementOf* arg1); // public abstract void org.semanticweb.owlapi.model.OWLDataRangeVisitor.visit(org.semanticweb.owlapi.model.OWLDataComplementOf)
    virtual void visit(org::semanticweb::owlapi::model::OWLDataIntersectionOf* arg1); // public abstract void org.semanticweb.owlapi.model.OWLDataRangeVisitor.visit(org.semanticweb.owlapi.model.OWLDataIntersectionOf)
    virtual void visit(org::semanticweb::owlapi::model::OWLDataUnionOf* arg1); // public abstract void org.semanticweb.owlapi.model.OWLDataRangeVisitor.visit(org.semanticweb.owlapi.model.OWLDataUnionOf)
    virtual void visit(org::semanticweb::owlapi::model::OWLDatatypeRestriction* arg1); // public abstract void org.semanticweb.owlapi.model.OWLDataRangeVisitor.visit(org.semanticweb.owlapi.model.OWLDatatypeRestriction)

};
}
}
}
}
#endif
