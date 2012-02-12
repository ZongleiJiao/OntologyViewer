#ifndef org_semanticweb_owlapi_model_OWLNaryDataRange_H
#define org_semanticweb_owlapi_model_OWLNaryDataRange_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataRange;
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
class OWLNaryDataRange : public java::lang::Object {
  public:
    OWLNaryDataRange(JavaMarker* dummy);
    OWLNaryDataRange(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::util::Set* getOperands(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLNaryDataRange.getOperands()

};
}
}
}
}
#endif
