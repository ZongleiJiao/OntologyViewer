#ifndef org_semanticweb_owlapi_model_OWLDisjointUnionAxiom_H
#define org_semanticweb_owlapi_model_OWLDisjointUnionAxiom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLClassAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLClass;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLEquivalentClassesAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDisjointClassesAxiom;
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
class OWLDisjointUnionAxiom : public java::lang::Object {
  public:
    OWLDisjointUnionAxiom(JavaMarker* dummy);
    OWLDisjointUnionAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLClass* getOWLClass(); // public abstract org.semanticweb.owlapi.model.OWLClass org.semanticweb.owlapi.model.OWLDisjointUnionAxiom.getOWLClass()
    virtual org::semanticweb::owlapi::model::OWLEquivalentClassesAxiom* getOWLEquivalentClassesAxiom(); // public abstract org.semanticweb.owlapi.model.OWLEquivalentClassesAxiom org.semanticweb.owlapi.model.OWLDisjointUnionAxiom.getOWLEquivalentClassesAxiom()
    virtual org::semanticweb::owlapi::model::OWLDisjointClassesAxiom* getOWLDisjointClassesAxiom(); // public abstract org.semanticweb.owlapi.model.OWLDisjointClassesAxiom org.semanticweb.owlapi.model.OWLDisjointUnionAxiom.getOWLDisjointClassesAxiom()
    virtual org::semanticweb::owlapi::model::OWLDisjointUnionAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLDisjointUnionAxiom org.semanticweb.owlapi.model.OWLDisjointUnionAxiom.getAxiomWithoutAnnotations()
    virtual java::util::Set* getClassExpressions(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLDisjointUnionAxiom.getClassExpressions()

};
}
}
}
}
#endif
