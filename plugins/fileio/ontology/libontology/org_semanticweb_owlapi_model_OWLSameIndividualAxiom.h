#ifndef org_semanticweb_owlapi_model_OWLSameIndividualAxiom_H
#define org_semanticweb_owlapi_model_OWLSameIndividualAxiom_H
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
class OWLSameIndividualAxiom : public java::lang::Object {
  public:
    OWLSameIndividualAxiom(JavaMarker* dummy);
    OWLSameIndividualAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLSameIndividualAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLSameIndividualAxiom org.semanticweb.owlapi.model.OWLSameIndividualAxiom.getAxiomWithoutAnnotations()
    virtual java::util::Set* asPairwiseAxioms(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLSameIndividualAxiom.asPairwiseAxioms()
    virtual bool containsAnonymousIndividuals(); // public abstract boolean org.semanticweb.owlapi.model.OWLSameIndividualAxiom.containsAnonymousIndividuals()

};
}
}
}
}
#endif
