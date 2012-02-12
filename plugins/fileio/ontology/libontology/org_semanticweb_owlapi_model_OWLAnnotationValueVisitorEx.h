#ifndef org_semanticweb_owlapi_model_OWLAnnotationValueVisitorEx_H
#define org_semanticweb_owlapi_model_OWLAnnotationValueVisitorEx_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class IRI;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAnonymousIndividual;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLLiteral;
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
class OWLAnnotationValueVisitorEx : public java::lang::Object {
  public:
    OWLAnnotationValueVisitorEx(JavaMarker* dummy);
    OWLAnnotationValueVisitorEx(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::IRI* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAnnotationValueVisitorEx.visit(org.semanticweb.owlapi.model.IRI)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLAnonymousIndividual* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAnnotationValueVisitorEx.visit(org.semanticweb.owlapi.model.OWLAnonymousIndividual)
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLLiteral* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAnnotationValueVisitorEx.visit(org.semanticweb.owlapi.model.OWLLiteral)

};
}
}
}
}
#endif
