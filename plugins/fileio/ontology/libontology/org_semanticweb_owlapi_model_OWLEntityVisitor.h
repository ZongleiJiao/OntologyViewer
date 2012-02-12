#ifndef org_semanticweb_owlapi_model_OWLEntityVisitor_H
#define org_semanticweb_owlapi_model_OWLEntityVisitor_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

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
class OWLObjectProperty;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataProperty;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLNamedIndividual;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDatatype;
}
}
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
class OWLEntityVisitor : public java::lang::Object {
  public:
    OWLEntityVisitor(JavaMarker* dummy);
    OWLEntityVisitor(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void visit(org::semanticweb::owlapi::model::OWLClass* arg1); // public abstract void org.semanticweb.owlapi.model.OWLEntityVisitor.visit(org.semanticweb.owlapi.model.OWLClass)
    virtual void visit(org::semanticweb::owlapi::model::OWLObjectProperty* arg1); // public abstract void org.semanticweb.owlapi.model.OWLEntityVisitor.visit(org.semanticweb.owlapi.model.OWLObjectProperty)
    virtual void visit(org::semanticweb::owlapi::model::OWLDataProperty* arg1); // public abstract void org.semanticweb.owlapi.model.OWLEntityVisitor.visit(org.semanticweb.owlapi.model.OWLDataProperty)
    virtual void visit(org::semanticweb::owlapi::model::OWLNamedIndividual* arg1); // public abstract void org.semanticweb.owlapi.model.OWLEntityVisitor.visit(org.semanticweb.owlapi.model.OWLNamedIndividual)
    virtual void visit(org::semanticweb::owlapi::model::OWLDatatype* arg1); // public abstract void org.semanticweb.owlapi.model.OWLEntityVisitor.visit(org.semanticweb.owlapi.model.OWLDatatype)
    virtual void visit(org::semanticweb::owlapi::model::OWLAnnotationProperty* arg1); // public abstract void org.semanticweb.owlapi.model.OWLEntityVisitor.visit(org.semanticweb.owlapi.model.OWLAnnotationProperty)

};
}
}
}
}
#endif
