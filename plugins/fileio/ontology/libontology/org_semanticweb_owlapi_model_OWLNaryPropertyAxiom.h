#ifndef org_semanticweb_owlapi_model_OWLNaryPropertyAxiom_H
#define org_semanticweb_owlapi_model_OWLNaryPropertyAxiom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLPropertyAxiom;
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
class OWLPropertyExpression;
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
class OWLNaryPropertyAxiom : public java::lang::Object {
  public:
    OWLNaryPropertyAxiom(JavaMarker* dummy);
    OWLNaryPropertyAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::util::Set* getProperties(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLNaryPropertyAxiom.getProperties()
    virtual java::util::Set* getPropertiesMinus(org::semanticweb::owlapi::model::OWLPropertyExpression* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLNaryPropertyAxiom.getPropertiesMinus(org.semanticweb.owlapi.model.OWLPropertyExpression)

};
}
}
}
}
#endif
