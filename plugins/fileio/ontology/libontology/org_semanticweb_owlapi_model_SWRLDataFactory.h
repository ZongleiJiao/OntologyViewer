#ifndef org_semanticweb_owlapi_model_SWRLDataFactory_H
#define org_semanticweb_owlapi_model_SWRLDataFactory_H
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

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class NodeID;
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
class OWLClassExpression;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLIArgument;
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
class OWLDataRange;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLDArgument;
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
class OWLObjectPropertyExpression;
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
class OWLDataPropertyExpression;
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

namespace java {
namespace util {
class List;
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
class OWLIndividual;
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
class OWLLiteral;
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
class SWRLDataFactory : public java::lang::Object {
  public:
    SWRLDataFactory(JavaMarker* dummy);
    SWRLDataFactory(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::SWRLRule* getSWRLRule(org::semanticweb::owlapi::model::IRI* arg1, java::util::Set* arg2, java::util::Set* arg3); // public abstract org.semanticweb.owlapi.model.SWRLRule org.semanticweb.owlapi.model.SWRLDataFactory.getSWRLRule(org.semanticweb.owlapi.model.IRI,java.util.Set,java.util.Set)
    virtual org::semanticweb::owlapi::model::SWRLRule* getSWRLRule(org::semanticweb::owlapi::model::NodeID* arg1, java::util::Set* arg2, java::util::Set* arg3); // public abstract org.semanticweb.owlapi.model.SWRLRule org.semanticweb.owlapi.model.SWRLDataFactory.getSWRLRule(org.semanticweb.owlapi.model.NodeID,java.util.Set,java.util.Set)
    virtual org::semanticweb::owlapi::model::SWRLRule* getSWRLRule(java::util::Set* arg1, java::util::Set* arg2); // public abstract org.semanticweb.owlapi.model.SWRLRule org.semanticweb.owlapi.model.SWRLDataFactory.getSWRLRule(java.util.Set,java.util.Set)
    virtual org::semanticweb::owlapi::model::SWRLRule* getSWRLRule(java::util::Set* arg1, java::util::Set* arg2, java::util::Set* arg3); // public abstract org.semanticweb.owlapi.model.SWRLRule org.semanticweb.owlapi.model.SWRLDataFactory.getSWRLRule(java.util.Set,java.util.Set,java.util.Set)
    virtual org::semanticweb::owlapi::model::SWRLClassAtom* getSWRLClassAtom(org::semanticweb::owlapi::model::OWLClassExpression* arg1, org::semanticweb::owlapi::model::SWRLIArgument* arg2); // public abstract org.semanticweb.owlapi.model.SWRLClassAtom org.semanticweb.owlapi.model.SWRLDataFactory.getSWRLClassAtom(org.semanticweb.owlapi.model.OWLClassExpression,org.semanticweb.owlapi.model.SWRLIArgument)
    virtual org::semanticweb::owlapi::model::SWRLDataRangeAtom* getSWRLDataRangeAtom(org::semanticweb::owlapi::model::OWLDataRange* arg1, org::semanticweb::owlapi::model::SWRLDArgument* arg2); // public abstract org.semanticweb.owlapi.model.SWRLDataRangeAtom org.semanticweb.owlapi.model.SWRLDataFactory.getSWRLDataRangeAtom(org.semanticweb.owlapi.model.OWLDataRange,org.semanticweb.owlapi.model.SWRLDArgument)
    virtual org::semanticweb::owlapi::model::SWRLObjectPropertyAtom* getSWRLObjectPropertyAtom(org::semanticweb::owlapi::model::OWLObjectPropertyExpression* arg1, org::semanticweb::owlapi::model::SWRLIArgument* arg2, org::semanticweb::owlapi::model::SWRLIArgument* arg3); // public abstract org.semanticweb.owlapi.model.SWRLObjectPropertyAtom org.semanticweb.owlapi.model.SWRLDataFactory.getSWRLObjectPropertyAtom(org.semanticweb.owlapi.model.OWLObjectPropertyExpression,org.semanticweb.owlapi.model.SWRLIArgument,org.semanticweb.owlapi.model.SWRLIArgument)
    virtual org::semanticweb::owlapi::model::SWRLDataPropertyAtom* getSWRLDataPropertyAtom(org::semanticweb::owlapi::model::OWLDataPropertyExpression* arg1, org::semanticweb::owlapi::model::SWRLIArgument* arg2, org::semanticweb::owlapi::model::SWRLDArgument* arg3); // public abstract org.semanticweb.owlapi.model.SWRLDataPropertyAtom org.semanticweb.owlapi.model.SWRLDataFactory.getSWRLDataPropertyAtom(org.semanticweb.owlapi.model.OWLDataPropertyExpression,org.semanticweb.owlapi.model.SWRLIArgument,org.semanticweb.owlapi.model.SWRLDArgument)
    virtual org::semanticweb::owlapi::model::SWRLBuiltInAtom* getSWRLBuiltInAtom(org::semanticweb::owlapi::model::IRI* arg1, java::util::List* arg2); // public abstract org.semanticweb.owlapi.model.SWRLBuiltInAtom org.semanticweb.owlapi.model.SWRLDataFactory.getSWRLBuiltInAtom(org.semanticweb.owlapi.model.IRI,java.util.List)
    virtual org::semanticweb::owlapi::model::SWRLVariable* getSWRLVariable(org::semanticweb::owlapi::model::IRI* arg1); // public abstract org.semanticweb.owlapi.model.SWRLVariable org.semanticweb.owlapi.model.SWRLDataFactory.getSWRLVariable(org.semanticweb.owlapi.model.IRI)
    virtual org::semanticweb::owlapi::model::SWRLIndividualArgument* getSWRLIndividualArgument(org::semanticweb::owlapi::model::OWLIndividual* arg1); // public abstract org.semanticweb.owlapi.model.SWRLIndividualArgument org.semanticweb.owlapi.model.SWRLDataFactory.getSWRLIndividualArgument(org.semanticweb.owlapi.model.OWLIndividual)
    virtual org::semanticweb::owlapi::model::SWRLLiteralArgument* getSWRLLiteralArgument(org::semanticweb::owlapi::model::OWLLiteral* arg1); // public abstract org.semanticweb.owlapi.model.SWRLLiteralArgument org.semanticweb.owlapi.model.SWRLDataFactory.getSWRLLiteralArgument(org.semanticweb.owlapi.model.OWLLiteral)
    virtual org::semanticweb::owlapi::model::SWRLSameIndividualAtom* getSWRLSameIndividualAtom(org::semanticweb::owlapi::model::SWRLIArgument* arg1, org::semanticweb::owlapi::model::SWRLIArgument* arg2); // public abstract org.semanticweb.owlapi.model.SWRLSameIndividualAtom org.semanticweb.owlapi.model.SWRLDataFactory.getSWRLSameIndividualAtom(org.semanticweb.owlapi.model.SWRLIArgument,org.semanticweb.owlapi.model.SWRLIArgument)
    virtual org::semanticweb::owlapi::model::SWRLDifferentIndividualsAtom* getSWRLDifferentIndividualsAtom(org::semanticweb::owlapi::model::SWRLIArgument* arg1, org::semanticweb::owlapi::model::SWRLIArgument* arg2); // public abstract org.semanticweb.owlapi.model.SWRLDifferentIndividualsAtom org.semanticweb.owlapi.model.SWRLDataFactory.getSWRLDifferentIndividualsAtom(org.semanticweb.owlapi.model.SWRLIArgument,org.semanticweb.owlapi.model.SWRLIArgument)

};
}
}
}
}
#endif
