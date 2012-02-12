#ifndef org_semanticweb_owlapi_model_OWLDisjointClassesAxiom_H
#define org_semanticweb_owlapi_model_OWLDisjointClassesAxiom_H
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
class OWLDisjointClassesAxiom : public java::lang::Object {
  public:
    OWLDisjointClassesAxiom(JavaMarker* dummy);
    OWLDisjointClassesAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLDisjointClassesAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLDisjointClassesAxiom org.semanticweb.owlapi.model.OWLDisjointClassesAxiom.getAxiomWithoutAnnotations()
    virtual java::util::Set* asPairwiseAxioms(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLDisjointClassesAxiom.asPairwiseAxioms()

};
}
}
}
}
#endif
