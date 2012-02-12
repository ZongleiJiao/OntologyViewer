#ifndef org_semanticweb_owlapi_model_SWRLObjectPropertyAtom_H
#define org_semanticweb_owlapi_model_SWRLObjectPropertyAtom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLBinaryAtom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObjectPropertyExpression;
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
class SWRLObjectPropertyAtom : public java::lang::Object {
  public:
    SWRLObjectPropertyAtom(JavaMarker* dummy);
    SWRLObjectPropertyAtom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::SWRLObjectPropertyAtom* getSimplified(); // public abstract org.semanticweb.owlapi.model.SWRLObjectPropertyAtom org.semanticweb.owlapi.model.SWRLObjectPropertyAtom.getSimplified()
    virtual org::semanticweb::owlapi::model::OWLObjectPropertyExpression* getPredicate(); // public abstract org.semanticweb.owlapi.model.OWLObjectPropertyExpression org.semanticweb.owlapi.model.SWRLObjectPropertyAtom.getPredicate()

};
}
}
}
}
#endif
