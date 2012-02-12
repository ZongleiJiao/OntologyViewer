#ifndef org_semanticweb_owlapi_model_OWLAnnotationObjectVisitor_H
#define org_semanticweb_owlapi_model_OWLAnnotationObjectVisitor_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAnnotationAxiomVisitor;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAnnotationValueVisitor;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAnnotation;
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
class OWLAnnotationObjectVisitor : public java::lang::Object {
  public:
    OWLAnnotationObjectVisitor(JavaMarker* dummy);
    OWLAnnotationObjectVisitor(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void visit(org::semanticweb::owlapi::model::OWLAnnotation* arg1); // public abstract void org.semanticweb.owlapi.model.OWLAnnotationObjectVisitor.visit(org.semanticweb.owlapi.model.OWLAnnotation)

};
}
}
}
}
#endif
