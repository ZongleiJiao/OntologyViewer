#ifndef org_semanticweb_owlapi_model_OWLNaryBooleanClassExpression_H
#define org_semanticweb_owlapi_model_OWLNaryBooleanClassExpression_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLBooleanClassExpression;
}
}
}
}

namespace java {
namespace util {
class Set;
}
}

namespace java {
namespace util {
class List;
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
class OWLNaryBooleanClassExpression : public java::lang::Object {
  public:
    OWLNaryBooleanClassExpression(JavaMarker* dummy);
    OWLNaryBooleanClassExpression(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::util::Set* getOperands(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLNaryBooleanClassExpression.getOperands()
    virtual java::util::List* getOperandsAsList(); // public abstract java.util.List org.semanticweb.owlapi.model.OWLNaryBooleanClassExpression.getOperandsAsList()

};
}
}
}
}
#endif
