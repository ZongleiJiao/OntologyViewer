#ifndef org_semanticweb_owlapi_model_OWLEquivalentObjectPropertiesAxiom_H
#define org_semanticweb_owlapi_model_OWLEquivalentObjectPropertiesAxiom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLNaryPropertyAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObjectPropertyAxiom;
}
}
}
}

namespace java {
namespace util {
class Set;
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
class OWLEquivalentObjectPropertiesAxiom : public java::lang::Object {
  public:
    OWLEquivalentObjectPropertiesAxiom(JavaMarker* dummy);
    OWLEquivalentObjectPropertiesAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLEquivalentObjectPropertiesAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLEquivalentObjectPropertiesAxiom org.semanticweb.owlapi.model.OWLEquivalentObjectPropertiesAxiom.getAxiomWithoutAnnotations()
    virtual java::util::Set* asSubObjectPropertyOfAxioms(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLEquivalentObjectPropertiesAxiom.asSubObjectPropertyOfAxioms()

};
}
}
}
}
#endif
