#ifndef org_semanticweb_owlapi_model_OWLOntologyChangeVisitorEx_H
#define org_semanticweb_owlapi_model_OWLOntologyChangeVisitorEx_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class AddAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class RemoveAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SetOntologyID;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class AddImport;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class RemoveImport;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class AddOntologyAnnotation;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class RemoveOntologyAnnotation;
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
class OWLOntologyChangeVisitorEx : public java::lang::Object {
  public:
    OWLOntologyChangeVisitorEx(JavaMarker* dummy);
    OWLOntologyChangeVisitorEx(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::AddAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLOntologyChangeVisitorEx.visit(org.semanticweb.owlapi.model.AddAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::RemoveAxiom* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLOntologyChangeVisitorEx.visit(org.semanticweb.owlapi.model.RemoveAxiom)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::SetOntologyID* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLOntologyChangeVisitorEx.visit(org.semanticweb.owlapi.model.SetOntologyID)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::AddImport* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLOntologyChangeVisitorEx.visit(org.semanticweb.owlapi.model.AddImport)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::RemoveImport* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLOntologyChangeVisitorEx.visit(org.semanticweb.owlapi.model.RemoveImport)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::AddOntologyAnnotation* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLOntologyChangeVisitorEx.visit(org.semanticweb.owlapi.model.AddOntologyAnnotation)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::RemoveOntologyAnnotation* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLOntologyChangeVisitorEx.visit(org.semanticweb.owlapi.model.RemoveOntologyAnnotation)

};
}
}
}
}
#endif
