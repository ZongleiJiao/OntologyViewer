#ifndef org_semanticweb_owlapi_model_OWLAnnotationValue_H
#define org_semanticweb_owlapi_model_OWLAnnotationValue_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAnnotationObject;
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
class OWLAnnotationValueVisitorEx;
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
class OWLAnnotationValue : public java::lang::Object {
  public:
    OWLAnnotationValue(JavaMarker* dummy);
    OWLAnnotationValue(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void accept(org::semanticweb::owlapi::model::OWLAnnotationValueVisitor* arg1); // public abstract void org.semanticweb.owlapi.model.OWLAnnotationValue.accept(org.semanticweb.owlapi.model.OWLAnnotationValueVisitor)
    virtual java::lang::Object* accept(org::semanticweb::owlapi::model::OWLAnnotationValueVisitorEx* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAnnotationValue.accept(org.semanticweb.owlapi.model.OWLAnnotationValueVisitorEx)

};
}
}
}
}
#endif
