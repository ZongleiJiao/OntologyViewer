#ifndef org_semanticweb_owlapi_model_OWLDifferentIndividualsAxiom_H
#define org_semanticweb_owlapi_model_OWLDifferentIndividualsAxiom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLNaryIndividualAxiom;
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
class OWLDifferentIndividualsAxiom : public java::lang::Object {
  public:
    OWLDifferentIndividualsAxiom(JavaMarker* dummy);
    OWLDifferentIndividualsAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLDifferentIndividualsAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLDifferentIndividualsAxiom org.semanticweb.owlapi.model.OWLDifferentIndividualsAxiom.getAxiomWithoutAnnotations()
    virtual java::util::Set* asPairwiseAxioms(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLDifferentIndividualsAxiom.asPairwiseAxioms()
    virtual bool containsAnonymousIndividuals(); // public abstract boolean org.semanticweb.owlapi.model.OWLDifferentIndividualsAxiom.containsAnonymousIndividuals()

};
}
}
}
}
#endif
