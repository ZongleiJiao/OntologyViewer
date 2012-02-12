#ifndef org_semanticweb_owlapi_model_SWRLIndividualArgument_H
#define org_semanticweb_owlapi_model_SWRLIndividualArgument_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLIArgument;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLIndividual;
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
class SWRLIndividualArgument : public java::lang::Object {
  public:
    SWRLIndividualArgument(JavaMarker* dummy);
    SWRLIndividualArgument(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLIndividual* getIndividual(); // public abstract org.semanticweb.owlapi.model.OWLIndividual org.semanticweb.owlapi.model.SWRLIndividualArgument.getIndividual()

};
}
}
}
}
#endif
