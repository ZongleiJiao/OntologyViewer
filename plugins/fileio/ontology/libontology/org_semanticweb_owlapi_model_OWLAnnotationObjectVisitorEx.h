#ifndef org_semanticweb_owlapi_model_OWLAnnotationObjectVisitorEx_H
#define org_semanticweb_owlapi_model_OWLAnnotationObjectVisitorEx_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAnnotationAxiomVisitorEx;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAnnotationValueVisitorEx;
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
class OWLAnnotationObjectVisitorEx : public java::lang::Object {
  public:
    OWLAnnotationObjectVisitorEx(JavaMarker* dummy);
    OWLAnnotationObjectVisitorEx(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::lang::Object* visit(org::semanticweb::owlapi::model::OWLAnnotation* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAnnotationObjectVisitorEx.visit(org.semanticweb.owlapi.model.OWLAnnotation)

};
}
}
}
}
#endif
