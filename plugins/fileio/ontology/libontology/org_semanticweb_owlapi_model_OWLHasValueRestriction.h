#ifndef org_semanticweb_owlapi_model_OWLHasValueRestriction_H
#define org_semanticweb_owlapi_model_OWLHasValueRestriction_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLRestriction;
}
}
}
}

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
class OWLClassExpression;
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
class OWLHasValueRestriction : public java::lang::Object {
  public:
    OWLHasValueRestriction(JavaMarker* dummy);
    OWLHasValueRestriction(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLObject* getValue(); // public abstract org.semanticweb.owlapi.model.OWLObject org.semanticweb.owlapi.model.OWLHasValueRestriction.getValue()
    virtual org::semanticweb::owlapi::model::OWLClassExpression* asSomeValuesFrom(); // public abstract org.semanticweb.owlapi.model.OWLClassExpression org.semanticweb.owlapi.model.OWLHasValueRestriction.asSomeValuesFrom()

};
}
}
}
}
#endif
