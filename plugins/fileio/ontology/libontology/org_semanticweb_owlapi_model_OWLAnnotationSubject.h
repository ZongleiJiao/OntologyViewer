#ifndef org_semanticweb_owlapi_model_OWLAnnotationSubject_H
#define org_semanticweb_owlapi_model_OWLAnnotationSubject_H
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
class OWLAnnotationSubjectVisitor;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAnnotationSubjectVisitorEx;
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
class OWLAnnotationSubject : public java::lang::Object {
  public:
    OWLAnnotationSubject(JavaMarker* dummy);
    OWLAnnotationSubject(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void accept(org::semanticweb::owlapi::model::OWLAnnotationSubjectVisitor* arg1); // public abstract void org.semanticweb.owlapi.model.OWLAnnotationSubject.accept(org.semanticweb.owlapi.model.OWLAnnotationSubjectVisitor)
    virtual java::lang::Object* accept(org::semanticweb::owlapi::model::OWLAnnotationSubjectVisitorEx* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAnnotationSubject.accept(org.semanticweb.owlapi.model.OWLAnnotationSubjectVisitorEx)

};
}
}
}
}
#endif
