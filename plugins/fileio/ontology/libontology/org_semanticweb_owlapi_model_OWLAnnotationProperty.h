#ifndef org_semanticweb_owlapi_model_OWLAnnotationProperty_H
#define org_semanticweb_owlapi_model_OWLAnnotationProperty_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLEntity;
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
class OWLOntology;
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
class OWLAnnotationProperty : public java::lang::Object {
  public:
    OWLAnnotationProperty(JavaMarker* dummy);
    OWLAnnotationProperty(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::util::Set* getSubProperties(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLAnnotationProperty.getSubProperties(org.semanticweb.owlapi.model.OWLOntology)
    virtual java::util::Set* getSubProperties(org::semanticweb::owlapi::model::OWLOntology* arg1, bool arg2); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLAnnotationProperty.getSubProperties(org.semanticweb.owlapi.model.OWLOntology,boolean)
    virtual java::util::Set* getSubProperties(java::util::Set* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLAnnotationProperty.getSubProperties(java.util.Set)
    virtual java::util::Set* getSuperProperties(org::semanticweb::owlapi::model::OWLOntology* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLAnnotationProperty.getSuperProperties(org.semanticweb.owlapi.model.OWLOntology)
    virtual java::util::Set* getSuperProperties(org::semanticweb::owlapi::model::OWLOntology* arg1, bool arg2); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLAnnotationProperty.getSuperProperties(org.semanticweb.owlapi.model.OWLOntology,boolean)
    virtual java::util::Set* getSuperProperties(java::util::Set* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLAnnotationProperty.getSuperProperties(java.util.Set)
    virtual bool isBuiltIn(); // public abstract boolean org.semanticweb.owlapi.model.OWLAnnotationProperty.isBuiltIn()
    virtual bool isComment(); // public abstract boolean org.semanticweb.owlapi.model.OWLAnnotationProperty.isComment()
    virtual bool isLabel(); // public abstract boolean org.semanticweb.owlapi.model.OWLAnnotationProperty.isLabel()
    virtual bool isDeprecated(); // public abstract boolean org.semanticweb.owlapi.model.OWLAnnotationProperty.isDeprecated()

};
}
}
}
}
#endif
