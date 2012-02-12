#ifndef org_semanticweb_owlapi_model_OWLClass_H
#define org_semanticweb_owlapi_model_OWLClass_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

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
class OWLLogicalEntity;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLNamedObject;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLOntology;
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
class OWLClass : public java::lang::Object {
  public:
    OWLClass(JavaMarker* dummy);
    OWLClass(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool isDefined(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLClass.isDefined(org.semanticweb.owlapi.model.OWLOntology)
    virtual bool isDefined(java::util::Set* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLClass.isDefined(java.util.Set)
    virtual java::util::Set* getSubClasses(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLClass.getSubClasses(org.semanticweb.owlapi.model.OWLOntology)
    virtual java::util::Set* getSubClasses(java::util::Set* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLClass.getSubClasses(java.util.Set)
    virtual java::util::Set* getSuperClasses(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLClass.getSuperClasses(org.semanticweb.owlapi.model.OWLOntology)
    virtual java::util::Set* getSuperClasses(java::util::Set* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLClass.getSuperClasses(java.util.Set)
    virtual java::util::Set* getDisjointClasses(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLClass.getDisjointClasses(org.semanticweb.owlapi.model.OWLOntology)
    virtual java::util::Set* getDisjointClasses(java::util::Set* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLClass.getDisjointClasses(java.util.Set)
    virtual java::util::Set* getEquivalentClasses(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLClass.getEquivalentClasses(org.semanticweb.owlapi.model.OWLOntology)
    virtual java::util::Set* getEquivalentClasses(java::util::Set* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLClass.getEquivalentClasses(java.util.Set)
    virtual java::util::Set* getIndividuals(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLClass.getIndividuals(org.semanticweb.owlapi.model.OWLOntology)
    virtual java::util::Set* getIndividuals(java::util::Set* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLClass.getIndividuals(java.util.Set)

};
}
}
}
}
#endif
