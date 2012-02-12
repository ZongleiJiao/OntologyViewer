#ifndef org_semanticweb_owlapi_model_OWLObjectOneOf_H
#define org_semanticweb_owlapi_model_OWLObjectOneOf_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAnonymousClassExpression;
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
class OWLObjectOneOf : public java::lang::Object {
  public:
    OWLObjectOneOf(JavaMarker* dummy);
    OWLObjectOneOf(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::util::Set* getIndividuals(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLObjectOneOf.getIndividuals()
    virtual org::semanticweb::owlapi::model::OWLClassExpression* asObjectUnionOf(); // public abstract org.semanticweb.owlapi.model.OWLClassExpression org.semanticweb.owlapi.model.OWLObjectOneOf.asObjectUnionOf()

};
}
}
}
}
#endif
