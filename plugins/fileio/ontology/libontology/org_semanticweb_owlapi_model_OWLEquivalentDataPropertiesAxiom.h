#ifndef org_semanticweb_owlapi_model_OWLEquivalentDataPropertiesAxiom_H
#define org_semanticweb_owlapi_model_OWLEquivalentDataPropertiesAxiom_H
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
class OWLDataPropertyAxiom;
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
class OWLEquivalentDataPropertiesAxiom : public java::lang::Object {
  public:
    OWLEquivalentDataPropertiesAxiom(JavaMarker* dummy);
    OWLEquivalentDataPropertiesAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLEquivalentDataPropertiesAxiom* getAxiomWithoutAnnotations(); // public abstract org.semanticweb.owlapi.model.OWLEquivalentDataPropertiesAxiom org.semanticweb.owlapi.model.OWLEquivalentDataPropertiesAxiom.getAxiomWithoutAnnotations()
    virtual java::util::Set* asSubDataPropertyOfAxioms(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLEquivalentDataPropertiesAxiom.asSubDataPropertyOfAxioms()

};
}
}
}
}
#endif
