#ifndef org_semanticweb_owlapi_model_SWRLObjectVisitor_H
#define org_semanticweb_owlapi_model_SWRLObjectVisitor_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLRule;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLClassAtom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLDataRangeAtom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLObjectPropertyAtom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLDataPropertyAtom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLBuiltInAtom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLVariable;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLIndividualArgument;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLLiteralArgument;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLSameIndividualAtom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLDifferentIndividualsAtom;
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
class SWRLObjectVisitor : public java::lang::Object {
  public:
    SWRLObjectVisitor(JavaMarker* dummy);
    SWRLObjectVisitor(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void visit(org::semanticweb::owlapi::model::SWRLRule* arg1); // public abstract void org.semanticweb.owlapi.model.SWRLObjectVisitor.visit(org.semanticweb.owlapi.model.SWRLRule)
    virtual void visit(org::semanticweb::owlapi::model::SWRLClassAtom* arg1); // public abstract void org.semanticweb.owlapi.model.SWRLObjectVisitor.visit(org.semanticweb.owlapi.model.SWRLClassAtom)
    virtual void visit(org::semanticweb::owlapi::model::SWRLDataRangeAtom* arg1); // public abstract void org.semanticweb.owlapi.model.SWRLObjectVisitor.visit(org.semanticweb.owlapi.model.SWRLDataRangeAtom)
    virtual void visit(org::semanticweb::owlapi::model::SWRLObjectPropertyAtom* arg1); // public abstract void org.semanticweb.owlapi.model.SWRLObjectVisitor.visit(org.semanticweb.owlapi.model.SWRLObjectPropertyAtom)
    virtual void visit(org::semanticweb::owlapi::model::SWRLDataPropertyAtom* arg1); // public abstract void org.semanticweb.owlapi.model.SWRLObjectVisitor.visit(org.semanticweb.owlapi.model.SWRLDataPropertyAtom)
    virtual void visit(org::semanticweb::owlapi::model::SWRLBuiltInAtom* arg1); // public abstract void org.semanticweb.owlapi.model.SWRLObjectVisitor.visit(org.semanticweb.owlapi.model.SWRLBuiltInAtom)
    virtual void visit(org::semanticweb::owlapi::model::SWRLVariable* arg1); // public abstract void org.semanticweb.owlapi.model.SWRLObjectVisitor.visit(org.semanticweb.owlapi.model.SWRLVariable)
    virtual void visit(org::semanticweb::owlapi::model::SWRLIndividualArgument* arg1); // public abstract void org.semanticweb.owlapi.model.SWRLObjectVisitor.visit(org.semanticweb.owlapi.model.SWRLIndividualArgument)
    virtual void visit(org::semanticweb::owlapi::model::SWRLLiteralArgument* arg1); // public abstract void org.semanticweb.owlapi.model.SWRLObjectVisitor.visit(org.semanticweb.owlapi.model.SWRLLiteralArgument)
    virtual void visit(org::semanticweb::owlapi::model::SWRLSameIndividualAtom* arg1); // public abstract void org.semanticweb.owlapi.model.SWRLObjectVisitor.visit(org.semanticweb.owlapi.model.SWRLSameIndividualAtom)
    virtual void visit(org::semanticweb::owlapi::model::SWRLDifferentIndividualsAtom* arg1); // public abstract void org.semanticweb.owlapi.model.SWRLObjectVisitor.visit(org.semanticweb.owlapi.model.SWRLDifferentIndividualsAtom)

};
}
}
}
}
#endif
