#ifndef org_semanticweb_owlapi_model_OWLEquivalentClassesAxiom_H
#define org_semanticweb_owlapi_model_OWLEquivalentClassesAxiom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLNaryClassAxiom;
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
class OWLEquivalentClassesAxiom : public java::lang::Object {
  public:
    OWLEquivalentClassesAxiom(JavaMarker* dummy);
    OWLEquivalentClassesAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLEquivalentClassesAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLEquivalentClassesAxiom org.semanticweb.owlapi.model.OWLEquivalentClassesAxiom.getAxiomWithoutAnnotations()
    virtual bool containsNamedEquivalentClass(); // public abstract boolean org.semanticweb.owlapi.model.OWLEquivalentClassesAxiom.containsNamedEquivalentClass()
    virtual java::util::Set* getNamedClasses(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLEquivalentClassesAxiom.getNamedClasses()
    virtual bool containsOWLNothing(); // public abstract boolean org.semanticweb.owlapi.model.OWLEquivalentClassesAxiom.containsOWLNothing()
    virtual bool containsOWLThing(); // public abstract boolean org.semanticweb.owlapi.model.OWLEquivalentClassesAxiom.containsOWLThing()
    virtual java::util::Set* asPairwiseAxioms(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLEquivalentClassesAxiom.asPairwiseAxioms()

};
}
}
}
}
#endif
