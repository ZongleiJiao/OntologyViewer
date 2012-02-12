#ifndef org_semanticweb_owlapi_model_OWLAxiom_H
#define org_semanticweb_owlapi_model_OWLAxiom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObject;
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
class OWLAnnotationProperty;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAxiomVisitor;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAxiomVisitorEx;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class AxiomType;
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
class OWLAxiom : public java::lang::Object {
  public:
    OWLAxiom(JavaMarker* dummy);
    OWLAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::util::Set* getAnnotations(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLAxiom.getAnnotations()
    virtual java::util::Set* getAnnotations(org::semanticweb::owlapi::model::OWLAnnotationProperty* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLAxiom.getAnnotations(org.semanticweb.owlapi.model.OWLAnnotationProperty)
    virtual void accept(org::semanticweb::owlapi::model::OWLAxiomVisitor* arg1); // public abstract void org.semanticweb.owlapi.model.OWLAxiom.accept(org.semanticweb.owlapi.model.OWLAxiomVisitor)
    virtual java::lang::Object* accept(org::semanticweb::owlapi::model::OWLAxiomVisitorEx* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAxiom.accept(org.semanticweb.owlapi.model.OWLAxiomVisitorEx)
    virtual org::semanticweb::owlapi::model::OWLAxiom* getNNF(); // public abstract org.semanticweb.owlapi.model.OWLAxiom org.semanticweb.owlapi.model.OWLAxiom.getNNF()
    virtual org::semanticweb::owlapi::model::OWLAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLAxiom org.semanticweb.owlapi.model.OWLAxiom.getAxiomWithoutAnnotations()
    virtual org::semanticweb::owlapi::model::OWLAxiom* getAnnotatedAxiom(java::util::Set* arg1); // public abstract org.semanticweb.owlapi.model.OWLAxiom org.semanticweb.owlapi.model.OWLAxiom.getAnnotatedAxiom(java.util.Set)
    virtual bool equalsIgnoreAnnotations(org::semanticweb::owlapi::model::OWLAxiom* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLAxiom.equalsIgnoreAnnotations(org.semanticweb.owlapi.model.OWLAxiom)
    virtual bool isLogicalAxiom(); // public abstract boolean org.semanticweb.owlapi.model.OWLAxiom.isLogicalAxiom()
    virtual bool isAnnotationAxiom(); // public abstract boolean org.semanticweb.owlapi.model.OWLAxiom.isAnnotationAxiom()
    virtual bool isAnnotated(); // public abstract boolean org.semanticweb.owlapi.model.OWLAxiom.isAnnotated()
    virtual org::semanticweb::owlapi::model::AxiomType* getAxiomType(); // public abstract org.semanticweb.owlapi.model.AxiomType org.semanticweb.owlapi.model.OWLAxiom.getAxiomType()
    virtual bool isOfType(JavaObjectArray* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLAxiom.isOfType(org.semanticweb.owlapi.model.AxiomType[])
    virtual bool isOfType(java::util::Set* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLAxiom.isOfType(java.util.Set)

};
}
}
}
}
#endif
