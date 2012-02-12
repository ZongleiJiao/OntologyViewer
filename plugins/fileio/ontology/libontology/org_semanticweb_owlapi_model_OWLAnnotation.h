#ifndef org_semanticweb_owlapi_model_OWLAnnotation_H
#define org_semanticweb_owlapi_model_OWLAnnotation_H
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
class OWLAnnotationValue;
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
class OWLAnnotationObjectVisitor;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAnnotationObjectVisitorEx;
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
class OWLAnnotation : public java::lang::Object {
  public:
    OWLAnnotation(JavaMarker* dummy);
    OWLAnnotation(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLAnnotationProperty* getProperty(); // public abstract org.semanticweb.owlapi.model.OWLAnnotationProperty org.semanticweb.owlapi.model.OWLAnnotation.getProperty()
    virtual org::semanticweb::owlapi::model::OWLAnnotationValue* getValue(); // public abstract org.semanticweb.owlapi.model.OWLAnnotationValue org.semanticweb.owlapi.model.OWLAnnotation.getValue()
    virtual java::util::Set* getAnnotations(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLAnnotation.getAnnotations()
    virtual void accept(org::semanticweb::owlapi::model::OWLAnnotationObjectVisitor* arg1); // public abstract void org.semanticweb.owlapi.model.OWLAnnotation.accept(org.semanticweb.owlapi.model.OWLAnnotationObjectVisitor)
    virtual java::lang::Object* accept(org::semanticweb::owlapi::model::OWLAnnotationObjectVisitorEx* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLAnnotation.accept(org.semanticweb.owlapi.model.OWLAnnotationObjectVisitorEx)
    virtual bool isDeprecatedIRIAnnotation(); // public abstract boolean org.semanticweb.owlapi.model.OWLAnnotation.isDeprecatedIRIAnnotation()
    virtual org::semanticweb::owlapi::model::OWLAnnotation* getAnnotatedAnnotation(java::util::Set* arg1); // public abstract org.semanticweb.owlapi.model.OWLAnnotation org.semanticweb.owlapi.model.OWLAnnotation.getAnnotatedAnnotation(java.util.Set)

};
}
}
}
}
#endif
