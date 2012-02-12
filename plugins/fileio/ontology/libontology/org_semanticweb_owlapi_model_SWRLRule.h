#ifndef org_semanticweb_owlapi_model_SWRLRule_H
#define org_semanticweb_owlapi_model_SWRLRule_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLLogicalAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLObject;
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
class SWRLRule : public java::lang::Object {
  public:
    SWRLRule(JavaMarker* dummy);
    SWRLRule(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::SWRLRule* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.SWRLRule org.semanticweb.owlapi.model.SWRLRule.getAxiomWithoutAnnotations()
    virtual org::semanticweb::owlapi::model::SWRLRule* getSimplified(); // public abstract org.semanticweb.owlapi.model.SWRLRule org.semanticweb.owlapi.model.SWRLRule.getSimplified()
    virtual java::util::Set* getBody(); // public abstract java.util.Set org.semanticweb.owlapi.model.SWRLRule.getBody()
    virtual java::util::Set* getHead(); // public abstract java.util.Set org.semanticweb.owlapi.model.SWRLRule.getHead()
    virtual java::util::Set* getVariables(); // public abstract java.util.Set org.semanticweb.owlapi.model.SWRLRule.getVariables()
    virtual bool containsAnonymousClassExpressions(); // public abstract boolean org.semanticweb.owlapi.model.SWRLRule.containsAnonymousClassExpressions()
    virtual java::util::Set* getClassAtomPredicates(); // public abstract java.util.Set org.semanticweb.owlapi.model.SWRLRule.getClassAtomPredicates()

};
}
}
}
}
#endif
